/* rygel-avc-transcoder.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-avc-transcoder.vala, do not modify */

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
#include <libgupnp-av/gupnp-av.h>


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

#define RYGEL_TYPE_VIDEO_TRANSCODER (rygel_video_transcoder_get_type ())
#define RYGEL_VIDEO_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_VIDEO_TRANSCODER, RygelVideoTranscoder))
#define RYGEL_VIDEO_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_VIDEO_TRANSCODER, RygelVideoTranscoderClass))
#define RYGEL_IS_VIDEO_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_VIDEO_TRANSCODER))
#define RYGEL_IS_VIDEO_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_VIDEO_TRANSCODER))
#define RYGEL_VIDEO_TRANSCODER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_VIDEO_TRANSCODER, RygelVideoTranscoderClass))

typedef struct _RygelVideoTranscoder RygelVideoTranscoder;
typedef struct _RygelVideoTranscoderClass RygelVideoTranscoderClass;
typedef struct _RygelVideoTranscoderPrivate RygelVideoTranscoderPrivate;

#define RYGEL_TYPE_AVC_TRANSCODER (rygel_avc_transcoder_get_type ())
#define RYGEL_AVC_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_AVC_TRANSCODER, RygelAVCTranscoder))
#define RYGEL_AVC_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_AVC_TRANSCODER, RygelAVCTranscoderClass))
#define RYGEL_IS_AVC_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_AVC_TRANSCODER))
#define RYGEL_IS_AVC_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_AVC_TRANSCODER))
#define RYGEL_AVC_TRANSCODER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_AVC_TRANSCODER, RygelAVCTranscoderClass))

typedef struct _RygelAVCTranscoder RygelAVCTranscoder;
typedef struct _RygelAVCTranscoderClass RygelAVCTranscoderClass;
typedef struct _RygelAVCTranscoderPrivate RygelAVCTranscoderPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

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

struct _RygelVideoTranscoder {
	RygelAudioTranscoder parent_instance;
	RygelVideoTranscoderPrivate * priv;
};

struct _RygelVideoTranscoderClass {
	RygelAudioTranscoderClass parent_class;
};

struct _RygelAVCTranscoder {
	RygelVideoTranscoder parent_instance;
	RygelAVCTranscoderPrivate * priv;
};

struct _RygelAVCTranscoderClass {
	RygelVideoTranscoderClass parent_class;
};


static gpointer rygel_avc_transcoder_parent_class = NULL;

GType rygel_gst_transcoder_get_type (void) G_GNUC_CONST;
GType rygel_audio_transcoder_get_type (void) G_GNUC_CONST;
GType rygel_video_transcoder_get_type (void) G_GNUC_CONST;
GType rygel_avc_transcoder_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_AVC_TRANSCODER_DUMMY_PROPERTY
};
#define RYGEL_AVC_TRANSCODER_VIDEO_BITRATE 1200
#define RYGEL_AVC_TRANSCODER_AUDIO_BITRATE 64
#define RYGEL_AVC_TRANSCODER_CONTAINER "video/quicktime,variant=iso"
#define RYGEL_AVC_TRANSCODER_AUDIO_CAPS "audio/mpeg,mpegversion=4"
#define RYGEL_AVC_TRANSCODER_VIDEO_CAPS "video/x-h264,stream-format=avc"
#define RYGEL_AVC_TRANSCODER_RESTRICTIONS "video/x-raw,framerate=(fraction)15/1,width=352,height=288"
RygelAVCTranscoder* rygel_avc_transcoder_new (void);
RygelAVCTranscoder* rygel_avc_transcoder_construct (GType object_type);
RygelVideoTranscoder* rygel_video_transcoder_new (const gchar* content_type, const gchar* dlna_profile, gint audio_bitrate, gint video_bitrate, const gchar* container_caps, const gchar* audio_codec_caps, const gchar* video_codec_caps, const gchar* extension, const gchar* restrictions);
RygelVideoTranscoder* rygel_video_transcoder_construct (GType object_type, const gchar* content_type, const gchar* dlna_profile, gint audio_bitrate, gint video_bitrate, const gchar* container_caps, const gchar* audio_codec_caps, const gchar* video_codec_caps, const gchar* extension, const gchar* restrictions);
void rygel_gst_transcoder_set_preset (RygelGstTranscoder* self, const gchar* value);
static GUPnPDIDLLiteResource* rygel_avc_transcoder_real_add_resource (RygelTranscoder* base, GUPnPDIDLLiteItem* didl_item, RygelMediaItem* item, RygelTranscodeManager* manager, GError** error);


RygelAVCTranscoder* rygel_avc_transcoder_construct (GType object_type) {
	RygelAVCTranscoder * self = NULL;
#line 41 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	self = (RygelAVCTranscoder*) rygel_video_transcoder_construct (object_type, "video/mp4", "AVC_MP4_BL_CIF15_AAC_520", RYGEL_AVC_TRANSCODER_AUDIO_BITRATE, RYGEL_AVC_TRANSCODER_VIDEO_BITRATE, RYGEL_AVC_TRANSCODER_CONTAINER, RYGEL_AVC_TRANSCODER_AUDIO_CAPS, RYGEL_AVC_TRANSCODER_VIDEO_CAPS, "mp4", RYGEL_AVC_TRANSCODER_RESTRICTIONS);
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	rygel_gst_transcoder_set_preset ((RygelGstTranscoder*) self, "Rygel AVC_MP4_BL_CIF15_AAC_520 preset");
#line 40 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	return self;
#line 163 "rygel-avc-transcoder.c"
}


RygelAVCTranscoder* rygel_avc_transcoder_new (void) {
#line 40 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	return rygel_avc_transcoder_construct (RYGEL_TYPE_AVC_TRANSCODER);
#line 170 "rygel-avc-transcoder.c"
}


static GUPnPDIDLLiteResource* rygel_avc_transcoder_real_add_resource (RygelTranscoder* base, GUPnPDIDLLiteItem* didl_item, RygelMediaItem* item, RygelTranscodeManager* manager, GError** error) {
	RygelAVCTranscoder * self;
	GUPnPDIDLLiteResource* result = NULL;
	GUPnPDIDLLiteResource* resource = NULL;
	GUPnPDIDLLiteItem* _tmp0_ = NULL;
	RygelMediaItem* _tmp1_ = NULL;
	RygelTranscodeManager* _tmp2_ = NULL;
	GUPnPDIDLLiteResource* _tmp3_ = NULL;
	GError * _inner_error_ = NULL;
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	self = (RygelAVCTranscoder*) base;
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	g_return_val_if_fail (didl_item != NULL, NULL);
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	g_return_val_if_fail (item != NULL, NULL);
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	g_return_val_if_fail (manager != NULL, NULL);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	_tmp0_ = didl_item;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	_tmp1_ = item;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	_tmp2_ = manager;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	_tmp3_ = RYGEL_TRANSCODER_CLASS (rygel_avc_transcoder_parent_class)->add_resource ((RygelTranscoder*) G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_VIDEO_TRANSCODER, RygelVideoTranscoder), _tmp0_, _tmp1_, _tmp2_, &_inner_error_);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	resource = _tmp3_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	if (_inner_error_ != NULL) {
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
		g_propagate_error (error, _inner_error_);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
		return NULL;
#line 207 "rygel-avc-transcoder.c"
	}
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	if (resource == NULL) {
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
		result = NULL;
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
		_g_object_unref0 (resource);
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
		return result;
#line 217 "rygel-avc-transcoder.c"
	}
#line 62 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	gupnp_didl_lite_resource_set_width (resource, 352);
#line 63 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	gupnp_didl_lite_resource_set_height (resource, 288);
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	result = resource;
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	return result;
#line 227 "rygel-avc-transcoder.c"
}


static void rygel_avc_transcoder_class_init (RygelAVCTranscoderClass * klass) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	rygel_avc_transcoder_parent_class = g_type_class_peek_parent (klass);
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/media-engines/gstreamer/rygel-avc-transcoder.vala"
	RYGEL_TRANSCODER_CLASS (klass)->add_resource = rygel_avc_transcoder_real_add_resource;
#line 236 "rygel-avc-transcoder.c"
}


static void rygel_avc_transcoder_instance_init (RygelAVCTranscoder * self) {
}


/**
 * Transcoder for H.264 in MP4 conforming to DLNA profile
 * AVC_MP4_BL_CIF15_AAC_520 (15 fps, CIF resolution)
 */
GType rygel_avc_transcoder_get_type (void) {
	static volatile gsize rygel_avc_transcoder_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_avc_transcoder_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelAVCTranscoderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_avc_transcoder_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelAVCTranscoder), 0, (GInstanceInitFunc) rygel_avc_transcoder_instance_init, NULL };
		GType rygel_avc_transcoder_type_id;
		rygel_avc_transcoder_type_id = g_type_register_static (RYGEL_TYPE_VIDEO_TRANSCODER, "RygelAVCTranscoder", &g_define_type_info, 0);
		g_once_init_leave (&rygel_avc_transcoder_type_id__volatile, rygel_avc_transcoder_type_id);
	}
	return rygel_avc_transcoder_type_id__volatile;
}



