/* rygel-mp3-transcoder.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-mp3-transcoder.vala, do not modify */

/*
 * Copyright (C) 2009 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
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

#include <glib.h>
#include <glib-object.h>
#include <rygel-server.h>
#include <gst/pbutils/codec-utils.h>
#include <gst/pbutils/descriptions.h>
#include <gst/pbutils/encoding-profile.h>
#include <gst/pbutils/encoding-target.h>
#include <gst/pbutils/gstdiscoverer.h>
#include <gst/pbutils/gstpluginsbaseversion.h>
#include <gst/pbutils/install-plugins.h>
#include <gst/pbutils/missing-plugins.h>
#include <gst/pbutils/pbutils-enumtypes.h>
#include <gst/pbutils/pbutils.h>
#include <gst/gst.h>
#include <stdlib.h>
#include <string.h>


#define RYGEL_TYPE_GST_TRANSCODER (rygel_gst_transcoder_get_type ())
#define RYGEL_GST_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_GST_TRANSCODER, RygelGstTranscoder))
#define RYGEL_GST_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_GST_TRANSCODER, RygelGstTranscoderClass))
#define RYGEL_IS_GST_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_GST_TRANSCODER))
#define RYGEL_IS_GST_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_GST_TRANSCODER))
#define RYGEL_GST_TRANSCODER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_GST_TRANSCODER, RygelGstTranscoderClass))

typedef struct _RygelGstTranscoder RygelGstTranscoder;
typedef struct _RygelGstTranscoderClass RygelGstTranscoderClass;
typedef struct _RygelGstTranscoderPrivate RygelGstTranscoderPrivate;

#define RYGEL_TYPE_AUDIO_TRANSCODER (rygel_audio_transcoder_get_type ())
#define RYGEL_AUDIO_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_AUDIO_TRANSCODER, RygelAudioTranscoder))
#define RYGEL_AUDIO_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_AUDIO_TRANSCODER, RygelAudioTranscoderClass))
#define RYGEL_IS_AUDIO_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_AUDIO_TRANSCODER))
#define RYGEL_IS_AUDIO_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_AUDIO_TRANSCODER))
#define RYGEL_AUDIO_TRANSCODER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_AUDIO_TRANSCODER, RygelAudioTranscoderClass))

typedef struct _RygelAudioTranscoder RygelAudioTranscoder;
typedef struct _RygelAudioTranscoderClass RygelAudioTranscoderClass;
typedef struct _RygelAudioTranscoderPrivate RygelAudioTranscoderPrivate;

#define RYGEL_TYPE_MP3_TRANSCODER (rygel_mp3_transcoder_get_type ())
#define RYGEL_MP3_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MP3_TRANSCODER, RygelMP3Transcoder))
#define RYGEL_MP3_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MP3_TRANSCODER, RygelMP3TranscoderClass))
#define RYGEL_IS_MP3_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MP3_TRANSCODER))
#define RYGEL_IS_MP3_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MP3_TRANSCODER))
#define RYGEL_MP3_TRANSCODER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MP3_TRANSCODER, RygelMP3TranscoderClass))

typedef struct _RygelMP3Transcoder RygelMP3Transcoder;
typedef struct _RygelMP3TranscoderClass RygelMP3TranscoderClass;
typedef struct _RygelMP3TranscoderPrivate RygelMP3TranscoderPrivate;

struct _RygelGstTranscoder {
	RygelTranscoder parent_instance;
	RygelGstTranscoderPrivate * priv;
};

struct _RygelGstTranscoderClass {
	RygelTranscoderClass parent_class;
	GstEncodingProfile* (*get_encoding_profile) (RygelGstTranscoder* self);
};

struct _RygelAudioTranscoder {
	RygelGstTranscoder parent_instance;
	RygelAudioTranscoderPrivate * priv;
	gint audio_bitrate;
	GstCaps* container_format;
	GstCaps* audio_codec_format;
};

struct _RygelAudioTranscoderClass {
	RygelGstTranscoderClass parent_class;
};

struct _RygelMP3Transcoder {
	RygelAudioTranscoder parent_instance;
	RygelMP3TranscoderPrivate * priv;
};

struct _RygelMP3TranscoderClass {
	RygelAudioTranscoderClass parent_class;
};


static gpointer rygel_mp3_transcoder_parent_class = NULL;

GType rygel_gst_transcoder_get_type (void) G_GNUC_CONST;
GType rygel_audio_transcoder_get_type (void) G_GNUC_CONST;
GType rygel_mp3_transcoder_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MP3_TRANSCODER_DUMMY_PROPERTY
};
#define RYGEL_MP3_TRANSCODER_BITRATE 128
#define RYGEL_MP3_TRANSCODER_FORMAT "audio/mpeg,mpegversion=1,layer=3"
RygelMP3Transcoder* rygel_mp3_transcoder_new (void);
RygelMP3Transcoder* rygel_mp3_transcoder_construct (GType object_type);
#define RYGEL_AUDIO_TRANSCODER_NO_CONTAINER NULL
RygelAudioTranscoder* rygel_audio_transcoder_new (const gchar* content_type, const gchar* dlna_profile, gint audio_bitrate, const gchar* container_caps, const gchar* audio_codec_caps, const gchar* extension);
RygelAudioTranscoder* rygel_audio_transcoder_construct (GType object_type, const gchar* content_type, const gchar* dlna_profile, gint audio_bitrate, const gchar* container_caps, const gchar* audio_codec_caps, const gchar* extension);


RygelMP3Transcoder* rygel_mp3_transcoder_construct (GType object_type) {
	RygelMP3Transcoder * self = NULL;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-mp3-transcoder.vala"
	self = (RygelMP3Transcoder*) rygel_audio_transcoder_construct (object_type, "audio/mpeg", "MP3", RYGEL_MP3_TRANSCODER_BITRATE, RYGEL_AUDIO_TRANSCODER_NO_CONTAINER, RYGEL_MP3_TRANSCODER_FORMAT, "mp3");
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-mp3-transcoder.vala"
	return self;
#line 134 "rygel-mp3-transcoder.c"
}


RygelMP3Transcoder* rygel_mp3_transcoder_new (void) {
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-mp3-transcoder.vala"
	return rygel_mp3_transcoder_construct (RYGEL_TYPE_MP3_TRANSCODER);
#line 141 "rygel-mp3-transcoder.c"
}


static void rygel_mp3_transcoder_class_init (RygelMP3TranscoderClass * klass) {
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-mp3-transcoder.vala"
	rygel_mp3_transcoder_parent_class = g_type_class_peek_parent (klass);
#line 148 "rygel-mp3-transcoder.c"
}


static void rygel_mp3_transcoder_instance_init (RygelMP3Transcoder * self) {
}


/**
 * Transcoder for mpeg 1 layer 3 audio.
 */
GType rygel_mp3_transcoder_get_type (void) {
	static volatile gsize rygel_mp3_transcoder_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_mp3_transcoder_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMP3TranscoderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_mp3_transcoder_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMP3Transcoder), 0, (GInstanceInitFunc) rygel_mp3_transcoder_instance_init, NULL };
		GType rygel_mp3_transcoder_type_id;
		rygel_mp3_transcoder_type_id = g_type_register_static (RYGEL_TYPE_AUDIO_TRANSCODER, "RygelMP3Transcoder", &g_define_type_info, 0);
		g_once_init_leave (&rygel_mp3_transcoder_type_id__volatile, rygel_mp3_transcoder_type_id);
	}
	return rygel_mp3_transcoder_type_id__volatile;
}



