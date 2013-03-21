/* rygel-http-response.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-http-response.vala, do not modify */

/*
 * Copyright (C) 2008-2012 Nokia Corporation.
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
#include <gio/gio.h>
#include <libsoup/soup.h>
#include <stdlib.h>
#include <string.h>


#define RYGEL_TYPE_STATE_MACHINE (rygel_state_machine_get_type ())
#define RYGEL_STATE_MACHINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_STATE_MACHINE, RygelStateMachine))
#define RYGEL_IS_STATE_MACHINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_STATE_MACHINE))
#define RYGEL_STATE_MACHINE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_STATE_MACHINE, RygelStateMachineIface))

typedef struct _RygelStateMachine RygelStateMachine;
typedef struct _RygelStateMachineIface RygelStateMachineIface;

#define RYGEL_TYPE_HTTP_RESPONSE (rygel_http_response_get_type ())
#define RYGEL_HTTP_RESPONSE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponse))
#define RYGEL_HTTP_RESPONSE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponseClass))
#define RYGEL_IS_HTTP_RESPONSE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_RESPONSE))
#define RYGEL_IS_HTTP_RESPONSE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_RESPONSE))
#define RYGEL_HTTP_RESPONSE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponseClass))

typedef struct _RygelHTTPResponse RygelHTTPResponse;
typedef struct _RygelHTTPResponseClass RygelHTTPResponseClass;
typedef struct _RygelHTTPResponsePrivate RygelHTTPResponsePrivate;

#define RYGEL_TYPE_HTTP_SEEK (rygel_http_seek_get_type ())
#define RYGEL_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeek))
#define RYGEL_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))
#define RYGEL_IS_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_IS_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_HTTP_SEEK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))

typedef struct _RygelHTTPSeek RygelHTTPSeek;
typedef struct _RygelHTTPSeekClass RygelHTTPSeekClass;

#define RYGEL_TYPE_DATA_SOURCE (rygel_data_source_get_type ())
#define RYGEL_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DATA_SOURCE, RygelDataSource))
#define RYGEL_IS_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DATA_SOURCE))
#define RYGEL_DATA_SOURCE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_DATA_SOURCE, RygelDataSourceIface))

typedef struct _RygelDataSource RygelDataSource;
typedef struct _RygelDataSourceIface RygelDataSourceIface;

#define RYGEL_TYPE_DATA_SINK (rygel_data_sink_get_type ())
#define RYGEL_DATA_SINK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DATA_SINK, RygelDataSink))
#define RYGEL_DATA_SINK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_DATA_SINK, RygelDataSinkClass))
#define RYGEL_IS_DATA_SINK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DATA_SINK))
#define RYGEL_IS_DATA_SINK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_DATA_SINK))
#define RYGEL_DATA_SINK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_DATA_SINK, RygelDataSinkClass))

typedef struct _RygelDataSink RygelDataSink;
typedef struct _RygelDataSinkClass RygelDataSinkClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_TYPE_HTTP_GET (rygel_http_get_get_type ())
#define RYGEL_HTTP_GET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_GET, RygelHTTPGet))
#define RYGEL_HTTP_GET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_GET, RygelHTTPGetClass))
#define RYGEL_IS_HTTP_GET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_GET))
#define RYGEL_IS_HTTP_GET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_GET))
#define RYGEL_HTTP_GET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_GET, RygelHTTPGetClass))

typedef struct _RygelHTTPGet RygelHTTPGet;
typedef struct _RygelHTTPGetClass RygelHTTPGetClass;

#define RYGEL_TYPE_HTTP_GET_HANDLER (rygel_http_get_handler_get_type ())
#define RYGEL_HTTP_GET_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandler))
#define RYGEL_HTTP_GET_HANDLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandlerClass))
#define RYGEL_IS_HTTP_GET_HANDLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_GET_HANDLER))
#define RYGEL_IS_HTTP_GET_HANDLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_GET_HANDLER))
#define RYGEL_HTTP_GET_HANDLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_GET_HANDLER, RygelHTTPGetHandlerClass))

typedef struct _RygelHTTPGetHandler RygelHTTPGetHandler;
typedef struct _RygelHTTPGetHandlerClass RygelHTTPGetHandlerClass;
typedef struct _RygelHTTPGetPrivate RygelHTTPGetPrivate;

#define RYGEL_TYPE_MEDIA_ITEM (rygel_media_item_get_type ())
#define RYGEL_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem))
#define RYGEL_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))
#define RYGEL_IS_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_IS_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_MEDIA_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))

typedef struct _RygelMediaItem RygelMediaItem;
typedef struct _RygelMediaItemClass RygelMediaItemClass;
typedef struct _RygelHTTPGetHandlerPrivate RygelHTTPGetHandlerPrivate;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _RygelHttpResponseRunData RygelHttpResponseRunData;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _RygelStateMachineIface {
	GTypeInterface parent_iface;
	void (*run) (RygelStateMachine* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*run_finish) (RygelStateMachine* self, GAsyncResult* _res_);
	GCancellable* (*get_cancellable) (RygelStateMachine* self);
	void (*set_cancellable) (RygelStateMachine* self, GCancellable* value);
};

struct _RygelHTTPResponse {
	GObject parent_instance;
	RygelHTTPResponsePrivate * priv;
	SoupMessage* msg;
	RygelHTTPSeek* seek;
};

struct _RygelHTTPResponseClass {
	GObjectClass parent_class;
	void (*end) (RygelHTTPResponse* self, gboolean aborted, guint status);
};

struct _RygelDataSourceIface {
	GTypeInterface parent_iface;
	void (*start) (RygelDataSource* self, RygelHTTPSeek* offsets, GError** error);
	void (*freeze) (RygelDataSource* self);
	void (*thaw) (RygelDataSource* self);
	void (*stop) (RygelDataSource* self);
};

struct _RygelHTTPResponsePrivate {
	SoupServer* _server;
	GCancellable* _cancellable;
	GSourceFunc run_continue;
	gpointer run_continue_target;
	GDestroyNotify run_continue_target_destroy_notify;
	gint _priority;
	RygelDataSource* src;
	RygelDataSink* sink;
	gboolean unref_soup_server;
};

struct _RygelHTTPGet {
	GObject parent_instance;
	RygelHTTPGetPrivate * priv;
	SoupServer* server;
	SoupMessage* msg;
	GCancellable* cancellable;
	RygelMediaItem* item;
	RygelHTTPSeek* seek;
};

struct _RygelHTTPGetClass {
	GObjectClass parent_class;
};

struct _RygelHTTPGetHandler {
	GObject parent_instance;
	RygelHTTPGetHandlerPrivate * priv;
	GCancellable* cancellable;
};

struct _RygelHTTPGetHandlerClass {
	GObjectClass parent_class;
};

typedef enum  {
	RYGEL_DATA_SOURCE_ERROR_GENERAL,
	RYGEL_DATA_SOURCE_ERROR_SEEK_FAILED
} RygelDataSourceError;
#define RYGEL_DATA_SOURCE_ERROR rygel_data_source_error_quark ()
struct _RygelHttpResponseRunData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelHTTPResponse* self;
	RygelDataSource* _tmp0_;
	RygelHTTPSeek* _tmp1_;
	GError* _error_;
	GError * _inner_error_;
};


static gpointer rygel_http_response_parent_class = NULL;
static RygelStateMachineIface* rygel_http_response_rygel_state_machine_parent_iface = NULL;

GType rygel_state_machine_get_type (void) G_GNUC_CONST;
GType rygel_http_response_get_type (void) G_GNUC_CONST;
GType rygel_http_seek_get_type (void) G_GNUC_CONST;
GType rygel_data_source_get_type (void) G_GNUC_CONST;
GType rygel_data_sink_get_type (void) G_GNUC_CONST;
#define RYGEL_HTTP_RESPONSE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponsePrivate))
enum  {
	RYGEL_HTTP_RESPONSE_DUMMY_PROPERTY,
	RYGEL_HTTP_RESPONSE_SERVER,
	RYGEL_HTTP_RESPONSE_CANCELLABLE,
	RYGEL_HTTP_RESPONSE_PRIORITY
};
SoupServer* rygel_http_response_get_server (RygelHTTPResponse* self);
static void rygel_http_response_on_server_weak_ref (RygelHTTPResponse* self, GObject* object);
static void _rygel_http_response_on_server_weak_ref_gweak_notify (gpointer self, GObject* object);
GType rygel_http_get_get_type (void) G_GNUC_CONST;
GType rygel_http_get_handler_get_type (void) G_GNUC_CONST;
RygelHTTPResponse* rygel_http_response_new (RygelHTTPGet* request, RygelHTTPGetHandler* request_handler, RygelDataSource* src, GError** error);
RygelHTTPResponse* rygel_http_response_construct (GType object_type, RygelHTTPGet* request, RygelHTTPGetHandler* request_handler, RygelDataSource* src, GError** error);
gpointer rygel_media_item_ref (gpointer instance);
void rygel_media_item_unref (gpointer instance);
GParamSpec* rygel_param_spec_media_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_media_item (GValue* value, gpointer v_object);
void rygel_value_take_media_item (GValue* value, gpointer v_object);
gpointer rygel_value_get_media_item (const GValue* value);
GType rygel_media_item_get_type (void) G_GNUC_CONST;
static void rygel_http_response_set_server (RygelHTTPResponse* self, SoupServer* value);
void rygel_state_machine_set_cancellable (RygelStateMachine* self, GCancellable* value);
RygelDataSink* rygel_data_sink_new (RygelDataSource* source, SoupServer* server, SoupMessage* message, RygelHTTPSeek* offsets);
RygelDataSink* rygel_data_sink_construct (GType object_type, RygelDataSource* source, SoupServer* server, SoupMessage* message, RygelHTTPSeek* offsets);
static void __lambda5_ (RygelHTTPResponse* self);
void rygel_http_response_end (RygelHTTPResponse* self, gboolean aborted, guint status);
static void ___lambda5__rygel_data_source_done (RygelDataSource* _sender, gpointer self);
static void __lambda6_ (RygelHTTPResponse* self, GError* _error_);
GQuark rygel_data_source_error_quark (void);
static void ___lambda6__rygel_data_source_error (RygelDataSource* _sender, GError* _error_, gpointer self);
GCancellable* rygel_state_machine_get_cancellable (RygelStateMachine* self);
static void rygel_http_response_on_cancelled (RygelHTTPResponse* self, GCancellable* cancellable);
static void _rygel_http_response_on_cancelled_g_cancellable_cancelled (GCancellable* _sender, gpointer self);
static void rygel_http_response_real_run_data_free (gpointer _data);
static void rygel_http_response_real_run (RygelStateMachine* base, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_http_response_real_run_co (RygelHttpResponseRunData* _data_);
void rygel_state_machine_run (RygelStateMachine* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_state_machine_run_finish (RygelStateMachine* self, GAsyncResult* _res_);
static gboolean _rygel_http_response_real_run_co_gsource_func (gpointer self);
void rygel_data_source_start (RygelDataSource* self, RygelHTTPSeek* offsets, GError** error);
static gboolean ___lambda7_ (RygelHTTPResponse* self);
static gboolean ____lambda7__gsource_func (gpointer self);
static void rygel_http_response_real_end (RygelHTTPResponse* self, gboolean aborted, guint status);
void rygel_data_source_stop (RygelDataSource* self);
gint rygel_http_response_get_priority (RygelHTTPResponse* self);
static void rygel_http_response_finalize (GObject* obj);
static void _vala_rygel_http_response_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_http_response_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static void _rygel_http_response_on_server_weak_ref_gweak_notify (gpointer self, GObject* object) {
	rygel_http_response_on_server_weak_ref (self, object);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void __lambda5_ (RygelHTTPResponse* self) {
	rygel_http_response_end (self, FALSE, (guint) SOUP_STATUS_NONE);
}


static void ___lambda5__rygel_data_source_done (RygelDataSource* _sender, gpointer self) {
	__lambda5_ (self);
}


static void __lambda6_ (RygelHTTPResponse* self, GError* _error_) {
	GError* _tmp0_;
	_tmp0_ = _error_;
	if (g_error_matches (_tmp0_, RYGEL_DATA_SOURCE_ERROR, RYGEL_DATA_SOURCE_ERROR_SEEK_FAILED)) {
		rygel_http_response_end (self, FALSE, (guint) SOUP_STATUS_REQUESTED_RANGE_NOT_SATISFIABLE);
	} else {
		rygel_http_response_end (self, FALSE, (guint) SOUP_STATUS_NONE);
	}
}


static void ___lambda6__rygel_data_source_error (RygelDataSource* _sender, GError* _error_, gpointer self) {
	__lambda6_ (self, _error_);
}


static void _rygel_http_response_on_cancelled_g_cancellable_cancelled (GCancellable* _sender, gpointer self) {
	rygel_http_response_on_cancelled (self, _sender);
}


RygelHTTPResponse* rygel_http_response_construct (GType object_type, RygelHTTPGet* request, RygelHTTPGetHandler* request_handler, RygelDataSource* src, GError** error) {
	RygelHTTPResponse * self = NULL;
	RygelHTTPGet* _tmp0_;
	SoupServer* _tmp1_;
	RygelHTTPGet* _tmp2_;
	SoupMessage* _tmp3_;
	SoupMessage* _tmp4_;
	RygelHTTPGetHandler* _tmp5_;
	GCancellable* _tmp6_;
	RygelHTTPGet* _tmp7_;
	RygelHTTPSeek* _tmp8_;
	RygelHTTPSeek* _tmp9_;
	RygelDataSource* _tmp10_;
	RygelDataSource* _tmp11_;
	RygelDataSource* _tmp12_;
	SoupServer* _tmp13_;
	SoupMessage* _tmp14_;
	RygelHTTPSeek* _tmp15_;
	RygelDataSink* _tmp16_;
	RygelDataSource* _tmp17_;
	RygelDataSource* _tmp18_;
	GCancellable* _tmp19_;
	GCancellable* _tmp20_;
	SoupMessage* _tmp23_;
	SoupMessageBody* _tmp24_;
	SoupServer* _tmp25_;
	g_return_val_if_fail (request != NULL, NULL);
	g_return_val_if_fail (request_handler != NULL, NULL);
	g_return_val_if_fail (src != NULL, NULL);
	self = (RygelHTTPResponse*) g_object_new (object_type, NULL);
	_tmp0_ = request;
	_tmp1_ = _tmp0_->server;
	rygel_http_response_set_server (self, _tmp1_);
	_tmp2_ = request;
	_tmp3_ = _tmp2_->msg;
	_tmp4_ = _g_object_ref0 (_tmp3_);
	_g_object_unref0 (self->msg);
	self->msg = _tmp4_;
	_tmp5_ = request_handler;
	_tmp6_ = _tmp5_->cancellable;
	rygel_state_machine_set_cancellable ((RygelStateMachine*) self, _tmp6_);
	_tmp7_ = request;
	_tmp8_ = _tmp7_->seek;
	_tmp9_ = _g_object_ref0 (_tmp8_);
	_g_object_unref0 (self->seek);
	self->seek = _tmp9_;
	_tmp10_ = src;
	_tmp11_ = _g_object_ref0 (_tmp10_);
	_g_object_unref0 (self->priv->src);
	self->priv->src = _tmp11_;
	_tmp12_ = self->priv->src;
	_tmp13_ = self->priv->_server;
	_tmp14_ = self->msg;
	_tmp15_ = self->seek;
	_tmp16_ = rygel_data_sink_new (_tmp12_, _tmp13_, _tmp14_, _tmp15_);
	_g_object_unref0 (self->priv->sink);
	self->priv->sink = _tmp16_;
	_tmp17_ = self->priv->src;
	g_signal_connect_object (_tmp17_, "done", (GCallback) ___lambda5__rygel_data_source_done, self, 0);
	_tmp18_ = self->priv->src;
	g_signal_connect_object (_tmp18_, "error", (GCallback) ___lambda6__rygel_data_source_error, self, 0);
	_tmp19_ = rygel_state_machine_get_cancellable ((RygelStateMachine*) self);
	_tmp20_ = _tmp19_;
	if (_tmp20_ != NULL) {
		GCancellable* _tmp21_;
		GCancellable* _tmp22_;
		_tmp21_ = rygel_state_machine_get_cancellable ((RygelStateMachine*) self);
		_tmp22_ = _tmp21_;
		g_signal_connect_object (_tmp22_, "cancelled", (GCallback) _rygel_http_response_on_cancelled_g_cancellable_cancelled, self, 0);
	}
	_tmp23_ = self->msg;
	_tmp24_ = _tmp23_->response_body;
	soup_message_body_set_accumulate (_tmp24_, FALSE);
	_tmp25_ = self->priv->_server;
	g_object_weak_ref ((GObject*) _tmp25_, _rygel_http_response_on_server_weak_ref_gweak_notify, self);
	self->priv->unref_soup_server = TRUE;
	return self;
}


RygelHTTPResponse* rygel_http_response_new (RygelHTTPGet* request, RygelHTTPGetHandler* request_handler, RygelDataSource* src, GError** error) {
	return rygel_http_response_construct (RYGEL_TYPE_HTTP_RESPONSE, request, request_handler, src, error);
}


static void rygel_http_response_real_run_data_free (gpointer _data) {
	RygelHttpResponseRunData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelHttpResponseRunData, _data_);
}


static void rygel_http_response_real_run (RygelStateMachine* base, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelHTTPResponse * self;
	RygelHttpResponseRunData* _data_;
	RygelHTTPResponse* _tmp0_;
	self = (RygelHTTPResponse*) base;
	_data_ = g_slice_new0 (RygelHttpResponseRunData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_http_response_real_run);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_http_response_real_run_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	rygel_http_response_real_run_co (_data_);
}


static void rygel_http_response_real_run_finish (RygelStateMachine* base, GAsyncResult* _res_) {
	RygelHttpResponseRunData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static gboolean _rygel_http_response_real_run_co_gsource_func (gpointer self) {
	gboolean result;
	result = rygel_http_response_real_run_co (self);
	return result;
}


static gboolean ___lambda7_ (RygelHTTPResponse* self) {
	gboolean result = FALSE;
	rygel_http_response_end (self, FALSE, (guint) SOUP_STATUS_NONE);
	result = FALSE;
	return result;
}


static gboolean ____lambda7__gsource_func (gpointer self) {
	gboolean result;
	result = ___lambda7_ (self);
	return result;
}


static gboolean rygel_http_response_real_run_co (RygelHttpResponseRunData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	(_data_->self->priv->run_continue_target_destroy_notify == NULL) ? NULL : (_data_->self->priv->run_continue_target_destroy_notify (_data_->self->priv->run_continue_target), NULL);
	_data_->self->priv->run_continue = NULL;
	_data_->self->priv->run_continue_target = NULL;
	_data_->self->priv->run_continue_target_destroy_notify = NULL;
	_data_->self->priv->run_continue = _rygel_http_response_real_run_co_gsource_func;
	_data_->self->priv->run_continue_target = _data_;
	_data_->self->priv->run_continue_target_destroy_notify = NULL;
	{
		_data_->_tmp0_ = _data_->self->priv->src;
		_data_->_tmp1_ = _data_->self->seek;
		rygel_data_source_start (_data_->_tmp0_, _data_->_tmp1_, &_data_->_inner_error_);
		if (_data_->_inner_error_ != NULL) {
			goto __catch4_g_error;
		}
	}
	goto __finally4;
	__catch4_g_error:
	{
		_data_->_error_ = _data_->_inner_error_;
		_data_->_inner_error_ = NULL;
		g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, ____lambda7__gsource_func, g_object_ref (_data_->self), g_object_unref);
		_g_error_free0 (_data_->_error_);
	}
	__finally4:
	if (_data_->_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
		g_clear_error (&_data_->_inner_error_);
		return FALSE;
	}
	_data_->_state_ = 1;
	return FALSE;
	_state_1:
	;
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void rygel_http_response_real_end (RygelHTTPResponse* self, gboolean aborted, guint status) {
	RygelDataSource* _tmp0_;
	SoupMessage* _tmp1_;
	SoupMessageHeaders* _tmp2_;
	SoupEncoding _tmp3_ = 0;
	SoupEncoding encoding;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp5_;
	gboolean _tmp7_;
	GSourceFunc _tmp12_;
	void* _tmp12__target;
	guint _tmp14_;
	_tmp0_ = self->priv->src;
	rygel_data_source_stop (_tmp0_);
	_tmp1_ = self->msg;
	_tmp2_ = _tmp1_->response_headers;
	_tmp3_ = soup_message_headers_get_encoding (_tmp2_);
	encoding = _tmp3_;
	_tmp5_ = aborted;
	if (!_tmp5_) {
		SoupEncoding _tmp6_;
		_tmp6_ = encoding;
		_tmp4_ = _tmp6_ != SOUP_ENCODING_CONTENT_LENGTH;
	} else {
		_tmp4_ = FALSE;
	}
	_tmp7_ = _tmp4_;
	if (_tmp7_) {
		SoupMessage* _tmp8_;
		SoupMessageBody* _tmp9_;
		SoupServer* _tmp10_;
		SoupMessage* _tmp11_;
		_tmp8_ = self->msg;
		_tmp9_ = _tmp8_->response_body;
		soup_message_body_complete (_tmp9_);
		_tmp10_ = self->priv->_server;
		_tmp11_ = self->msg;
		soup_server_unpause_message (_tmp10_, _tmp11_);
	}
	_tmp12_ = self->priv->run_continue;
	_tmp12__target = self->priv->run_continue_target;
	if (_tmp12_ != NULL) {
		GSourceFunc _tmp13_;
		void* _tmp13__target;
		_tmp13_ = self->priv->run_continue;
		_tmp13__target = self->priv->run_continue_target;
		_tmp13_ (_tmp13__target);
	}
	_tmp14_ = status;
	if (_tmp14_ != ((guint) SOUP_STATUS_NONE)) {
		SoupMessage* _tmp15_;
		guint _tmp16_;
		_tmp15_ = self->msg;
		_tmp16_ = status;
		soup_message_set_status (_tmp15_, _tmp16_);
	}
	g_signal_emit_by_name ((RygelStateMachine*) self, "completed");
}


void rygel_http_response_end (RygelHTTPResponse* self, gboolean aborted, guint status) {
	g_return_if_fail (self != NULL);
	RYGEL_HTTP_RESPONSE_GET_CLASS (self)->end (self, aborted, status);
}


static void rygel_http_response_on_cancelled (RygelHTTPResponse* self, GCancellable* cancellable) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (cancellable != NULL);
	rygel_http_response_end (self, TRUE, (guint) SOUP_STATUS_CANCELLED);
}


static void rygel_http_response_on_server_weak_ref (RygelHTTPResponse* self, GObject* object) {
	GCancellable* _tmp0_;
	GCancellable* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (object != NULL);
	self->priv->unref_soup_server = FALSE;
	_tmp0_ = rygel_state_machine_get_cancellable ((RygelStateMachine*) self);
	_tmp1_ = _tmp0_;
	g_cancellable_cancel (_tmp1_);
}


SoupServer* rygel_http_response_get_server (RygelHTTPResponse* self) {
	SoupServer* result;
	SoupServer* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_server;
	result = _tmp0_;
	return result;
}


static void rygel_http_response_set_server (RygelHTTPResponse* self, SoupServer* value) {
	SoupServer* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_server = _tmp0_;
	g_object_notify ((GObject *) self, "server");
}


static GCancellable* rygel_http_response_real_get_cancellable (RygelStateMachine* base) {
	GCancellable* result;
	RygelHTTPResponse* self;
	GCancellable* _tmp0_;
	self = (RygelHTTPResponse*) base;
	_tmp0_ = self->priv->_cancellable;
	result = _tmp0_;
	return result;
}


static void rygel_http_response_real_set_cancellable (RygelStateMachine* base, GCancellable* value) {
	RygelHTTPResponse* self;
	GCancellable* _tmp0_;
	GCancellable* _tmp1_;
	self = (RygelHTTPResponse*) base;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_cancellable);
	self->priv->_cancellable = _tmp1_;
	g_object_notify ((GObject *) self, "cancellable");
}


gint rygel_http_response_get_priority (RygelHTTPResponse* self) {
	gint result;
	gint _tmp0_;
	SoupMessage* _tmp2_;
	SoupMessageHeaders* _tmp3_;
	const gchar* _tmp4_ = NULL;
	gchar* _tmp5_;
	gchar* mode;
	gboolean _tmp6_ = FALSE;
	const gchar* _tmp7_;
	gboolean _tmp9_;
	gint _tmp12_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_priority;
	if (_tmp0_ != (-1)) {
		gint _tmp1_;
		_tmp1_ = self->priv->_priority;
		result = _tmp1_;
		return result;
	}
	_tmp2_ = self->msg;
	_tmp3_ = _tmp2_->request_headers;
	_tmp4_ = soup_message_headers_get_one (_tmp3_, "transferMode.dlna.org");
	_tmp5_ = g_strdup (_tmp4_);
	mode = _tmp5_;
	_tmp7_ = mode;
	if (_tmp7_ == NULL) {
		_tmp6_ = TRUE;
	} else {
		const gchar* _tmp8_;
		_tmp8_ = mode;
		_tmp6_ = g_strcmp0 (_tmp8_, "Interactive") == 0;
	}
	_tmp9_ = _tmp6_;
	if (_tmp9_) {
		self->priv->_priority = G_PRIORITY_DEFAULT;
	} else {
		const gchar* _tmp10_;
		_tmp10_ = mode;
		if (g_strcmp0 (_tmp10_, "Streaming") == 0) {
			self->priv->_priority = G_PRIORITY_HIGH;
		} else {
			const gchar* _tmp11_;
			_tmp11_ = mode;
			if (g_strcmp0 (_tmp11_, "Background") == 0) {
				self->priv->_priority = G_PRIORITY_LOW;
			} else {
				self->priv->_priority = G_PRIORITY_DEFAULT;
			}
		}
	}
	_tmp12_ = self->priv->_priority;
	result = _tmp12_;
	_g_free0 (mode);
	return result;
}


static void rygel_http_response_class_init (RygelHTTPResponseClass * klass) {
	rygel_http_response_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelHTTPResponsePrivate));
	RYGEL_HTTP_RESPONSE_CLASS (klass)->end = rygel_http_response_real_end;
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_http_response_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_http_response_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_http_response_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_RESPONSE_SERVER, g_param_spec_object ("server", "server", "server", soup_server_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_RESPONSE_CANCELLABLE, g_param_spec_object ("cancellable", "cancellable", "cancellable", g_cancellable_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_RESPONSE_PRIORITY, g_param_spec_int ("priority", "priority", "priority", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void rygel_http_response_rygel_state_machine_interface_init (RygelStateMachineIface * iface) {
	rygel_http_response_rygel_state_machine_parent_iface = g_type_interface_peek_parent (iface);
	iface->run = (void (*)(RygelStateMachine*)) rygel_http_response_real_run;
	iface->run_finish = rygel_http_response_real_run_finish;
	iface->get_cancellable = rygel_http_response_real_get_cancellable;
	iface->set_cancellable = rygel_http_response_real_set_cancellable;
}


static void rygel_http_response_instance_init (RygelHTTPResponse * self) {
	self->priv = RYGEL_HTTP_RESPONSE_GET_PRIVATE (self);
	self->priv->_priority = -1;
}


static void rygel_http_response_finalize (GObject* obj) {
	RygelHTTPResponse * self;
	gboolean _tmp0_;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponse);
	_tmp0_ = self->priv->unref_soup_server;
	if (_tmp0_) {
		SoupServer* _tmp1_;
		_tmp1_ = self->priv->_server;
		g_object_weak_unref ((GObject*) _tmp1_, _rygel_http_response_on_server_weak_ref_gweak_notify, self);
	}
	_g_object_unref0 (self->msg);
	_g_object_unref0 (self->priv->_cancellable);
	_g_object_unref0 (self->seek);
	(self->priv->run_continue_target_destroy_notify == NULL) ? NULL : (self->priv->run_continue_target_destroy_notify (self->priv->run_continue_target), NULL);
	self->priv->run_continue = NULL;
	self->priv->run_continue_target = NULL;
	self->priv->run_continue_target_destroy_notify = NULL;
	_g_object_unref0 (self->priv->src);
	_g_object_unref0 (self->priv->sink);
	G_OBJECT_CLASS (rygel_http_response_parent_class)->finalize (obj);
}


GType rygel_http_response_get_type (void) {
	static volatile gsize rygel_http_response_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_http_response_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelHTTPResponseClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_http_response_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelHTTPResponse), 0, (GInstanceInitFunc) rygel_http_response_instance_init, NULL };
		static const GInterfaceInfo rygel_state_machine_info = { (GInterfaceInitFunc) rygel_http_response_rygel_state_machine_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType rygel_http_response_type_id;
		rygel_http_response_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelHTTPResponse", &g_define_type_info, 0);
		g_type_add_interface_static (rygel_http_response_type_id, RYGEL_TYPE_STATE_MACHINE, &rygel_state_machine_info);
		g_once_init_leave (&rygel_http_response_type_id__volatile, rygel_http_response_type_id);
	}
	return rygel_http_response_type_id__volatile;
}


static void _vala_rygel_http_response_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelHTTPResponse * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponse);
	switch (property_id) {
		case RYGEL_HTTP_RESPONSE_SERVER:
		g_value_set_object (value, rygel_http_response_get_server (self));
		break;
		case RYGEL_HTTP_RESPONSE_CANCELLABLE:
		g_value_set_object (value, rygel_state_machine_get_cancellable ((RygelStateMachine*) self));
		break;
		case RYGEL_HTTP_RESPONSE_PRIORITY:
		g_value_set_int (value, rygel_http_response_get_priority (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_http_response_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelHTTPResponse * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_HTTP_RESPONSE, RygelHTTPResponse);
	switch (property_id) {
		case RYGEL_HTTP_RESPONSE_SERVER:
		rygel_http_response_set_server (self, g_value_get_object (value));
		break;
		case RYGEL_HTTP_RESPONSE_CANCELLABLE:
		rygel_state_machine_set_cancellable ((RygelStateMachine*) self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



