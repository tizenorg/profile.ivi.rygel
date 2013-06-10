/*
 * Copyright (C) 2008 OpenedHand Ltd.
 * Copyright (C) 2009,2010,2011,2012 Nokia Corporation.
 * Copyright (C) 2012 Openismus GmbH
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Jorn Baayen <jorn@openedhand.com>
 *         Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
 *         Jens Georg <jensg@openismus.com>
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

using Gst;
using GUPnP;

/**
 * Implementation of RygelMediaPlayer for GStreamer.
 *
 * This class is useful only when implementing Rygel plugins.
 */
public class Rygel.Playbin.Player : GLib.Object, Rygel.MediaPlayer {
    private const string TRANSFER_MODE_STREAMING = "Streaming";
    private const string TRANSFER_MODE_INTERACTIVE = "Interactive";
    private const string PROTOCOL_INFO_TEMPLATE = "http-get:%s:*:%s";

    private const string[] protocols = { "http-get", "rtsp" };
    private const string[] mime_types = {
                                        "audio/mpeg",
                                        "application/ogg",
                                        "audio/x-vorbis",
                                        "audio/x-vorbis+ogg",
                                        "audio/ogg",
                                        "audio/x-ms-wma",
                                        "audio/x-ms-asf",
                                        "audio/x-flac",
                                        "audio/x-flac+ogg",
                                        "audio/flac",
                                        "audio/mp4",
                                        "audio/3gpp",
                                        "audio/vnd.dlna.adts",
                                        "audio/x-mod",
                                        "audio/x-wav",
                                        "audio/x-ac3",
                                        "audio/x-m4a",
                                        "audio/l16;rate=44100;channels=2",
                                        "audio/l16;rate=44100;channels=1",
                                        "audio/l16;channels=2;rate=44100",
                                        "audio/l16;channels=1;rate=44100",
                                        "audio/l16;rate=44100",
                                        "image/jpeg",
                                        "image/png",
                                        "video/x-theora",
                                        "video/x-theora+ogg",
                                        "video/x-oggm",
                                        "video/ogg",
                                        "video/x-dirac",
                                        "video/x-wmv",
                                        "video/x-wma",
                                        "video/x-msvideo",
                                        "video/x-3ivx",
                                        "video/x-3ivx",
                                        "video/x-matroska",
                                        "video/x-mkv",
                                        "video/mpeg",
                                        "video/mp4",
                                        "application/x-shockwave-flash",
                                        "video/x-ms-asf",
                                        "video/x-xvid",
                                        "video/x-ms-wmv" };
    private static Player player;

    private bool is_live;
    private bool foreign;
    private bool buffering;

    public dynamic Element playbin { get; private set; }

    private string _playback_state = "NO_MEDIA_PRESENT";
    public string playback_state {
        owned get {
            return this._playback_state;
        }

        set {
            Gst.State state, pending;

            this.playbin.get_state (out state, out pending, Gst.MSECOND);

            debug ("Changing playback state to %s.", value);

            switch (value) {
                case "STOPPED":
                    if (state != State.NULL || pending != State.VOID_PENDING) {
                        this._playback_state = "TRANSITIONING";
                        this.playbin.set_state (State.NULL);
                    } else {
                        this._playback_state = value;
                    }
                break;
                case "PAUSED_PLAYBACK":
                    if (state != State.PAUSED || pending != State.VOID_PENDING) {
                        this._playback_state = "TRANSITIONING";
                        this.playbin.set_state (State.PAUSED);
                    } else {
                        this._playback_state = value;
                    }
                break;
                case "PLAYING":
                    if (state != State.PLAYING ||
                        pending != State.VOID_PENDING) {
                        this._playback_state = "TRANSITIONING";
                        // This needs a check if GStreamer and DLNA agree on
                        // the "liveness" of the source (s0/sn increase in
                        // protocol info)
                        this.is_live = this.playbin.set_state (State.PLAYING)
                                        == StateChangeReturn.NO_PREROLL;
                    } else {
                        this._playback_state = value;
                    }
                break;
                case "EOS":
                    this._playback_state = value;
                break;
                default:
                break;
            }
        }
    }

    private string[] _allowed_playback_speeds = {"1"};
    public string[] allowed_playback_speeds {
        owned get {
            return this._allowed_playback_speeds;
        }
    }

    private string _playback_speed = "1";
    public string playback_speed {
        owned get {
            return this._playback_speed;
        }

        set {
            this._playback_speed = value;
        }
    }

    private string transfer_mode = null;

    private bool uri_update_hint = false;
    private string? _uri = null;
    public string? uri {
        owned get {
            return _uri;
        }

        set {
            this._uri = value;
            this.playbin.set_state (State.READY);
            this.playbin.uri = value;
            if (value != "") {
                switch (this._playback_state) {
                    case "NO_MEDIA_PRESENT":
                        this._playback_state = "STOPPED";
                        this.notify_property ("playback-state");
                        break;
                    case "STOPPED":
                        break;
                    case "PAUSED_PLAYBACK":
                        this.is_live = this.playbin.set_state (State.PAUSED)
                                        == StateChangeReturn.NO_PREROLL;
                        break;
                    case "EOS":
                    case "PLAYING":
                        // This needs a check if GStreamer and DLNA agree on
                        // the "liveness" of the source (s0/sn increase in
                        // protocol info)
                        this.is_live = this.playbin.set_state (State.PLAYING)
                                        == StateChangeReturn.NO_PREROLL;
                        break;
                    default:
                        break;
                }
            } else {
                this._playback_state = "NO_MEDIA_PRESENT";
                this.notify_property ("playback-state");
            }
            debug ("URI set to %s.", value);
        }
    }

    private string _mime_type = "";
    public string? mime_type {
        owned get {
            return this._mime_type;
        }

        set {
            this._mime_type = value;
        }
    }

    private string _metadata = "";
    public string? metadata {
        owned get {
            return this._metadata;
        }

        set {
            this._metadata = value;
        }
    }

    public bool can_seek {
        get {
            return this.transfer_mode != TRANSFER_MODE_INTERACTIVE &&
                   ! this.mime_type.has_prefix ("image/");
        }
    }

    private string _content_features = "";
    private ProtocolInfo protocol_info;
    public string? content_features {
        owned get {
            return this._content_features;
        }

        set {
            var pi_string = PROTOCOL_INFO_TEMPLATE.printf (this.mime_type,
                                                           value);
            try {
                this.protocol_info = new ProtocolInfo.from_string (pi_string);
                var flags = this.protocol_info.dlna_flags;
                if (DLNAFlags.INTERACTIVE_TRANSFER_MODE in flags) {
                    this.transfer_mode = TRANSFER_MODE_INTERACTIVE;
                } else if (DLNAFlags.STREAMING_TRANSFER_MODE in flags) {
                    this.transfer_mode = TRANSFER_MODE_STREAMING;
                } else {
                    this.transfer_mode = null;
                }
            } catch (Error error) {
                this.protocol_info = null;
                this.transfer_mode = null;
            }
            this._content_features = value;
        }
    }

    public double volume {
        get {
            return this.playbin.volume;
        }

        set {
            this.playbin.volume = value;
            debug ("volume set to %f.", value);
        }
    }

    public int64 duration {
        get {
            int64 dur;

            if (this.playbin.query_duration (Format.TIME, out dur)) {
                return dur / Gst.USECOND;
            } else {
                return 0;
            }
        }
    }

    public int64 position {
        get {
            int64 pos;

            if (this.playbin.query_position (Format.TIME, out pos)) {
                return pos / Gst.USECOND;
            } else {
                return 0;
            }
        }
    }

    private Player () {
        this.playbin = ElementFactory.make ("playbin", null);
        this.foreign = false;
        this.setup_playbin ();
    }

    public Player.wrap (Gst.Element playbin) {

        return_if_fail (playbin != null);
        return_if_fail (playbin.get_type ().name() == "GstPlayBin");

        this.playbin = playbin;
        this.foreign = true;
        this.setup_playbin ();
    }

    public static Player get_default () {
        if (player == null) {
            player = new Player ();
        }

        return player;
    }

    public bool seek (int64 time) {
        return this.playbin.seek (1.0,
                                  Format.TIME,
                                  SeekFlags.FLUSH,
                                  Gst.SeekType.SET,
                                  time * Gst.USECOND,
                                  Gst.SeekType.NONE,
                                  -1);
    }

    public string[] get_protocols () {
        return protocols;
    }

    public string[] get_mime_types () {
        return mime_types;
    }

    private bool is_rendering_image () {
        dynamic Element typefind;

        typefind = (this.playbin as Gst.Bin).get_by_name ("typefind");
        Caps caps = typefind.caps;
        var structure = caps.get_structure (0);

        return structure.get_name () == "image/jpeg" ||
               structure.get_name () == "image/png";
    }

    private void bus_handler (Gst.Bus bus,
                              Message message) {
        switch (message.type) {
        case MessageType.DURATION_CHANGED:
            if (this.playbin.query_duration (Format.TIME, null)) {
                this.notify_property ("duration");
            }
        break;
        case MessageType.STATE_CHANGED:
            if (message.src == this.playbin) {
                State old_state, new_state, pending;

                message.parse_state_changed (out old_state,
                                             out new_state,
                                             out pending);
                if (old_state == State.READY && new_state == State.PAUSED) {
                    if (this.uri_update_hint) {
                        this.uri_update_hint = false;
                        string uri = this.playbin.current_uri;
                        if (this._uri != uri && uri != "") {
                            // uri changed externally
                            this._uri = this.playbin.uri;
                            this.notify_property ("uri");
                            this.metadata = this.generate_basic_didl ();
                        }
                    }
                }

                if (pending == State.VOID_PENDING && !this.buffering) {
                    switch (new_state) {
                        case State.PAUSED:
                            this.playback_state = "PAUSED_PLAYBACK";
                            break;
                        case State.NULL:
                            this.playback_state = "STOPPED";
                            break;
                        case State.PLAYING:
                            this.playback_state = "PLAYING";
                            break;
                        default:
                            break;
                    }
                }

                if (old_state == State.PAUSED && new_state == State.PLAYING) {
                    this.buffering = false;
                    this.playback_state = "PLAYING";
                }
            }
            break;
        case MessageType.BUFFERING:
            // Assume the original application takes care of this.
            if (!(this.is_live || this.foreign)) {
                int percent;

                message.parse_buffering (out percent);

                if (percent < 100) {
                    this.buffering = true;
                    this.playbin.set_state (State.PAUSED);
                } else {
                    this.playbin.set_state (State.PLAYING);
                }
            }
            break;
        case MessageType.CLOCK_LOST:
            // Assume the original application takes care of this.
            if (!this.foreign) {
                this.playbin.set_state (State.PAUSED);
                this.playbin.set_state (State.PLAYING);
            }
            break;
        case MessageType.EOS:
            if (!this.is_rendering_image ()) {
                debug ("EOS");
                this.playback_state = "EOS";
            } else {
                debug ("Content is image, ignoring EOS");
            }

            break;
        case MessageType.ERROR:
            Error error;
            string debug_message;

            message.parse_error (out error, out debug_message);

            warning ("Error from GStreamer element %s: %s (%s)",
                     this.playbin.name,
                     error.message,
                     debug_message);
            warning ("Going to STOPPED state");

            this.playback_state = "STOPPED";

            break;
        }
    }

    private void on_source_setup (Element pipeline, dynamic Element source) {
        if (source.get_type ().name () == "GstSoupHTTPSrc" &&
            this.transfer_mode != null) {
            debug ("Setting transfer mode to %s", this.transfer_mode);

            var structure = new Structure.empty ("HTTPHeaders");
            structure.set_value ("transferMode.dlna.org", this.transfer_mode);

            source.extra_headers = structure;
        }
    }

    private void on_uri_notify (ParamSpec pspec) {
        this.uri_update_hint = true;
    }

    /**
     * Generate basic DIDLLite information.
     *
     * This is used when the URI gets changed externally. DLNA requires that a
     * minimum DIDLLite is always present if the URI is not empty.
     */
    private string generate_basic_didl () {
        var writer = new DIDLLiteWriter (null);
        var item = writer.add_item ();
        item.id = "1";
        item.parent_id = "-1";
        item.upnp_class = "object.item";
        var resource = item.add_resource ();
        resource.uri = this._uri;
        var file = File.new_for_uri (this.uri);
        item.title = file.get_basename ();

        return writer.get_string ();
    }

    private void setup_playbin () {
        // Needed to get "Stop" events from the playbin.
        // We can do this because we have a bus watch
        this.is_live = false;

        this.playbin.auto_flush_bus = false;
        assert (this.playbin != null);

        this.playbin.source_setup.connect (this.on_source_setup);
        this.playbin.notify["uri"].connect (this.on_uri_notify);

        // Bus handler
        var bus = this.playbin.get_bus ();
        bus.add_signal_watch ();
        bus.message.connect (this.bus_handler);
    }
}
