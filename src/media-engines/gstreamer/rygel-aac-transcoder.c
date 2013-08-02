/* rygel-aac-transcoder.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-aac-transcoder.vala, do not modify */

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

#define RYGEL_TYPE_AAC_TRANSCODER (rygel_aac_transcoder_get_type ())
#define RYGEL_AAC_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_AAC_TRANSCODER, RygelAACTranscoder))
#define RYGEL_AAC_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_AAC_TRANSCODER, RygelAACTranscoderClass))
#define RYGEL_IS_AAC_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_AAC_TRANSCODER))
#define RYGEL_IS_AAC_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_AAC_TRANSCODER))
#define RYGEL_AAC_TRANSCODER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_AAC_TRANSCODER, RygelAACTranscoderClass))

typedef struct _RygelAACTranscoder RygelAACTranscoder;
typedef struct _RygelAACTranscoderClass RygelAACTranscoderClass;
typedef struct _RygelAACTranscoderPrivate RygelAACTranscoderPrivate;

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

struct _RygelAACTranscoder {
	RygelAudioTranscoder parent_instance;
	RygelAACTranscoderPrivate * priv;
};

struct _RygelAACTranscoderClass {
	RygelAudioTranscoderClass parent_class;
};


static gpointer rygel_aac_transcoder_parent_class = NULL;

GType rygel_gst_transcoder_get_type (void) G_GNUC_CONST;
GType rygel_audio_transcoder_get_type (void) G_GNUC_CONST;
GType rygel_aac_transcoder_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_AAC_TRANSCODER_DUMMY_PROPERTY
};
#define RYGEL_AAC_TRANSCODER_BITRATE 256
#define RYGEL_AAC_TRANSCODER_CODEC "audio/mpeg,mpegversion=4," "stream-format=adts,rate=44100,base-profile=lc"
RygelAACTranscoder* rygel_aac_transcoder_new (void);
RygelAACTranscoder* rygel_aac_transcoder_construct (GType object_type);
RygelAudioTranscoder* rygel_audio_transcoder_new (const gchar* content_type, const gchar* dlna_profile, gint audio_bitrate, const gchar* container_caps, const gchar* audio_codec_caps, const gchar* extension);
RygelAudioTranscoder* rygel_audio_transcoder_construct (GType object_type, const gchar* content_type, const gchar* dlna_profile, gint audio_bitrate, const gchar* container_caps, const gchar* audio_codec_caps, const gchar* extension);
void rygel_gst_transcoder_set_preset (RygelGstTranscoder* self, const gchar* value);


RygelAACTranscoder* rygel_aac_transcoder_construct (GType object_type) {
	RygelAACTranscoder * self = NULL;
#line 35 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/media-engines/gstreamer/rygel-aac-transcoder.vala"
	self = (RygelAACTranscoder*) rygel_audio_transcoder_construct (object_type, "audio/vnd.dlna.adts", "AAC_ADTS_320", RYGEL_AAC_TRANSCODER_BITRATE, NULL, RYGEL_AAC_TRANSCODER_CODEC, "adts");
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/media-engines/gstreamer/rygel-aac-transcoder.vala"
	rygel_gst_transcoder_set_preset ((RygelGstTranscoder*) self, "Rygel AAC_ADTS_320 preset");
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/media-engines/gstreamer/rygel-aac-transcoder.vala"
	return self;
#line 135 "rygel-aac-transcoder.c"
}


RygelAACTranscoder* rygel_aac_transcoder_new (void) {
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/media-engines/gstreamer/rygel-aac-transcoder.vala"
	return rygel_aac_transcoder_construct (RYGEL_TYPE_AAC_TRANSCODER);
#line 142 "rygel-aac-transcoder.c"
}


static void rygel_aac_transcoder_class_init (RygelAACTranscoderClass * klass) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/media-engines/gstreamer/rygel-aac-transcoder.vala"
	rygel_aac_transcoder_parent_class = g_type_class_peek_parent (klass);
#line 149 "rygel-aac-transcoder.c"
}


static void rygel_aac_transcoder_instance_init (RygelAACTranscoder * self) {
}


/**
 * Transcoder for 3GP stream containing MPEG4 audio (AAC).
 */
GType rygel_aac_transcoder_get_type (void) {
	static volatile gsize rygel_aac_transcoder_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_aac_transcoder_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelAACTranscoderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_aac_transcoder_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelAACTranscoder), 0, (GInstanceInitFunc) rygel_aac_transcoder_instance_init, NULL };
		GType rygel_aac_transcoder_type_id;
		rygel_aac_transcoder_type_id = g_type_register_static (RYGEL_TYPE_AUDIO_TRANSCODER, "RygelAACTranscoder", &g_define_type_info, 0);
		g_once_init_leave (&rygel_aac_transcoder_type_id__volatile, rygel_aac_transcoder_type_id);
	}
	return rygel_aac_transcoder_type_id__volatile;
}



