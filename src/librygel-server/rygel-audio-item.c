/* rygel-audio-item.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-audio-item.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 * Copyright (C) 2010 Nokia Corporation.
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
#include <libgupnp-av/gupnp-av.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define RYGEL_TYPE_MEDIA_OBJECT (rygel_media_object_get_type ())
#define RYGEL_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObject))
#define RYGEL_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))
#define RYGEL_IS_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_IS_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_MEDIA_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))

typedef struct _RygelMediaObject RygelMediaObject;
typedef struct _RygelMediaObjectClass RygelMediaObjectClass;
typedef struct _RygelMediaObjectPrivate RygelMediaObjectPrivate;

#define RYGEL_TYPE_SERIALIZER (rygel_serializer_get_type ())
#define RYGEL_SERIALIZER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SERIALIZER, RygelSerializer))
#define RYGEL_SERIALIZER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SERIALIZER, RygelSerializerClass))
#define RYGEL_IS_SERIALIZER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SERIALIZER))
#define RYGEL_IS_SERIALIZER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SERIALIZER))
#define RYGEL_SERIALIZER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SERIALIZER, RygelSerializerClass))

typedef struct _RygelSerializer RygelSerializer;
typedef struct _RygelSerializerClass RygelSerializerClass;

#define RYGEL_TYPE_TRANSCODE_MANAGER (rygel_transcode_manager_get_type ())
#define RYGEL_TRANSCODE_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_TRANSCODE_MANAGER, RygelTranscodeManager))
#define RYGEL_TRANSCODE_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_TRANSCODE_MANAGER, RygelTranscodeManagerClass))
#define RYGEL_IS_TRANSCODE_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_TRANSCODE_MANAGER))
#define RYGEL_IS_TRANSCODE_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_TRANSCODE_MANAGER))
#define RYGEL_TRANSCODE_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_TRANSCODE_MANAGER, RygelTranscodeManagerClass))

typedef struct _RygelTranscodeManager RygelTranscodeManager;
typedef struct _RygelTranscodeManagerClass RygelTranscodeManagerClass;

#define RYGEL_TYPE_HTTP_SERVER (rygel_http_server_get_type ())
#define RYGEL_HTTP_SERVER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_SERVER, RygelHTTPServer))
#define RYGEL_HTTP_SERVER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_SERVER, RygelHTTPServerClass))
#define RYGEL_IS_HTTP_SERVER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_SERVER))
#define RYGEL_IS_HTTP_SERVER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_SERVER))
#define RYGEL_HTTP_SERVER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_SERVER, RygelHTTPServerClass))

typedef struct _RygelHTTPServer RygelHTTPServer;
typedef struct _RygelHTTPServerClass RygelHTTPServerClass;

#define RYGEL_TYPE_MEDIA_CONTAINER (rygel_media_container_get_type ())
#define RYGEL_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainer))
#define RYGEL_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))
#define RYGEL_IS_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_IS_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_MEDIA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))

typedef struct _RygelMediaContainer RygelMediaContainer;
typedef struct _RygelMediaContainerClass RygelMediaContainerClass;

#define RYGEL_TYPE_MEDIA_ITEM (rygel_media_item_get_type ())
#define RYGEL_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem))
#define RYGEL_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))
#define RYGEL_IS_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_IS_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_MEDIA_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))

typedef struct _RygelMediaItem RygelMediaItem;
typedef struct _RygelMediaItemClass RygelMediaItemClass;
typedef struct _RygelMediaItemPrivate RygelMediaItemPrivate;

#define RYGEL_TYPE_DATA_SOURCE (rygel_data_source_get_type ())
#define RYGEL_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DATA_SOURCE, RygelDataSource))
#define RYGEL_IS_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DATA_SOURCE))
#define RYGEL_DATA_SOURCE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_DATA_SOURCE, RygelDataSourceIface))

typedef struct _RygelDataSource RygelDataSource;
typedef struct _RygelDataSourceIface RygelDataSourceIface;

#define RYGEL_TYPE_HTTP_SEEK (rygel_http_seek_get_type ())
#define RYGEL_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeek))
#define RYGEL_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))
#define RYGEL_IS_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_IS_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_HTTP_SEEK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))

typedef struct _RygelHTTPSeek RygelHTTPSeek;
typedef struct _RygelHTTPSeekClass RygelHTTPSeekClass;

#define RYGEL_TYPE_AUDIO_ITEM (rygel_audio_item_get_type ())
#define RYGEL_AUDIO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_AUDIO_ITEM, RygelAudioItem))
#define RYGEL_AUDIO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_AUDIO_ITEM, RygelAudioItemClass))
#define RYGEL_IS_AUDIO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_AUDIO_ITEM))
#define RYGEL_IS_AUDIO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_AUDIO_ITEM))
#define RYGEL_AUDIO_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_AUDIO_ITEM, RygelAudioItemClass))

typedef struct _RygelAudioItem RygelAudioItem;
typedef struct _RygelAudioItemClass RygelAudioItemClass;
typedef struct _RygelAudioItemPrivate RygelAudioItemPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _RygelMediaObject {
	GObject parent_instance;
	RygelMediaObjectPrivate * priv;
	GeeArrayList* uris;
	RygelMediaContainer* parent_ptr;
};

struct _RygelMediaObjectClass {
	GObjectClass parent_class;
	GUPnPDIDLLiteObject* (*serialize) (RygelMediaObject* self, RygelSerializer* serializer, RygelHTTPServer* http_server, GError** error);
	void (*apply_didl_lite) (RygelMediaObject* self, GUPnPDIDLLiteObject* didl_object);
	gint (*compare_by_property) (RygelMediaObject* self, RygelMediaObject* media_object, const gchar* property);
	GUPnPDIDLLiteResource* (*add_resource) (RygelMediaObject* self, GUPnPDIDLLiteObject* object, const gchar* uri, const gchar* protocol, const gchar* import_uri, GError** error);
	GUPnPOCMFlags (*get_ocm_flags) (RygelMediaObject* self);
};

struct _RygelDataSourceIface {
	GTypeInterface parent_iface;
	void (*start) (RygelDataSource* self, RygelHTTPSeek* offsets, GError** error);
	void (*freeze) (RygelDataSource* self);
	void (*thaw) (RygelDataSource* self);
	void (*stop) (RygelDataSource* self);
};

struct _RygelMediaItem {
	RygelMediaObject parent_instance;
	RygelMediaItemPrivate * priv;
};

struct _RygelMediaItemClass {
	RygelMediaObjectClass parent_class;
	RygelDataSource* (*create_stream_source) (RygelMediaItem* self, const gchar* host_ip);
	gboolean (*streamable) (RygelMediaItem* self);
	void (*add_uri) (RygelMediaItem* self, const gchar* uri);
	void (*add_proxy_resources) (RygelMediaItem* self, RygelHTTPServer* server, GUPnPDIDLLiteItem* didl_item, GError** error);
	GUPnPProtocolInfo* (*get_protocol_info) (RygelMediaItem* self, const gchar* uri, const gchar* protocol);
	void (*add_resources) (RygelMediaItem* self, GUPnPDIDLLiteItem* didl_item, gboolean allow_internal, GError** error);
};

struct _RygelAudioItem {
	RygelMediaItem parent_instance;
	RygelAudioItemPrivate * priv;
};

struct _RygelAudioItemClass {
	RygelMediaItemClass parent_class;
};

struct _RygelAudioItemPrivate {
	glong _duration;
	gint _bitrate;
	gint _sample_freq;
	gint _bits_per_sample;
	gint _channels;
};


static gpointer rygel_audio_item_parent_class = NULL;

GType rygel_media_object_get_type (void) G_GNUC_CONST;
GType rygel_serializer_get_type (void) G_GNUC_CONST;
GType rygel_transcode_manager_get_type (void) G_GNUC_CONST;
GType rygel_http_server_get_type (void) G_GNUC_CONST;
GType rygel_media_container_get_type (void) G_GNUC_CONST;
GType rygel_media_item_get_type (void) G_GNUC_CONST;
GType rygel_http_seek_get_type (void) G_GNUC_CONST;
GType rygel_data_source_get_type (void) G_GNUC_CONST;
GType rygel_audio_item_get_type (void) G_GNUC_CONST;
#define RYGEL_AUDIO_ITEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_AUDIO_ITEM, RygelAudioItemPrivate))
enum  {
	RYGEL_AUDIO_ITEM_DUMMY_PROPERTY,
	RYGEL_AUDIO_ITEM_DURATION,
	RYGEL_AUDIO_ITEM_BITRATE,
	RYGEL_AUDIO_ITEM_SAMPLE_FREQ,
	RYGEL_AUDIO_ITEM_BITS_PER_SAMPLE,
	RYGEL_AUDIO_ITEM_CHANNELS
};
#define RYGEL_AUDIO_ITEM_UPNP_CLASS "object.item.audioItem"
RygelAudioItem* rygel_audio_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class);
RygelAudioItem* rygel_audio_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class);
static gboolean rygel_audio_item_real_streamable (RygelMediaItem* base);
static GUPnPDIDLLiteResource* rygel_audio_item_real_add_resource (RygelMediaObject* base, GUPnPDIDLLiteObject* didl_object, const gchar* uri, const gchar* protocol, const gchar* import_uri, GError** error);
GUPnPDIDLLiteResource* rygel_media_object_add_resource (RygelMediaObject* self, GUPnPDIDLLiteObject* object, const gchar* uri, const gchar* protocol, const gchar* import_uri, GError** error);
glong rygel_audio_item_get_duration (RygelAudioItem* self);
gint rygel_audio_item_get_bitrate (RygelAudioItem* self);
gint rygel_audio_item_get_sample_freq (RygelAudioItem* self);
gint rygel_audio_item_get_bits_per_sample (RygelAudioItem* self);
gint rygel_audio_item_get_channels (RygelAudioItem* self);
void rygel_audio_item_set_duration (RygelAudioItem* self, glong value);
void rygel_audio_item_set_bitrate (RygelAudioItem* self, gint value);
void rygel_audio_item_set_sample_freq (RygelAudioItem* self, gint value);
void rygel_audio_item_set_bits_per_sample (RygelAudioItem* self, gint value);
void rygel_audio_item_set_channels (RygelAudioItem* self, gint value);
static void rygel_audio_item_finalize (GObject* obj);
static void _vala_rygel_audio_item_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_audio_item_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


RygelAudioItem* rygel_audio_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class) {
	RygelAudioItem * self = NULL;
	const gchar* _tmp0_ = NULL;
	RygelMediaContainer* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (id != NULL, NULL);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (title != NULL, NULL);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (upnp_class != NULL, NULL);
#line 44 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = id;
#line 44 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp1_ = parent;
#line 44 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp2_ = title;
#line 44 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp3_ = upnp_class;
#line 44 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self = (RygelAudioItem*) g_object_new (object_type, "id", _tmp0_, "parent", _tmp1_, "title", _tmp2_, "upnp-class", _tmp3_, NULL);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	return self;
#line 253 "rygel-audio-item.c"
}


RygelAudioItem* rygel_audio_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class) {
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	return rygel_audio_item_construct (RYGEL_TYPE_AUDIO_ITEM, id, parent, title, upnp_class);
#line 260 "rygel-audio-item.c"
}


static gboolean rygel_audio_item_real_streamable (RygelMediaItem* base) {
	RygelAudioItem * self;
	gboolean result = FALSE;
#line 50 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self = (RygelAudioItem*) base;
#line 51 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	result = TRUE;
#line 51 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	return result;
#line 273 "rygel-audio-item.c"
}


static GUPnPDIDLLiteResource* rygel_audio_item_real_add_resource (RygelMediaObject* base, GUPnPDIDLLiteObject* didl_object, const gchar* uri, const gchar* protocol, const gchar* import_uri, GError** error) {
	RygelAudioItem * self;
	GUPnPDIDLLiteResource* result = NULL;
	GUPnPDIDLLiteResource* res = NULL;
	GUPnPDIDLLiteObject* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	GUPnPDIDLLiteResource* _tmp4_ = NULL;
	glong _tmp5_ = 0L;
	gint _tmp6_ = 0;
	gint _tmp7_ = 0;
	gint _tmp8_ = 0;
	gint _tmp9_ = 0;
	GError * _inner_error_ = NULL;
#line 54 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self = (RygelAudioItem*) base;
#line 54 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (didl_object != NULL, NULL);
#line 54 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (protocol != NULL, NULL);
#line 60 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = didl_object;
#line 60 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp1_ = uri;
#line 60 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp2_ = protocol;
#line 60 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp3_ = import_uri;
#line 60 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp4_ = RYGEL_MEDIA_OBJECT_CLASS (rygel_audio_item_parent_class)->add_resource ((RygelMediaObject*) G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem), _tmp0_, _tmp1_, _tmp2_, _tmp3_, &_inner_error_);
#line 60 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	res = _tmp4_;
#line 60 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	if (_inner_error_ != NULL) {
#line 60 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		g_propagate_error (error, _inner_error_);
#line 60 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		return NULL;
#line 316 "rygel-audio-item.c"
	}
#line 62 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp5_ = self->priv->_duration;
#line 62 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	gupnp_didl_lite_resource_set_duration (res, _tmp5_);
#line 63 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp6_ = self->priv->_bitrate;
#line 63 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	gupnp_didl_lite_resource_set_bitrate (res, _tmp6_);
#line 64 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp7_ = self->priv->_sample_freq;
#line 64 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	gupnp_didl_lite_resource_set_sample_freq (res, _tmp7_);
#line 65 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp8_ = self->priv->_bits_per_sample;
#line 65 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	gupnp_didl_lite_resource_set_bits_per_sample (res, _tmp8_);
#line 66 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp9_ = self->priv->_channels;
#line 66 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	gupnp_didl_lite_resource_set_audio_channels (res, _tmp9_);
#line 68 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	result = res;
#line 68 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	return result;
#line 342 "rygel-audio-item.c"
}


glong rygel_audio_item_get_duration (RygelAudioItem* self) {
	glong result;
	glong _tmp0_ = 0L;
#line 33 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (self != NULL, 0L);
#line 33 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = self->priv->_duration;
#line 33 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	result = _tmp0_;
#line 33 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	return result;
#line 357 "rygel-audio-item.c"
}


void rygel_audio_item_set_duration (RygelAudioItem* self, glong value) {
	glong _tmp0_ = 0L;
#line 33 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_if_fail (self != NULL);
#line 33 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = value;
#line 33 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv->_duration = _tmp0_;
#line 33 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_object_notify ((GObject *) self, "duration");
#line 371 "rygel-audio-item.c"
}


gint rygel_audio_item_get_bitrate (RygelAudioItem* self) {
	gint result;
	gint _tmp0_ = 0;
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = self->priv->_bitrate;
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	result = _tmp0_;
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	return result;
#line 386 "rygel-audio-item.c"
}


void rygel_audio_item_set_bitrate (RygelAudioItem* self, gint value) {
	gint _tmp0_ = 0;
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_if_fail (self != NULL);
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = value;
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv->_bitrate = _tmp0_;
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_object_notify ((GObject *) self, "bitrate");
#line 400 "rygel-audio-item.c"
}


gint rygel_audio_item_get_sample_freq (RygelAudioItem* self) {
	gint result;
	gint _tmp0_ = 0;
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = self->priv->_sample_freq;
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	result = _tmp0_;
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	return result;
#line 415 "rygel-audio-item.c"
}


void rygel_audio_item_set_sample_freq (RygelAudioItem* self, gint value) {
	gint _tmp0_ = 0;
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_if_fail (self != NULL);
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = value;
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv->_sample_freq = _tmp0_;
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_object_notify ((GObject *) self, "sample-freq");
#line 429 "rygel-audio-item.c"
}


gint rygel_audio_item_get_bits_per_sample (RygelAudioItem* self) {
	gint result;
	gint _tmp0_ = 0;
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = self->priv->_bits_per_sample;
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	result = _tmp0_;
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	return result;
#line 444 "rygel-audio-item.c"
}


void rygel_audio_item_set_bits_per_sample (RygelAudioItem* self, gint value) {
	gint _tmp0_ = 0;
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_if_fail (self != NULL);
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = value;
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv->_bits_per_sample = _tmp0_;
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_object_notify ((GObject *) self, "bits-per-sample");
#line 458 "rygel-audio-item.c"
}


gint rygel_audio_item_get_channels (RygelAudioItem* self) {
	gint result;
	gint _tmp0_ = 0;
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = self->priv->_channels;
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	result = _tmp0_;
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	return result;
#line 473 "rygel-audio-item.c"
}


void rygel_audio_item_set_channels (RygelAudioItem* self, gint value) {
	gint _tmp0_ = 0;
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_return_if_fail (self != NULL);
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	_tmp0_ = value;
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv->_channels = _tmp0_;
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_object_notify ((GObject *) self, "channels");
#line 487 "rygel-audio-item.c"
}


static void rygel_audio_item_class_init (RygelAudioItemClass * klass) {
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	rygel_audio_item_parent_class = g_type_class_peek_parent (klass);
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_type_class_add_private (klass, sizeof (RygelAudioItemPrivate));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	RYGEL_MEDIA_ITEM_CLASS (klass)->streamable = rygel_audio_item_real_streamable;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	RYGEL_MEDIA_OBJECT_CLASS (klass)->add_resource = rygel_audio_item_real_add_resource;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_audio_item_get_property;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_audio_item_set_property;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_audio_item_finalize;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_AUDIO_ITEM_DURATION, g_param_spec_long ("duration", "duration", "duration", G_MINLONG, G_MAXLONG, (glong) (-1), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_AUDIO_ITEM_BITRATE, g_param_spec_int ("bitrate", "bitrate", "bitrate", G_MININT, G_MAXINT, -1, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_AUDIO_ITEM_SAMPLE_FREQ, g_param_spec_int ("sample-freq", "sample-freq", "sample-freq", G_MININT, G_MAXINT, -1, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_AUDIO_ITEM_BITS_PER_SAMPLE, g_param_spec_int ("bits-per-sample", "bits-per-sample", "bits-per-sample", G_MININT, G_MAXINT, -1, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_AUDIO_ITEM_CHANNELS, g_param_spec_int ("channels", "channels", "channels", G_MININT, G_MAXINT, -1, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 516 "rygel-audio-item.c"
}


static void rygel_audio_item_instance_init (RygelAudioItem * self) {
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv = RYGEL_AUDIO_ITEM_GET_PRIVATE (self);
#line 33 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv->_duration = (glong) (-1);
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv->_bitrate = -1;
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv->_sample_freq = -1;
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv->_bits_per_sample = -1;
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self->priv->_channels = -1;
#line 533 "rygel-audio-item.c"
}


static void rygel_audio_item_finalize (GObject* obj) {
	RygelAudioItem * self;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_AUDIO_ITEM, RygelAudioItem);
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	G_OBJECT_CLASS (rygel_audio_item_parent_class)->finalize (obj);
#line 543 "rygel-audio-item.c"
}


/**
 * Represents an audio item.
 */
GType rygel_audio_item_get_type (void) {
	static volatile gsize rygel_audio_item_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_audio_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelAudioItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_audio_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelAudioItem), 0, (GInstanceInitFunc) rygel_audio_item_instance_init, NULL };
		GType rygel_audio_item_type_id;
		rygel_audio_item_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_ITEM, "RygelAudioItem", &g_define_type_info, 0);
		g_once_init_leave (&rygel_audio_item_type_id__volatile, rygel_audio_item_type_id);
	}
	return rygel_audio_item_type_id__volatile;
}


static void _vala_rygel_audio_item_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelAudioItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_AUDIO_ITEM, RygelAudioItem);
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	switch (property_id) {
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		case RYGEL_AUDIO_ITEM_DURATION:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		g_value_set_long (value, rygel_audio_item_get_duration (self));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		case RYGEL_AUDIO_ITEM_BITRATE:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		g_value_set_int (value, rygel_audio_item_get_bitrate (self));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		case RYGEL_AUDIO_ITEM_SAMPLE_FREQ:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		g_value_set_int (value, rygel_audio_item_get_sample_freq (self));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		case RYGEL_AUDIO_ITEM_BITS_PER_SAMPLE:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		g_value_set_int (value, rygel_audio_item_get_bits_per_sample (self));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		case RYGEL_AUDIO_ITEM_CHANNELS:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		g_value_set_int (value, rygel_audio_item_get_channels (self));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 597 "rygel-audio-item.c"
		default:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 603 "rygel-audio-item.c"
	}
}


static void _vala_rygel_audio_item_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelAudioItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_AUDIO_ITEM, RygelAudioItem);
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
	switch (property_id) {
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		case RYGEL_AUDIO_ITEM_DURATION:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		rygel_audio_item_set_duration (self, g_value_get_long (value));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		case RYGEL_AUDIO_ITEM_BITRATE:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		rygel_audio_item_set_bitrate (self, g_value_get_int (value));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		case RYGEL_AUDIO_ITEM_SAMPLE_FREQ:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		rygel_audio_item_set_sample_freq (self, g_value_get_int (value));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		case RYGEL_AUDIO_ITEM_BITS_PER_SAMPLE:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		rygel_audio_item_set_bits_per_sample (self, g_value_get_int (value));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		case RYGEL_AUDIO_ITEM_CHANNELS:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		rygel_audio_item_set_channels (self, g_value_get_int (value));
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 643 "rygel-audio-item.c"
		default:
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-audio-item.vala"
		break;
#line 649 "rygel-audio-item.c"
	}
}



