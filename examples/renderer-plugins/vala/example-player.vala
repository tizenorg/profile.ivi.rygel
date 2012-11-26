/*
 * Copyright (C) 2012 Intel Corporation
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

/**
 * Implementation of RygelMediaPlayer.
 *
 * This is an incredibly simple example that does no real rendering,
 * and does not attempt to support audio or video formats. It just prints out
 * the URI that is received from the UPnP control point.
 *
 * RygelPlaybinPlayer, from librygel-renderer-gst, is a more complete example.
 */
public class Rygel.Example.Player : GLib.Object, Rygel.MediaPlayer {
    private const string[] PROTOCOLS = { "http-get" };
    private const string[] MIME_TYPES = {"image/jpeg",
                                         "image/png" };
    private static Player player;

    private Player () {
    }

    public static Player get_default () {
        if (player == null) {
            player = new Player ();
        }

        return player;
    }

    private string _playback_state = "NO_MEDIA_PRESENT";
    public string playback_state {
        owned get {
            return this._playback_state;
        }

        set {
            this._playback_state = value;
        }
    }

    private string _uri = "";
    public string? uri {
        owned get {
            return _uri;
        }

        set {
            this._uri = value;
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

    private string _content_features = "";
    public string? content_features {
        owned get {
            return this._content_features;
        }

        set {
            this._content_features = value;
        }
    }

    private double _volume = 0;
    public double volume {
        get {
            return this._volume;
        }

        set {
            this._volume = value;
            debug ("volume set to %f.", value);
        }
    }

    private int64 _duration = 0;
    public int64 duration {
        get {
            return this._duration;
        }
    }

    private int64 _position = 0;
    public int64 position {
        get {
            return this._position;
        }
    }

    public bool seek (int64 time) {
        return false;
    }

    public string[] get_protocols () {
        return PROTOCOLS;
    }

    public string[] get_mime_types () {
        return MIME_TYPES;
    }
}

