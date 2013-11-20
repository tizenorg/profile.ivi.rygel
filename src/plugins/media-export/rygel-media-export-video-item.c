/* rygel-media-export-video-item.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-media-export-video-item.vala, do not modify */

/*
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Jens Georg <jensg@openismus.com>
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


#define RYGEL_MEDIA_EXPORT_TYPE_UPDATABLE_OBJECT (rygel_media_export_updatable_object_get_type ())
#define RYGEL_MEDIA_EXPORT_UPDATABLE_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_UPDATABLE_OBJECT, RygelMediaExportUpdatableObject))
#define RYGEL_MEDIA_EXPORT_IS_UPDATABLE_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_UPDATABLE_OBJECT))
#define RYGEL_MEDIA_EXPORT_UPDATABLE_OBJECT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_MEDIA_EXPORT_TYPE_UPDATABLE_OBJECT, RygelMediaExportUpdatableObjectIface))

typedef struct _RygelMediaExportUpdatableObject RygelMediaExportUpdatableObject;
typedef struct _RygelMediaExportUpdatableObjectIface RygelMediaExportUpdatableObjectIface;

#define RYGEL_MEDIA_EXPORT_TYPE_VIDEO_ITEM (rygel_media_export_video_item_get_type ())
#define RYGEL_MEDIA_EXPORT_VIDEO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_VIDEO_ITEM, RygelMediaExportVideoItem))
#define RYGEL_MEDIA_EXPORT_VIDEO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_VIDEO_ITEM, RygelMediaExportVideoItemClass))
#define RYGEL_MEDIA_EXPORT_IS_VIDEO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_VIDEO_ITEM))
#define RYGEL_MEDIA_EXPORT_IS_VIDEO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_VIDEO_ITEM))
#define RYGEL_MEDIA_EXPORT_VIDEO_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_VIDEO_ITEM, RygelMediaExportVideoItemClass))

typedef struct _RygelMediaExportVideoItem RygelMediaExportVideoItem;
typedef struct _RygelMediaExportVideoItemClass RygelMediaExportVideoItemClass;
typedef struct _RygelMediaExportVideoItemPrivate RygelMediaExportVideoItemPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _RygelMediaExportVideoItemCommitData RygelMediaExportVideoItemCommitData;

#define RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE (rygel_media_export_media_cache_get_type ())
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCache))
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCacheClass))
#define RYGEL_MEDIA_EXPORT_IS_MEDIA_CACHE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE))
#define RYGEL_MEDIA_EXPORT_IS_MEDIA_CACHE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE))
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCacheClass))

typedef struct _RygelMediaExportMediaCache RygelMediaExportMediaCache;
typedef struct _RygelMediaExportMediaCacheClass RygelMediaExportMediaCacheClass;
typedef struct _RygelMediaExportVideoItemCommitCustomData RygelMediaExportVideoItemCommitCustomData;

struct _RygelMediaExportUpdatableObjectIface {
	GTypeInterface parent_iface;
	void (*commit_custom) (RygelMediaExportUpdatableObject* self, gboolean override_guarded, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*commit_custom_finish) (RygelMediaExportUpdatableObject* self, GAsyncResult* _res_, GError** error);
};

struct _RygelMediaExportVideoItem {
	RygelVideoItem parent_instance;
	RygelMediaExportVideoItemPrivate * priv;
};

struct _RygelMediaExportVideoItemClass {
	RygelVideoItemClass parent_class;
};

struct _RygelMediaExportVideoItemCommitData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelMediaExportVideoItem* self;
	GError * _inner_error_;
};

struct _RygelMediaExportVideoItemCommitCustomData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelMediaExportVideoItem* self;
	gboolean override_guarded;
	RygelMediaExportMediaCache* cache;
	RygelMediaExportMediaCache* _tmp0_;
	gboolean _tmp1_;
	GError * _inner_error_;
};


static gpointer rygel_media_export_video_item_parent_class = NULL;
static RygelUpdatableObjectIface* rygel_media_export_video_item_rygel_updatable_object_parent_iface = NULL;
static RygelMediaExportUpdatableObjectIface* rygel_media_export_video_item_rygel_media_export_updatable_object_parent_iface = NULL;
static RygelTrackableItemIface* rygel_media_export_video_item_rygel_trackable_item_parent_iface = NULL;

GType rygel_media_export_updatable_object_get_type (void) G_GNUC_CONST;
GType rygel_media_export_video_item_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MEDIA_EXPORT_VIDEO_ITEM_DUMMY_PROPERTY
};
RygelMediaExportVideoItem* rygel_media_export_video_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class);
RygelMediaExportVideoItem* rygel_media_export_video_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class);
static void rygel_media_export_video_item_real_commit_data_free (gpointer _data);
static void rygel_media_export_video_item_real_commit (RygelUpdatableObject* base, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_media_export_video_item_real_commit_co (RygelMediaExportVideoItemCommitData* _data_);
void rygel_media_export_updatable_object_commit_custom (RygelMediaExportUpdatableObject* self, gboolean override_guarded, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_media_export_updatable_object_commit_custom_finish (RygelMediaExportUpdatableObject* self, GAsyncResult* _res_, GError** error);
static void rygel_media_export_video_item_commit_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void rygel_media_export_video_item_real_commit_custom_data_free (gpointer _data);
static void rygel_media_export_video_item_real_commit_custom (RygelMediaExportUpdatableObject* base, gboolean override_guarded, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_media_export_video_item_real_commit_custom_co (RygelMediaExportVideoItemCommitCustomData* _data_);
GType rygel_media_export_media_cache_get_type (void) G_GNUC_CONST;
RygelMediaExportMediaCache* rygel_media_export_media_cache_get_default (void);
void rygel_media_export_media_cache_save_item (RygelMediaExportMediaCache* self, RygelMediaItem* item, gboolean override_guarded, GError** error);


RygelMediaExportVideoItem* rygel_media_export_video_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class) {
	RygelMediaExportVideoItem * self = NULL;
	const gchar* _tmp0_ = NULL;
	RygelMediaContainer* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	g_return_val_if_fail (id != NULL, NULL);
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (title != NULL, NULL);
	g_return_val_if_fail (upnp_class != NULL, NULL);
	_tmp0_ = id;
	_tmp1_ = parent;
	_tmp2_ = title;
	_tmp3_ = upnp_class;
	self = (RygelMediaExportVideoItem*) rygel_video_item_construct (object_type, _tmp0_, _tmp1_, _tmp2_, _tmp3_);
	return self;
}


RygelMediaExportVideoItem* rygel_media_export_video_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* upnp_class) {
	return rygel_media_export_video_item_construct (RYGEL_MEDIA_EXPORT_TYPE_VIDEO_ITEM, id, parent, title, upnp_class);
}


static void rygel_media_export_video_item_real_commit_data_free (gpointer _data) {
	RygelMediaExportVideoItemCommitData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelMediaExportVideoItemCommitData, _data_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void rygel_media_export_video_item_real_commit (RygelUpdatableObject* base, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelMediaExportVideoItem * self;
	RygelMediaExportVideoItemCommitData* _data_;
	RygelMediaExportVideoItem* _tmp0_ = NULL;
	self = (RygelMediaExportVideoItem*) base;
	_data_ = g_slice_new0 (RygelMediaExportVideoItemCommitData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_media_export_video_item_real_commit);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_media_export_video_item_real_commit_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	rygel_media_export_video_item_real_commit_co (_data_);
}


static void rygel_media_export_video_item_real_commit_finish (RygelUpdatableObject* base, GAsyncResult* _res_, GError** error) {
	RygelMediaExportVideoItemCommitData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static void rygel_media_export_video_item_commit_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RygelMediaExportVideoItemCommitData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	rygel_media_export_video_item_real_commit_co (_data_);
}


static gboolean rygel_media_export_video_item_real_commit_co (RygelMediaExportVideoItemCommitData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_state_ = 1;
	rygel_media_export_updatable_object_commit_custom ((RygelMediaExportUpdatableObject*) _data_->self, TRUE, rygel_media_export_video_item_commit_ready, _data_);
	return FALSE;
	_state_1:
	rygel_media_export_updatable_object_commit_custom_finish ((RygelMediaExportUpdatableObject*) _data_->self, _data_->_res_, &_data_->_inner_error_);
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
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void rygel_media_export_video_item_real_commit_custom_data_free (gpointer _data) {
	RygelMediaExportVideoItemCommitCustomData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelMediaExportVideoItemCommitCustomData, _data_);
}


static void rygel_media_export_video_item_real_commit_custom (RygelMediaExportUpdatableObject* base, gboolean override_guarded, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelMediaExportVideoItem * self;
	RygelMediaExportVideoItemCommitCustomData* _data_;
	RygelMediaExportVideoItem* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	self = (RygelMediaExportVideoItem*) base;
	_data_ = g_slice_new0 (RygelMediaExportVideoItemCommitCustomData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_media_export_video_item_real_commit_custom);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_media_export_video_item_real_commit_custom_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = override_guarded;
	_data_->override_guarded = _tmp1_;
	rygel_media_export_video_item_real_commit_custom_co (_data_);
}


static void rygel_media_export_video_item_real_commit_custom_finish (RygelMediaExportUpdatableObject* base, GAsyncResult* _res_, GError** error) {
	RygelMediaExportVideoItemCommitCustomData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


static gboolean rygel_media_export_video_item_real_commit_custom_co (RygelMediaExportVideoItemCommitCustomData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	rygel_trackable_item_changed ((RygelTrackableItem*) _data_->self);
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = rygel_media_export_media_cache_get_default ();
	_data_->cache = _data_->_tmp0_;
	_data_->_tmp1_ = FALSE;
	_data_->_tmp1_ = _data_->override_guarded;
	rygel_media_export_media_cache_save_item (_data_->cache, (RygelMediaItem*) _data_->self, _data_->_tmp1_, &_data_->_inner_error_);
	if (_data_->_inner_error_ != NULL) {
		g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
		g_error_free (_data_->_inner_error_);
		_g_object_unref0 (_data_->cache);
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	_g_object_unref0 (_data_->cache);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static void rygel_media_export_video_item_class_init (RygelMediaExportVideoItemClass * klass) {
	rygel_media_export_video_item_parent_class = g_type_class_peek_parent (klass);
}


static void rygel_media_export_video_item_rygel_updatable_object_interface_init (RygelUpdatableObjectIface * iface) {
	rygel_media_export_video_item_rygel_updatable_object_parent_iface = g_type_interface_peek_parent (iface);
	iface->commit = (void (*)(RygelUpdatableObject*, GError**)) rygel_media_export_video_item_real_commit;
	iface->commit_finish = rygel_media_export_video_item_real_commit_finish;
}


static void rygel_media_export_video_item_rygel_media_export_updatable_object_interface_init (RygelMediaExportUpdatableObjectIface * iface) {
	rygel_media_export_video_item_rygel_media_export_updatable_object_parent_iface = g_type_interface_peek_parent (iface);
	iface->commit_custom = (void (*)(RygelMediaExportUpdatableObject*, gboolean, GError**)) rygel_media_export_video_item_real_commit_custom;
	iface->commit_custom_finish = rygel_media_export_video_item_real_commit_custom_finish;
}


static void rygel_media_export_video_item_rygel_trackable_item_interface_init (RygelTrackableItemIface * iface) {
	rygel_media_export_video_item_rygel_trackable_item_parent_iface = g_type_interface_peek_parent (iface);
}


static void rygel_media_export_video_item_instance_init (RygelMediaExportVideoItem * self) {
}


GType rygel_media_export_video_item_get_type (void) {
	static volatile gsize rygel_media_export_video_item_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_export_video_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaExportVideoItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_export_video_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaExportVideoItem), 0, (GInstanceInitFunc) rygel_media_export_video_item_instance_init, NULL };
		static const GInterfaceInfo rygel_updatable_object_info = { (GInterfaceInitFunc) rygel_media_export_video_item_rygel_updatable_object_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo rygel_media_export_updatable_object_info = { (GInterfaceInitFunc) rygel_media_export_video_item_rygel_media_export_updatable_object_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo rygel_trackable_item_info = { (GInterfaceInitFunc) rygel_media_export_video_item_rygel_trackable_item_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType rygel_media_export_video_item_type_id;
		rygel_media_export_video_item_type_id = g_type_register_static (RYGEL_TYPE_VIDEO_ITEM, "RygelMediaExportVideoItem", &g_define_type_info, 0);
		g_type_add_interface_static (rygel_media_export_video_item_type_id, RYGEL_TYPE_UPDATABLE_OBJECT, &rygel_updatable_object_info);
		g_type_add_interface_static (rygel_media_export_video_item_type_id, RYGEL_MEDIA_EXPORT_TYPE_UPDATABLE_OBJECT, &rygel_media_export_updatable_object_info);
		g_type_add_interface_static (rygel_media_export_video_item_type_id, RYGEL_TYPE_TRACKABLE_ITEM, &rygel_trackable_item_info);
		g_once_init_leave (&rygel_media_export_video_item_type_id__volatile, rygel_media_export_video_item_type_id);
	}
	return rygel_media_export_video_item_type_id__volatile;
}



