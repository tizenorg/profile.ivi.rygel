/* rygel-image-item.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-image-item.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 * Copyright (C) 2010 Nokia Corporation.
 * Copyright (C) 2012 Intel Corporation.
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
#include <rygel-core.h>


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

#define RYGEL_TYPE_VISUAL_ITEM (rygel_visual_item_get_type ())
#define RYGEL_VISUAL_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_VISUAL_ITEM, RygelVisualItem))
#define RYGEL_IS_VISUAL_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_VISUAL_ITEM))
#define RYGEL_VISUAL_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_VISUAL_ITEM, RygelVisualItemIface))

typedef struct _RygelVisualItem RygelVisualItem;
typedef struct _RygelVisualItemIface RygelVisualItemIface;

#define RYGEL_TYPE_THUMBNAIL (rygel_thumbnail_get_type ())
#define RYGEL_THUMBNAIL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_THUMBNAIL, RygelThumbnail))
#define RYGEL_THUMBNAIL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_THUMBNAIL, RygelThumbnailClass))
#define RYGEL_IS_THUMBNAIL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_THUMBNAIL))
#define RYGEL_IS_THUMBNAIL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_THUMBNAIL))
#define RYGEL_THUMBNAIL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_THUMBNAIL, RygelThumbnailClass))

typedef struct _RygelThumbnail RygelThumbnail;
typedef struct _RygelThumbnailClass RygelThumbnailClass;

#define RYGEL_TYPE_IMAGE_ITEM (rygel_image_item_get_type ())
#define RYGEL_IMAGE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_IMAGE_ITEM, RygelImageItem))
#define RYGEL_IMAGE_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_IMAGE_ITEM, RygelImageItemClass))
#define RYGEL_IS_IMAGE_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_IMAGE_ITEM))
#define RYGEL_IS_IMAGE_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_IMAGE_ITEM))
#define RYGEL_IMAGE_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_IMAGE_ITEM, RygelImageItemClass))

typedef struct _RygelImageItem RygelImageItem;
typedef struct _RygelImageItemClass RygelImageItemClass;
typedef struct _RygelImageItemPrivate RygelImageItemPrivate;
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

struct _RygelVisualItemIface {
	GTypeInterface parent_iface;
	gint (*get_width) (RygelVisualItem* self);
	void (*set_width) (RygelVisualItem* self, gint value);
	gint (*get_height) (RygelVisualItem* self);
	void (*set_height) (RygelVisualItem* self, gint value);
	gint (*get_color_depth) (RygelVisualItem* self);
	void (*set_color_depth) (RygelVisualItem* self, gint value);
	GeeArrayList* (*get_thumbnails) (RygelVisualItem* self);
	void (*set_thumbnails) (RygelVisualItem* self, GeeArrayList* value);
};

struct _RygelImageItem {
	RygelMediaItem parent_instance;
	RygelImageItemPrivate * priv;
};

struct _RygelImageItemClass {
	RygelMediaItemClass parent_class;
};

struct _RygelImageItemPrivate {
	gint _width;
	gint _height;
	gint _color_depth;
	GeeArrayList* _thumbnails;
};


static gpointer rygel_image_item_parent_class = NULL;
static RygelVisualItemIface* rygel_image_item_rygel_visual_item_parent_iface = NULL;

GType rygel_media_object_get_type (void) G_GNUC_CONST;
GType rygel_serializer_get_type (void) G_GNUC_CONST;
GType rygel_transcode_manager_get_type (void) G_GNUC_CONST;
GType rygel_http_server_get_type (void) G_GNUC_CONST;
GType rygel_media_container_get_type (void) G_GNUC_CONST;
GType rygel_media_item_get_type (void) G_GNUC_CONST;
GType rygel_http_seek_get_type (void) G_GNUC_CONST;
GType rygel_data_source_get_type (void) G_GNUC_CONST;
GType rygel_thumbnail_get_type (void) G_GNUC_CONST;
GType rygel_visual_item_get_type (void) G_GNUC_CONST;
GType rygel_image_item_get_type (void) G_GNUC_CONST;
#define RYGEL_IMAGE_ITEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_IMAGE_ITEM, RygelImageItemPrivate))
enum  {
	RYGEL_IMAGE_ITEM_DUMMY_PROPERTY,
	RYGEL_IMAGE_ITEM_WIDTH,
	RYGEL_IMAGE_ITEM_HEIGHT,
	RYGEL_IMAGE_ITEM_COLOR_DEPTH,
	RYGEL_IMAGE_ITEM_THUMBNAILS
};
#define RYGEL_IMAGE_ITEM_UPNP_CLASS "object.item.imageItem"
RygelImageItem* rygel_image_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class);
RygelImageItem* rygel_image_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class);
static void rygel_image_item_real_constructed (GObject* base);
void rygel_visual_item_set_thumbnails (RygelVisualItem* self, GeeArrayList* value);
static gboolean rygel_image_item_real_streamable (RygelMediaItem* base);
static void rygel_image_item_real_add_uri (RygelMediaItem* base, const gchar* uri);
void rygel_media_item_add_uri (RygelMediaItem* self, const gchar* uri);
void rygel_visual_item_add_thumbnail_for_uri (RygelVisualItem* self, const gchar* uri, const gchar* mime_type);
const gchar* rygel_media_item_get_mime_type (RygelMediaItem* self);
static void rygel_image_item_real_add_resources (RygelMediaItem* base, GUPnPDIDLLiteItem* didl_item, gboolean allow_internal, GError** error);
void rygel_media_item_add_resources (RygelMediaItem* self, GUPnPDIDLLiteItem* didl_item, gboolean allow_internal, GError** error);
void rygel_visual_item_add_thumbnail_resources (RygelVisualItem* self, GUPnPDIDLLiteItem* didl_item, gboolean allow_internal, GError** error);
static GUPnPDIDLLiteResource* rygel_image_item_real_add_resource (RygelMediaObject* base, GUPnPDIDLLiteObject* didl_object, const gchar* uri, const gchar* protocol, const gchar* import_uri, GError** error);
GUPnPDIDLLiteResource* rygel_media_object_add_resource (RygelMediaObject* self, GUPnPDIDLLiteObject* object, const gchar* uri, const gchar* protocol, const gchar* import_uri, GError** error);
void rygel_visual_item_add_visual_props (RygelVisualItem* self, GUPnPDIDLLiteResource* res);
static void rygel_image_item_real_add_proxy_resources (RygelMediaItem* base, RygelHTTPServer* server, GUPnPDIDLLiteItem* didl_item, GError** error);
void rygel_media_item_add_proxy_resources (RygelMediaItem* self, RygelHTTPServer* server, GUPnPDIDLLiteItem* didl_item, GError** error);
gboolean rygel_media_item_get_place_holder (RygelMediaItem* self);
void rygel_visual_item_add_thumbnail_proxy_resources (RygelVisualItem* self, RygelHTTPServer* server, GUPnPDIDLLiteItem* didl_item, GError** error);
static GUPnPProtocolInfo* rygel_image_item_real_get_protocol_info (RygelMediaItem* base, const gchar* uri, const gchar* protocol);
GUPnPProtocolInfo* rygel_media_item_get_protocol_info (RygelMediaItem* self, const gchar* uri, const gchar* protocol);
static void rygel_image_item_finalize (GObject* obj);
gint rygel_visual_item_get_width (RygelVisualItem* self);
gint rygel_visual_item_get_height (RygelVisualItem* self);
gint rygel_visual_item_get_color_depth (RygelVisualItem* self);
GeeArrayList* rygel_visual_item_get_thumbnails (RygelVisualItem* self);
static void _vala_rygel_image_item_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
void rygel_visual_item_set_width (RygelVisualItem* self, gint value);
void rygel_visual_item_set_height (RygelVisualItem* self, gint value);
void rygel_visual_item_set_color_depth (RygelVisualItem* self, gint value);
static void _vala_rygel_image_item_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


RygelImageItem* rygel_image_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class) {
	RygelImageItem * self = NULL;
	const gchar* _tmp0_;
	RygelMediaContainer* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	g_return_val_if_fail (id != NULL, NULL);
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (title != NULL, NULL);
	g_return_val_if_fail (upnp_class != NULL, NULL);
	_tmp0_ = id;
	_tmp1_ = parent;
	_tmp2_ = title;
	_tmp3_ = upnp_class;
	self = (RygelImageItem*) g_object_new (object_type, "id", _tmp0_, "parent", _tmp1_, "title", _tmp2_, "upnp-class", _tmp3_, NULL);
	return self;
}


RygelImageItem* rygel_image_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class) {
	return rygel_image_item_construct (RYGEL_TYPE_IMAGE_ITEM, id, parent, title, upnp_class);
}


static void rygel_image_item_real_constructed (GObject* base) {
	RygelImageItem * self;
	GeeArrayList* _tmp0_;
	GeeArrayList* _tmp1_;
	self = (RygelImageItem*) base;
	G_OBJECT_CLASS (rygel_image_item_parent_class)->constructed ((GObject*) G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem));
	_tmp0_ = gee_array_list_new (RYGEL_TYPE_THUMBNAIL, (GBoxedCopyFunc) rygel_icon_info_ref, rygel_icon_info_unref, NULL, NULL, NULL);
	_tmp1_ = _tmp0_;
	rygel_visual_item_set_thumbnails ((RygelVisualItem*) self, _tmp1_);
	_g_object_unref0 (_tmp1_);
}


static gboolean rygel_image_item_real_streamable (RygelMediaItem* base) {
	RygelImageItem * self;
	gboolean result = FALSE;
	self = (RygelImageItem*) base;
	result = FALSE;
	return result;
}


static void rygel_image_item_real_add_uri (RygelMediaItem* base, const gchar* uri) {
	RygelImageItem * self;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	self = (RygelImageItem*) base;
	g_return_if_fail (uri != NULL);
	_tmp0_ = uri;
	RYGEL_MEDIA_ITEM_CLASS (rygel_image_item_parent_class)->add_uri (G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem), _tmp0_);
	_tmp1_ = uri;
	_tmp2_ = rygel_media_item_get_mime_type ((RygelMediaItem*) self);
	_tmp3_ = _tmp2_;
	rygel_visual_item_add_thumbnail_for_uri ((RygelVisualItem*) self, _tmp1_, _tmp3_);
}


static void rygel_image_item_real_add_resources (RygelMediaItem* base, GUPnPDIDLLiteItem* didl_item, gboolean allow_internal, GError** error) {
	RygelImageItem * self;
	GUPnPDIDLLiteItem* _tmp0_;
	gboolean _tmp1_;
	GUPnPDIDLLiteItem* _tmp2_;
	gboolean _tmp3_;
	GError * _inner_error_ = NULL;
	self = (RygelImageItem*) base;
	g_return_if_fail (didl_item != NULL);
	_tmp0_ = didl_item;
	_tmp1_ = allow_internal;
	RYGEL_MEDIA_ITEM_CLASS (rygel_image_item_parent_class)->add_resources (G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem), _tmp0_, _tmp1_, &_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		return;
	}
	_tmp2_ = didl_item;
	_tmp3_ = allow_internal;
	rygel_visual_item_add_thumbnail_resources ((RygelVisualItem*) self, _tmp2_, _tmp3_, &_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		return;
	}
}


static GUPnPDIDLLiteResource* rygel_image_item_real_add_resource (RygelMediaObject* base, GUPnPDIDLLiteObject* didl_object, const gchar* uri, const gchar* protocol, const gchar* import_uri, GError** error) {
	RygelImageItem * self;
	GUPnPDIDLLiteResource* result = NULL;
	GUPnPDIDLLiteObject* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	GUPnPDIDLLiteResource* _tmp4_ = NULL;
	GUPnPDIDLLiteResource* res;
	GError * _inner_error_ = NULL;
	self = (RygelImageItem*) base;
	g_return_val_if_fail (didl_object != NULL, NULL);
	g_return_val_if_fail (protocol != NULL, NULL);
	_tmp0_ = didl_object;
	_tmp1_ = uri;
	_tmp2_ = protocol;
	_tmp3_ = import_uri;
	_tmp4_ = RYGEL_MEDIA_OBJECT_CLASS (rygel_image_item_parent_class)->add_resource ((RygelMediaObject*) G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem), _tmp0_, _tmp1_, _tmp2_, _tmp3_, &_inner_error_);
	res = _tmp4_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		return NULL;
	}
	rygel_visual_item_add_visual_props ((RygelVisualItem*) self, res);
	result = res;
	return result;
}


static void rygel_image_item_real_add_proxy_resources (RygelMediaItem* base, RygelHTTPServer* server, GUPnPDIDLLiteItem* didl_item, GError** error) {
	RygelImageItem * self;
	RygelHTTPServer* _tmp0_;
	GUPnPDIDLLiteItem* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	GError * _inner_error_ = NULL;
	self = (RygelImageItem*) base;
	g_return_if_fail (server != NULL);
	g_return_if_fail (didl_item != NULL);
	_tmp0_ = server;
	_tmp1_ = didl_item;
	RYGEL_MEDIA_ITEM_CLASS (rygel_image_item_parent_class)->add_proxy_resources (G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem), _tmp0_, _tmp1_, &_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		return;
	}
	_tmp2_ = rygel_media_item_get_place_holder ((RygelMediaItem*) self);
	_tmp3_ = _tmp2_;
	if (!_tmp3_) {
		RygelHTTPServer* _tmp4_;
		GUPnPDIDLLiteItem* _tmp5_;
		_tmp4_ = server;
		_tmp5_ = didl_item;
		rygel_visual_item_add_thumbnail_proxy_resources ((RygelVisualItem*) self, _tmp4_, _tmp5_, &_inner_error_);
		if (_inner_error_ != NULL) {
			g_propagate_error (error, _inner_error_);
			return;
		}
	}
}


static GUPnPProtocolInfo* rygel_image_item_real_get_protocol_info (RygelMediaItem* base, const gchar* uri, const gchar* protocol) {
	RygelImageItem * self;
	GUPnPProtocolInfo* result = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	GUPnPProtocolInfo* _tmp2_ = NULL;
	GUPnPProtocolInfo* protocol_info;
	GUPnPDLNAFlags _tmp3_;
	GUPnPDLNAFlags _tmp4_;
	self = (RygelImageItem*) base;
	g_return_val_if_fail (protocol != NULL, NULL);
	_tmp0_ = uri;
	_tmp1_ = protocol;
	_tmp2_ = RYGEL_MEDIA_ITEM_CLASS (rygel_image_item_parent_class)->get_protocol_info (G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem), _tmp0_, _tmp1_);
	protocol_info = _tmp2_;
	_tmp3_ = gupnp_protocol_info_get_dlna_flags (protocol_info);
	_tmp4_ = _tmp3_;
	gupnp_protocol_info_set_dlna_flags (protocol_info, _tmp4_ | GUPNP_DLNA_FLAGS_INTERACTIVE_TRANSFER_MODE);
	result = protocol_info;
	return result;
}


static gint rygel_image_item_real_get_width (RygelVisualItem* base) {
	gint result;
	RygelImageItem* self;
	gint _tmp0_;
	self = (RygelImageItem*) base;
	_tmp0_ = self->priv->_width;
	result = _tmp0_;
	return result;
}


static void rygel_image_item_real_set_width (RygelVisualItem* base, gint value) {
	RygelImageItem* self;
	gint _tmp0_;
	self = (RygelImageItem*) base;
	_tmp0_ = value;
	self->priv->_width = _tmp0_;
	g_object_notify ((GObject *) self, "width");
}


static gint rygel_image_item_real_get_height (RygelVisualItem* base) {
	gint result;
	RygelImageItem* self;
	gint _tmp0_;
	self = (RygelImageItem*) base;
	_tmp0_ = self->priv->_height;
	result = _tmp0_;
	return result;
}


static void rygel_image_item_real_set_height (RygelVisualItem* base, gint value) {
	RygelImageItem* self;
	gint _tmp0_;
	self = (RygelImageItem*) base;
	_tmp0_ = value;
	self->priv->_height = _tmp0_;
	g_object_notify ((GObject *) self, "height");
}


static gint rygel_image_item_real_get_color_depth (RygelVisualItem* base) {
	gint result;
	RygelImageItem* self;
	gint _tmp0_;
	self = (RygelImageItem*) base;
	_tmp0_ = self->priv->_color_depth;
	result = _tmp0_;
	return result;
}


static void rygel_image_item_real_set_color_depth (RygelVisualItem* base, gint value) {
	RygelImageItem* self;
	gint _tmp0_;
	self = (RygelImageItem*) base;
	_tmp0_ = value;
	self->priv->_color_depth = _tmp0_;
	g_object_notify ((GObject *) self, "color-depth");
}


static GeeArrayList* rygel_image_item_real_get_thumbnails (RygelVisualItem* base) {
	GeeArrayList* result;
	RygelImageItem* self;
	GeeArrayList* _tmp0_;
	self = (RygelImageItem*) base;
	_tmp0_ = self->priv->_thumbnails;
	result = _tmp0_;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void rygel_image_item_real_set_thumbnails (RygelVisualItem* base, GeeArrayList* value) {
	RygelImageItem* self;
	GeeArrayList* _tmp0_;
	GeeArrayList* _tmp1_;
	self = (RygelImageItem*) base;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_thumbnails);
	self->priv->_thumbnails = _tmp1_;
	g_object_notify ((GObject *) self, "thumbnails");
}


static void rygel_image_item_class_init (RygelImageItemClass * klass) {
	rygel_image_item_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelImageItemPrivate));
	G_OBJECT_CLASS (klass)->constructed = rygel_image_item_real_constructed;
	RYGEL_MEDIA_ITEM_CLASS (klass)->streamable = rygel_image_item_real_streamable;
	RYGEL_MEDIA_ITEM_CLASS (klass)->add_uri = rygel_image_item_real_add_uri;
	RYGEL_MEDIA_ITEM_CLASS (klass)->add_resources = rygel_image_item_real_add_resources;
	RYGEL_MEDIA_OBJECT_CLASS (klass)->add_resource = rygel_image_item_real_add_resource;
	RYGEL_MEDIA_ITEM_CLASS (klass)->add_proxy_resources = rygel_image_item_real_add_proxy_resources;
	RYGEL_MEDIA_ITEM_CLASS (klass)->get_protocol_info = rygel_image_item_real_get_protocol_info;
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_image_item_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_image_item_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_image_item_finalize;
	/**
	     * The width of the image in pixels.
	     * A value of -1 means that the width is unknown and will not, or did not, appear in DIDL-Lite XML.
	     */
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_IMAGE_ITEM_WIDTH, g_param_spec_int ("width", "width", "width", G_MININT, G_MAXINT, -1, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	     * The height of the image in pixels.
	     * A value of -1 means that the height is unknown and will not, or did not, appear in DIDL-Lite XML.
	     */
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_IMAGE_ITEM_HEIGHT, g_param_spec_int ("height", "height", "height", G_MININT, G_MAXINT, -1, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	     *The number of bits per pixel used to represent the image resource.
	     * A value of -1 means that the color depth is unknown and will not, or did not, appear in DIDL-Lite XML.
	     */
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_IMAGE_ITEM_COLOR_DEPTH, g_param_spec_int ("color-depth", "color-depth", "color-depth", G_MININT, G_MAXINT, -1, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	     * Thumbnail pictures to represent the image.
	     */
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_IMAGE_ITEM_THUMBNAILS, g_param_spec_object ("thumbnails", "thumbnails", "thumbnails", GEE_TYPE_ARRAY_LIST, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void rygel_image_item_rygel_visual_item_interface_init (RygelVisualItemIface * iface) {
	rygel_image_item_rygel_visual_item_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_width = rygel_image_item_real_get_width;
	iface->set_width = rygel_image_item_real_set_width;
	iface->get_height = rygel_image_item_real_get_height;
	iface->set_height = rygel_image_item_real_set_height;
	iface->get_color_depth = rygel_image_item_real_get_color_depth;
	iface->set_color_depth = rygel_image_item_real_set_color_depth;
	iface->get_thumbnails = rygel_image_item_real_get_thumbnails;
	iface->set_thumbnails = rygel_image_item_real_set_thumbnails;
}


static void rygel_image_item_instance_init (RygelImageItem * self) {
	self->priv = RYGEL_IMAGE_ITEM_GET_PRIVATE (self);
	self->priv->_width = -1;
	self->priv->_height = -1;
	self->priv->_color_depth = -1;
}


static void rygel_image_item_finalize (GObject* obj) {
	RygelImageItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_IMAGE_ITEM, RygelImageItem);
	_g_object_unref0 (self->priv->_thumbnails);
	G_OBJECT_CLASS (rygel_image_item_parent_class)->finalize (obj);
}


/**
 * Represents an image item.
 */
GType rygel_image_item_get_type (void) {
	static volatile gsize rygel_image_item_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_image_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelImageItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_image_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelImageItem), 0, (GInstanceInitFunc) rygel_image_item_instance_init, NULL };
		static const GInterfaceInfo rygel_visual_item_info = { (GInterfaceInitFunc) rygel_image_item_rygel_visual_item_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType rygel_image_item_type_id;
		rygel_image_item_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_ITEM, "RygelImageItem", &g_define_type_info, 0);
		g_type_add_interface_static (rygel_image_item_type_id, RYGEL_TYPE_VISUAL_ITEM, &rygel_visual_item_info);
		g_once_init_leave (&rygel_image_item_type_id__volatile, rygel_image_item_type_id);
	}
	return rygel_image_item_type_id__volatile;
}


static void _vala_rygel_image_item_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelImageItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_IMAGE_ITEM, RygelImageItem);
	switch (property_id) {
		case RYGEL_IMAGE_ITEM_WIDTH:
		g_value_set_int (value, rygel_visual_item_get_width ((RygelVisualItem*) self));
		break;
		case RYGEL_IMAGE_ITEM_HEIGHT:
		g_value_set_int (value, rygel_visual_item_get_height ((RygelVisualItem*) self));
		break;
		case RYGEL_IMAGE_ITEM_COLOR_DEPTH:
		g_value_set_int (value, rygel_visual_item_get_color_depth ((RygelVisualItem*) self));
		break;
		case RYGEL_IMAGE_ITEM_THUMBNAILS:
		g_value_set_object (value, rygel_visual_item_get_thumbnails ((RygelVisualItem*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_image_item_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelImageItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_IMAGE_ITEM, RygelImageItem);
	switch (property_id) {
		case RYGEL_IMAGE_ITEM_WIDTH:
		rygel_visual_item_set_width ((RygelVisualItem*) self, g_value_get_int (value));
		break;
		case RYGEL_IMAGE_ITEM_HEIGHT:
		rygel_visual_item_set_height ((RygelVisualItem*) self, g_value_get_int (value));
		break;
		case RYGEL_IMAGE_ITEM_COLOR_DEPTH:
		rygel_visual_item_set_color_depth ((RygelVisualItem*) self, g_value_get_int (value));
		break;
		case RYGEL_IMAGE_ITEM_THUMBNAILS:
		rygel_visual_item_set_thumbnails ((RygelVisualItem*) self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



