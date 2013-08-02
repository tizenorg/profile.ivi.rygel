/* rygel-mediathek-soup-utils.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-mediathek-soup-utils.vala, do not modify */

/*
 * Copyright (C) 2011 Jens Georg
 *
 * Author: Jens Georg <mail@jensge.org>
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


#define RYGEL_MEDIATHEK_TYPE_SOUP_UTILS (rygel_mediathek_soup_utils_get_type ())
#define RYGEL_MEDIATHEK_SOUP_UTILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIATHEK_TYPE_SOUP_UTILS, RygelMediathekSoupUtils))
#define RYGEL_MEDIATHEK_SOUP_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIATHEK_TYPE_SOUP_UTILS, RygelMediathekSoupUtilsClass))
#define RYGEL_MEDIATHEK_IS_SOUP_UTILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIATHEK_TYPE_SOUP_UTILS))
#define RYGEL_MEDIATHEK_IS_SOUP_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIATHEK_TYPE_SOUP_UTILS))
#define RYGEL_MEDIATHEK_SOUP_UTILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIATHEK_TYPE_SOUP_UTILS, RygelMediathekSoupUtilsClass))

typedef struct _RygelMediathekSoupUtils RygelMediathekSoupUtils;
typedef struct _RygelMediathekSoupUtilsClass RygelMediathekSoupUtilsClass;
typedef struct _RygelMediathekSoupUtilsPrivate RygelMediathekSoupUtilsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block3Data Block3Data;
typedef struct _RygelMediathekSoupUtilsQueueMessageData RygelMediathekSoupUtilsQueueMessageData;

struct _RygelMediathekSoupUtils {
	GObject parent_instance;
	RygelMediathekSoupUtilsPrivate * priv;
};

struct _RygelMediathekSoupUtilsClass {
	GObjectClass parent_class;
};

struct _Block3Data {
	int _ref_count_;
	GSourceFunc asyc_callback;
	gpointer asyc_callback_target;
	GDestroyNotify asyc_callback_target_destroy_notify;
	gpointer _async_data_;
};

struct _RygelMediathekSoupUtilsQueueMessageData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	SoupSession* session;
	SoupMessage* message;
	Block3Data* _data3_;
	SoupSession* _tmp0_;
	SoupMessage* _tmp1_;
	SoupMessage* _tmp2_;
};


static gpointer rygel_mediathek_soup_utils_parent_class = NULL;

GType rygel_mediathek_soup_utils_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MEDIATHEK_SOUP_UTILS_DUMMY_PROPERTY
};
static void rygel_mediathek_soup_utils_queue_message_data_free (gpointer _data);
void rygel_mediathek_soup_utils_queue_message (SoupSession* session, SoupMessage* message, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_mediathek_soup_utils_queue_message_finish (GAsyncResult* _res_);
static gboolean rygel_mediathek_soup_utils_queue_message_co (RygelMediathekSoupUtilsQueueMessageData* _data_);
static Block3Data* block3_data_ref (Block3Data* _data3_);
static void block3_data_unref (void * _userdata_);
static gboolean _rygel_mediathek_soup_utils_queue_message_co_gsource_func (gpointer self);
static void __lambda5_ (Block3Data* _data3_);
static void ___lambda5__soup_session_callback (SoupSession* session, SoupMessage* msg, gpointer self);
RygelMediathekSoupUtils* rygel_mediathek_soup_utils_new (void);
RygelMediathekSoupUtils* rygel_mediathek_soup_utils_construct (GType object_type);


static void rygel_mediathek_soup_utils_queue_message_data_free (gpointer _data) {
	RygelMediathekSoupUtilsQueueMessageData* _data_;
	_data_ = _data;
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_g_object_unref0 (_data_->session);
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_g_object_unref0 (_data_->message);
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	g_slice_free (RygelMediathekSoupUtilsQueueMessageData, _data_);
#line 106 "rygel-mediathek-soup-utils.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	return self ? g_object_ref (self) : NULL;
#line 113 "rygel-mediathek-soup-utils.c"
}


void rygel_mediathek_soup_utils_queue_message (SoupSession* session, SoupMessage* message, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelMediathekSoupUtilsQueueMessageData* _data_;
	SoupSession* _tmp0_ = NULL;
	SoupSession* _tmp1_ = NULL;
	SoupMessage* _tmp2_ = NULL;
	SoupMessage* _tmp3_ = NULL;
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_ = g_slice_new0 (RygelMediathekSoupUtilsQueueMessageData);
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_async_result = g_simple_async_result_new (NULL, _callback_, _user_data_, rygel_mediathek_soup_utils_queue_message);
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_mediathek_soup_utils_queue_message_data_free);
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_tmp0_ = session;
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_g_object_unref0 (_data_->session);
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->session = _tmp1_;
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_tmp2_ = message;
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_g_object_unref0 (_data_->message);
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->message = _tmp3_;
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	rygel_mediathek_soup_utils_queue_message_co (_data_);
#line 147 "rygel-mediathek-soup-utils.c"
}


void rygel_mediathek_soup_utils_queue_message_finish (GAsyncResult* _res_) {
	RygelMediathekSoupUtilsQueueMessageData* _data_;
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
#line 155 "rygel-mediathek-soup-utils.c"
}


static Block3Data* block3_data_ref (Block3Data* _data3_) {
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	g_atomic_int_inc (&_data3_->_ref_count_);
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	return _data3_;
#line 164 "rygel-mediathek-soup-utils.c"
}


static void block3_data_unref (void * _userdata_) {
	Block3Data* _data3_;
	_data3_ = (Block3Data*) _userdata_;
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	if (g_atomic_int_dec_and_test (&_data3_->_ref_count_)) {
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
		(_data3_->asyc_callback_target_destroy_notify == NULL) ? NULL : (_data3_->asyc_callback_target_destroy_notify (_data3_->asyc_callback_target), NULL);
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
		_data3_->asyc_callback = NULL;
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
		_data3_->asyc_callback_target = NULL;
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
		_data3_->asyc_callback_target_destroy_notify = NULL;
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
		g_slice_free (Block3Data, _data3_);
#line 183 "rygel-mediathek-soup-utils.c"
	}
}


static gboolean _rygel_mediathek_soup_utils_queue_message_co_gsource_func (gpointer self) {
	gboolean result;
	result = rygel_mediathek_soup_utils_queue_message_co (self);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	return result;
#line 193 "rygel-mediathek-soup-utils.c"
}


static void __lambda5_ (Block3Data* _data3_) {
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data3_->asyc_callback (_data3_->asyc_callback_target);
#line 200 "rygel-mediathek-soup-utils.c"
}


static void ___lambda5__soup_session_callback (SoupSession* session, SoupMessage* msg, gpointer self) {
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	__lambda5_ (self);
#line 207 "rygel-mediathek-soup-utils.c"
}


static gboolean rygel_mediathek_soup_utils_queue_message_co (RygelMediathekSoupUtilsQueueMessageData* _data_) {
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	switch (_data_->_state_) {
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
		case 0:
#line 216 "rygel-mediathek-soup-utils.c"
		goto _state_0;
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
		case 1:
#line 220 "rygel-mediathek-soup-utils.c"
		goto _state_1;
		default:
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
		g_assert_not_reached ();
#line 225 "rygel-mediathek-soup-utils.c"
	}
	_state_0:
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_data3_ = g_slice_new0 (Block3Data);
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_data3_->_ref_count_ = 1;
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_data3_->_async_data_ = _data_;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_data3_->asyc_callback = _rygel_mediathek_soup_utils_queue_message_co_gsource_func;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_data3_->asyc_callback_target = _data_;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_data3_->asyc_callback_target_destroy_notify = NULL;
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_tmp0_ = NULL;
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_tmp0_ = _data_->session;
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_tmp1_ = NULL;
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_tmp1_ = _data_->message;
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_tmp2_ = NULL;
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_tmp2_ = _g_object_ref0 (_data_->_tmp1_);
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	soup_session_queue_message (_data_->_tmp0_, _data_->_tmp2_, ___lambda5__soup_session_callback, _data_->_data3_);
#line 29 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_state_ = 1;
#line 29 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	return FALSE;
#line 258 "rygel-mediathek-soup-utils.c"
	_state_1:
	;
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	block3_data_unref (_data_->_data3_);
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	_data_->_data3_ = NULL;
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	if (_data_->_state_ == 0) {
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
		g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 269 "rygel-mediathek-soup-utils.c"
	} else {
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
		g_simple_async_result_complete (_data_->_async_result);
#line 273 "rygel-mediathek-soup-utils.c"
	}
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	g_object_unref (_data_->_async_result);
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	return FALSE;
#line 279 "rygel-mediathek-soup-utils.c"
}


RygelMediathekSoupUtils* rygel_mediathek_soup_utils_construct (GType object_type) {
	RygelMediathekSoupUtils * self = NULL;
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	self = (RygelMediathekSoupUtils*) g_object_new (object_type, NULL);
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	return self;
#line 289 "rygel-mediathek-soup-utils.c"
}


RygelMediathekSoupUtils* rygel_mediathek_soup_utils_new (void) {
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	return rygel_mediathek_soup_utils_construct (RYGEL_MEDIATHEK_TYPE_SOUP_UTILS);
#line 296 "rygel-mediathek-soup-utils.c"
}


static void rygel_mediathek_soup_utils_class_init (RygelMediathekSoupUtilsClass * klass) {
#line 23 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/mediathek/rygel-mediathek-soup-utils.vala"
	rygel_mediathek_soup_utils_parent_class = g_type_class_peek_parent (klass);
#line 303 "rygel-mediathek-soup-utils.c"
}


static void rygel_mediathek_soup_utils_instance_init (RygelMediathekSoupUtils * self) {
}


GType rygel_mediathek_soup_utils_get_type (void) {
	static volatile gsize rygel_mediathek_soup_utils_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_mediathek_soup_utils_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediathekSoupUtilsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_mediathek_soup_utils_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediathekSoupUtils), 0, (GInstanceInitFunc) rygel_mediathek_soup_utils_instance_init, NULL };
		GType rygel_mediathek_soup_utils_type_id;
		rygel_mediathek_soup_utils_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelMediathekSoupUtils", &g_define_type_info, 0);
		g_once_init_leave (&rygel_mediathek_soup_utils_type_id__volatile, rygel_mediathek_soup_utils_type_id);
	}
	return rygel_mediathek_soup_utils_type_id__volatile;
}



