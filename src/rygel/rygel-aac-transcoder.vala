/*
 * Copyright (C) 2011 Nokia Corporation.
 *
 * Author: Luis de Bethencourt <luis.debethencourt@collabora.com>
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

/**
 * Transcoder for 3GP stream containing MPEG4 audio (AAC).
 */
internal class Rygel.AACTranscoder : Rygel.AudioTranscoder {
    private const int BITRATE = 256;
    private const string CONTAINER = "application/x-3gp,profile=basic";
    private const string CODEC = "audio/mpeg,mpegversion=4," +
                                 "framed=true,stream-format=raw," +
                                 //"level=2," +
                                 "profile=lc,codec_data=1208,rate=44100," +
                                 "channels=1";

    public AACTranscoder () {
        base ("audio/3gpp", "AAC_ISO_320", BITRATE, CONTAINER, CODEC);
    }
}