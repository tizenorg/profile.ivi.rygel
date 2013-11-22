/*
 * Copyright (C) 2011 Jens Georg
 *
 * Author: Jens Georg <mail@jensge.org>
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
using Xml;

/**
 * Represents a device description document and offers methods for easy
 * manipulation of those.
 */
public class Rygel.DescriptionFile : Object {
    /// List of known device elements in the order specified by UDA 1.1
    private string[] device_elements = {
        "deviceType",
        "friendlyName",
        "manufacturer",
        "manufacturerURL",
        "modelDescription",
        "modelName",
        "modelNumber",
        "modelURL",
        "serialNumber",
        "UDN",
        "UPC",
        "iconList",
        "serviceList",
        "deviceList",
        "presentationURL",
    };

    /// XML doc wrapper representing the description document
    private XMLDoc doc;

    // FIXME: Why does //serviceType not work? Seems a bug in libxml2.
    /**
     * XPath template for searching the service type node in
     * modify_service_type()
     */
    private const string SERVICE_TYPE_TEMPLATE = "//*[.='%s']";

    /**
     * Constructor to load a description file from disk
     *
     * @param template_file the path to the description file.
     * @throws GUPnP.XMLError.PARSE if there was an error reading or parsing
     * the file.
     */
    public DescriptionFile (string template_file) throws GLib.Error {
        this.doc = new XMLDoc.from_path (template_file);
    }

    /**
     * Constructor which wraps an existing GUPnP.XMLDoc as a description file.
     *
     * @param doc is the GUPnP.XMLDoc to wrap.
     */
    public DescriptionFile.from_xml_document (XMLDoc doc) {
        this.doc = doc;
    }

    /**
     * Change the type of a service.
     *
     * Usually used to modify the device version, e.g. default device type is
     * "MediaServer:2" and device_type = "MediaServer:1".
     *
     * @param device_type is the current content of serviceType.
     */
    public void set_device_type (string device_type) {
        this.set_device_element ("deviceType", device_type);
    }

    /**
     * Modify the model description.
     *
     * A longer user friendly description of the device.
     *
     * @param model_description is the new model description.
     */
    public void set_model_description (string model_description) {
        this.set_device_element ("modelDescription", model_description);
    }

    /**
     * Modify the model name.
     *
     * Usually the name of the software implementing this device.
     *
     * @param model_name is the new model name.
     */
    public void set_model_name (string model_name) {
        this.set_device_element ("modelName", model_name);
    }

    /**
     * Modify the model number.
     *
     * Usually the version of the software implementing this device.
     *
     * @param model_number is the new model number.
     */
    public void set_model_number (string model_number) {
        this.set_device_element ("modelNumber", model_number);
    }

    /**
     * Set the friendly name of the device.
     *
     * The friendly name is the one usually presented to the user in control
     * points or DMPs
     *
     * @param friendly_name is the new friendly name of the device.
     */
    public void set_friendly_name (string friendly_name) {
        this.set_device_element ("friendlyName", friendly_name);
    }

    /**
     * Get the current friendly name of the device.
     *
     * @return The currenly set friendly name.
     */
    public string get_friendly_name () {
        var element = Rygel.XMLUtils.get_element ((Xml.Node *) this.doc.doc,
                                                  "root",
                                                  "device",
                                                  "friendlyName");
        assert (element != null);

        return element->get_content ();
    }

    /**
     * Set the Unique Device Name of the device.
     *
     * Unique Device Name is the UUID of this particular device instance.
     *
     * @param udn is the Unique Device Name of the device.
     */
    public void set_udn (string udn) {
        this.set_device_element ("UDN", udn);
    }

    /**
     * Get the current UDN of the device.
     *
     * @return The currenly set UDN.
     */
    public string? get_udn () {
        var element = Rygel.XMLUtils.get_element ((Xml.Node *) this.doc.doc,
                                                  "root",
                                                  "device",
                                                  "UDN");
        if (element == null) {
            return null;
        }

        return element->get_content ();
    }

    /**
     * Set the DLNA caps of this root device and while taking the
     * capabilities of the plugin into account.
     *
     * @param capabilities RygelPluginCapabilities flags
     */
    public void set_dlna_caps (PluginCapabilities capabilities) {
        var flags = new string[0];

        if ((PluginCapabilities.UPLOAD & capabilities) != 0) {
            // This means "Supports upload to AnyContainer_DLNA.ORG", but we
            // also use it as "supports upload". AnyContainer upload is
            // handled by Rygel transparently.
            var allow_upload = true;
            var allow_delete = false;

            try {
                var config = MetaConfig.get_default ();
                allow_upload = config.get_allow_upload ();
                allow_delete = config.get_allow_deletion ();
            } catch (GLib.Error error) { }

            if (allow_upload) {
                if (PluginCapabilities.IMAGE_UPLOAD in capabilities) {
                    flags += "image-upload";
                }

                if (PluginCapabilities.VIDEO_UPLOAD in capabilities) {
                    flags += "av-upload";
                }

                if (PluginCapabilities.AUDIO_UPLOAD in capabilities) {
                    flags += "audio-upload";
                }
            }

            if (allow_delete) {
                flags += "create-item-with-OCM-destroy-item";
            }

        }

        if (PluginCapabilities.TRACK_CHANGES in capabilities) {
            flags += "content-synchronization";
            flags += "create-child-container";
        }

        // Might be that the plugin only supports create-child-container but
        // not change tracking, so we need to add this capability separately
        if (PluginCapabilities.CREATE_CONTAINERS in capabilities &&
            !(PluginCapabilities.TRACK_CHANGES in capabilities)) {
            flags += "create-child-container";
        }

        if (PluginCapabilities.DIAGNOSTICS in capabilities) {
            flags += "+DIAGE+";
        }

        // Set the flags we found; otherwise remove whatever is in the
        // template.
        if (flags.length > 0) {
            var content = string.joinv (",", flags);
            this.set_device_element ("X_DLNACAP", content, "dlna");
        } else {
            this.remove_device_element ("X_DLNACAP");
        }
    }

    public void clear_service_list () {
        this.remove_device_element ("serviceList");
    }

    public void add_service (string device_name, ResourceInfo resource_info) {
        var list = Rygel.XMLUtils.get_element
                                        ((Xml.Node *) this.doc.doc,
                                         "root",
                                         "device",
                                         "serviceList");
        if (list == null) {
            list = this.set_device_element ("serviceList", null);
        }

        Xml.Node *service_node = list->new_child (null, "service");

        service_node->new_child (null, "serviceType", resource_info.upnp_type);
        service_node->new_child (null, "serviceId", resource_info.upnp_id);

        /* Now the relative (to base URL) URLs*/
        string url = "/" + resource_info.description_path;
        service_node->new_child (null, "SCPDURL", url);

        url = "/Control/" + device_name + "/" + resource_info.type.name ();
        service_node->new_child (null, "controlURL", url);

        url = "/Event/" + device_name + "/" + resource_info.type.name ();
        service_node->new_child (null, "eventSubURL", url);
    }

    public void clear_icon_list () {
        this.remove_device_element ("iconList");
    }

    public void add_icon (string   device_name,
                          IconInfo icon_info,
                          string   url) {
        var list = Rygel.XMLUtils.get_element
                                        ((Xml.Node *) this.doc.doc,
                                         "root",
                                         "device",
                                         "iconList");
        if (list == null) {
            list = this.set_device_element ("iconList", null);
        }

        Xml.Node *icon_node = list->new_child (null, "icon");

        string width = icon_info.width.to_string ();
        string height = icon_info.height.to_string ();
        string depth = icon_info.depth.to_string ();

        icon_node->new_child (null, "mimetype", icon_info.mime_type);
        icon_node->new_child (null, "width", width);
        icon_node->new_child (null, "height", height);
        icon_node->new_child (null, "depth", depth);
        icon_node->new_child (null, "url", url);
    }

    /**
     * Change the type of a service.
     *
     * Usually used to modify the service version, e.g. old_type =
     * "ContentDirectory:2" and new_type = "ContentDirectory:1".
     *
     * @param old_type is the current content of serviceType.
     * @param new_type is the content serviceType will be set to.
     */
    public void modify_service_type (string old_type,
                                     string new_type) {
        var context = new XPath.Context (this.doc.doc);

        var xpath = SERVICE_TYPE_TEMPLATE.printf (old_type);
        var xpath_object = context.eval_expression (xpath);
        assert (xpath_object != null);
        assert (xpath_object->type == XPath.ObjectType.NODESET);
        assert (!xpath_object->nodesetval->is_empty ());

        xpath_object->nodesetval->item (0)->set_content (new_type);
        delete xpath_object;
    }

    /**
     * Writes the current document to a file.
     *
     * It makes sure that the resulting file has the correct UTF-8 encoding
     * and does not have any kind of newlines. This is necessary as some
     * devices with broken XML parsers can't cope with UNIX newlines.
     * If a file with the same name exists it will be overwritten.
     *
     * @param path is a path to a file.
     * @throws GLib.Error if anything fails while creating the XML dump.
     */
    public void save (string path) throws GLib.Error {
        var file = FileStream.open (path, "w+");
        var message = _("Failed to write modified description to %s");

        if (unlikely (file == null)) {
            throw new IOError.FAILED (message, path);
        }

        string mem = null;
        int len = -1;
        doc.doc.dump_memory_enc (out mem, out len, "UTF-8");

        if (unlikely (len <= 0)) {
            throw new IOError.FAILED (message, path);
        }

        // Make sure we don't have any newlines
        file.puts (mem.replace ("\n", ""));
    }

    private int index_of_device_element (string element) {
        for (var i = 0; i < this.device_elements.length; i++) {
            if (this.device_elements[i] == element) {
                return i;
            }
        }

        return -1;
    }

    /**
     * Internal helper function to set an element to a new value,
     * creating it if needed.
     *
     * @param element below /root/device to be set.
     * @param new_value is the new content of that element.
     *
     * @returns the element that was modified (or created) or null
     */
    private Xml.Node* set_device_element (string element,
                                          string? new_value,
                                          string? ns = null) {
        var xml_element = Rygel.XMLUtils.get_element
                                        ((Xml.Node *) this.doc.doc,
                                         "root",
                                         "device",
                                         element);
        if (xml_element != null) {
            xml_element->set_content (new_value);
            return xml_element;
        }

        // Element not found: create it
        var device_element = Rygel.XMLUtils.get_element
                                ((Xml.Node *) this.doc.doc,
                                 "root",
                                 "device");

        Xml.Ns *xml_ns = null;
        if (ns != null) {
            xml_ns = this.doc.doc.search_ns(device_element, ns);
        }

        xml_element = device_element->new_child (xml_ns, element, new_value);

        // Now move the element to correct location
        var index = this.index_of_device_element (element);
        if (index > -1) {
            // try to find a previous sibling
            Xml.Node* sibling = null;
            for (index--; index > 0; index--) {
                sibling = Rygel.XMLUtils.get_element
                                        ((Xml.Node *) this.doc.doc,
                                         "root",
                                         "device",
                                         device_elements[index]);
                if (sibling != null) {
                    xml_element = sibling->add_next_sibling (xml_element);

                    break;
                }
            }

            if (sibling == null) {
                // Set as first child
                sibling = device_element->first_element_child ();
                if (sibling != null) {
                    xml_element = sibling->add_prev_sibling (xml_element);
                }
            }
        }

        return xml_element;
    }

    /**
     * Internal helper function to remove an element (if it exists).
     *
     * @param element below /root/device to be removed.
     */
    private void remove_device_element (string element) {
        var xml_element = Rygel.XMLUtils.get_element
                                        ((Xml.Node *) this.doc.doc,
                                         "root",
                                         "device",
                                         element);
        if (xml_element != null) {
            xml_element->unlink ();
            delete xml_element;
        }
    }
}
