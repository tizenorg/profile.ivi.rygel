/* rygel-http-transcode-handler.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-http-transcode-handler.vala, do not modify */

/*
 * Copyright (C) 2009 Nokia Corporation.
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
#include <libsoup/soup.h>
#include <libgupnp-av/gupnp-av.h>
#include <gio/gio.h>
#include <rygel-core.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <libgupnp/gupnp.h>
#include <libgssdp/gssdp.h>
#include <glib/gi18n-lib.h>


#define RYGEL_TYPE_HTTP_GET_HANDLER (rygel_http_get_handler_get_type ())
#define RYGEL_HTTP_GET_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandler))
#define RYGEL_HTTP_GET_HANDLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandlerClass))
#define RYGEL_IS_HTTP_GET_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_GET_HANDLER))
#define RYGEL_IS_HTTP_GET_HANDLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_GET_HANDLER))
#define RYGEL_HTTP_GET_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandlerClass))

typedef struct _RygelHTTPGetHandler RygelHTTPGetHandler;
typedef struct _RygelHTTPGetHandlerClass RygelHTTPGetHandlerClass;
typedef struct _RygelHTTPGetHandlerPrivate RygelHTTPGetHandlerPrivate;

#define RYGEL_TYPE_HTTP_REQUEST (rygel_http_request_get_type ())
#define RYGEL_HTTP_REQUEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequest))
#define RYGEL_HTTP_REQUEST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequestClass))
#define RYGEL_IS_HTTP_REQUEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_REQUEST))
#define RYGEL_IS_HTTP_REQUEST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_REQUEST))
#define RYGEL_HTTP_REQUEST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequestClass))

typedef struct _RygelHTTPRequest RygelHTTPRequest;
typedef struct _RygelHTTPRequestClass RygelHTTPRequestClass;

#define RYGEL_TYPE_HTTP_GET (rygel_http_get_get_type ())
#define RYGEL_HTTP_GET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_GET, RygelHTTPGet))
#define RYGEL_HTTP_GET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_GET, RygelHTTPGetClass))
#define RYGEL_IS_HTTP_GET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_GET))
#define RYGEL_IS_HTTP_GET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_GET))
#define RYGEL_HTTP_GET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_GET, RygelHTTPGetClass))

typedef struct _RygelHTTPGet RygelHTTPGet;
typedef struct _RygelHTTPGetClass RygelHTTPGetClass;

#define RYGEL_TYPE_HTTP_RESPONSE (rygel_http_response_get_type ())
#define RYGEL_HTTP_RESPONSE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponse))
#define RYGEL_HTTP_RESPONSE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponseClass))
#define RYGEL_IS_HTTP_RESPONSE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_RESPONSE))
#define RYGEL_IS_HTTP_RESPONSE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_RESPONSE))
#define RYGEL_HTTP_RESPONSE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponseClass))

typedef struct _RygelHTTPResponse RygelHTTPResponse;
typedef struct _RygelHTTPResponseClass RygelHTTPResponseClass;

#define RYGEL_TYPE_HTTP_TRANSCODE_HANDLER (rygel_http_transcode_handler_get_type ())
#define RYGEL_HTTP_TRANSCODE_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_TRANSCODE_HANDLER, RygelHTTPTranscodeHandler))
#define RYGEL_HTTP_TRANSCODE_HANDLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_TRANSCODE_HANDLER, RygelHTTPTranscodeHandlerClass))
#define RYGEL_IS_HTTP_TRANSCODE_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_TRANSCODE_HANDLER))
#define RYGEL_IS_HTTP_TRANSCODE_HANDLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_TRANSCODE_HANDLER))
#define RYGEL_HTTP_TRANSCODE_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_TRANSCODE_HANDLER, RygelHTTPTranscodeHandlerClass))

typedef struct _RygelHTTPTranscodeHandler RygelHTTPTranscodeHandler;
typedef struct _RygelHTTPTranscodeHandlerClass RygelHTTPTranscodeHandlerClass;
typedef struct _RygelHTTPTranscodeHandlerPrivate RygelHTTPTranscodeHandlerPrivate;

#define RYGEL_TYPE_TRANSCODER (rygel_transcoder_get_type ())
#define RYGEL_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_TRANSCODER, RygelTranscoder))
#define RYGEL_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_TRANSCODER, RygelTranscoderClass))
#define RYGEL_IS_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_TRANSCODER))
#define RYGEL_IS_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_TRANSCODER))
#define RYGEL_TRANSCODER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_TRANSCODER, RygelTranscoderClass))

typedef struct _RygelTranscoder RygelTranscoder;
typedef struct _RygelTranscoderClass RygelTranscoderClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _RygelHTTPRequestPrivate RygelHTTPRequestPrivate;

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

#define RYGEL_TYPE_HTTP_ITEM_URI (rygel_http_item_uri_get_type ())
#define RYGEL_HTTP_ITEM_URI(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_ITEM_URI, RygelHTTPItemURI))
#define RYGEL_HTTP_ITEM_URI_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_ITEM_URI, RygelHTTPItemURIClass))
#define RYGEL_IS_HTTP_ITEM_URI(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_ITEM_URI))
#define RYGEL_IS_HTTP_ITEM_URI_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_ITEM_URI))
#define RYGEL_HTTP_ITEM_URI_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_ITEM_URI, RygelHTTPItemURIClass))

typedef struct _RygelHTTPItemURI RygelHTTPItemURI;
typedef struct _RygelHTTPItemURIClass RygelHTTPItemURIClass;

#define RYGEL_TYPE_MEDIA_OBJECT (rygel_media_object_get_type ())
#define RYGEL_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObject))
#define RYGEL_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))
#define RYGEL_IS_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_IS_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_MEDIA_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))

typedef struct _RygelMediaObject RygelMediaObject;
typedef struct _RygelMediaObjectClass RygelMediaObjectClass;

#define RYGEL_TYPE_CLIENT_HACKS (rygel_client_hacks_get_type ())
#define RYGEL_CLIENT_HACKS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacks))
#define RYGEL_CLIENT_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacksClass))
#define RYGEL_IS_CLIENT_HACKS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_CLIENT_HACKS))
#define RYGEL_IS_CLIENT_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_CLIENT_HACKS))
#define RYGEL_CLIENT_HACKS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacksClass))

typedef struct _RygelClientHacks RygelClientHacks;
typedef struct _RygelClientHacksClass RygelClientHacksClass;
typedef struct _RygelHTTPGetPrivate RygelHTTPGetPrivate;

#define RYGEL_TYPE_THUMBNAIL (rygel_thumbnail_get_type ())
#define RYGEL_THUMBNAIL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_THUMBNAIL, RygelThumbnail))
#define RYGEL_THUMBNAIL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_THUMBNAIL, RygelThumbnailClass))
#define RYGEL_IS_THUMBNAIL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_THUMBNAIL))
#define RYGEL_IS_THUMBNAIL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_THUMBNAIL))
#define RYGEL_THUMBNAIL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_THUMBNAIL, RygelThumbnailClass))

typedef struct _RygelThumbnail RygelThumbnail;
typedef struct _RygelThumbnailClass RygelThumbnailClass;

#define RYGEL_TYPE_SUBTITLE (rygel_subtitle_get_type ())
#define RYGEL_SUBTITLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SUBTITLE, RygelSubtitle))
#define RYGEL_SUBTITLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SUBTITLE, RygelSubtitleClass))
#define RYGEL_IS_SUBTITLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SUBTITLE))
#define RYGEL_IS_SUBTITLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SUBTITLE))
#define RYGEL_SUBTITLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SUBTITLE, RygelSubtitleClass))

typedef struct _RygelSubtitle RygelSubtitle;
typedef struct _RygelSubtitleClass RygelSubtitleClass;

#define RYGEL_TYPE_HTTP_SEEK (rygel_http_seek_get_type ())
#define RYGEL_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeek))
#define RYGEL_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))
#define RYGEL_IS_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_IS_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_HTTP_SEEK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))

typedef struct _RygelHTTPSeek RygelHTTPSeek;
typedef struct _RygelHTTPSeekClass RygelHTTPSeekClass;

#define RYGEL_TYPE_MEDIA_ITEM (rygel_media_item_get_type ())
#define RYGEL_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem))
#define RYGEL_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))
#define RYGEL_IS_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_IS_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_MEDIA_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))

typedef struct _RygelMediaItem RygelMediaItem;
typedef struct _RygelMediaItemClass RygelMediaItemClass;

#define RYGEL_TYPE_DATA_SOURCE (rygel_data_source_get_type ())
#define RYGEL_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DATA_SOURCE, RygelDataSource))
#define RYGEL_IS_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DATA_SOURCE))
#define RYGEL_DATA_SOURCE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_DATA_SOURCE, RygelDataSourceIface))

typedef struct _RygelDataSource RygelDataSource;
typedef struct _RygelDataSourceIface RygelDataSourceIface;
typedef struct _RygelTranscodeManagerPrivate RygelTranscodeManagerPrivate;
typedef struct _RygelHTTPServerPrivate RygelHTTPServerPrivate;

#define RYGEL_TYPE_MEDIA_CONTAINER (rygel_media_container_get_type ())
#define RYGEL_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainer))
#define RYGEL_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))
#define RYGEL_IS_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_IS_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_MEDIA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))

typedef struct _RygelMediaContainer RygelMediaContainer;
typedef struct _RygelMediaContainerClass RygelMediaContainerClass;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

typedef enum  {
	RYGEL_HTTP_REQUEST_ERROR_UNACCEPTABLE = SOUP_STATUS_NOT_ACCEPTABLE,
	RYGEL_HTTP_REQUEST_ERROR_BAD_REQUEST = SOUP_STATUS_BAD_REQUEST,
	RYGEL_HTTP_REQUEST_ERROR_NOT_FOUND = SOUP_STATUS_NOT_FOUND,
	RYGEL_HTTP_REQUEST_ERROR_INTERNAL_SERVER_ERROR = SOUP_STATUS_INTERNAL_SERVER_ERROR
} RygelHTTPRequestError;
#define RYGEL_HTTP_REQUEST_ERROR rygel_http_request_error_quark ()
struct _RygelHTTPGetHandler {
	GObject parent_instance;
	RygelHTTPGetHandlerPrivate * priv;
};

struct _RygelHTTPGetHandlerClass {
	GObjectClass parent_class;
	void (*add_response_headers) (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error);
	gboolean (*knows_size) (RygelHTTPGetHandler* self, RygelHTTPGet* request);
	RygelHTTPResponse* (*render_body) (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error);
	GUPnPDIDLLiteResource* (*add_resource) (RygelHTTPGetHandler* self, GUPnPDIDLLiteObject* didl_object, RygelHTTPGet* request, GError** error);
};

struct _RygelHTTPTranscodeHandler {
	RygelHTTPGetHandler parent_instance;
	RygelHTTPTranscodeHandlerPrivate * priv;
};

struct _RygelHTTPTranscodeHandlerClass {
	RygelHTTPGetHandlerClass parent_class;
};

struct _RygelHTTPTranscodeHandlerPrivate {
	RygelTranscoder* transcoder;
};

struct _RygelHTTPRequest {
	GObject parent_instance;
	RygelHTTPRequestPrivate * priv;
	RygelHTTPServer* http_server;
	SoupServer* server;
	SoupMessage* msg;
	RygelHTTPItemURI* uri;
	RygelMediaObject* object;
	RygelClientHacks* hack;
};

struct _RygelHTTPRequestClass {
	GObjectClass parent_class;
	void (*handle) (RygelHTTPRequest* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*handle_finish) (RygelHTTPRequest* self, GAsyncResult* _res_, GError** error);
	void (*find_item) (RygelHTTPRequest* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*find_item_finish) (RygelHTTPRequest* self, GAsyncResult* _res_, GError** error);
};

struct _RygelHTTPGet {
	RygelHTTPRequest parent_instance;
	RygelHTTPGetPrivate * priv;
	RygelThumbnail* thumbnail;
	RygelSubtitle* subtitle;
	RygelHTTPSeek* seek;
	RygelHTTPGetHandler* handler;
};

struct _RygelHTTPGetClass {
	RygelHTTPRequestClass parent_class;
};

struct _RygelDataSourceIface {
	GTypeInterface parent_iface;
	void (*start) (RygelDataSource* self, RygelHTTPSeek* offsets, GError** error);
	void (*freeze) (RygelDataSource* self);
	void (*thaw) (RygelDataSource* self);
	void (*stop) (RygelDataSource* self);
};

struct _RygelTranscodeManager {
	GObject parent_instance;
	RygelTranscodeManagerPrivate * priv;
};

struct _RygelTranscodeManagerClass {
	GObjectClass parent_class;
	gchar* (*create_uri_for_item) (RygelTranscodeManager* self, RygelMediaItem* item, gint thumbnail_index, gint subtitle_index, const gchar* transcode_target, const gchar* playlist_target);
	gchar* (*get_protocol) (RygelTranscodeManager* self);
	GeeArrayList* (*get_protocol_info) (RygelTranscodeManager* self);
};

struct _RygelHTTPServer {
	RygelTranscodeManager parent_instance;
	RygelHTTPServerPrivate * priv;
	RygelMediaContainer* root_container;
	GUPnPContext* context;
};

struct _RygelHTTPServerClass {
	RygelTranscodeManagerClass parent_class;
};


static gpointer rygel_http_transcode_handler_parent_class = NULL;

GType rygel_http_get_handler_get_type (void) G_GNUC_CONST;
GType rygel_http_request_get_type (void) G_GNUC_CONST;
GType rygel_http_get_get_type (void) G_GNUC_CONST;
GQuark rygel_http_request_error_quark (void);
GType rygel_http_response_get_type (void) G_GNUC_CONST;
GType rygel_http_transcode_handler_get_type (void) G_GNUC_CONST;
GType rygel_transcoder_get_type (void) G_GNUC_CONST;
#define RYGEL_HTTP_TRANSCODE_HANDLER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_HTTP_TRANSCODE_HANDLER, RygelHTTPTranscodeHandlerPrivate))
enum  {
	RYGEL_HTTP_TRANSCODE_HANDLER_DUMMY_PROPERTY
};
RygelHTTPTranscodeHandler* rygel_http_transcode_handler_new (RygelTranscoder* transcoder, GCancellable* cancellable);
RygelHTTPTranscodeHandler* rygel_http_transcode_handler_construct (GType object_type, RygelTranscoder* transcoder, GCancellable* cancellable);
RygelHTTPGetHandler* rygel_http_get_handler_construct (GType object_type);
void rygel_http_get_handler_set_cancellable (RygelHTTPGetHandler* self, GCancellable* value);
static void rygel_http_transcode_handler_real_add_response_headers (RygelHTTPGetHandler* base, RygelHTTPGet* request, GError** error);
GType rygel_transcode_manager_get_type (void) G_GNUC_CONST;
GType rygel_http_server_get_type (void) G_GNUC_CONST;
GType rygel_http_item_uri_get_type (void) G_GNUC_CONST;
GType rygel_media_object_get_type (void) G_GNUC_CONST;
GType rygel_client_hacks_get_type (void) G_GNUC_CONST;
const gchar* rygel_transcoder_get_mime_type (RygelTranscoder* self);
GType rygel_thumbnail_get_type (void) G_GNUC_CONST;
gpointer rygel_subtitle_ref (gpointer instance);
void rygel_subtitle_unref (gpointer instance);
GParamSpec* rygel_param_spec_subtitle (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_subtitle (GValue* value, gpointer v_object);
void rygel_value_take_subtitle (GValue* value, gpointer v_object);
gpointer rygel_value_get_subtitle (const GValue* value);
GType rygel_subtitle_get_type (void) G_GNUC_CONST;
GType rygel_http_seek_get_type (void) G_GNUC_CONST;
void rygel_http_seek_add_response_headers (RygelHTTPSeek* self);
void rygel_http_get_handler_add_response_headers (RygelHTTPGetHandler* self, RygelHTTPGet* request, GError** error);
static RygelHTTPResponse* rygel_http_transcode_handler_real_render_body (RygelHTTPGetHandler* base, RygelHTTPGet* request, GError** error);
GType rygel_media_item_get_type (void) G_GNUC_CONST;
GType rygel_data_source_get_type (void) G_GNUC_CONST;
RygelDataSource* rygel_media_item_create_stream_source (RygelMediaItem* self, const gchar* host_ip);
GType rygel_media_container_get_type (void) G_GNUC_CONST;
RygelDataSource* rygel_transcoder_create_source (RygelTranscoder* self, RygelMediaItem* item, RygelDataSource* src, GError** error);
RygelHTTPResponse* rygel_http_response_new (RygelHTTPGet* request, RygelHTTPGetHandler* request_handler, RygelDataSource* src, GError** error);
RygelHTTPResponse* rygel_http_response_construct (GType object_type, RygelHTTPGet* request, RygelHTTPGetHandler* request_handler, RygelDataSource* src, GError** error);
static GUPnPDIDLLiteResource* rygel_http_transcode_handler_real_add_resource (RygelHTTPGetHandler* base, GUPnPDIDLLiteObject* didl_object, RygelHTTPGet* request, GError** error);
GUPnPDIDLLiteResource* rygel_transcoder_add_resource (RygelTranscoder* self, GUPnPDIDLLiteItem* didl_item, RygelMediaItem* item, RygelTranscodeManager* manager, GError** error);
static void rygel_http_transcode_handler_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


RygelHTTPTranscodeHandler* rygel_http_transcode_handler_construct (GType object_type, RygelTranscoder* transcoder, GCancellable* cancellable) {
	RygelHTTPTranscodeHandler * self = NULL;
	RygelTranscoder* _tmp0_;
	RygelTranscoder* _tmp1_;
	GCancellable* _tmp2_;
	g_return_val_if_fail (transcoder != NULL, NULL);
	self = (RygelHTTPTranscodeHandler*) rygel_http_get_handler_construct (object_type);
	_tmp0_ = transcoder;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->transcoder);
	self->priv->transcoder = _tmp1_;
	_tmp2_ = cancellable;
	rygel_http_get_handler_set_cancellable ((RygelHTTPGetHandler*) self, _tmp2_);
	return self;
}


RygelHTTPTranscodeHandler* rygel_http_transcode_handler_new (RygelTranscoder* transcoder, GCancellable* cancellable) {
	return rygel_http_transcode_handler_construct (RYGEL_TYPE_HTTP_TRANSCODE_HANDLER, transcoder, cancellable);
}


static void rygel_http_transcode_handler_real_add_response_headers (RygelHTTPGetHandler* base, RygelHTTPGet* request, GError** error) {
	RygelHTTPTranscodeHandler * self;
	RygelHTTPGet* _tmp0_;
	SoupMessage* _tmp1_;
	SoupMessageHeaders* _tmp2_;
	RygelTranscoder* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	RygelHTTPGet* _tmp6_;
	RygelHTTPSeek* _tmp7_;
	RygelHTTPGet* _tmp10_;
	GError * _inner_error_ = NULL;
	self = (RygelHTTPTranscodeHandler*) base;
	g_return_if_fail (request != NULL);
	_tmp0_ = request;
	_tmp1_ = ((RygelHTTPRequest*) _tmp0_)->msg;
	_tmp2_ = _tmp1_->response_headers;
	_tmp3_ = self->priv->transcoder;
	_tmp4_ = rygel_transcoder_get_mime_type (_tmp3_);
	_tmp5_ = _tmp4_;
	soup_message_headers_append (_tmp2_, "Content-Type", _tmp5_);
	_tmp6_ = request;
	_tmp7_ = _tmp6_->seek;
	if (_tmp7_ != NULL) {
		RygelHTTPGet* _tmp8_;
		RygelHTTPSeek* _tmp9_;
		_tmp8_ = request;
		_tmp9_ = _tmp8_->seek;
		rygel_http_seek_add_response_headers (_tmp9_);
	}
	_tmp10_ = request;
	RYGEL_HTTP_GET_HANDLER_CLASS (rygel_http_transcode_handler_parent_class)->add_response_headers (G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandler), _tmp10_, &_inner_error_);
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == RYGEL_HTTP_REQUEST_ERROR) {
			g_propagate_error (error, _inner_error_);
			return;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
}


static RygelHTTPResponse* rygel_http_transcode_handler_real_render_body (RygelHTTPGetHandler* base, RygelHTTPGet* request, GError** error) {
	RygelHTTPTranscodeHandler * self;
	RygelHTTPResponse* result = NULL;
	RygelHTTPGet* _tmp0_;
	RygelMediaObject* _tmp1_;
	RygelMediaItem* _tmp2_;
	RygelMediaItem* item;
	RygelMediaItem* _tmp3_;
	RygelHTTPGet* _tmp4_;
	RygelHTTPServer* _tmp5_;
	GUPnPContext* _tmp6_;
	const gchar* _tmp7_;
	const gchar* _tmp8_;
	RygelDataSource* _tmp9_ = NULL;
	RygelDataSource* src;
	RygelDataSource* _tmp10_;
	GError * _inner_error_ = NULL;
	self = (RygelHTTPTranscodeHandler*) base;
	g_return_val_if_fail (request != NULL, NULL);
	_tmp0_ = request;
	_tmp1_ = ((RygelHTTPRequest*) _tmp0_)->object;
	_tmp2_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, RYGEL_TYPE_MEDIA_ITEM) ? ((RygelMediaItem*) _tmp1_) : NULL);
	item = _tmp2_;
	_tmp3_ = item;
	_tmp4_ = request;
	_tmp5_ = ((RygelHTTPRequest*) _tmp4_)->http_server;
	_tmp6_ = _tmp5_->context;
	_tmp7_ = gssdp_client_get_host_ip ((GSSDPClient*) _tmp6_);
	_tmp8_ = _tmp7_;
	_tmp9_ = rygel_media_item_create_stream_source (_tmp3_, _tmp8_);
	src = _tmp9_;
	_tmp10_ = src;
	if (_tmp10_ == NULL) {
		const gchar* _tmp11_ = NULL;
		GError* _tmp12_;
		_tmp11_ = _ ("Not found");
		_tmp12_ = g_error_new_literal (RYGEL_HTTP_REQUEST_ERROR, RYGEL_HTTP_REQUEST_ERROR_NOT_FOUND, _tmp11_);
		_inner_error_ = _tmp12_;
		if (_inner_error_->domain == RYGEL_HTTP_REQUEST_ERROR) {
			g_propagate_error (error, _inner_error_);
			_g_object_unref0 (src);
			_g_object_unref0 (item);
			return NULL;
		} else {
			_g_object_unref0 (src);
			_g_object_unref0 (item);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	{
		RygelTranscoder* _tmp13_;
		RygelMediaItem* _tmp14_;
		RygelDataSource* _tmp15_;
		RygelDataSource* _tmp16_ = NULL;
		RygelDataSource* _tmp17_;
		RygelHTTPGet* _tmp18_;
		RygelDataSource* _tmp19_;
		RygelHTTPResponse* _tmp20_;
		RygelHTTPResponse* _tmp21_;
		_tmp13_ = self->priv->transcoder;
		_tmp14_ = item;
		_tmp15_ = src;
		_tmp16_ = rygel_transcoder_create_source (_tmp13_, _tmp14_, _tmp15_, &_inner_error_);
		_tmp17_ = _tmp16_;
		if (_inner_error_ != NULL) {
			goto __catch45_g_error;
		}
		_g_object_unref0 (src);
		src = _tmp17_;
		_tmp18_ = request;
		_tmp19_ = src;
		_tmp20_ = rygel_http_response_new (_tmp18_, (RygelHTTPGetHandler*) self, _tmp19_, &_inner_error_);
		_tmp21_ = _tmp20_;
		if (_inner_error_ != NULL) {
			goto __catch45_g_error;
		}
		result = _tmp21_;
		_g_object_unref0 (src);
		_g_object_unref0 (item);
		return result;
	}
	goto __finally45;
	__catch45_g_error:
	{
		GError* err = NULL;
		GError* _tmp22_;
		const gchar* _tmp23_;
		GError* _tmp24_;
		err = _inner_error_;
		_inner_error_ = NULL;
		_tmp22_ = err;
		_tmp23_ = _tmp22_->message;
		_tmp24_ = g_error_new_literal (RYGEL_HTTP_REQUEST_ERROR, RYGEL_HTTP_REQUEST_ERROR_NOT_FOUND, _tmp23_);
		_inner_error_ = _tmp24_;
		_g_error_free0 (err);
		goto __finally45;
	}
	__finally45:
	if (_inner_error_->domain == RYGEL_HTTP_REQUEST_ERROR) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (src);
		_g_object_unref0 (item);
		return NULL;
	} else {
		_g_object_unref0 (src);
		_g_object_unref0 (item);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_g_object_unref0 (src);
	_g_object_unref0 (item);
}


static GUPnPDIDLLiteResource* rygel_http_transcode_handler_real_add_resource (RygelHTTPGetHandler* base, GUPnPDIDLLiteObject* didl_object, RygelHTTPGet* request, GError** error) {
	RygelHTTPTranscodeHandler * self;
	GUPnPDIDLLiteResource* result = NULL;
	RygelTranscoder* _tmp0_;
	GUPnPDIDLLiteObject* _tmp1_;
	RygelHTTPGet* _tmp2_;
	RygelMediaObject* _tmp3_;
	RygelHTTPGet* _tmp4_;
	RygelHTTPServer* _tmp5_;
	GUPnPDIDLLiteResource* _tmp6_ = NULL;
	GUPnPDIDLLiteResource* _tmp7_;
	GError * _inner_error_ = NULL;
	self = (RygelHTTPTranscodeHandler*) base;
	g_return_val_if_fail (didl_object != NULL, NULL);
	g_return_val_if_fail (request != NULL, NULL);
	_tmp0_ = self->priv->transcoder;
	_tmp1_ = didl_object;
	_tmp2_ = request;
	_tmp3_ = ((RygelHTTPRequest*) _tmp2_)->object;
	_tmp4_ = request;
	_tmp5_ = ((RygelHTTPRequest*) _tmp4_)->http_server;
	_tmp6_ = rygel_transcoder_add_resource (_tmp0_, G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, gupnp_didl_lite_item_get_type ()) ? ((GUPnPDIDLLiteItem*) _tmp1_) : NULL, G_TYPE_CHECK_INSTANCE_TYPE (_tmp3_, RYGEL_TYPE_MEDIA_ITEM) ? ((RygelMediaItem*) _tmp3_) : NULL, (RygelTranscodeManager*) _tmp5_, &_inner_error_);
	_tmp7_ = _tmp6_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		return NULL;
	}
	result = _tmp7_;
	return result;
}


static void rygel_http_transcode_handler_class_init (RygelHTTPTranscodeHandlerClass * klass) {
	rygel_http_transcode_handler_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelHTTPTranscodeHandlerPrivate));
	RYGEL_HTTP_GET_HANDLER_CLASS (klass)->add_response_headers = rygel_http_transcode_handler_real_add_response_headers;
	RYGEL_HTTP_GET_HANDLER_CLASS (klass)->render_body = rygel_http_transcode_handler_real_render_body;
	RYGEL_HTTP_GET_HANDLER_CLASS (klass)->add_resource = rygel_http_transcode_handler_real_add_resource;
	G_OBJECT_CLASS (klass)->finalize = rygel_http_transcode_handler_finalize;
}


static void rygel_http_transcode_handler_instance_init (RygelHTTPTranscodeHandler * self) {
	self->priv = RYGEL_HTTP_TRANSCODE_HANDLER_GET_PRIVATE (self);
}


static void rygel_http_transcode_handler_finalize (GObject* obj) {
	RygelHTTPTranscodeHandler * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_HTTP_TRANSCODE_HANDLER, RygelHTTPTranscodeHandler);
	_g_object_unref0 (self->priv->transcoder);
	G_OBJECT_CLASS (rygel_http_transcode_handler_parent_class)->finalize (obj);
}


/**
 * The handler for HTTP transcoding requests.
 */
GType rygel_http_transcode_handler_get_type (void) {
	static volatile gsize rygel_http_transcode_handler_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_http_transcode_handler_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelHTTPTranscodeHandlerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_http_transcode_handler_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelHTTPTranscodeHandler), 0, (GInstanceInitFunc) rygel_http_transcode_handler_instance_init, NULL };
		GType rygel_http_transcode_handler_type_id;
		rygel_http_transcode_handler_type_id = g_type_register_static (RYGEL_TYPE_HTTP_GET_HANDLER, "RygelHTTPTranscodeHandler", &g_define_type_info, 0);
		g_once_init_leave (&rygel_http_transcode_handler_type_id__volatile, rygel_http_transcode_handler_type_id);
	}
	return rygel_http_transcode_handler_type_id__volatile;
}



