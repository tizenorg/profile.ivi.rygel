/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 * Copyright (C) 2007 OpenedHand Ltd.
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Zeeshan Ali <zeenix@gmail.com>
 *         Jorn Baayen <jorn@openedhand.com>
 *
 * This file is part of Rygel.
 *
 * Rygel is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Rygel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

using GUPnP;
using Gee;

/**
 * Errors used by ContentDirectory and deriving classes.
 */
internal errordomain Rygel.ContentDirectoryError {
    NO_SUCH_OBJECT = 701,
    INVALID_CURRENT_TAG_VALUE = 702,
    INVALID_NEW_TAG_VALUE = 703,
    REQUIRED_TAG = 704,
    READ_ONLY_TAG = 705,
    PARAMETER_MISMATCH = 706,
    INVALID_SORT_CRITERIA = 709,
    RESTRICTED_OBJECT = 711,
    BAD_METADATA = 712,
    RESTRICTED_PARENT = 713,
    NO_SUCH_DESTINATION_RESOURCE = 718,
    CANT_PROCESS = 720,
    OUTDATED_OBJECT_METADATA = 728,
    INVALID_ARGS = 402
}

/**
 * Basic implementation of UPnP ContentDirectory service version 2. Most often
 * plugins will provide a child of this class. The inheriting classes should
 * override create_root_container method.
 */
internal class Rygel.ContentDirectory: Service {
    public const string UPNP_ID = "urn:upnp-org:serviceId:ContentDirectory";
    public const string UPNP_TYPE =
                    "urn:schemas-upnp-org:service:ContentDirectory:3";
    public const string UPNP_TYPE_V1 =
                    "urn:schemas-upnp-org:service:ContentDirectory:1";
    public const string DESCRIPTION_PATH = "xml/ContentDirectory.xml";
    public const string DESCRIPTION_PATH_NO_TRACK =
                    "xml/ContentDirectory-NoTrack.xml";

    protected string feature_list;

    internal HTTPServer http_server;

    public MediaContainer root_container;
    private ArrayList<MediaContainer> updated_containers;

    private ArrayList<ImportResource> active_imports;
    private ArrayList<ImportResource> finished_imports;

    private bool clear_updated_containers;
    private uint update_notify_id;

    internal Cancellable cancellable;

    public uint32 system_update_id;

    private LastChange last_change;

    private string service_reset_token;

    private string search_caps;

    public override void constructed () {
        this.cancellable = new Cancellable ();

        var plugin = this.root_device.resource_factory as MediaServerPlugin;

        this.root_container = plugin.root_container;
        this.http_server = new HTTPServer (this, plugin.name);

        this.updated_containers =  new ArrayList<MediaContainer> ();
        this.active_imports = new ArrayList<ImportResource> ();
        this.finished_imports = new ArrayList<ImportResource> ();

        this.root_container.container_updated.connect (on_container_updated);
        this.root_container.sub_tree_updates_finished.connect
                                        (on_sub_tree_updates_finished);

        this.last_change = new LastChange ();

        this.search_caps = RelationalExpression.CAPS;

        if (PluginCapabilities.TRACK_CHANGES in plugin.capabilities) {
            this.search_caps += ",upnp:objectUpdateID,upnp:containerUpdateID";
        }

        this.feature_list =
            "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" +
            "<Features xmlns=\"urn:schemas-upnp-org:av:avs\" " +
            "xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" " +
            "xsi:schemaLocation=\"urn:schemas-upnp-org:av:avs" +
            "http://www.upnp.org/schemas/av/avs-v1-20060531.xsd\">" +
            "</Features>";

        this.service_reset_token = UUID.get ();

        this.action_invoked["Browse"].connect (this.browse_cb);
        this.action_invoked["Search"].connect (this.search_cb);
        this.action_invoked["CreateObject"].connect (this.create_object_cb);
        this.action_invoked["DestroyObject"].connect (this.destroy_object_cb);
        this.action_invoked["UpdateObject"].connect (this.update_object_cb);
        this.action_invoked["ImportResource"].connect (this.import_resource_cb);
        this.action_invoked["GetTransferProgress"].connect (
                                        this.get_transfer_progress_cb);
        this.action_invoked["StopTransferResource"].connect (
                                        this.stop_transfer_resource_cb);

        this.query_variable["TransferIDs"].connect (this.query_transfer_ids);

        /* Connect SystemUpdateID related signals */
        this.action_invoked["GetSystemUpdateID"].connect (
                                        this.get_system_update_id_cb);
        this.query_variable["SystemUpdateID"].connect (
                                        this.query_system_update_id);
        this.query_variable["ContainerUpdateIDs"].connect (
                                        this.query_container_update_ids);

        /* Connect SearchCapabilities related signals */
        this.action_invoked["GetSearchCapabilities"].connect (
                                        this.get_search_capabilities_cb);
        this.query_variable["SearchCapabilities"].connect (
                                        this.query_search_capabilities);

        /* Connect SortCapabilities related signals */
        this.action_invoked["GetSortCapabilities"].connect (
                                        this.get_sort_capabilities_cb);
        this.query_variable["SortCapabilities"].connect (
                                        this.query_sort_capabilities);

        /* Connect FeatureList related signals */
        this.action_invoked["GetFeatureList"].connect (
                                        this.get_feature_list_cb);
        this.query_variable["FeatureList"].connect (this.query_feature_list);

        /* Connect LastChange related signals */
        this.query_variable["LastChange"].connect (this.query_last_change);

        /* Connect ServiceResetToken related signals */
        this.query_variable["ServiceResetToken"].connect
                                        (this.query_service_reset_token);
        this.action_invoked["GetServiceResetToken"].connect
                                        (this.get_service_reset_token_cb);

        this.http_server.run.begin ();
    }

    ~ContentDirectory () {
        // Cancel all state machines
        this.cancellable.cancel ();
    }

    /* Browse action implementation */
    private void browse_cb (Service       content_dir,
                            ServiceAction action) {
        Browse browse = new Browse (this, action);

        browse.run.begin ();
    }

    /* Search action implementation */
    private void search_cb (Service       content_dir,
                            ServiceAction action) {
        var search = new Search (this, action);

        search.run.begin ();
    }

    /* CreateObject action implementation */
    private void create_object_cb (Service       content_dir,
                                   ServiceAction action) {
        var creator = new ItemCreator (this, action);

        creator.run.begin ();
    }

    /* DestroyObject action implementation */
    private void destroy_object_cb (Service       content_dir,
                                    ServiceAction action) {
        var destroyer = new ItemDestroyer (this, action);

        destroyer.run.begin ();
    }

    /* UpdateObject action implementation */
    private void update_object_cb (Service       content_dir,
                                   ServiceAction action) {
        var updater = new ItemUpdater (this, action);

        updater.run.begin ();
    }

    /* ImportResource action implementation */
    private void import_resource_cb (Service       content_dir,
                                     ServiceAction action) {
        var import = new ImportResource (this, action);

        import.completed.connect (this.on_import_completed);
        this.active_imports.add (import);

        import.run.begin ();

        this.notify ("TransferIDs",
                        typeof (string),
                        this.create_transfer_ids ());
    }

    /* Query TransferIDs */
    private void query_transfer_ids (Service          content_dir,
                                     string           variable,
                                     ref GLib.Value   value) {
        value.init (typeof (string));
        value.set_string (this.create_transfer_ids ());
    }

    /* GetTransferProgress action implementation */
    private void get_transfer_progress_cb (Service       content_dir,
                                           ServiceAction action) {
        if (action.get_argument_count () != 1) {
            action.return_error (402, _("Invalid argument"));

            return;
        }

        var import = find_import_for_action (action);
        if (import != null) {
            action.set ("TransferStatus",
                            typeof (string),
                            import.status_as_string,
                        "TransferLength",
                            typeof (int64),
                            import.bytes_copied,
                        "TransferTotal",
                            typeof (int64),
                            import.bytes_total);

            action.return ();
        } else {
            action.return_error (717, _("No such file transfer"));
        }
    }

    /* StopTransferResource action implementation */
    private void stop_transfer_resource_cb (Service       content_dir,
                                            ServiceAction action) {
        if (action.get_argument_count () != 1) {
            action.return_error (402, _("Invalid argument"));

            return;
        }

        var import = find_import_for_action (action);
        if (import != null) {
            import.cancellable.cancel ();

            action.return ();
        } else {
            action.return_error (717, _("No such file transfer"));
        }
    }

    /* GetSystemUpdateID action implementation */
    private void get_system_update_id_cb (Service       content_dir,
                                          ServiceAction action) {
        if (action.get_argument_count () != 0) {
            action.return_error (402, _("Invalid argument"));

            return;
        }

        /* Set action return arguments */
        action.set ("Id", typeof (uint32), this.system_update_id);

        action.return ();
    }

    /* Query GetSystemUpdateID */
    private void query_system_update_id (Service        content_dir,
                                         string         variable,
                                         ref GLib.Value value) {
        /* Set action return arguments */
        value.init (typeof (uint32));
        value.set_uint (this.system_update_id);
    }

    /* Query ContainerUpdateIDs */
    private void query_container_update_ids (Service        content_dir,
                                             string         variable,
                                             ref GLib.Value value) {
        var update_ids = this.create_container_update_ids ();

        /* Set action return arguments */
        value.init (typeof (string));
        value.set_string (update_ids);
    }

    /* action GetSearchCapabilities implementation */
    private void get_search_capabilities_cb (Service       content_dir,
                                             ServiceAction action) {
        if (action.get_argument_count () != 0) {
            action.return_error (402, _("Invalid argument"));

            return;
        }

        /* Set action return arguments */
        action.set ("SearchCaps", typeof (string), RelationalExpression.CAPS);

        action.return ();
    }

    /* Query SearchCapabilities */
    private void query_search_capabilities (Service        content_dir,
                                            string         variable,
                                            ref GLib.Value value) {
        /* Set action return arguments */
        value.init (typeof (string));
        value.set_string (RelationalExpression.CAPS);
    }

    /* action GetSortCapabilities implementation */
    private void get_sort_capabilities_cb (Service       content_dir,
                                           ServiceAction action) {

        if (action.get_argument_count () != 0) {
            action.return_error (402, _("Invalid argument"));

            return;
        }

        /* Set action return arguments */
        action.set ("SortCaps", typeof (string), MediaObjects.SORT_CAPS);

        action.return ();
    }

    /* Query SortCapabilities */
    private void query_sort_capabilities (Service        content_dir,
                                          string         variable,
                                          ref GLib.Value value) {
        /* Set action return arguments */
        value.init (typeof (string));
        value.set_string (MediaObjects.SORT_CAPS);
    }

    /* action GetFeatureList implementation */
    private void get_feature_list_cb (Service       content_dir,
                                      ServiceAction action) {

        if (action.get_argument_count () != 0) {
            action.return_error (402, _("Invalid argument"));

            return;
        }

        /* Set action return arguments */
        action.set ("FeatureList", typeof (string), this.feature_list);

        action.return ();
    }

    /* Query FeatureList */
    private void query_feature_list (Service        content_dir,
                                     string         variable,
                                     ref GLib.Value value) {
        /* Set action return arguments */
        value.init (typeof (string));
        value.set_string (this.feature_list);
    }

    private string create_container_update_ids () {
        var update_ids = "";

        foreach (var container in this.updated_containers) {
            if (update_ids != "") {
                update_ids += ",";
            }

            update_ids += container.id + "," + container.update_id.to_string ();
        }

        return update_ids;
    }

    /**
     * handler for container_updated signal on root_container. We don't
     * immediately send the notification for changes but schedule the
     * notification after 0.2 seconds. Also we don't clear the updated
     * container list immediately after notification but rather in this
     * function. Please refer to ContentDirectory version 2 specs for details
     * on why we do all this the way we do.
     *
     * @param root_container the root_container
     * @param updated_container the container that just got updated
     */
    private void on_container_updated (MediaContainer root_container,
                                       MediaContainer updated_container,
                                       MediaObject object,
                                       ObjectEventType event_type,
                                       bool sub_tree_update) {
        this.system_update_id++;
        this.add_last_change_entry (object, event_type, sub_tree_update);
        var plugin = this.root_device.resource_factory as MediaServerPlugin;

        if (this.system_update_id == 0 &&
            PluginCapabilities.TRACK_CHANGES in plugin.capabilities) {
            // Overflow, need to initiate Service Reset Procedure.
            // See ContentDirectory:3 spec, 2.3.7.1
            this.service_reset.begin ();

            return;
        }

        if (event_type == ObjectEventType.ADDED ||
            event_type == ObjectEventType.DELETED) {
            updated_container.update_id = this.system_update_id;
            object.object_update_id = this.system_update_id;
        } else {
            object.object_update_id = this.system_update_id;
        }

        if (this.clear_updated_containers) {
            this.updated_containers.clear ();
            this.clear_updated_containers = false;
        }

        // UPnP specs dicate we make sure only last update be evented
        this.updated_containers.remove (updated_container);
        this.updated_containers.add (updated_container);

        this.ensure_timeout ();
    }

    private void on_sub_tree_updates_finished (MediaContainer root_container,
                                               MediaObject sub_tree_root)
    {

        var entry = new LastChangeStDone (sub_tree_root.id,
                                          this.system_update_id);

        this.last_change.add_event (entry);
        this.ensure_timeout ();
    }

    private bool update_notify () {
        var update_ids = this.create_container_update_ids ();

        this.notify ("ContainerUpdateIDs", typeof (string), update_ids);
        this.notify ("SystemUpdateID", typeof (uint32), this.system_update_id);
        this.notify ("LastChange", typeof (string), this.last_change.get_log ());

        this.clear_updated_containers = true;
        this.update_notify_id = 0;
        this.last_change.clear_on_new_event ();

        return false;
    }

    private string create_transfer_ids () {
        var ids = "";

        foreach (var import in this.active_imports) {
            if (ids != "") {
                ids += ",";
            }

            ids += import.transfer_id.to_string ();
        }

        return ids;
    }

    private void on_import_completed (StateMachine machine) {
        var import = machine as ImportResource;

        this.finished_imports.add (import);
        this.active_imports.remove (import);

        // signalize end of transfer
        this.notify ("TransferIDs",
                        typeof (string),
                        this.create_transfer_ids ());

        // According to CDS specs (v3 section 2.4.17), we must not immediately
        // remove the import from out memory
        Timeout.add_seconds (30, () => {
                this.finished_imports.remove (import);

                return false;
        });
    }

    private ImportResource? find_import_for_action (ServiceAction action) {
        ImportResource ret = null;
        uint32 transfer_id;

        action.get ("TransferID",
                        typeof (uint32),
                        out transfer_id);

        foreach (var import in this.active_imports) {
            if (import.transfer_id == transfer_id) {
                ret = import;

                break;
            }
        }

        foreach (var import in this.finished_imports) {
            if (import.transfer_id == transfer_id) {
                ret = import;

                break;
            }
        }

        return ret;
    }

    /* Query LastChange */
    private void query_last_change (Service          content_dir,
                                    string           variable,
                                    ref GLib.Value   value) {
        value.init (typeof (string));
        value.set_string (this.last_change.get_log ());
    }

    private void ensure_timeout ()
    {
        if (this.update_notify_id == 0) {
            this.update_notify_id = Timeout.add (200, this.update_notify);
        }
    }

    private void add_last_change_entry (MediaObject object,
                                        ObjectEventType event_type,
                                        bool sub_tree_update)
    {
        LastChangeEntry entry;

        switch (event_type) {
        case ObjectEventType.ADDED:
            entry = new LastChangeObjAdd (object.id,
                                          this.system_update_id,
                                          sub_tree_update,
                                          object.parent.id,
                                          object.upnp_class);
            break;

        case ObjectEventType.MODIFIED:
            entry = new LastChangeObjMod (object.id,
                                          this.system_update_id,
                                          sub_tree_update);
            break;

        case ObjectEventType.DELETED:
            entry = new LastChangeObjDel (object.id,
                                          this.system_update_id,
                                          sub_tree_update);
            break;

        default:
            assert_not_reached ();
        }

        this.last_change.add_event (entry);
    }

    /* ServiceResetToken */
    private void get_service_reset_token_cb (Service       content_dir,
                                             ServiceAction action) {
        action.set ("ResetToken", typeof (string), this.service_reset_token);
        action.return ();
    }

    private void query_service_reset_token (Service        content_dir,
                                            string         variable,
                                            ref GLib.Value value) {
        value.init (typeof (string));
        value.set_string (this.service_reset_token);
    }

    private async void service_reset () {
        debug ("SystemUpdateID overflow, initiating service reset procedure");

        var plugin = this.root_device.resource_factory as MediaServerPlugin;
        plugin.active = false;
        this.service_reset_token = UUID.get ();
        var expression = new RelationalExpression ();
        expression.operand1 = "upnp:objectUpdateID";
        expression.operand2 = "true";
        expression.op = SearchCriteriaOp.EXISTS;

        try {
            var root = this.root_container as SearchableContainer;
            if (root == null) {
                // TODO:
                return;
            }

            uint32 matches = 0;
            var objects = yield root.search (expression,
                                             0,
                                             0,
                                             out matches,
                                             "",
                                             null);
            if (objects.size > 0) {
                uint32 count = 1;
                foreach (var object in objects) {
                    object.object_update_id = count++;

                    if (object is TrackableContainer) {
                        var container = object as MediaContainer;
                        container.update_id = container.object_update_id;
                        container.total_deleted_child_count = 0;
                    }
                }

                // SystemUpdateID needs to be the highest object_update_id
                this.system_update_id = count - 1;
                debug ("New SystemUpdateID is %u", this.system_update_id);
            }

            debug ("Service reset procedure done, device coming up again");
            plugin.active = true;
            debug ("New service reset token is %s", this.service_reset_token);
        } catch (Error error) { warning ("Failed to search for objects..."); };
    }
}
