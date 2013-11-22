/* rygel-media-export-playlist-root-container.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-media-export-playlist-root-container.vala, do not modify */

/*
 * Copyright (C) 2013 Intel Corporation.
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
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <glib/gi18n-lib.h>
#include <uuid/uuid.h>
#include <libgupnp-av/gupnp-av.h>


#define RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER (rygel_media_export_db_container_get_type ())
#define RYGEL_MEDIA_EXPORT_DB_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainer))
#define RYGEL_MEDIA_EXPORT_DB_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainerClass))
#define RYGEL_MEDIA_EXPORT_IS_DB_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER))
#define RYGEL_MEDIA_EXPORT_IS_DB_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER))
#define RYGEL_MEDIA_EXPORT_DB_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainerClass))

typedef struct _RygelMediaExportDBContainer RygelMediaExportDBContainer;
typedef struct _RygelMediaExportDBContainerClass RygelMediaExportDBContainerClass;
typedef struct _RygelMediaExportDBContainerPrivate RygelMediaExportDBContainerPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE (rygel_media_export_media_cache_get_type ())
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCache))
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCacheClass))
#define RYGEL_MEDIA_EXPORT_IS_MEDIA_CACHE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE))
#define RYGEL_MEDIA_EXPORT_IS_MEDIA_CACHE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE))
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCacheClass))

typedef struct _RygelMediaExportMediaCache RygelMediaExportMediaCache;
typedef struct _RygelMediaExportMediaCacheClass RygelMediaExportMediaCacheClass;

#define RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER (rygel_media_export_playlist_root_container_get_type ())
#define RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER, RygelMediaExportPlaylistRootContainer))
#define RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER, RygelMediaExportPlaylistRootContainerClass))
#define RYGEL_MEDIA_EXPORT_IS_PLAYLIST_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER))
#define RYGEL_MEDIA_EXPORT_IS_PLAYLIST_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER))
#define RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER, RygelMediaExportPlaylistRootContainerClass))

typedef struct _RygelMediaExportPlaylistRootContainer RygelMediaExportPlaylistRootContainer;
typedef struct _RygelMediaExportPlaylistRootContainerClass RygelMediaExportPlaylistRootContainerClass;
typedef struct _RygelMediaExportPlaylistRootContainerPrivate RygelMediaExportPlaylistRootContainerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _RygelMediaExportPlaylistRootContainerAddItemData RygelMediaExportPlaylistRootContainerAddItemData;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _RygelMediaExportPlaylistRootContainerRemoveItemData RygelMediaExportPlaylistRootContainerRemoveItemData;
typedef struct _RygelMediaExportPlaylistRootContainerAddContainerData RygelMediaExportPlaylistRootContainerAddContainerData;
typedef struct _RygelMediaExportPlaylistRootContainerRemoveContainerData RygelMediaExportPlaylistRootContainerRemoveContainerData;

struct _RygelMediaExportDBContainer {
	RygelMediaContainer parent_instance;
	RygelMediaExportDBContainerPrivate * priv;
	RygelMediaExportMediaCache* media_db;
};

struct _RygelMediaExportDBContainerClass {
	RygelMediaContainerClass parent_class;
	gint (*count_children) (RygelMediaExportDBContainer* self);
	void (*search) (RygelMediaExportDBContainer* self, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
	RygelMediaObjects* (*search_finish) (RygelMediaExportDBContainer* self, GAsyncResult* _res_, guint* total_matches, GError** error);
};

struct _RygelMediaExportPlaylistRootContainer {
	RygelMediaExportDBContainer parent_instance;
	RygelMediaExportPlaylistRootContainerPrivate * priv;
};

struct _RygelMediaExportPlaylistRootContainerClass {
	RygelMediaExportDBContainerClass parent_class;
};

struct _RygelMediaExportPlaylistRootContainerPrivate {
	GeeArrayList* _create_classes;
};

struct _RygelMediaExportPlaylistRootContainerAddItemData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelMediaExportPlaylistRootContainer* self;
	RygelMediaItem* item;
	GCancellable* cancellable;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	GError* _tmp3_;
	GError * _inner_error_;
};

struct _RygelMediaExportPlaylistRootContainerRemoveItemData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelMediaExportPlaylistRootContainer* self;
	gchar* id;
	GCancellable* cancellable;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	GError* _tmp3_;
	GError * _inner_error_;
};

struct _RygelMediaExportPlaylistRootContainerAddContainerData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelMediaExportPlaylistRootContainer* self;
	RygelMediaContainer* container;
	GCancellable* cancellable;
	gboolean _tmp0_;
	RygelMediaContainer* _tmp1_;
	const gchar* _tmp2_;
	const gchar* _tmp3_;
	RygelMediaContainer* _tmp4_;
	const gchar* _tmp5_;
	const gchar* _tmp6_;
	gboolean _tmp7_;
	const gchar* _tmp8_;
	const gchar* _tmp9_;
	const gchar* _tmp10_;
	GError* _tmp11_;
	RygelMediaContainer* _tmp12_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	RygelMediaContainer* _tmp17_;
	RygelMediaExportMediaCache* _tmp18_;
	RygelMediaContainer* _tmp19_;
	RygelMediaExportMediaCache* _tmp20_;
	RygelMediaContainer* _tmp21_;
	GError * _inner_error_;
};

typedef enum  {
	RYGEL_MEDIA_EXPORT_DATABASE_ERROR_IO_ERROR,
	RYGEL_MEDIA_EXPORT_DATABASE_ERROR_SQLITE_ERROR
} RygelMediaExportDatabaseError;
#define RYGEL_MEDIA_EXPORT_DATABASE_ERROR rygel_media_export_database_error_quark ()
struct _RygelMediaExportPlaylistRootContainerRemoveContainerData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelMediaExportPlaylistRootContainer* self;
	gchar* id;
	GCancellable* cancellable;
	RygelMediaExportMediaCache* _tmp0_;
	const gchar* _tmp1_;
	GError * _inner_error_;
};


static gpointer rygel_media_export_playlist_root_container_parent_class = NULL;
static RygelWritableContainerIface* rygel_media_export_playlist_root_container_rygel_writable_container_parent_iface = NULL;

GType rygel_media_export_db_container_get_type (void) G_GNUC_CONST;
GType rygel_media_export_media_cache_get_type (void) G_GNUC_CONST;
GType rygel_media_export_playlist_root_container_get_type (void) G_GNUC_CONST;
#define RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER, RygelMediaExportPlaylistRootContainerPrivate))
enum  {
	RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_DUMMY_PROPERTY,
	RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_CREATE_CLASSES,
	RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_OCM_FLAGS
};
#define RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_ID "virtual-parent:" RYGEL_PLAYLIST_ITEM_UPNP_CLASS
#define RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_URI RYGEL_WRITABLE_CONTAINER_WRITABLE_SCHEME "playlist-root"
RygelMediaExportPlaylistRootContainer* rygel_media_export_playlist_root_container_new (void);
RygelMediaExportPlaylistRootContainer* rygel_media_export_playlist_root_container_construct (GType object_type);
static void rygel_media_export_playlist_root_container_real_constructed (GObject* base);
static void rygel_media_export_playlist_root_container_real_add_item_data_free (gpointer _data);
static void rygel_media_export_playlist_root_container_real_add_item (RygelWritableContainer* base, RygelMediaItem* item, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_media_export_playlist_root_container_real_add_item_co (RygelMediaExportPlaylistRootContainerAddItemData* _data_);
static void rygel_media_export_playlist_root_container_real_remove_item_data_free (gpointer _data);
static void rygel_media_export_playlist_root_container_real_remove_item (RygelWritableContainer* base, const gchar* id, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_media_export_playlist_root_container_real_remove_item_co (RygelMediaExportPlaylistRootContainerRemoveItemData* _data_);
static void rygel_media_export_playlist_root_container_real_add_container_data_free (gpointer _data);
static void rygel_media_export_playlist_root_container_real_add_container (RygelWritableContainer* base, RygelMediaContainer* container, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_media_export_playlist_root_container_real_add_container_co (RygelMediaExportPlaylistRootContainerAddContainerData* _data_);
void rygel_media_export_media_cache_save_container (RygelMediaExportMediaCache* self, RygelMediaContainer* container, GError** error);
void rygel_media_export_media_cache_make_object_guarded (RygelMediaExportMediaCache* self, RygelMediaObject* object, gboolean guarded);
static void rygel_media_export_playlist_root_container_real_remove_container_data_free (gpointer _data);
static void rygel_media_export_playlist_root_container_real_remove_container (RygelWritableContainer* base, const gchar* id, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_media_export_playlist_root_container_real_remove_container_co (RygelMediaExportPlaylistRootContainerRemoveContainerData* _data_);
GQuark rygel_media_export_database_error_quark (void);
void rygel_media_export_media_cache_remove_by_id (RygelMediaExportMediaCache* self, const gchar* id, GError** error);
static void rygel_media_export_playlist_root_container_finalize (GObject* obj);
static void _vala_rygel_media_export_playlist_root_container_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_media_export_playlist_root_container_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


RygelMediaExportPlaylistRootContainer* rygel_media_export_playlist_root_container_construct (GType object_type) {
	RygelMediaExportPlaylistRootContainer * self = NULL;
	const gchar* _tmp0_ = NULL;
	_tmp0_ = _ ("Playlists");
	self = (RygelMediaExportPlaylistRootContainer*) g_object_new (object_type, "id", RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_ID, "title", _tmp0_, "parent", NULL, "child-count", 0, NULL);
	return self;
}


RygelMediaExportPlaylistRootContainer* rygel_media_export_playlist_root_container_new (void) {
	return rygel_media_export_playlist_root_container_construct (RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER);
}


static void rygel_media_export_playlist_root_container_real_constructed (GObject* base) {
	RygelMediaExportPlaylistRootContainer * self;
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	GeeArrayList* _tmp2_ = NULL;
	GeeArrayList* _tmp3_ = NULL;
	GeeArrayList* _tmp4_ = NULL;
	self = (RygelMediaExportPlaylistRootContainer*) base;
	G_OBJECT_CLASS (rygel_media_export_playlist_root_container_parent_class)->constructed ((GObject*) G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainer));
	_tmp0_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
	_tmp1_ = _tmp0_;
	rygel_writable_container_set_create_classes ((RygelWritableContainer*) self, _tmp1_);
	_g_object_unref0 (_tmp1_);
	_tmp2_ = rygel_writable_container_get_create_classes ((RygelWritableContainer*) self);
	_tmp3_ = _tmp2_;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp3_, RYGEL_MEDIA_CONTAINER_UPNP_CLASS);
	_tmp4_ = ((RygelMediaObject*) self)->uris;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp4_, RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_URI);
}


static void rygel_media_export_playlist_root_container_real_add_item_data_free (gpointer _data) {
	RygelMediaExportPlaylistRootContainerAddItemData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->item);
	_g_object_unref0 (_data_->cancellable);
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelMediaExportPlaylistRootContainerAddItemData, _data_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void rygel_media_export_playlist_root_container_real_add_item (RygelWritableContainer* base, RygelMediaItem* item, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelMediaExportPlaylistRootContainer * self;
	RygelMediaExportPlaylistRootContainerAddItemData* _data_;
	RygelMediaExportPlaylistRootContainer* _tmp0_ = NULL;
	RygelMediaItem* _tmp1_ = NULL;
	RygelMediaItem* _tmp2_ = NULL;
	GCancellable* _tmp3_ = NULL;
	GCancellable* _tmp4_ = NULL;
	self = (RygelMediaExportPlaylistRootContainer*) base;
	_data_ = g_slice_new0 (RygelMediaExportPlaylistRootContainerAddItemData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_media_export_playlist_root_container_real_add_item);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_media_export_playlist_root_container_real_add_item_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = item;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->item);
	_data_->item = _tmp2_;
	_tmp3_ = cancellable;
	_tmp4_ = _g_object_ref0 (_tmp3_);
	_g_object_unref0 (_data_->cancellable);
	_data_->cancellable = _tmp4_;
	rygel_media_export_playlist_root_container_real_add_item_co (_data_);
}


static void rygel_media_export_playlist_root_container_real_add_item_finish (RygelWritableContainer* base, GAsyncResult* _res_, GError** error) {
	RygelMediaExportPlaylistRootContainerAddItemData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static gboolean rygel_media_export_playlist_root_container_real_add_item_co (RygelMediaExportPlaylistRootContainerAddItemData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _ ("Can't create items in %s");
	_data_->_tmp1_ = NULL;
	_data_->_tmp1_ = rygel_media_object_get_id ((RygelMediaObject*) _data_->self);
	_data_->_tmp2_ = NULL;
	_data_->_tmp2_ = _data_->_tmp1_;
	_data_->_tmp3_ = NULL;
	_data_->_tmp3_ = g_error_new (RYGEL_WRITABLE_CONTAINER_ERROR, RYGEL_WRITABLE_CONTAINER_ERROR_NOT_IMPLEMENTED, _data_->_tmp0_, _data_->_tmp2_);
	_data_->_inner_error_ = _data_->_tmp3_;
	g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
	g_error_free (_data_->_inner_error_);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void rygel_media_export_playlist_root_container_real_remove_item_data_free (gpointer _data) {
	RygelMediaExportPlaylistRootContainerRemoveItemData* _data_;
	_data_ = _data;
	_g_free0 (_data_->id);
	_g_object_unref0 (_data_->cancellable);
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelMediaExportPlaylistRootContainerRemoveItemData, _data_);
}


static void rygel_media_export_playlist_root_container_real_remove_item (RygelWritableContainer* base, const gchar* id, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelMediaExportPlaylistRootContainer * self;
	RygelMediaExportPlaylistRootContainerRemoveItemData* _data_;
	RygelMediaExportPlaylistRootContainer* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	GCancellable* _tmp3_ = NULL;
	GCancellable* _tmp4_ = NULL;
	self = (RygelMediaExportPlaylistRootContainer*) base;
	_data_ = g_slice_new0 (RygelMediaExportPlaylistRootContainerRemoveItemData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_media_export_playlist_root_container_real_remove_item);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_media_export_playlist_root_container_real_remove_item_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = id;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->id);
	_data_->id = _tmp2_;
	_tmp3_ = cancellable;
	_tmp4_ = _g_object_ref0 (_tmp3_);
	_g_object_unref0 (_data_->cancellable);
	_data_->cancellable = _tmp4_;
	rygel_media_export_playlist_root_container_real_remove_item_co (_data_);
}


static void rygel_media_export_playlist_root_container_real_remove_item_finish (RygelWritableContainer* base, GAsyncResult* _res_, GError** error) {
	RygelMediaExportPlaylistRootContainerRemoveItemData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static gboolean rygel_media_export_playlist_root_container_real_remove_item_co (RygelMediaExportPlaylistRootContainerRemoveItemData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _ ("Can't remove items in %s");
	_data_->_tmp1_ = NULL;
	_data_->_tmp1_ = rygel_media_object_get_id ((RygelMediaObject*) _data_->self);
	_data_->_tmp2_ = NULL;
	_data_->_tmp2_ = _data_->_tmp1_;
	_data_->_tmp3_ = NULL;
	_data_->_tmp3_ = g_error_new (RYGEL_WRITABLE_CONTAINER_ERROR, RYGEL_WRITABLE_CONTAINER_ERROR_NOT_IMPLEMENTED, _data_->_tmp0_, _data_->_tmp2_);
	_data_->_inner_error_ = _data_->_tmp3_;
	g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
	g_error_free (_data_->_inner_error_);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void rygel_media_export_playlist_root_container_real_add_container_data_free (gpointer _data) {
	RygelMediaExportPlaylistRootContainerAddContainerData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->container);
	_g_object_unref0 (_data_->cancellable);
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelMediaExportPlaylistRootContainerAddContainerData, _data_);
}


static void rygel_media_export_playlist_root_container_real_add_container (RygelWritableContainer* base, RygelMediaContainer* container, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelMediaExportPlaylistRootContainer * self;
	RygelMediaExportPlaylistRootContainerAddContainerData* _data_;
	RygelMediaExportPlaylistRootContainer* _tmp0_ = NULL;
	RygelMediaContainer* _tmp1_ = NULL;
	RygelMediaContainer* _tmp2_ = NULL;
	GCancellable* _tmp3_ = NULL;
	GCancellable* _tmp4_ = NULL;
	self = (RygelMediaExportPlaylistRootContainer*) base;
	_data_ = g_slice_new0 (RygelMediaExportPlaylistRootContainerAddContainerData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_media_export_playlist_root_container_real_add_container);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_media_export_playlist_root_container_real_add_container_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = container;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->container);
	_data_->container = _tmp2_;
	_tmp3_ = cancellable;
	_tmp4_ = _g_object_ref0 (_tmp3_);
	_g_object_unref0 (_data_->cancellable);
	_data_->cancellable = _tmp4_;
	rygel_media_export_playlist_root_container_real_add_container_co (_data_);
}


static void rygel_media_export_playlist_root_container_real_add_container_finish (RygelWritableContainer* base, GAsyncResult* _res_, GError** error) {
	RygelMediaExportPlaylistRootContainerAddContainerData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static gchar* uuid_get (void) {
	gchar* result = NULL;
	guchar* id = NULL;
	guchar* _tmp0_ = NULL;
	gint id_length1 = 0;
	gint _id_size_ = 0;
	guchar* unparsed = NULL;
	guchar* _tmp1_ = NULL;
	gint unparsed_length1 = 0;
	gint _unparsed_size_ = 0;
	guchar* _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	guchar* _tmp3_ = NULL;
	gint _tmp3__length1 = 0;
	guchar* _tmp4_ = NULL;
	gint _tmp4__length1 = 0;
	guchar* _tmp5_ = NULL;
	gint _tmp5__length1 = 0;
	guchar _tmp6_ = '\0';
	guchar* _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
	gchar* _tmp8_ = NULL;
	_tmp0_ = g_new0 (guchar, 16);
	id = _tmp0_;
	id_length1 = 16;
	_id_size_ = id_length1;
	_tmp1_ = g_new0 (guchar, 51);
	unparsed = _tmp1_;
	unparsed_length1 = 51;
	_unparsed_size_ = unparsed_length1;
	_tmp2_ = id;
	_tmp2__length1 = id_length1;
	uuid_generate (_tmp2_);
	_tmp3_ = id;
	_tmp3__length1 = id_length1;
	_tmp4_ = unparsed;
	_tmp4__length1 = unparsed_length1;
	uuid_unparse (_tmp3_, _tmp4_);
	_tmp5_ = unparsed;
	_tmp5__length1 = unparsed_length1;
	_tmp5_[50] = (guchar) '\0';
	_tmp6_ = _tmp5_[50];
	_tmp7_ = unparsed;
	_tmp7__length1 = unparsed_length1;
	_tmp8_ = g_strdup ((const gchar*) _tmp7_);
	result = _tmp8_;
	unparsed = (g_free (unparsed), NULL);
	id = (g_free (id), NULL);
	return result;
}


static gboolean rygel_media_export_playlist_root_container_real_add_container_co (RygelMediaExportPlaylistRootContainerAddContainerData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp1_ = NULL;
	_data_->_tmp1_ = _data_->container;
	_data_->_tmp2_ = NULL;
	_data_->_tmp2_ = rygel_media_object_get_upnp_class ((RygelMediaObject*) _data_->_tmp1_);
	_data_->_tmp3_ = NULL;
	_data_->_tmp3_ = _data_->_tmp2_;
	if (g_strcmp0 (_data_->_tmp3_, RYGEL_MEDIA_CONTAINER_PLAYLIST) != 0) {
		_data_->_tmp4_ = NULL;
		_data_->_tmp4_ = _data_->container;
		_data_->_tmp5_ = NULL;
		_data_->_tmp5_ = rygel_media_object_get_upnp_class ((RygelMediaObject*) _data_->_tmp4_);
		_data_->_tmp6_ = NULL;
		_data_->_tmp6_ = _data_->_tmp5_;
		_data_->_tmp0_ = g_strcmp0 (_data_->_tmp6_, RYGEL_MEDIA_CONTAINER_UPNP_CLASS) != 0;
	} else {
		_data_->_tmp0_ = FALSE;
	}
	_data_->_tmp7_ = FALSE;
	_data_->_tmp7_ = _data_->_tmp0_;
	if (_data_->_tmp7_) {
		_data_->_tmp8_ = NULL;
		_data_->_tmp8_ = _ ("upnp:class not supported in %s");
		_data_->_tmp9_ = NULL;
		_data_->_tmp9_ = rygel_media_object_get_id ((RygelMediaObject*) _data_->self);
		_data_->_tmp10_ = NULL;
		_data_->_tmp10_ = _data_->_tmp9_;
		_data_->_tmp11_ = NULL;
		_data_->_tmp11_ = g_error_new (RYGEL_WRITABLE_CONTAINER_ERROR, RYGEL_WRITABLE_CONTAINER_ERROR_NOT_IMPLEMENTED, _data_->_tmp8_, _data_->_tmp10_);
		_data_->_inner_error_ = _data_->_tmp11_;
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
	_data_->_tmp12_ = NULL;
	_data_->_tmp12_ = _data_->container;
	_data_->_tmp13_ = NULL;
	_data_->_tmp13_ = uuid_get ();
	_data_->_tmp14_ = NULL;
	_data_->_tmp14_ = _data_->_tmp13_;
	_data_->_tmp15_ = NULL;
	_data_->_tmp15_ = g_strconcat ("playlist:", _data_->_tmp14_, NULL);
	_data_->_tmp16_ = NULL;
	_data_->_tmp16_ = _data_->_tmp15_;
	rygel_media_object_set_id ((RygelMediaObject*) _data_->_tmp12_, _data_->_tmp16_);
	_g_free0 (_data_->_tmp16_);
	_g_free0 (_data_->_tmp14_);
	_data_->_tmp17_ = NULL;
	_data_->_tmp17_ = _data_->container;
	rygel_media_object_set_upnp_class ((RygelMediaObject*) _data_->_tmp17_, RYGEL_MEDIA_CONTAINER_PLAYLIST);
	_data_->_tmp18_ = NULL;
	_data_->_tmp18_ = ((RygelMediaExportDBContainer*) _data_->self)->media_db;
	_data_->_tmp19_ = NULL;
	_data_->_tmp19_ = _data_->container;
	rygel_media_export_media_cache_save_container (_data_->_tmp18_, _data_->_tmp19_, &_data_->_inner_error_);
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
	_data_->_tmp20_ = NULL;
	_data_->_tmp20_ = ((RygelMediaExportDBContainer*) _data_->self)->media_db;
	_data_->_tmp21_ = NULL;
	_data_->_tmp21_ = _data_->container;
	rygel_media_export_media_cache_make_object_guarded (_data_->_tmp20_, (RygelMediaObject*) _data_->_tmp21_, TRUE);
	rygel_media_container_updated ((RygelMediaContainer*) _data_->self, NULL, RYGEL_OBJECT_EVENT_TYPE_MODIFIED, FALSE);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void rygel_media_export_playlist_root_container_real_remove_container_data_free (gpointer _data) {
	RygelMediaExportPlaylistRootContainerRemoveContainerData* _data_;
	_data_ = _data;
	_g_free0 (_data_->id);
	_g_object_unref0 (_data_->cancellable);
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelMediaExportPlaylistRootContainerRemoveContainerData, _data_);
}


static void rygel_media_export_playlist_root_container_real_remove_container (RygelWritableContainer* base, const gchar* id, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelMediaExportPlaylistRootContainer * self;
	RygelMediaExportPlaylistRootContainerRemoveContainerData* _data_;
	RygelMediaExportPlaylistRootContainer* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	GCancellable* _tmp3_ = NULL;
	GCancellable* _tmp4_ = NULL;
	self = (RygelMediaExportPlaylistRootContainer*) base;
	_data_ = g_slice_new0 (RygelMediaExportPlaylistRootContainerRemoveContainerData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_media_export_playlist_root_container_real_remove_container);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_media_export_playlist_root_container_real_remove_container_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = id;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->id);
	_data_->id = _tmp2_;
	_tmp3_ = cancellable;
	_tmp4_ = _g_object_ref0 (_tmp3_);
	_g_object_unref0 (_data_->cancellable);
	_data_->cancellable = _tmp4_;
	rygel_media_export_playlist_root_container_real_remove_container_co (_data_);
}


static void rygel_media_export_playlist_root_container_real_remove_container_finish (RygelWritableContainer* base, GAsyncResult* _res_, GError** error) {
	RygelMediaExportPlaylistRootContainerRemoveContainerData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static gboolean rygel_media_export_playlist_root_container_real_remove_container_co (RygelMediaExportPlaylistRootContainerRemoveContainerData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = ((RygelMediaExportDBContainer*) _data_->self)->media_db;
	_data_->_tmp1_ = NULL;
	_data_->_tmp1_ = _data_->id;
	rygel_media_export_media_cache_remove_by_id (_data_->_tmp0_, _data_->_tmp1_, &_data_->_inner_error_);
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
	rygel_media_container_updated ((RygelMediaContainer*) _data_->self, NULL, RYGEL_OBJECT_EVENT_TYPE_MODIFIED, FALSE);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static GeeArrayList* rygel_media_export_playlist_root_container_real_get_create_classes (RygelWritableContainer* base) {
	GeeArrayList* result;
	RygelMediaExportPlaylistRootContainer* self;
	GeeArrayList* _tmp0_ = NULL;
	self = (RygelMediaExportPlaylistRootContainer*) base;
	_tmp0_ = self->priv->_create_classes;
	result = _tmp0_;
	return result;
}


static void rygel_media_export_playlist_root_container_real_set_create_classes (RygelWritableContainer* base, GeeArrayList* value) {
	RygelMediaExportPlaylistRootContainer* self;
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	self = (RygelMediaExportPlaylistRootContainer*) base;
	_tmp0_ = value;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->_create_classes);
	self->priv->_create_classes = _tmp1_;
	g_object_notify ((GObject *) self, "create-classes");
}


static GUPnPOCMFlags rygel_media_export_playlist_root_container_real_get_ocm_flags (RygelMediaObject* base) {
	GUPnPOCMFlags result;
	RygelMediaExportPlaylistRootContainer* self;
	GUPnPOCMFlags flags = 0;
	GUPnPOCMFlags _tmp0_ = 0;
	GUPnPOCMFlags _tmp1_ = 0;
	GUPnPOCMFlags _tmp2_ = 0;
	self = (RygelMediaExportPlaylistRootContainer*) base;
	_tmp0_ = RYGEL_MEDIA_OBJECT_CLASS (rygel_media_export_playlist_root_container_parent_class)->get_ocm_flags ((RygelMediaObject*) G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainer));
	flags = _tmp0_;
	_tmp1_ = flags;
	flags = _tmp1_ & (~(GUPNP_OCM_FLAGS_UPLOAD | GUPNP_OCM_FLAGS_UPLOAD_DESTROYABLE));
	_tmp2_ = flags;
	result = _tmp2_;
	return result;
}


static void rygel_media_export_playlist_root_container_class_init (RygelMediaExportPlaylistRootContainerClass * klass) {
	rygel_media_export_playlist_root_container_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelMediaExportPlaylistRootContainerPrivate));
	G_OBJECT_CLASS (klass)->constructed = rygel_media_export_playlist_root_container_real_constructed;
	RYGEL_MEDIA_OBJECT_CLASS (klass)->get_ocm_flags = rygel_media_export_playlist_root_container_real_get_ocm_flags;
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_media_export_playlist_root_container_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_media_export_playlist_root_container_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_media_export_playlist_root_container_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_CREATE_CLASSES, g_param_spec_object ("create-classes", "create-classes", "create-classes", GEE_TYPE_ARRAY_LIST, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_OCM_FLAGS, g_param_spec_flags ("ocm-flags", "ocm-flags", "ocm-flags", gupnp_ocm_flags_get_type (), 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
}


static void rygel_media_export_playlist_root_container_rygel_writable_container_interface_init (RygelWritableContainerIface * iface) {
	rygel_media_export_playlist_root_container_rygel_writable_container_parent_iface = g_type_interface_peek_parent (iface);
	iface->add_item = (void (*)(RygelWritableContainer*, RygelMediaItem*, GCancellable*, GError**)) rygel_media_export_playlist_root_container_real_add_item;
	iface->add_item_finish = rygel_media_export_playlist_root_container_real_add_item_finish;
	iface->remove_item = (void (*)(RygelWritableContainer*, const gchar*, GCancellable*, GError**)) rygel_media_export_playlist_root_container_real_remove_item;
	iface->remove_item_finish = rygel_media_export_playlist_root_container_real_remove_item_finish;
	iface->add_container = (void (*)(RygelWritableContainer*, RygelMediaContainer*, GCancellable*, GError**)) rygel_media_export_playlist_root_container_real_add_container;
	iface->add_container_finish = rygel_media_export_playlist_root_container_real_add_container_finish;
	iface->remove_container = (void (*)(RygelWritableContainer*, const gchar*, GCancellable*, GError**)) rygel_media_export_playlist_root_container_real_remove_container;
	iface->remove_container_finish = rygel_media_export_playlist_root_container_real_remove_container_finish;
	iface->get_create_classes = rygel_media_export_playlist_root_container_real_get_create_classes;
	iface->set_create_classes = rygel_media_export_playlist_root_container_real_set_create_classes;
}


static void rygel_media_export_playlist_root_container_instance_init (RygelMediaExportPlaylistRootContainer * self) {
	self->priv = RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_GET_PRIVATE (self);
}


static void rygel_media_export_playlist_root_container_finalize (GObject* obj) {
	RygelMediaExportPlaylistRootContainer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER, RygelMediaExportPlaylistRootContainer);
	_g_object_unref0 (self->priv->_create_classes);
	G_OBJECT_CLASS (rygel_media_export_playlist_root_container_parent_class)->finalize (obj);
}


/**
 * Special class for the toplevel virtual container which aggregates all
 * playlists.
 *
 * This is a special class compared to the the other virtual classes as it
 * allows the creation of subfolders to create server-side playlists.
 * It does not allow adding or removal of items, only container adding and
 * removal.
 */
GType rygel_media_export_playlist_root_container_get_type (void) {
	static volatile gsize rygel_media_export_playlist_root_container_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_export_playlist_root_container_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaExportPlaylistRootContainerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_export_playlist_root_container_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaExportPlaylistRootContainer), 0, (GInstanceInitFunc) rygel_media_export_playlist_root_container_instance_init, NULL };
		static const GInterfaceInfo rygel_writable_container_info = { (GInterfaceInitFunc) rygel_media_export_playlist_root_container_rygel_writable_container_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType rygel_media_export_playlist_root_container_type_id;
		rygel_media_export_playlist_root_container_type_id = g_type_register_static (RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, "RygelMediaExportPlaylistRootContainer", &g_define_type_info, 0);
		g_type_add_interface_static (rygel_media_export_playlist_root_container_type_id, RYGEL_TYPE_WRITABLE_CONTAINER, &rygel_writable_container_info);
		g_once_init_leave (&rygel_media_export_playlist_root_container_type_id__volatile, rygel_media_export_playlist_root_container_type_id);
	}
	return rygel_media_export_playlist_root_container_type_id__volatile;
}


static void _vala_rygel_media_export_playlist_root_container_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelMediaExportPlaylistRootContainer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER, RygelMediaExportPlaylistRootContainer);
	switch (property_id) {
		case RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_CREATE_CLASSES:
		g_value_set_object (value, rygel_writable_container_get_create_classes ((RygelWritableContainer*) self));
		break;
		case RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_OCM_FLAGS:
		g_value_set_flags (value, rygel_media_object_get_ocm_flags ((RygelMediaObject*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_media_export_playlist_root_container_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelMediaExportPlaylistRootContainer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_MEDIA_EXPORT_TYPE_PLAYLIST_ROOT_CONTAINER, RygelMediaExportPlaylistRootContainer);
	switch (property_id) {
		case RYGEL_MEDIA_EXPORT_PLAYLIST_ROOT_CONTAINER_CREATE_CLASSES:
		rygel_writable_container_set_create_classes ((RygelWritableContainer*) self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



