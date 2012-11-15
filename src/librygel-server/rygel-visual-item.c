/* rygel-visual-item.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-visual-item.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 * Copyright (C) 2010 Nokia Corporation.
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
 *         Jens Georg <jensg@openismus.com>
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
#include <gee.h>
#include <rygel-core.h>
#include <stdlib.h>
#include <string.h>
#include <libgupnp-av/gupnp-av.h>


#define RYGEL_TYPE_MEDIA_OBJECT (rygel_media_object_get_type ())
#define RYGEL_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObject))
#define RYGEL_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))
#define RYGEL_IS_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_IS_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_MEDIA_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))

typedef struct _RygelMediaObject RygelMediaObject;
typedef struct _RygelMediaObjectClass RygelMediaObjectClass;

#define RYGEL_TYPE_MEDIA_ITEM (rygel_media_item_get_type ())
#define RYGEL_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem))
#define RYGEL_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))
#define RYGEL_IS_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_IS_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_MEDIA_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))

typedef struct _RygelMediaItem RygelMediaItem;
typedef struct _RygelMediaItemClass RygelMediaItemClass;

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

#define RYGEL_TYPE_THUMBNAILER (rygel_thumbnailer_get_type ())
#define RYGEL_THUMBNAILER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_THUMBNAILER, RygelThumbnailer))
#define RYGEL_THUMBNAILER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_THUMBNAILER, RygelThumbnailerClass))
#define RYGEL_IS_THUMBNAILER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_THUMBNAILER))
#define RYGEL_IS_THUMBNAILER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_THUMBNAILER))
#define RYGEL_THUMBNAILER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_THUMBNAILER, RygelThumbnailerClass))

typedef struct _RygelThumbnailer RygelThumbnailer;
typedef struct _RygelThumbnailerClass RygelThumbnailerClass;
typedef struct _RygelMediaObjectPrivate RygelMediaObjectPrivate;

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
#define _rygel_icon_info_unref0(var) ((var == NULL) ? NULL : (var = (rygel_icon_info_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

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

struct _RygelMediaObject {
	GObject parent_instance;
	RygelMediaObjectPrivate * priv;
	gchar* id;
	gchar* ref_id;
	gchar* upnp_class;
	guint64 modified;
	guint object_update_id;
	GeeArrayList* uris;
	RygelMediaContainer* parent;
};

struct _RygelMediaObjectClass {
	GObjectClass parent_class;
	GUPnPDIDLLiteObject* (*serialize) (RygelMediaObject* self, GUPnPDIDLLiteWriter* writer, RygelHTTPServer* http_server, GError** error);
	void (*apply_didl_lite) (RygelMediaObject* self, GUPnPDIDLLiteObject* didl_object);
	gint (*compare_by_property) (RygelMediaObject* self, RygelMediaObject* media_object, const gchar* property);
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
	gchar* date;
	gchar* mime_type;
	gchar* dlna_profile;
	GRegex* address_regex;
};

struct _RygelMediaItemClass {
	RygelMediaObjectClass parent_class;
	RygelDataSource* (*create_stream_source) (RygelMediaItem* self, const gchar* host_ip);
	gboolean (*streamable) (RygelMediaItem* self);
	void (*add_uri) (RygelMediaItem* self, const gchar* uri);
	GUPnPDIDLLiteResource* (*add_resource) (RygelMediaItem* self, GUPnPDIDLLiteItem* didl_item, const gchar* uri, const gchar* protocol, const gchar* import_uri, GError** error);
	void (*add_proxy_resources) (RygelMediaItem* self, RygelHTTPServer* server, GUPnPDIDLLiteItem* didl_item, GError** error);
	GUPnPProtocolInfo* (*get_protocol_info) (RygelMediaItem* self, const gchar* uri, const gchar* protocol);
	void (*add_resources) (RygelMediaItem* self, GUPnPDIDLLiteItem* didl_item, gboolean allow_internal, GError** error);
};



GType rygel_media_object_get_type (void) G_GNUC_CONST;
GType rygel_media_item_get_type (void) G_GNUC_CONST;
GType rygel_thumbnail_get_type (void) G_GNUC_CONST;
GType rygel_visual_item_get_type (void) G_GNUC_CONST;
void rygel_visual_item_add_thumbnail_for_uri (RygelVisualItem* self, const gchar* uri, const gchar* mime_type);
GType rygel_thumbnailer_get_type (void) G_GNUC_CONST;
RygelThumbnailer* rygel_thumbnailer_get_default (void);
RygelThumbnail* rygel_thumbnailer_get_thumbnail (RygelThumbnailer* self, const gchar* uri, const gchar* mime_type, GError** error);
GType rygel_transcode_manager_get_type (void) G_GNUC_CONST;
GType rygel_http_server_get_type (void) G_GNUC_CONST;
GType rygel_media_container_get_type (void) G_GNUC_CONST;
GType rygel_http_seek_get_type (void) G_GNUC_CONST;
GType rygel_data_source_get_type (void) G_GNUC_CONST;
GeeArrayList* rygel_visual_item_get_thumbnails (RygelVisualItem* self);
void rygel_visual_item_add_thumbnail_resources (RygelVisualItem* self, GUPnPDIDLLiteItem* didl_item, gboolean allow_internal, GError** error);
gchar* rygel_media_item_get_protocol_for_uri (RygelMediaItem* self, const gchar* uri, GError** error);
GUPnPDIDLLiteResource* rygel_thumbnail_add_resource (RygelThumbnail* self, GUPnPDIDLLiteItem* didl_item, const gchar* protocol);
void rygel_visual_item_add_visual_props (RygelVisualItem* self, GUPnPDIDLLiteResource* res);
gint rygel_visual_item_get_width (RygelVisualItem* self);
gint rygel_visual_item_get_height (RygelVisualItem* self);
gint rygel_visual_item_get_color_depth (RygelVisualItem* self);
void rygel_visual_item_add_thumbnail_proxy_resources (RygelVisualItem* self, RygelHTTPServer* server, GUPnPDIDLLiteItem* didl_item, GError** error);
gboolean rygel_http_server_need_proxy (RygelHTTPServer* self, const gchar* uri);
gchar* rygel_transcode_manager_create_uri_for_item (RygelTranscodeManager* self, RygelMediaItem* item, gint thumbnail_index, gint subtitle_index, const gchar* transcode_target);
gchar* rygel_transcode_manager_get_protocol (RygelTranscodeManager* self);
void rygel_visual_item_set_width (RygelVisualItem* self, gint value);
void rygel_visual_item_set_height (RygelVisualItem* self, gint value);
void rygel_visual_item_set_color_depth (RygelVisualItem* self, gint value);
void rygel_visual_item_set_thumbnails (RygelVisualItem* self, GeeArrayList* value);


void rygel_visual_item_add_thumbnail_for_uri (RygelVisualItem* self, const gchar* uri, const gchar* mime_type) {
	RygelThumbnailer* _tmp0_ = NULL;
	RygelThumbnailer* thumbnailer;
	RygelThumbnailer* _tmp1_;
	GError * _inner_error_ = NULL;
#line 58 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_if_fail (uri != NULL);
#line 58 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_if_fail (mime_type != NULL);
#line 60 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp0_ = rygel_thumbnailer_get_default ();
#line 60 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	thumbnailer = _tmp0_;
#line 62 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp1_ = thumbnailer;
#line 62 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	if (_tmp1_ != NULL) {
#line 252 "rygel-visual-item.c"
		{
			RygelThumbnailer* _tmp2_;
			const gchar* _tmp3_;
			const gchar* _tmp4_;
			RygelThumbnail* _tmp5_ = NULL;
			RygelThumbnail* thumb;
			GeeArrayList* _tmp6_;
			GeeArrayList* _tmp7_;
			RygelThumbnail* _tmp8_;
#line 64 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp2_ = thumbnailer;
#line 64 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp3_ = uri;
#line 64 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp4_ = ((RygelMediaItem*) self)->mime_type;
#line 64 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp5_ = rygel_thumbnailer_get_thumbnail (_tmp2_, _tmp3_, _tmp4_, &_inner_error_);
#line 64 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			thumb = _tmp5_;
#line 64 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			if (_inner_error_ != NULL) {
#line 274 "rygel-visual-item.c"
				goto __catch15_g_error;
			}
#line 65 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp6_ = rygel_visual_item_get_thumbnails (self);
#line 65 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp7_ = _tmp6_;
#line 65 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp8_ = thumb;
#line 65 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			gee_abstract_collection_add ((GeeAbstractCollection*) _tmp7_, _tmp8_);
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_rygel_icon_info_unref0 (thumb);
#line 287 "rygel-visual-item.c"
		}
		goto __finally15;
		__catch15_g_error:
		{
			GError* err = NULL;
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			err = _inner_error_;
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_inner_error_ = NULL;
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_g_error_free0 (err);
#line 299 "rygel-visual-item.c"
		}
		__finally15:
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		if (_inner_error_ != NULL) {
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_g_object_unref0 (thumbnailer);
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			g_clear_error (&_inner_error_);
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			return;
#line 312 "rygel-visual-item.c"
		}
	}
#line 58 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_g_object_unref0 (thumbnailer);
#line 317 "rygel-visual-item.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	return self ? g_object_ref (self) : NULL;
#line 324 "rygel-visual-item.c"
}


void rygel_visual_item_add_thumbnail_resources (RygelVisualItem* self, GUPnPDIDLLiteItem* didl_item, gboolean allow_internal, GError** error) {
	GError * _inner_error_ = NULL;
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_if_fail (didl_item != NULL);
#line 332 "rygel-visual-item.c"
	{
		GeeArrayList* _tmp0_;
		GeeArrayList* _tmp1_;
		GeeArrayList* _tmp2_;
		GeeArrayList* _thumbnail_list;
		GeeArrayList* _tmp3_;
		gint _tmp4_;
		gint _tmp5_;
		gint _thumbnail_size;
		gint _thumbnail_index;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp0_ = rygel_visual_item_get_thumbnails (self);
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp1_ = _tmp0_;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp2_ = _g_object_ref0 (_tmp1_);
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_thumbnail_list = _tmp2_;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp3_ = _thumbnail_list;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp4_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp3_);
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp5_ = _tmp4_;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_thumbnail_size = _tmp5_;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_thumbnail_index = -1;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		while (TRUE) {
#line 363 "rygel-visual-item.c"
			gint _tmp6_;
			gint _tmp7_;
			gint _tmp8_;
			GeeArrayList* _tmp9_;
			gint _tmp10_;
			gpointer _tmp11_ = NULL;
			RygelThumbnail* thumbnail;
			RygelThumbnail* _tmp12_;
			const gchar* _tmp13_;
			gchar* _tmp14_ = NULL;
			gchar* protocol;
			gboolean _tmp15_ = FALSE;
			gboolean _tmp16_;
			gboolean _tmp18_;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp6_ = _thumbnail_index;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_thumbnail_index = _tmp6_ + 1;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp7_ = _thumbnail_index;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp8_ = _thumbnail_size;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			if (!(_tmp7_ < _tmp8_)) {
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				break;
#line 390 "rygel-visual-item.c"
			}
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp9_ = _thumbnail_list;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp10_ = _thumbnail_index;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp11_ = gee_abstract_list_get ((GeeAbstractList*) _tmp9_, _tmp10_);
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			thumbnail = (RygelThumbnail*) _tmp11_;
#line 74 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp12_ = thumbnail;
#line 74 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp13_ = ((RygelIconInfo*) _tmp12_)->uri;
#line 74 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp14_ = rygel_media_item_get_protocol_for_uri ((RygelMediaItem*) self, _tmp13_, &_inner_error_);
#line 74 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			protocol = _tmp14_;
#line 74 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			if (_inner_error_ != NULL) {
#line 74 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				g_propagate_error (error, _inner_error_);
#line 74 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_rygel_icon_info_unref0 (thumbnail);
#line 74 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_g_object_unref0 (_thumbnail_list);
#line 74 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				return;
#line 418 "rygel-visual-item.c"
			}
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp16_ = allow_internal;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			if (_tmp16_) {
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp15_ = TRUE;
#line 426 "rygel-visual-item.c"
			} else {
				const gchar* _tmp17_;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp17_ = protocol;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp15_ = g_strcmp0 (_tmp17_, "internal") != 0;
#line 433 "rygel-visual-item.c"
			}
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp18_ = _tmp15_;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			if (_tmp18_) {
#line 439 "rygel-visual-item.c"
				RygelThumbnail* _tmp19_;
				GUPnPDIDLLiteItem* _tmp20_;
				const gchar* _tmp21_;
				GUPnPDIDLLiteResource* _tmp22_ = NULL;
				GUPnPDIDLLiteResource* _tmp23_;
#line 77 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp19_ = thumbnail;
#line 77 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp20_ = didl_item;
#line 77 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp21_ = protocol;
#line 77 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp22_ = rygel_thumbnail_add_resource (_tmp19_, _tmp20_, _tmp21_);
#line 77 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp23_ = _tmp22_;
#line 77 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_g_object_unref0 (_tmp23_);
#line 457 "rygel-visual-item.c"
			}
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_g_free0 (protocol);
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_rygel_icon_info_unref0 (thumbnail);
#line 463 "rygel-visual-item.c"
		}
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_g_object_unref0 (_thumbnail_list);
#line 467 "rygel-visual-item.c"
	}
}


void rygel_visual_item_add_visual_props (RygelVisualItem* self, GUPnPDIDLLiteResource* res) {
	GUPnPDIDLLiteResource* _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	GUPnPDIDLLiteResource* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	GUPnPDIDLLiteResource* _tmp6_;
	gint _tmp7_;
	gint _tmp8_;
#line 82 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_if_fail (res != NULL);
#line 83 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp0_ = res;
#line 83 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp1_ = rygel_visual_item_get_width (self);
#line 83 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp2_ = _tmp1_;
#line 83 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	gupnp_didl_lite_resource_set_width (_tmp0_, _tmp2_);
#line 84 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp3_ = res;
#line 84 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp4_ = rygel_visual_item_get_height (self);
#line 84 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp5_ = _tmp4_;
#line 84 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	gupnp_didl_lite_resource_set_height (_tmp3_, _tmp5_);
#line 85 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp6_ = res;
#line 85 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp7_ = rygel_visual_item_get_color_depth (self);
#line 85 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	_tmp8_ = _tmp7_;
#line 85 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	gupnp_didl_lite_resource_set_color_depth (_tmp6_, _tmp8_);
#line 508 "rygel-visual-item.c"
}


void rygel_visual_item_add_thumbnail_proxy_resources (RygelVisualItem* self, RygelHTTPServer* server, GUPnPDIDLLiteItem* didl_item, GError** error) {
#line 88 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_if_fail (server != NULL);
#line 88 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_if_fail (didl_item != NULL);
#line 517 "rygel-visual-item.c"
	{
		GeeArrayList* _tmp0_;
		GeeArrayList* _tmp1_;
		GeeArrayList* _tmp2_;
		GeeArrayList* _thumbnail_list;
		GeeArrayList* _tmp3_;
		gint _tmp4_;
		gint _tmp5_;
		gint _thumbnail_size;
		gint _thumbnail_index;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp0_ = rygel_visual_item_get_thumbnails (self);
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp1_ = _tmp0_;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp2_ = _g_object_ref0 (_tmp1_);
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_thumbnail_list = _tmp2_;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp3_ = _thumbnail_list;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp4_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp3_);
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_tmp5_ = _tmp4_;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_thumbnail_size = _tmp5_;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_thumbnail_index = -1;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		while (TRUE) {
#line 548 "rygel-visual-item.c"
			gint _tmp6_;
			gint _tmp7_;
			gint _tmp8_;
			GeeArrayList* _tmp9_;
			gint _tmp10_;
			gpointer _tmp11_ = NULL;
			RygelThumbnail* thumbnail;
			RygelHTTPServer* _tmp12_;
			RygelThumbnail* _tmp13_;
			const gchar* _tmp14_;
			gboolean _tmp15_ = FALSE;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp6_ = _thumbnail_index;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_thumbnail_index = _tmp6_ + 1;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp7_ = _thumbnail_index;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp8_ = _thumbnail_size;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			if (!(_tmp7_ < _tmp8_)) {
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				break;
#line 572 "rygel-visual-item.c"
			}
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp9_ = _thumbnail_list;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp10_ = _thumbnail_index;
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp11_ = gee_abstract_list_get ((GeeAbstractList*) _tmp9_, _tmp10_);
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			thumbnail = (RygelThumbnail*) _tmp11_;
#line 92 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp12_ = server;
#line 92 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp13_ = thumbnail;
#line 92 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp14_ = ((RygelIconInfo*) _tmp13_)->uri;
#line 92 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_tmp15_ = rygel_http_server_need_proxy (_tmp12_, _tmp14_);
#line 92 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			if (_tmp15_) {
#line 592 "rygel-visual-item.c"
				RygelThumbnail* _tmp16_;
				const gchar* _tmp17_;
				gchar* _tmp18_;
				gchar* uri;
				GeeArrayList* _tmp19_;
				GeeArrayList* _tmp20_;
				RygelThumbnail* _tmp21_;
				gint _tmp22_ = 0;
				gint index;
				RygelThumbnail* _tmp23_;
				RygelHTTPServer* _tmp24_;
				gint _tmp25_;
				gchar* _tmp26_ = NULL;
				RygelThumbnail* _tmp27_;
				GUPnPDIDLLiteItem* _tmp28_;
				RygelHTTPServer* _tmp29_;
				gchar* _tmp30_ = NULL;
				gchar* _tmp31_;
				GUPnPDIDLLiteResource* _tmp32_ = NULL;
				GUPnPDIDLLiteResource* _tmp33_;
				RygelThumbnail* _tmp34_;
				const gchar* _tmp35_;
				gchar* _tmp36_;
#line 93 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp16_ = thumbnail;
#line 93 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp17_ = ((RygelIconInfo*) _tmp16_)->uri;
#line 93 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp18_ = g_strdup (_tmp17_);
#line 93 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				uri = _tmp18_;
#line 94 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp19_ = rygel_visual_item_get_thumbnails (self);
#line 94 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp20_ = _tmp19_;
#line 94 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp21_ = thumbnail;
#line 94 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp22_ = gee_abstract_list_index_of ((GeeAbstractList*) _tmp20_, _tmp21_);
#line 94 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				index = _tmp22_;
#line 96 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp23_ = thumbnail;
#line 96 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp24_ = server;
#line 96 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp25_ = index;
#line 96 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp26_ = rygel_transcode_manager_create_uri_for_item ((RygelTranscodeManager*) _tmp24_, (RygelMediaItem*) self, _tmp25_, -1, NULL);
#line 96 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_g_free0 (((RygelIconInfo*) _tmp23_)->uri);
#line 96 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				((RygelIconInfo*) _tmp23_)->uri = _tmp26_;
#line 100 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp27_ = thumbnail;
#line 100 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp28_ = didl_item;
#line 100 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp29_ = server;
#line 100 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp30_ = rygel_transcode_manager_get_protocol ((RygelTranscodeManager*) _tmp29_);
#line 100 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp31_ = _tmp30_;
#line 100 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp32_ = rygel_thumbnail_add_resource (_tmp27_, _tmp28_, _tmp31_);
#line 100 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp33_ = _tmp32_;
#line 100 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_g_object_unref0 (_tmp33_);
#line 100 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_g_free0 (_tmp31_);
#line 103 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp34_ = thumbnail;
#line 103 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp35_ = uri;
#line 103 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_tmp36_ = g_strdup (_tmp35_);
#line 103 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_g_free0 (((RygelIconInfo*) _tmp34_)->uri);
#line 103 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				((RygelIconInfo*) _tmp34_)->uri = _tmp36_;
#line 92 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
				_g_free0 (uri);
#line 676 "rygel-visual-item.c"
			}
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
			_rygel_icon_info_unref0 (thumbnail);
#line 680 "rygel-visual-item.c"
		}
#line 91 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		_g_object_unref0 (_thumbnail_list);
#line 684 "rygel-visual-item.c"
	}
}


gint rygel_visual_item_get_width (RygelVisualItem* self) {
#line 39 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 39 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	return RYGEL_VISUAL_ITEM_GET_INTERFACE (self)->get_width (self);
#line 694 "rygel-visual-item.c"
}


void rygel_visual_item_set_width (RygelVisualItem* self, gint value) {
#line 39 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_if_fail (self != NULL);
#line 39 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	RYGEL_VISUAL_ITEM_GET_INTERFACE (self)->set_width (self, value);
#line 703 "rygel-visual-item.c"
}


gint rygel_visual_item_get_height (RygelVisualItem* self) {
#line 45 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 45 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	return RYGEL_VISUAL_ITEM_GET_INTERFACE (self)->get_height (self);
#line 712 "rygel-visual-item.c"
}


void rygel_visual_item_set_height (RygelVisualItem* self, gint value) {
#line 45 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_if_fail (self != NULL);
#line 45 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	RYGEL_VISUAL_ITEM_GET_INTERFACE (self)->set_height (self, value);
#line 721 "rygel-visual-item.c"
}


gint rygel_visual_item_get_color_depth (RygelVisualItem* self) {
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	return RYGEL_VISUAL_ITEM_GET_INTERFACE (self)->get_color_depth (self);
#line 730 "rygel-visual-item.c"
}


void rygel_visual_item_set_color_depth (RygelVisualItem* self, gint value) {
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_if_fail (self != NULL);
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	RYGEL_VISUAL_ITEM_GET_INTERFACE (self)->set_color_depth (self, value);
#line 739 "rygel-visual-item.c"
}


GeeArrayList* rygel_visual_item_get_thumbnails (RygelVisualItem* self) {
#line 56 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 56 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	return RYGEL_VISUAL_ITEM_GET_INTERFACE (self)->get_thumbnails (self);
#line 748 "rygel-visual-item.c"
}


void rygel_visual_item_set_thumbnails (RygelVisualItem* self, GeeArrayList* value) {
#line 56 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	g_return_if_fail (self != NULL);
#line 56 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	RYGEL_VISUAL_ITEM_GET_INTERFACE (self)->set_thumbnails (self, value);
#line 757 "rygel-visual-item.c"
}


static void rygel_visual_item_base_init (RygelVisualItemIface * iface) {
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	static gboolean initialized = FALSE;
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
	if (!initialized) {
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		initialized = TRUE;
#line 768 "rygel-visual-item.c"
		/**
		     * The width of the item in pixels.
		     * A value of -1 means that the width is unknown and will not, or did not, appear in DIDL-Lite XML.
		     */
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		g_object_interface_install_property (iface, g_param_spec_int ("width", "width", "width", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 775 "rygel-visual-item.c"
		/**
		     * The height of the item in pixels.
		     * A value of -1 means that the height is unknown and will not, or did not, appear in DIDL-Lite XML.
		     */
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		g_object_interface_install_property (iface, g_param_spec_int ("height", "height", "height", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 782 "rygel-visual-item.c"
		/**
		     * The number of bits per pixel used to represent the video or image resource.
		     * A value of -1 means that the color depth is unknown and will not, or did not, appear in DIDL-Lite XML.
		     */
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		g_object_interface_install_property (iface, g_param_spec_int ("color-depth", "color-depth", "color-depth", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 789 "rygel-visual-item.c"
		/**
		     * Thumbnail pictures to represent the video or image resource.
		     */
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-visual-item.vala"
		g_object_interface_install_property (iface, g_param_spec_object ("thumbnails", "thumbnails", "thumbnails", GEE_TYPE_ARRAY_LIST, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 795 "rygel-visual-item.c"
	}
}


/**
 * An interface that visual (video and image) items must implement.
 */
GType rygel_visual_item_get_type (void) {
	static volatile gsize rygel_visual_item_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_visual_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelVisualItemIface), (GBaseInitFunc) rygel_visual_item_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType rygel_visual_item_type_id;
		rygel_visual_item_type_id = g_type_register_static (G_TYPE_INTERFACE, "RygelVisualItem", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (rygel_visual_item_type_id, RYGEL_TYPE_MEDIA_ITEM);
		g_once_init_leave (&rygel_visual_item_type_id__volatile, rygel_visual_item_type_id);
	}
	return rygel_visual_item_type_id__volatile;
}



