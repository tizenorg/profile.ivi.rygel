/* rygel-item-removal-queue.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-item-removal-queue.vala, do not modify */

/*
 * Copyright (C) 2010 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
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
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <libgupnp-av/gupnp-av.h>


#define RYGEL_TYPE_ITEM_REMOVAL_QUEUE (rygel_item_removal_queue_get_type ())
#define RYGEL_ITEM_REMOVAL_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_ITEM_REMOVAL_QUEUE, RygelItemRemovalQueue))
#define RYGEL_ITEM_REMOVAL_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_ITEM_REMOVAL_QUEUE, RygelItemRemovalQueueClass))
#define RYGEL_IS_ITEM_REMOVAL_QUEUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_ITEM_REMOVAL_QUEUE))
#define RYGEL_IS_ITEM_REMOVAL_QUEUE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_ITEM_REMOVAL_QUEUE))
#define RYGEL_ITEM_REMOVAL_QUEUE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_ITEM_REMOVAL_QUEUE, RygelItemRemovalQueueClass))

typedef struct _RygelItemRemovalQueue RygelItemRemovalQueue;
typedef struct _RygelItemRemovalQueueClass RygelItemRemovalQueueClass;
typedef struct _RygelItemRemovalQueuePrivate RygelItemRemovalQueuePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

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
typedef struct _Block9Data Block9Data;

#define RYGEL_TYPE_MEDIA_CONTAINER (rygel_media_container_get_type ())
#define RYGEL_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainer))
#define RYGEL_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))
#define RYGEL_IS_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_IS_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_MEDIA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))

typedef struct _RygelMediaContainer RygelMediaContainer;
typedef struct _RygelMediaContainerClass RygelMediaContainerClass;
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

#define RYGEL_TYPE_WRITABLE_CONTAINER (rygel_writable_container_get_type ())
#define RYGEL_WRITABLE_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_WRITABLE_CONTAINER, RygelWritableContainer))
#define RYGEL_IS_WRITABLE_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_WRITABLE_CONTAINER))
#define RYGEL_WRITABLE_CONTAINER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_WRITABLE_CONTAINER, RygelWritableContainerIface))

typedef struct _RygelWritableContainer RygelWritableContainer;
typedef struct _RygelWritableContainerIface RygelWritableContainerIface;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _RygelItemRemovalQueueRemoveNowData RygelItemRemovalQueueRemoveNowData;

struct _RygelItemRemovalQueue {
	GObject parent_instance;
	RygelItemRemovalQueuePrivate * priv;
};

struct _RygelItemRemovalQueueClass {
	GObjectClass parent_class;
};

struct _RygelItemRemovalQueuePrivate {
	GeeHashMap* item_timeouts;
};

struct _Block9Data {
	int _ref_count_;
	RygelItemRemovalQueue * self;
	RygelMediaItem* item;
	GCancellable* cancellable;
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

struct _RygelWritableContainerIface {
	GTypeInterface parent_iface;
	void (*add_item) (RygelWritableContainer* self, RygelMediaItem* item, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*add_item_finish) (RygelWritableContainer* self, GAsyncResult* _res_, GError** error);
	void (*remove_item) (RygelWritableContainer* self, const gchar* id, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*remove_item_finish) (RygelWritableContainer* self, GAsyncResult* _res_, GError** error);
	GeeArrayList* (*get_create_classes) (RygelWritableContainer* self);
	void (*set_create_classes) (RygelWritableContainer* self, GeeArrayList* value);
};

struct _RygelItemRemovalQueueRemoveNowData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelItemRemovalQueue* self;
	RygelMediaItem* item;
	GCancellable* cancellable;
	GeeHashMap* _tmp0_;
	RygelMediaItem* _tmp1_;
	const gchar* _tmp2_;
	RygelMediaItem* _tmp3_;
	RygelMediaContainer* _tmp4_;
	RygelWritableContainer* _tmp5_;
	RygelWritableContainer* parent;
	RygelMediaItem* _tmp6_;
	const gchar* _tmp7_;
	GCancellable* _tmp8_;
	RygelMediaItem* _tmp9_;
	const gchar* _tmp10_;
	GError* err;
	RygelMediaItem* _tmp11_;
	const gchar* _tmp12_;
	GError* _tmp13_;
	const gchar* _tmp14_;
	GError * _inner_error_;
};


static gpointer rygel_item_removal_queue_parent_class = NULL;
static RygelItemRemovalQueue* rygel_item_removal_queue_removal_queue;
static RygelItemRemovalQueue* rygel_item_removal_queue_removal_queue = NULL;

GType rygel_item_removal_queue_get_type (void) G_GNUC_CONST;
#define RYGEL_ITEM_REMOVAL_QUEUE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_ITEM_REMOVAL_QUEUE, RygelItemRemovalQueuePrivate))
enum  {
	RYGEL_ITEM_REMOVAL_QUEUE_DUMMY_PROPERTY
};
#define RYGEL_ITEM_REMOVAL_QUEUE_TIMEOUT ((guint) 35)
RygelItemRemovalQueue* rygel_item_removal_queue_get_default (void);
static RygelItemRemovalQueue* rygel_item_removal_queue_new (void);
static RygelItemRemovalQueue* rygel_item_removal_queue_construct (GType object_type);
GType rygel_media_object_get_type (void) G_GNUC_CONST;
GType rygel_media_item_get_type (void) G_GNUC_CONST;
void rygel_item_removal_queue_queue (RygelItemRemovalQueue* self, RygelMediaItem* item, GCancellable* cancellable);
static Block9Data* block9_data_ref (Block9Data* _data9_);
static void block9_data_unref (void * _userdata_);
GType rygel_media_container_get_type (void) G_GNUC_CONST;
RygelMediaContainer* rygel_media_object_get_parent_ref (RygelMediaObject* self);
GType rygel_transcode_manager_get_type (void) G_GNUC_CONST;
GType rygel_http_server_get_type (void) G_GNUC_CONST;
void rygel_media_object_set_parent_ref (RygelMediaObject* self, RygelMediaContainer* value);
static gboolean __lambda4_ (Block9Data* _data9_);
void rygel_item_removal_queue_remove_now (RygelItemRemovalQueue* self, RygelMediaItem* item, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_item_removal_queue_remove_now_finish (RygelItemRemovalQueue* self, GAsyncResult* _res_);
static gboolean ___lambda4__gsource_func (gpointer self);
gboolean rygel_item_removal_queue_dequeue (RygelItemRemovalQueue* self, RygelMediaItem* item);
static void rygel_item_removal_queue_remove_now_data_free (gpointer _data);
static gboolean rygel_item_removal_queue_remove_now_co (RygelItemRemovalQueueRemoveNowData* _data_);
GType rygel_writable_container_get_type (void) G_GNUC_CONST;
void rygel_writable_container_remove_item (RygelWritableContainer* self, const gchar* id, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_writable_container_remove_item_finish (RygelWritableContainer* self, GAsyncResult* _res_, GError** error);
static void rygel_item_removal_queue_remove_now_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void rygel_item_removal_queue_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
#line 40 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	return self ? g_object_ref (self) : NULL;
#line 229 "rygel-item-removal-queue.c"
}


RygelItemRemovalQueue* rygel_item_removal_queue_get_default (void) {
	RygelItemRemovalQueue* result = NULL;
	RygelItemRemovalQueue* _tmp0_;
	gboolean _tmp1_ = FALSE;
	RygelItemRemovalQueue* _tmp3_;
	RygelItemRemovalQueue* _tmp4_;
#line 36 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp0_ = rygel_item_removal_queue_removal_queue;
#line 36 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp1_ = G_UNLIKELY (_tmp0_ == NULL);
#line 36 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	if (_tmp1_) {
#line 245 "rygel-item-removal-queue.c"
		RygelItemRemovalQueue* _tmp2_;
#line 37 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_tmp2_ = rygel_item_removal_queue_new ();
#line 37 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_g_object_unref0 (rygel_item_removal_queue_removal_queue);
#line 37 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		rygel_item_removal_queue_removal_queue = _tmp2_;
#line 253 "rygel-item-removal-queue.c"
	}
#line 40 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp3_ = rygel_item_removal_queue_removal_queue;
#line 40 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp4_ = _g_object_ref0 (_tmp3_);
#line 40 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	result = _tmp4_;
#line 40 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	return result;
#line 263 "rygel-item-removal-queue.c"
}


static Block9Data* block9_data_ref (Block9Data* _data9_) {
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	g_atomic_int_inc (&_data9_->_ref_count_);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	return _data9_;
#line 272 "rygel-item-removal-queue.c"
}


static void block9_data_unref (void * _userdata_) {
	Block9Data* _data9_;
	_data9_ = (Block9Data*) _userdata_;
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	if (g_atomic_int_dec_and_test (&_data9_->_ref_count_)) {
#line 281 "rygel-item-removal-queue.c"
		RygelItemRemovalQueue * self;
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		self = _data9_->self;
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_g_object_unref0 (_data9_->item);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_g_object_unref0 (_data9_->cancellable);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_g_object_unref0 (self);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		g_slice_free (Block9Data, _data9_);
#line 293 "rygel-item-removal-queue.c"
	}
}


static gboolean __lambda4_ (Block9Data* _data9_) {
	RygelItemRemovalQueue * self;
	gboolean result = FALSE;
	RygelMediaItem* _tmp0_;
	const gchar* _tmp1_;
	RygelMediaItem* _tmp2_;
	GCancellable* _tmp3_;
#line 48 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	self = _data9_->self;
#line 49 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp0_ = _data9_->item;
#line 49 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp1_ = ((RygelMediaObject*) _tmp0_)->id;
#line 49 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	g_debug ("rygel-item-removal-queue.vala:49: Timeout on temporary item '%s'.", _tmp1_);
#line 50 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp2_ = _data9_->item;
#line 50 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp3_ = _data9_->cancellable;
#line 50 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	rygel_item_removal_queue_remove_now (self, _tmp2_, _tmp3_, NULL, NULL);
#line 52 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	result = FALSE;
#line 52 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	return result;
#line 323 "rygel-item-removal-queue.c"
}


static gboolean ___lambda4__gsource_func (gpointer self) {
	gboolean result;
	result = __lambda4_ (self);
#line 48 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	return result;
#line 332 "rygel-item-removal-queue.c"
}


void rygel_item_removal_queue_queue (RygelItemRemovalQueue* self, RygelMediaItem* item, GCancellable* cancellable) {
	Block9Data* _data9_;
	RygelMediaItem* _tmp0_;
	RygelMediaItem* _tmp1_;
	GCancellable* _tmp2_;
	GCancellable* _tmp3_;
	RygelMediaItem* _tmp4_;
	RygelMediaContainer* _tmp5_;
	RygelMediaContainer* _tmp6_;
	guint _tmp10_ = 0U;
	guint timeout;
	GeeHashMap* _tmp11_;
	RygelMediaItem* _tmp12_;
	const gchar* _tmp13_;
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	g_return_if_fail (self != NULL);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	g_return_if_fail (item != NULL);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data9_ = g_slice_new0 (Block9Data);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data9_->_ref_count_ = 1;
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data9_->self = g_object_ref (self);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp0_ = item;
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data9_->item = _tmp1_;
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp2_ = cancellable;
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data9_->cancellable = _tmp3_;
#line 44 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp4_ = _data9_->item;
#line 44 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp5_ = rygel_media_object_get_parent_ref ((RygelMediaObject*) _tmp4_);
#line 44 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp6_ = _tmp5_;
#line 44 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	if (_tmp6_ == NULL) {
#line 380 "rygel-item-removal-queue.c"
		RygelMediaItem* _tmp7_;
		RygelMediaItem* _tmp8_;
		RygelMediaContainer* _tmp9_;
#line 45 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_tmp7_ = _data9_->item;
#line 45 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_tmp8_ = _data9_->item;
#line 45 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_tmp9_ = ((RygelMediaObject*) _tmp8_)->parent;
#line 45 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		rygel_media_object_set_parent_ref ((RygelMediaObject*) _tmp7_, _tmp9_);
#line 392 "rygel-item-removal-queue.c"
	}
#line 48 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp10_ = g_timeout_add_seconds_full (G_PRIORITY_DEFAULT, RYGEL_ITEM_REMOVAL_QUEUE_TIMEOUT, ___lambda4__gsource_func, block9_data_ref (_data9_), block9_data_unref);
#line 48 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	timeout = _tmp10_;
#line 55 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp11_ = self->priv->item_timeouts;
#line 55 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp12_ = _data9_->item;
#line 55 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp13_ = ((RygelMediaObject*) _tmp12_)->id;
#line 55 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	gee_abstract_map_set ((GeeAbstractMap*) _tmp11_, _tmp13_, GUINT_TO_POINTER (timeout));
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	block9_data_unref (_data9_);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data9_ = NULL;
#line 410 "rygel-item-removal-queue.c"
}


gboolean rygel_item_removal_queue_dequeue (RygelItemRemovalQueue* self, RygelMediaItem* item) {
	gboolean result = FALSE;
	guint timeout = 0U;
	GeeHashMap* _tmp0_;
	RygelMediaItem* _tmp1_;
	const gchar* _tmp2_;
	gpointer _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
#line 58 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 58 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	g_return_val_if_fail (item != NULL, FALSE);
#line 61 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp0_ = self->priv->item_timeouts;
#line 61 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp1_ = item;
#line 61 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp2_ = ((RygelMediaObject*) _tmp1_)->id;
#line 61 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp4_ = gee_abstract_map_unset ((GeeAbstractMap*) _tmp0_, _tmp2_, &_tmp3_);
#line 61 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	timeout = _tmp3_;
#line 61 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	if (_tmp4_) {
#line 438 "rygel-item-removal-queue.c"
		guint _tmp5_;
#line 62 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_tmp5_ = timeout;
#line 62 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		g_source_remove (_tmp5_);
#line 64 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		result = TRUE;
#line 64 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		return result;
#line 448 "rygel-item-removal-queue.c"
	} else {
#line 66 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		result = FALSE;
#line 66 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		return result;
#line 454 "rygel-item-removal-queue.c"
	}
}


static void rygel_item_removal_queue_remove_now_data_free (gpointer _data) {
	RygelItemRemovalQueueRemoveNowData* _data_;
	_data_ = _data;
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_g_object_unref0 (_data_->item);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_g_object_unref0 (_data_->cancellable);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_g_object_unref0 (_data_->self);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	g_slice_free (RygelItemRemovalQueueRemoveNowData, _data_);
#line 470 "rygel-item-removal-queue.c"
}


void rygel_item_removal_queue_remove_now (RygelItemRemovalQueue* self, RygelMediaItem* item, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelItemRemovalQueueRemoveNowData* _data_;
	RygelItemRemovalQueue* _tmp0_;
	RygelMediaItem* _tmp1_;
	RygelMediaItem* _tmp2_;
	GCancellable* _tmp3_;
	GCancellable* _tmp4_;
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_ = g_slice_new0 (RygelItemRemovalQueueRemoveNowData);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_item_removal_queue_remove_now);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_item_removal_queue_remove_now_data_free);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp0_ = _g_object_ref0 (self);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->self = _tmp0_;
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp1_ = item;
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->item = _tmp2_;
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp3_ = cancellable;
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp4_ = _g_object_ref0 (_tmp3_);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->cancellable = _tmp4_;
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	rygel_item_removal_queue_remove_now_co (_data_);
#line 505 "rygel-item-removal-queue.c"
}


void rygel_item_removal_queue_remove_now_finish (RygelItemRemovalQueue* self, GAsyncResult* _res_) {
	RygelItemRemovalQueueRemoveNowData* _data_;
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
#line 513 "rygel-item-removal-queue.c"
}


static void rygel_item_removal_queue_remove_now_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RygelItemRemovalQueueRemoveNowData* _data_;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_ = _user_data_;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->_source_object_ = source_object;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->_res_ = _res_;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	rygel_item_removal_queue_remove_now_co (_data_);
#line 527 "rygel-item-removal-queue.c"
}


static gboolean rygel_item_removal_queue_remove_now_co (RygelItemRemovalQueueRemoveNowData* _data_) {
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	switch (_data_->_state_) {
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		case 0:
#line 536 "rygel-item-removal-queue.c"
		goto _state_0;
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		case 1:
#line 540 "rygel-item-removal-queue.c"
		goto _state_1;
		default:
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		g_assert_not_reached ();
#line 545 "rygel-item-removal-queue.c"
	}
	_state_0:
#line 71 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->_tmp0_ = _data_->self->priv->item_timeouts;
#line 71 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->_tmp1_ = _data_->item;
#line 71 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->_tmp2_ = ((RygelMediaObject*) _data_->_tmp1_)->id;
#line 71 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	gee_abstract_map_unset ((GeeAbstractMap*) _data_->_tmp0_, _data_->_tmp2_, NULL);
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->_tmp3_ = _data_->item;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->_tmp4_ = ((RygelMediaObject*) _data_->_tmp3_)->parent;
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->_tmp5_ = _g_object_ref0 (RYGEL_IS_WRITABLE_CONTAINER (_data_->_tmp4_) ? ((RygelWritableContainer*) _data_->_tmp4_) : NULL);
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_data_->parent = _data_->_tmp5_;
#line 564 "rygel-item-removal-queue.c"
	{
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_tmp6_ = _data_->item;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_tmp7_ = ((RygelMediaObject*) _data_->_tmp6_)->id;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_tmp8_ = _data_->cancellable;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_state_ = 1;
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		rygel_writable_container_remove_item (_data_->parent, _data_->_tmp7_, _data_->_tmp8_, rygel_item_removal_queue_remove_now_ready, _data_);
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		return FALSE;
#line 578 "rygel-item-removal-queue.c"
		_state_1:
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		rygel_writable_container_remove_item_finish (_data_->parent, _data_->_res_, &_data_->_inner_error_);
#line 76 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		if (_data_->_inner_error_ != NULL) {
#line 584 "rygel-item-removal-queue.c"
			goto __catch51_g_error;
		}
#line 78 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_tmp9_ = _data_->item;
#line 78 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_tmp10_ = ((RygelMediaObject*) _data_->_tmp9_)->id;
#line 78 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		g_debug ("rygel-item-removal-queue.vala:78: Auto-destroyed item '%s'!", _data_->_tmp10_);
#line 593 "rygel-item-removal-queue.c"
	}
	goto __finally51;
	__catch51_g_error:
	{
#line 75 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->err = _data_->_inner_error_;
#line 75 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_inner_error_ = NULL;
#line 80 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_tmp11_ = _data_->item;
#line 80 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_tmp12_ = ((RygelMediaObject*) _data_->_tmp11_)->id;
#line 80 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_tmp13_ = _data_->err;
#line 80 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_data_->_tmp14_ = _data_->_tmp13_->message;
#line 80 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		g_warning ("rygel-item-removal-queue.vala:80: Failed to auto-destroy temporary ite" \
"m '%s': %s", _data_->_tmp12_, _data_->_tmp14_);
#line 75 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_g_error_free0 (_data_->err);
#line 614 "rygel-item-removal-queue.c"
	}
	__finally51:
#line 75 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	if (_data_->_inner_error_ != NULL) {
#line 75 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		_g_object_unref0 (_data_->parent);
#line 75 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
#line 75 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		g_clear_error (&_data_->_inner_error_);
#line 75 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		return FALSE;
#line 627 "rygel-item-removal-queue.c"
	}
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_g_object_unref0 (_data_->parent);
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	if (_data_->_state_ == 0) {
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 635 "rygel-item-removal-queue.c"
	} else {
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
		g_simple_async_result_complete (_data_->_async_result);
#line 639 "rygel-item-removal-queue.c"
	}
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	g_object_unref (_data_->_async_result);
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	return FALSE;
#line 645 "rygel-item-removal-queue.c"
}


static RygelItemRemovalQueue* rygel_item_removal_queue_construct (GType object_type) {
	RygelItemRemovalQueue * self = NULL;
	GeeHashMap* _tmp0_;
#line 86 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	self = (RygelItemRemovalQueue*) g_object_new (object_type, NULL);
#line 87 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_tmp0_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_UINT, NULL, NULL, NULL, NULL, NULL);
#line 87 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_g_object_unref0 (self->priv->item_timeouts);
#line 87 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	self->priv->item_timeouts = _tmp0_;
#line 86 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	return self;
#line 662 "rygel-item-removal-queue.c"
}


static RygelItemRemovalQueue* rygel_item_removal_queue_new (void) {
#line 86 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	return rygel_item_removal_queue_construct (RYGEL_TYPE_ITEM_REMOVAL_QUEUE);
#line 669 "rygel-item-removal-queue.c"
}


static void rygel_item_removal_queue_class_init (RygelItemRemovalQueueClass * klass) {
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	rygel_item_removal_queue_parent_class = g_type_class_peek_parent (klass);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	g_type_class_add_private (klass, sizeof (RygelItemRemovalQueuePrivate));
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_item_removal_queue_finalize;
#line 680 "rygel-item-removal-queue.c"
}


static void rygel_item_removal_queue_instance_init (RygelItemRemovalQueue * self) {
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	self->priv = RYGEL_ITEM_REMOVAL_QUEUE_GET_PRIVATE (self);
#line 687 "rygel-item-removal-queue.c"
}


static void rygel_item_removal_queue_finalize (GObject* obj) {
	RygelItemRemovalQueue * self;
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	self = RYGEL_ITEM_REMOVAL_QUEUE (obj);
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	_g_object_unref0 (self->priv->item_timeouts);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-item-removal-queue.vala"
	G_OBJECT_CLASS (rygel_item_removal_queue_parent_class)->finalize (obj);
#line 699 "rygel-item-removal-queue.c"
}


/**
 * Queues items for removal after 35 seconds or immediately.
 */
GType rygel_item_removal_queue_get_type (void) {
	static volatile gsize rygel_item_removal_queue_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_item_removal_queue_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelItemRemovalQueueClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_item_removal_queue_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelItemRemovalQueue), 0, (GInstanceInitFunc) rygel_item_removal_queue_instance_init, NULL };
		GType rygel_item_removal_queue_type_id;
		rygel_item_removal_queue_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelItemRemovalQueue", &g_define_type_info, 0);
		g_once_init_leave (&rygel_item_removal_queue_type_id__volatile, rygel_item_removal_queue_type_id);
	}
	return rygel_item_removal_queue_type_id__volatile;
}



