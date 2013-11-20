/* rygel-media-export-null-container.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-media-export-null-container.vala, do not modify */

/*
 * Copyright (C) 2009 Jens Georg <mail@jensge.org>.
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
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>


#define RYGEL_TYPE_NULL_CONTAINER (rygel_null_container_get_type ())
#define RYGEL_NULL_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_NULL_CONTAINER, RygelNullContainer))
#define RYGEL_NULL_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_NULL_CONTAINER, RygelNullContainerClass))
#define RYGEL_IS_NULL_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_NULL_CONTAINER))
#define RYGEL_IS_NULL_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_NULL_CONTAINER))
#define RYGEL_NULL_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_NULL_CONTAINER, RygelNullContainerClass))

typedef struct _RygelNullContainer RygelNullContainer;
typedef struct _RygelNullContainerClass RygelNullContainerClass;
typedef struct _RygelNullContainerPrivate RygelNullContainerPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _RygelNullContainerGetChildrenData RygelNullContainerGetChildrenData;
typedef struct _RygelNullContainerFindObjectData RygelNullContainerFindObjectData;

struct _RygelNullContainer {
	RygelMediaContainer parent_instance;
	RygelNullContainerPrivate * priv;
};

struct _RygelNullContainerClass {
	RygelMediaContainerClass parent_class;
};

struct _RygelNullContainerGetChildrenData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelNullContainer* self;
	guint offset;
	guint max_count;
	gchar* sort_criteria;
	GCancellable* cancellable;
	RygelMediaObjects* result;
	RygelMediaObjects* _tmp0_;
};

struct _RygelNullContainerFindObjectData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelNullContainer* self;
	gchar* id;
	GCancellable* cancellable;
	RygelMediaObject* result;
};


static gpointer rygel_null_container_parent_class = NULL;

GType rygel_null_container_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_NULL_CONTAINER_DUMMY_PROPERTY
};
RygelNullContainer* rygel_null_container_new (const gchar* id, RygelMediaContainer* parent, const gchar* title);
RygelNullContainer* rygel_null_container_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title);
RygelNullContainer* rygel_null_container_new_root (void);
RygelNullContainer* rygel_null_container_construct_root (GType object_type);
static void rygel_null_container_real_get_children_data_free (gpointer _data);
static void rygel_null_container_real_get_children (RygelMediaContainer* base, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_null_container_real_get_children_co (RygelNullContainerGetChildrenData* _data_);
static void rygel_null_container_real_find_object_data_free (gpointer _data);
static void rygel_null_container_real_find_object (RygelMediaContainer* base, const gchar* id, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_null_container_real_find_object_co (RygelNullContainerFindObjectData* _data_);


RygelNullContainer* rygel_null_container_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title) {
	RygelNullContainer * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	RygelMediaContainer* _tmp2_ = NULL;
	g_return_val_if_fail (id != NULL, NULL);
	g_return_val_if_fail (title != NULL, NULL);
	_tmp0_ = id;
	_tmp1_ = title;
	_tmp2_ = parent;
	self = (RygelNullContainer*) g_object_new (object_type, "id", _tmp0_, "title", _tmp1_, "parent", _tmp2_, "child-count", 0, NULL);
	return self;
}


RygelNullContainer* rygel_null_container_new (const gchar* id, RygelMediaContainer* parent, const gchar* title) {
	return rygel_null_container_construct (RYGEL_TYPE_NULL_CONTAINER, id, parent, title);
}


RygelNullContainer* rygel_null_container_construct_root (GType object_type) {
	RygelNullContainer * self = NULL;
	self = (RygelNullContainer*) g_object_new (object_type, "id", "0", "parent", NULL, "title", "MediaExport", "child-count", 0, NULL);
	return self;
}


RygelNullContainer* rygel_null_container_new_root (void) {
	return rygel_null_container_construct_root (RYGEL_TYPE_NULL_CONTAINER);
}


static void rygel_null_container_real_get_children_data_free (gpointer _data) {
	RygelNullContainerGetChildrenData* _data_;
	_data_ = _data;
	_g_free0 (_data_->sort_criteria);
	_g_object_unref0 (_data_->cancellable);
	_g_object_unref0 (_data_->result);
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelNullContainerGetChildrenData, _data_);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void rygel_null_container_real_get_children (RygelMediaContainer* base, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelNullContainer * self;
	RygelNullContainerGetChildrenData* _data_;
	RygelNullContainer* _tmp0_ = NULL;
	guint _tmp1_ = 0U;
	guint _tmp2_ = 0U;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	GCancellable* _tmp5_ = NULL;
	GCancellable* _tmp6_ = NULL;
	self = (RygelNullContainer*) base;
	_data_ = g_slice_new0 (RygelNullContainerGetChildrenData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_null_container_real_get_children);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_null_container_real_get_children_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = offset;
	_data_->offset = _tmp1_;
	_tmp2_ = max_count;
	_data_->max_count = _tmp2_;
	_tmp3_ = sort_criteria;
	_tmp4_ = g_strdup (_tmp3_);
	_g_free0 (_data_->sort_criteria);
	_data_->sort_criteria = _tmp4_;
	_tmp5_ = cancellable;
	_tmp6_ = _g_object_ref0 (_tmp5_);
	_g_object_unref0 (_data_->cancellable);
	_data_->cancellable = _tmp6_;
	rygel_null_container_real_get_children_co (_data_);
}


static RygelMediaObjects* rygel_null_container_real_get_children_finish (RygelMediaContainer* base, GAsyncResult* _res_, GError** error) {
	RygelMediaObjects* result;
	RygelNullContainerGetChildrenData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return NULL;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
	result = _data_->result;
	_data_->result = NULL;
	return result;
}


static gboolean rygel_null_container_real_get_children_co (RygelNullContainerGetChildrenData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = rygel_media_objects_new ();
	_data_->result = _data_->_tmp0_;
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


static void rygel_null_container_real_find_object_data_free (gpointer _data) {
	RygelNullContainerFindObjectData* _data_;
	_data_ = _data;
	_g_free0 (_data_->id);
	_g_object_unref0 (_data_->cancellable);
	_g_object_unref0 (_data_->result);
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelNullContainerFindObjectData, _data_);
}


static void rygel_null_container_real_find_object (RygelMediaContainer* base, const gchar* id, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelNullContainer * self;
	RygelNullContainerFindObjectData* _data_;
	RygelNullContainer* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	GCancellable* _tmp3_ = NULL;
	GCancellable* _tmp4_ = NULL;
	self = (RygelNullContainer*) base;
	_data_ = g_slice_new0 (RygelNullContainerFindObjectData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_null_container_real_find_object);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_null_container_real_find_object_data_free);
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
	rygel_null_container_real_find_object_co (_data_);
}


static RygelMediaObject* rygel_null_container_real_find_object_finish (RygelMediaContainer* base, GAsyncResult* _res_, GError** error) {
	RygelMediaObject* result;
	RygelNullContainerFindObjectData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return NULL;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
	result = _data_->result;
	_data_->result = NULL;
	return result;
}


static gboolean rygel_null_container_real_find_object_co (RygelNullContainerFindObjectData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->result = NULL;
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


static void rygel_null_container_class_init (RygelNullContainerClass * klass) {
	rygel_null_container_parent_class = g_type_class_peek_parent (klass);
	RYGEL_MEDIA_CONTAINER_CLASS (klass)->get_children = rygel_null_container_real_get_children;
	RYGEL_MEDIA_CONTAINER_CLASS (klass)->get_children_finish = rygel_null_container_real_get_children_finish;
	RYGEL_MEDIA_CONTAINER_CLASS (klass)->find_object = rygel_null_container_real_find_object;
	RYGEL_MEDIA_CONTAINER_CLASS (klass)->find_object_finish = rygel_null_container_real_find_object_finish;
}


static void rygel_null_container_instance_init (RygelNullContainer * self) {
}


/**
 * This is an empty container used to satisfy Rygel if no mediadb could be
 * created, or for light-weight hierarchies where the intermediate levels
 * are not used.
 */
GType rygel_null_container_get_type (void) {
	static volatile gsize rygel_null_container_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_null_container_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelNullContainerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_null_container_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelNullContainer), 0, (GInstanceInitFunc) rygel_null_container_instance_init, NULL };
		GType rygel_null_container_type_id;
		rygel_null_container_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_CONTAINER, "RygelNullContainer", &g_define_type_info, 0);
		g_once_init_leave (&rygel_null_container_type_id__volatile, rygel_null_container_type_id);
	}
	return rygel_null_container_type_id__volatile;
}



