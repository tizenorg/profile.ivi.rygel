/* rygel-http-request_http-get.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-http-request_http-get.vala, do not modify */

/*
 * Copyright (C) 2008-2010 Nokia Corporation.
 * Copyright (C) 2006, 2007, 2008 OpenedHand Ltd.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
 *         Jorn Baayen <jorn.baayen@gmail.com>
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
#include <gio/gio.h>
#include <libgupnp/gupnp.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>


#define RYGEL_TYPE_STATE_MACHINE (rygel_state_machine_get_type ())
#define RYGEL_STATE_MACHINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_STATE_MACHINE, RygelStateMachine))
#define RYGEL_IS_STATE_MACHINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_STATE_MACHINE))
#define RYGEL_STATE_MACHINE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_STATE_MACHINE, RygelStateMachineIface))

typedef struct _RygelStateMachine RygelStateMachine;
typedef struct _RygelStateMachineIface RygelStateMachineIface;

#define RYGEL_TYPE_HTTP_REQUEST (rygel_http_request_get_type ())
#define RYGEL_HTTP_REQUEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequest))
#define RYGEL_HTTP_REQUEST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequestClass))
#define RYGEL_IS_HTTP_REQUEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_REQUEST))
#define RYGEL_IS_HTTP_REQUEST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_REQUEST))
#define RYGEL_HTTP_REQUEST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequestClass))

typedef struct _RygelHTTPRequest RygelHTTPRequest;
typedef struct _RygelHTTPRequestClass RygelHTTPRequestClass;
typedef struct _RygelHTTPRequestPrivate RygelHTTPRequestPrivate;

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

#define RYGEL_TYPE_MEDIA_CONTAINER (rygel_media_container_get_type ())
#define RYGEL_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainer))
#define RYGEL_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))
#define RYGEL_IS_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_IS_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_MEDIA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))

typedef struct _RygelMediaContainer RygelMediaContainer;
typedef struct _RygelMediaContainerClass RygelMediaContainerClass;
#define _rygel_media_object_unref0(var) ((var == NULL) ? NULL : (var = (rygel_media_object_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _rygel_client_hacks_unref0(var) ((var == NULL) ? NULL : (var = (rygel_client_hacks_unref (var), NULL)))
typedef struct _RygelHTTPServerPrivate RygelHTTPServerPrivate;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _RygelHttpRequestRunData RygelHttpRequestRunData;

#define RYGEL_TYPE_MEDIA_ITEM (rygel_media_item_get_type ())
#define RYGEL_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem))
#define RYGEL_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))
#define RYGEL_IS_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_IS_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_MEDIA_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))

typedef struct _RygelMediaItem RygelMediaItem;
typedef struct _RygelMediaItemClass RygelMediaItemClass;
typedef struct _RygelHttpRequestFindItemData RygelHttpRequestFindItemData;

typedef enum  {
	RYGEL_HTTP_REQUEST_ERROR_UNACCEPTABLE = SOUP_STATUS_NOT_ACCEPTABLE,
	RYGEL_HTTP_REQUEST_ERROR_BAD_REQUEST = SOUP_STATUS_BAD_REQUEST,
	RYGEL_HTTP_REQUEST_ERROR_NOT_FOUND = SOUP_STATUS_NOT_FOUND,
	RYGEL_HTTP_REQUEST_ERROR_INTERNAL_SERVER_ERROR = SOUP_STATUS_INTERNAL_SERVER_ERROR
} RygelHTTPRequestError;
#define RYGEL_HTTP_REQUEST_ERROR rygel_http_request_error_quark ()
struct _RygelStateMachineIface {
	GTypeInterface parent_iface;
	void (*run) (RygelStateMachine* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*run_finish) (RygelStateMachine* self, GAsyncResult* _res_);
	GCancellable* (*get_cancellable) (RygelStateMachine* self);
	void (*set_cancellable) (RygelStateMachine* self, GCancellable* value);
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

struct _RygelHTTPRequestPrivate {
	RygelMediaContainer* root_container;
	GCancellable* _cancellable;
};

struct _RygelHTTPServer {
	GObject parent_instance;
	RygelHTTPServerPrivate * priv;
	RygelMediaContainer* root_container;
	GUPnPContext* context;
};

struct _RygelHTTPServerClass {
	GObjectClass parent_class;
};

struct _RygelHttpRequestRunData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelHTTPRequest* self;
	SoupServer* _tmp0_;
	SoupMessage* _tmp1_;
	RygelHTTPItemURI* _tmp2_;
	SoupMessage* _tmp3_;
	SoupURI* _tmp4_;
	SoupURI* _tmp5_;
	const gchar* _tmp6_;
	RygelHTTPServer* _tmp7_;
	RygelHTTPItemURI* _tmp8_;
	GError* _error_;
	GError* _tmp9_;
	GError * _inner_error_;
};

struct _RygelHttpRequestFindItemData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelHTTPRequest* self;
	RygelMediaObject* media_object;
	RygelMediaContainer* _tmp0_;
	RygelHTTPItemURI* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	RygelMediaObject* _tmp4_;
	gboolean _tmp5_;
	RygelMediaObject* _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	RygelMediaObject* _tmp9_;
	RygelHTTPItemURI* _tmp10_;
	const gchar* _tmp11_;
	const gchar* _tmp12_;
	gboolean _tmp13_;
	gboolean _tmp14_;
	RygelMediaObject* _tmp15_;
	RygelHTTPItemURI* _tmp16_;
	const gchar* _tmp17_;
	const gchar* _tmp18_;
	gboolean _tmp19_;
	gboolean _tmp20_;
	gboolean _tmp21_;
	const gchar* _tmp22_;
	RygelHTTPItemURI* _tmp23_;
	const gchar* _tmp24_;
	const gchar* _tmp25_;
	GError* _tmp26_;
	RygelMediaObject* _tmp27_;
	RygelMediaObject* _tmp28_;
	GError * _inner_error_;
};


static gpointer rygel_http_request_parent_class = NULL;
static RygelStateMachineIface* rygel_http_request_rygel_state_machine_parent_iface = NULL;

GQuark rygel_http_request_error_quark (void);
GType rygel_state_machine_get_type (void) G_GNUC_CONST;
GType rygel_http_request_get_type (void) G_GNUC_CONST;
GType rygel_http_server_get_type (void) G_GNUC_CONST;
GType rygel_http_item_uri_get_type (void) G_GNUC_CONST;
gpointer rygel_media_object_ref (gpointer instance);
void rygel_media_object_unref (gpointer instance);
GParamSpec* rygel_param_spec_media_object (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_media_object (GValue* value, gpointer v_object);
void rygel_value_take_media_object (GValue* value, gpointer v_object);
gpointer rygel_value_get_media_object (const GValue* value);
GType rygel_media_object_get_type (void) G_GNUC_CONST;
gpointer rygel_client_hacks_ref (gpointer instance);
void rygel_client_hacks_unref (gpointer instance);
GParamSpec* rygel_param_spec_client_hacks (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_client_hacks (GValue* value, gpointer v_object);
void rygel_value_take_client_hacks (GValue* value, gpointer v_object);
gpointer rygel_value_get_client_hacks (const GValue* value);
GType rygel_client_hacks_get_type (void) G_GNUC_CONST;
GType rygel_media_container_get_type (void) G_GNUC_CONST;
#define RYGEL_HTTP_REQUEST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequestPrivate))
enum  {
	RYGEL_HTTP_REQUEST_DUMMY_PROPERTY,
	RYGEL_HTTP_REQUEST_CANCELLABLE
};
RygelHTTPRequest* rygel_http_request_construct (GType object_type, RygelHTTPServer* http_server, SoupServer* server, SoupMessage* msg);
void rygel_state_machine_set_cancellable (RygelStateMachine* self, GCancellable* value);
RygelClientHacks* rygel_client_hacks_create (SoupMessage* message, GError** error);
static void rygel_http_request_real_run_data_free (gpointer _data);
static void rygel_http_request_real_run (RygelStateMachine* base, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_http_request_real_run_co (RygelHttpRequestRunData* _data_);
RygelHTTPItemURI* rygel_http_item_uri_new_from_string (const gchar* uri, RygelHTTPServer* http_server, GError** error);
RygelHTTPItemURI* rygel_http_item_uri_construct_from_string (GType object_type, const gchar* uri, RygelHTTPServer* http_server, GError** error);
void rygel_http_request_find_item (RygelHTTPRequest* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_http_request_find_item_finish (RygelHTTPRequest* self, GAsyncResult* _res_, GError** error);
static void rygel_http_request_run_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
void rygel_http_request_handle (RygelHTTPRequest* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_http_request_handle_finish (RygelHTTPRequest* self, GAsyncResult* _res_, GError** error);
void rygel_http_request_handle_error (RygelHTTPRequest* self, GError* _error_);
static void rygel_http_request_real_find_item_data_free (gpointer _data);
static void rygel_http_request_real_find_item (RygelHTTPRequest* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_http_request_real_find_item_co (RygelHttpRequestFindItemData* _data_);
void rygel_media_container_find_object (RygelMediaContainer* self, const gchar* item_id, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
RygelMediaObject* rygel_media_container_find_object_finish (RygelMediaContainer* self, GAsyncResult* _res_, GError** error);
const gchar* rygel_http_item_uri_get_item_id (RygelHTTPItemURI* self);
static void rygel_http_request_find_item_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
const gchar* rygel_http_item_uri_get_playlist_format (RygelHTTPItemURI* self);
GType rygel_media_item_get_type (void) G_GNUC_CONST;
void rygel_http_request_end (RygelHTTPRequest* self, guint status);
static void rygel_http_request_finalize (GObject* obj);
GCancellable* rygel_state_machine_get_cancellable (RygelStateMachine* self);
static void _vala_rygel_http_request_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_http_request_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GQuark rygel_http_request_error_quark (void) {
	return g_quark_from_static_string ("rygel_http_request_error-quark");
}


static gpointer _rygel_media_object_ref0 (gpointer self) {
	return self ? rygel_media_object_ref (self) : NULL;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


RygelHTTPRequest* rygel_http_request_construct (GType object_type, RygelHTTPServer* http_server, SoupServer* server, SoupMessage* msg) {
	RygelHTTPRequest * self = NULL;
	RygelHTTPServer* _tmp0_ = NULL;
	GCancellable* _tmp1_ = NULL;
	GCancellable* _tmp2_ = NULL;
	RygelHTTPServer* _tmp3_ = NULL;
	RygelMediaContainer* _tmp4_ = NULL;
	RygelMediaContainer* _tmp5_ = NULL;
	SoupServer* _tmp6_ = NULL;
	SoupMessage* _tmp7_ = NULL;
	SoupMessage* _tmp8_ = NULL;
	SoupMessage* _tmp9_ = NULL;
	SoupHTTPVersion _tmp10_ = 0;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (http_server != NULL, NULL);
	g_return_val_if_fail (server != NULL, NULL);
	g_return_val_if_fail (msg != NULL, NULL);
	self = (RygelHTTPRequest*) g_object_new (object_type, NULL);
	_tmp0_ = http_server;
	self->http_server = _tmp0_;
	_tmp1_ = g_cancellable_new ();
	_tmp2_ = _tmp1_;
	rygel_state_machine_set_cancellable ((RygelStateMachine*) self, _tmp2_);
	_g_object_unref0 (_tmp2_);
	_tmp3_ = http_server;
	_tmp4_ = _tmp3_->root_container;
	_tmp5_ = _rygel_media_object_ref0 (_tmp4_);
	_rygel_media_object_unref0 (self->priv->root_container);
	self->priv->root_container = _tmp5_;
	_tmp6_ = server;
	self->server = _tmp6_;
	_tmp7_ = msg;
	_tmp8_ = _g_object_ref0 (_tmp7_);
	_g_object_unref0 (self->msg);
	self->msg = _tmp8_;
	_tmp9_ = msg;
	_tmp10_ = soup_message_get_http_version (_tmp9_);
	if (_tmp10_ == SOUP_HTTP_1_0) {
		SoupMessage* _tmp11_ = NULL;
		SoupMessage* _tmp12_ = NULL;
		SoupMessageHeaders* _tmp13_ = NULL;
		_tmp11_ = msg;
		soup_message_set_http_version (_tmp11_, SOUP_HTTP_1_1);
		_tmp12_ = msg;
		_tmp13_ = _tmp12_->response_headers;
		soup_message_headers_append (_tmp13_, "Connection", "close");
	}
	{
		RygelClientHacks* _tmp14_ = NULL;
		SoupMessage* _tmp15_ = NULL;
		RygelClientHacks* _tmp16_ = NULL;
		_tmp15_ = msg;
		_tmp16_ = rygel_client_hacks_create (_tmp15_, &_inner_error_);
		_tmp14_ = _tmp16_;
		if (_inner_error_ != NULL) {
			goto __catch4_g_error;
		}
		_rygel_client_hacks_unref0 (self->hack);
		self->hack = _tmp14_;
	}
	goto __finally4;
	__catch4_g_error:
	{
		GError* _error_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_g_error_free0 (_error_);
	}
	__finally4:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	return self;
}


static void rygel_http_request_real_run_data_free (gpointer _data) {
	RygelHttpRequestRunData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelHttpRequestRunData, _data_);
}


static void rygel_http_request_real_run (RygelStateMachine* base, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelHTTPRequest * self;
	RygelHttpRequestRunData* _data_;
	RygelHTTPRequest* _tmp0_ = NULL;
	self = (RygelHTTPRequest*) base;
	_data_ = g_slice_new0 (RygelHttpRequestRunData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_http_request_real_run);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_http_request_real_run_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	rygel_http_request_real_run_co (_data_);
}


static void rygel_http_request_real_run_finish (RygelStateMachine* base, GAsyncResult* _res_) {
	RygelHttpRequestRunData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static void rygel_http_request_run_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RygelHttpRequestRunData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	rygel_http_request_real_run_co (_data_);
}


static gboolean rygel_http_request_real_run_co (RygelHttpRequestRunData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		case 2:
		goto _state_2;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _data_->self->server;
	_data_->_tmp1_ = NULL;
	_data_->_tmp1_ = _data_->self->msg;
	soup_server_pause_message (_data_->_tmp0_, _data_->_tmp1_);
	{
		_data_->_tmp3_ = NULL;
		_data_->_tmp3_ = _data_->self->msg;
		_data_->_tmp4_ = NULL;
		_data_->_tmp4_ = soup_message_get_uri (_data_->_tmp3_);
		_data_->_tmp5_ = NULL;
		_data_->_tmp5_ = _data_->_tmp4_;
		_data_->_tmp6_ = NULL;
		_data_->_tmp6_ = _data_->_tmp5_->path;
		_data_->_tmp7_ = NULL;
		_data_->_tmp7_ = _data_->self->http_server;
		_data_->_tmp8_ = NULL;
		_data_->_tmp8_ = rygel_http_item_uri_new_from_string (_data_->_tmp6_, _data_->_tmp7_, &_data_->_inner_error_);
		_data_->_tmp2_ = _data_->_tmp8_;
		if (_data_->_inner_error_ != NULL) {
			goto __catch5_g_error;
		}
		_g_object_unref0 (_data_->self->uri);
		_data_->self->uri = _data_->_tmp2_;
		_data_->_state_ = 1;
		rygel_http_request_find_item (_data_->self, rygel_http_request_run_ready, _data_);
		return FALSE;
		_state_1:
		rygel_http_request_find_item_finish (_data_->self, _data_->_res_, &_data_->_inner_error_);
		if (_data_->_inner_error_ != NULL) {
			goto __catch5_g_error;
		}
		_data_->_state_ = 2;
		rygel_http_request_handle (_data_->self, rygel_http_request_run_ready, _data_);
		return FALSE;
		_state_2:
		rygel_http_request_handle_finish (_data_->self, _data_->_res_, &_data_->_inner_error_);
		if (_data_->_inner_error_ != NULL) {
			goto __catch5_g_error;
		}
	}
	goto __finally5;
	__catch5_g_error:
	{
		_data_->_error_ = _data_->_inner_error_;
		_data_->_inner_error_ = NULL;
		_data_->_tmp9_ = NULL;
		_data_->_tmp9_ = _data_->_error_;
		rygel_http_request_handle_error (_data_->self, _data_->_tmp9_);
		_g_error_free0 (_data_->_error_);
	}
	__finally5:
	if (_data_->_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
		g_clear_error (&_data_->_inner_error_);
		return FALSE;
	}
	rygel_state_machine_set_cancellable ((RygelStateMachine*) _data_->self, NULL);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


void rygel_http_request_handle (RygelHTTPRequest* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RYGEL_HTTP_REQUEST_GET_CLASS (self)->handle (self, _callback_, _user_data_);
}


void rygel_http_request_handle_finish (RygelHTTPRequest* self, GAsyncResult* _res_, GError** error) {
	RYGEL_HTTP_REQUEST_GET_CLASS (self)->handle_finish (self, _res_, error);
}


static void rygel_http_request_real_find_item_data_free (gpointer _data) {
	RygelHttpRequestFindItemData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelHttpRequestFindItemData, _data_);
}


static void rygel_http_request_real_find_item (RygelHTTPRequest* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelHttpRequestFindItemData* _data_;
	RygelHTTPRequest* _tmp0_ = NULL;
	_data_ = g_slice_new0 (RygelHttpRequestFindItemData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_http_request_real_find_item);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_http_request_real_find_item_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	rygel_http_request_real_find_item_co (_data_);
}


static void rygel_http_request_real_find_item_finish (RygelHTTPRequest* self, GAsyncResult* _res_, GError** error) {
	RygelHttpRequestFindItemData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static void rygel_http_request_find_item_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RygelHttpRequestFindItemData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	rygel_http_request_real_find_item_co (_data_);
}


static gboolean rygel_http_request_real_find_item_co (RygelHttpRequestFindItemData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _data_->self->priv->root_container;
	_data_->_tmp1_ = NULL;
	_data_->_tmp1_ = _data_->self->uri;
	_data_->_tmp2_ = NULL;
	_data_->_tmp2_ = rygel_http_item_uri_get_item_id (_data_->_tmp1_);
	_data_->_tmp3_ = NULL;
	_data_->_tmp3_ = _data_->_tmp2_;
	_data_->_state_ = 1;
	rygel_media_container_find_object (_data_->_tmp0_, _data_->_tmp3_, NULL, rygel_http_request_find_item_ready, _data_);
	return FALSE;
	_state_1:
	_data_->_tmp4_ = NULL;
	_data_->_tmp4_ = rygel_media_container_find_object_finish (_data_->_tmp0_, _data_->_res_, &_data_->_inner_error_);
	_data_->media_object = _data_->_tmp4_;
	if (_data_->_inner_error_ != NULL) {
		g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
		g_error_free (_data_->_inner_error_);
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	_data_->_tmp6_ = NULL;
	_data_->_tmp6_ = _data_->media_object;
	if (_data_->_tmp6_ == NULL) {
		_data_->_tmp5_ = TRUE;
	} else {
		_data_->_tmp9_ = NULL;
		_data_->_tmp9_ = _data_->media_object;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_data_->_tmp9_, RYGEL_TYPE_MEDIA_CONTAINER)) {
			_data_->_tmp10_ = NULL;
			_data_->_tmp10_ = _data_->self->uri;
			_data_->_tmp11_ = NULL;
			_data_->_tmp11_ = rygel_http_item_uri_get_playlist_format (_data_->_tmp10_);
			_data_->_tmp12_ = NULL;
			_data_->_tmp12_ = _data_->_tmp11_;
			_data_->_tmp8_ = _data_->_tmp12_ != NULL;
		} else {
			_data_->_tmp8_ = FALSE;
		}
		_data_->_tmp13_ = FALSE;
		_data_->_tmp13_ = _data_->_tmp8_;
		if (_data_->_tmp13_) {
			_data_->_tmp7_ = TRUE;
		} else {
			_data_->_tmp15_ = NULL;
			_data_->_tmp15_ = _data_->media_object;
			if (G_TYPE_CHECK_INSTANCE_TYPE (_data_->_tmp15_, RYGEL_TYPE_MEDIA_ITEM)) {
				_data_->_tmp16_ = NULL;
				_data_->_tmp16_ = _data_->self->uri;
				_data_->_tmp17_ = NULL;
				_data_->_tmp17_ = rygel_http_item_uri_get_playlist_format (_data_->_tmp16_);
				_data_->_tmp18_ = NULL;
				_data_->_tmp18_ = _data_->_tmp17_;
				_data_->_tmp14_ = _data_->_tmp18_ == NULL;
			} else {
				_data_->_tmp14_ = FALSE;
			}
			_data_->_tmp19_ = FALSE;
			_data_->_tmp19_ = _data_->_tmp14_;
			_data_->_tmp7_ = _data_->_tmp19_;
		}
		_data_->_tmp20_ = FALSE;
		_data_->_tmp20_ = _data_->_tmp7_;
		_data_->_tmp5_ = !_data_->_tmp20_;
	}
	_data_->_tmp21_ = FALSE;
	_data_->_tmp21_ = _data_->_tmp5_;
	if (_data_->_tmp21_) {
		_data_->_tmp22_ = NULL;
		_data_->_tmp22_ = _ ("Requested item '%s' not found");
		_data_->_tmp23_ = NULL;
		_data_->_tmp23_ = _data_->self->uri;
		_data_->_tmp24_ = NULL;
		_data_->_tmp24_ = rygel_http_item_uri_get_item_id (_data_->_tmp23_);
		_data_->_tmp25_ = NULL;
		_data_->_tmp25_ = _data_->_tmp24_;
		_data_->_tmp26_ = NULL;
		_data_->_tmp26_ = g_error_new (RYGEL_HTTP_REQUEST_ERROR, RYGEL_HTTP_REQUEST_ERROR_NOT_FOUND, _data_->_tmp22_, _data_->_tmp25_);
		_data_->_inner_error_ = _data_->_tmp26_;
		g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
		g_error_free (_data_->_inner_error_);
		_rygel_media_object_unref0 (_data_->media_object);
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	_data_->_tmp27_ = NULL;
	_data_->_tmp27_ = _data_->media_object;
	_data_->_tmp28_ = NULL;
	_data_->_tmp28_ = _rygel_media_object_ref0 (_data_->_tmp27_);
	_rygel_media_object_unref0 (_data_->self->object);
	_data_->self->object = _data_->_tmp28_;
	_rygel_media_object_unref0 (_data_->media_object);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


void rygel_http_request_find_item (RygelHTTPRequest* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RYGEL_HTTP_REQUEST_GET_CLASS (self)->find_item (self, _callback_, _user_data_);
}


void rygel_http_request_find_item_finish (RygelHTTPRequest* self, GAsyncResult* _res_, GError** error) {
	RYGEL_HTTP_REQUEST_GET_CLASS (self)->find_item_finish (self, _res_, error);
}


void rygel_http_request_handle_error (RygelHTTPRequest* self, GError* _error_) {
	GError* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	SoupServer* _tmp2_ = NULL;
	SoupMessage* _tmp3_ = NULL;
	guint status = 0U;
	GError* _tmp4_ = NULL;
	guint _tmp7_ = 0U;
	g_return_if_fail (self != NULL);
	_tmp0_ = _error_;
	_tmp1_ = _tmp0_->message;
	g_warning ("rygel-http-request_http-get.vala:105: %s", _tmp1_);
	_tmp2_ = self->server;
	_tmp3_ = self->msg;
	soup_server_unpause_message (_tmp2_, _tmp3_);
	_tmp4_ = _error_;
	if (_tmp4_->domain == RYGEL_HTTP_REQUEST_ERROR) {
		GError* _tmp5_ = NULL;
		gint _tmp6_ = 0;
		_tmp5_ = _error_;
		_tmp6_ = _tmp5_->code;
		status = (guint) _tmp6_;
	} else {
		status = (guint) SOUP_STATUS_NOT_FOUND;
	}
	_tmp7_ = status;
	rygel_http_request_end (self, _tmp7_);
}


void rygel_http_request_end (RygelHTTPRequest* self, guint status) {
	guint _tmp0_ = 0U;
	g_return_if_fail (self != NULL);
	_tmp0_ = status;
	if (_tmp0_ != ((guint) SOUP_STATUS_NONE)) {
		SoupMessage* _tmp1_ = NULL;
		guint _tmp2_ = 0U;
		_tmp1_ = self->msg;
		_tmp2_ = status;
		soup_message_set_status (_tmp1_, _tmp2_);
	}
	g_signal_emit_by_name ((RygelStateMachine*) self, "completed");
}


static GCancellable* rygel_http_request_real_get_cancellable (RygelStateMachine* base) {
	GCancellable* result;
	RygelHTTPRequest* self;
	GCancellable* _tmp0_ = NULL;
	self = (RygelHTTPRequest*) base;
	_tmp0_ = self->priv->_cancellable;
	result = _tmp0_;
	return result;
}


static void rygel_http_request_real_set_cancellable (RygelStateMachine* base, GCancellable* value) {
	RygelHTTPRequest* self;
	GCancellable* _tmp0_ = NULL;
	GCancellable* _tmp1_ = NULL;
	self = (RygelHTTPRequest*) base;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_cancellable);
	self->priv->_cancellable = _tmp1_;
	g_object_notify ((GObject *) self, "cancellable");
}


static void rygel_http_request_class_init (RygelHTTPRequestClass * klass) {
	rygel_http_request_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelHTTPRequestPrivate));
	RYGEL_HTTP_REQUEST_CLASS (klass)->find_item = rygel_http_request_real_find_item;
	RYGEL_HTTP_REQUEST_CLASS (klass)->find_item_finish = rygel_http_request_real_find_item_finish;
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_http_request_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_http_request_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_http_request_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_REQUEST_CANCELLABLE, g_param_spec_object ("cancellable", "cancellable", "cancellable", g_cancellable_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void rygel_http_request_rygel_state_machine_interface_init (RygelStateMachineIface * iface) {
	rygel_http_request_rygel_state_machine_parent_iface = g_type_interface_peek_parent (iface);
	iface->run = (void (*)(RygelStateMachine*)) rygel_http_request_real_run;
	iface->run_finish = rygel_http_request_real_run_finish;
	iface->get_cancellable = rygel_http_request_real_get_cancellable;
	iface->set_cancellable = rygel_http_request_real_set_cancellable;
}


static void rygel_http_request_instance_init (RygelHTTPRequest * self) {
	self->priv = RYGEL_HTTP_REQUEST_GET_PRIVATE (self);
}


static void rygel_http_request_finalize (GObject* obj) {
	RygelHTTPRequest * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequest);
	_rygel_media_object_unref0 (self->priv->root_container);
	_g_object_unref0 (self->msg);
	_g_object_unref0 (self->priv->_cancellable);
	_g_object_unref0 (self->uri);
	_rygel_media_object_unref0 (self->object);
	_rygel_client_hacks_unref0 (self->hack);
	G_OBJECT_CLASS (rygel_http_request_parent_class)->finalize (obj);
}


/**
 * Base class for HTTP client requests.
 */
GType rygel_http_request_get_type (void) {
	static volatile gsize rygel_http_request_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_http_request_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelHTTPRequestClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_http_request_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelHTTPRequest), 0, (GInstanceInitFunc) rygel_http_request_instance_init, NULL };
		static const GInterfaceInfo rygel_state_machine_info = { (GInterfaceInitFunc) rygel_http_request_rygel_state_machine_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType rygel_http_request_type_id;
		rygel_http_request_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelHTTPRequest", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_type_add_interface_static (rygel_http_request_type_id, RYGEL_TYPE_STATE_MACHINE, &rygel_state_machine_info);
		g_once_init_leave (&rygel_http_request_type_id__volatile, rygel_http_request_type_id);
	}
	return rygel_http_request_type_id__volatile;
}


static void _vala_rygel_http_request_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelHTTPRequest * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequest);
	switch (property_id) {
		case RYGEL_HTTP_REQUEST_CANCELLABLE:
		g_value_set_object (value, rygel_state_machine_get_cancellable ((RygelStateMachine*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_http_request_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelHTTPRequest * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_HTTP_REQUEST, RygelHTTPRequest);
	switch (property_id) {
		case RYGEL_HTTP_REQUEST_CANCELLABLE:
		rygel_state_machine_set_cancellable ((RygelStateMachine*) self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



