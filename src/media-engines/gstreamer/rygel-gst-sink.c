/* rygel-gst-sink.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-gst-sink.vala, do not modify */

/*
 * Copyright (C) 2011 Nokia Corporation.
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
#include <gst/base/gstadapter.h>
#include <gst/base/gstbaseparse.h>
#include <gst/base/gstbasesink.h>
#include <gst/base/gstbasesrc.h>
#include <gst/base/gstbasetransform.h>
#include <gst/base/gstbitreader.h>
#include <gst/base/gstbytereader.h>
#include <gst/base/gstbytewriter.h>
#include <gst/base/gstcollectpads.h>
#include <gst/base/gstpushsrc.h>
#include <gst/base/gsttypefindhelper.h>
#include <gio/gio.h>
#include <rygel-server.h>
#include <stdlib.h>
#include <string.h>
#include <gst/gst.h>


#define RYGEL_TYPE_GST_SINK (rygel_gst_sink_get_type ())
#define RYGEL_GST_SINK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_GST_SINK, RygelGstSink))
#define RYGEL_GST_SINK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_GST_SINK, RygelGstSinkClass))
#define RYGEL_IS_GST_SINK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_GST_SINK))
#define RYGEL_IS_GST_SINK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_GST_SINK))
#define RYGEL_GST_SINK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_GST_SINK, RygelGstSinkClass))

typedef struct _RygelGstSink RygelGstSink;
typedef struct _RygelGstSinkClass RygelGstSinkClass;
typedef struct _RygelGstSinkPrivate RygelGstSinkPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _gst_mini_object_unref0(var) ((var == NULL) ? NULL : (var = (gst_mini_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;

struct _RygelGstSink {
	GstBaseSink parent_instance;
	RygelGstSinkPrivate * priv;
	GCancellable* cancellable;
};

struct _RygelGstSinkClass {
	GstBaseSinkClass parent_class;
};

struct _RygelGstSinkPrivate {
	gint priority;
	gint64 chunks_buffered;
	gint64 bytes_sent;
	gint64 max_bytes;
	GMutex buffer_mutex;
	GCond buffer_condition;
	RygelDataSource* source;
	RygelHTTPSeek* offsets;
	gboolean frozen;
};

struct _Block1Data {
	int _ref_count_;
	RygelGstSink * self;
	GstBuffer* buffer;
};


static gpointer rygel_gst_sink_parent_class = NULL;

GType rygel_gst_sink_get_type (void) G_GNUC_CONST;
#define RYGEL_GST_SINK_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_GST_SINK, RygelGstSinkPrivate))
enum  {
	RYGEL_GST_SINK_DUMMY_PROPERTY
};
#define RYGEL_GST_SINK_NAME "http-gst-sink"
#define RYGEL_GST_SINK_PAD_NAME "sink"
#define RYGEL_GST_SINK_MAX_BUFFERED_CHUNKS ((guint) 32)
#define RYGEL_GST_SINK_MIN_BUFFERED_CHUNKS ((guint) 4)
RygelGstSink* rygel_gst_sink_new (RygelDataSource* source, RygelHTTPSeek* offsets);
RygelGstSink* rygel_gst_sink_construct (GType object_type, RygelDataSource* source, RygelHTTPSeek* offsets);
static void rygel_gst_sink_on_cancelled (RygelGstSink* self);
static void _rygel_gst_sink_on_cancelled_g_cancellable_cancelled (GCancellable* _sender, gpointer self);
void rygel_gst_sink_freeze (RygelGstSink* self);
void rygel_gst_sink_thaw (RygelGstSink* self);
static GstFlowReturn rygel_gst_sink_real_render (GstBaseSink* base, GstBuffer* buffer);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static gboolean __lambda2_ (Block1Data* _data1_);
gboolean rygel_gst_sink_push_data (RygelGstSink* self, GstBuffer* buffer);
static gboolean ___lambda2__gsource_func (gpointer self);
static void rygel_gst_sink_finalize (GObject* obj);
static void _vala_clear_GMutex (GMutex * mutex);
static void _vala_clear_GRecMutex (GRecMutex * mutex);
static void _vala_clear_GRWLock (GRWLock * mutex);
static void _vala_clear_GCond (GCond * mutex);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _rygel_gst_sink_on_cancelled_g_cancellable_cancelled (GCancellable* _sender, gpointer self) {
	rygel_gst_sink_on_cancelled (self);
}


RygelGstSink* rygel_gst_sink_construct (GType object_type, RygelDataSource* source, RygelHTTPSeek* offsets) {
	RygelGstSink * self = NULL;
	gint64 _tmp0_;
	RygelDataSource* _tmp1_;
	RygelHTTPSeek* _tmp2_;
	RygelHTTPSeek* _tmp3_;
	GCancellable* _tmp4_;
	RygelHTTPSeek* _tmp5_;
	GCancellable* _tmp12_;
	g_return_val_if_fail (source != NULL, NULL);
	self = (RygelGstSink*) g_object_new (object_type, NULL);
	self->priv->chunks_buffered = (gint64) 0;
	self->priv->bytes_sent = (gint64) 0;
	_tmp0_ = G_MAXINT64;
	self->priv->max_bytes = _tmp0_;
	_tmp1_ = source;
	self->priv->source = _tmp1_;
	_tmp2_ = offsets;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	_g_object_unref0 (self->priv->offsets);
	self->priv->offsets = _tmp3_;
	_tmp4_ = g_cancellable_new ();
	_g_object_unref0 (self->cancellable);
	self->cancellable = _tmp4_;
	gst_base_sink_set_sync ((GstBaseSink*) self, FALSE);
	g_object_set ((GstObject*) self, "name", RYGEL_GST_SINK_NAME, NULL);
	self->priv->frozen = FALSE;
	_tmp5_ = self->priv->offsets;
	if (_tmp5_ != NULL) {
		RygelHTTPSeek* _tmp6_;
		RygelHTTPSeekType _tmp7_;
		RygelHTTPSeekType _tmp8_;
		_tmp6_ = self->priv->offsets;
		_tmp7_ = rygel_http_seek_get_seek_type (_tmp6_);
		_tmp8_ = _tmp7_;
		if (_tmp8_ == RYGEL_HTTP_SEEK_TYPE_BYTE) {
			RygelHTTPSeek* _tmp9_;
			gint64 _tmp10_;
			gint64 _tmp11_;
			_tmp9_ = self->priv->offsets;
			_tmp10_ = rygel_http_seek_get_length (_tmp9_);
			_tmp11_ = _tmp10_;
			self->priv->max_bytes = _tmp11_;
		}
	}
	_tmp12_ = self->cancellable;
	g_signal_connect_object (_tmp12_, "cancelled", (GCallback) _rygel_gst_sink_on_cancelled_g_cancellable_cancelled, self, 0);
	return self;
}


RygelGstSink* rygel_gst_sink_new (RygelDataSource* source, RygelHTTPSeek* offsets) {
	return rygel_gst_sink_construct (RYGEL_TYPE_GST_SINK, source, offsets);
}


void rygel_gst_sink_freeze (RygelGstSink* self) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->frozen;
	if (_tmp0_) {
		return;
	}
	g_mutex_lock (&self->priv->buffer_mutex);
	self->priv->frozen = TRUE;
	g_mutex_unlock (&self->priv->buffer_mutex);
}


void rygel_gst_sink_thaw (RygelGstSink* self) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->frozen;
	if (!_tmp0_) {
		return;
	}
	g_mutex_lock (&self->priv->buffer_mutex);
	self->priv->frozen = FALSE;
	g_cond_broadcast (&self->priv->buffer_condition);
	g_mutex_unlock (&self->priv->buffer_mutex);
}


static gpointer _gst_mini_object_ref0 (gpointer self) {
	return self ? gst_mini_object_ref (self) : NULL;
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		RygelGstSink * self;
		self = _data1_->self;
		_gst_mini_object_unref0 (_data1_->buffer);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static gboolean __lambda2_ (Block1Data* _data1_) {
	RygelGstSink * self;
	gboolean result = FALSE;
	GstBuffer* _tmp0_;
	gboolean _tmp1_ = FALSE;
	self = _data1_->self;
	_tmp0_ = _data1_->buffer;
	_tmp1_ = rygel_gst_sink_push_data (self, _tmp0_);
	result = _tmp1_;
	return result;
}


static gboolean ___lambda2__gsource_func (gpointer self) {
	gboolean result;
	result = __lambda2_ (self);
	return result;
}


static GstFlowReturn rygel_gst_sink_real_render (GstBaseSink* base, GstBuffer* buffer) {
	RygelGstSink * self;
	GstFlowReturn result = 0;
	Block1Data* _data1_;
	GstBuffer* _tmp0_;
	GstBuffer* _tmp1_;
	GCancellable* _tmp8_;
	gboolean _tmp9_ = FALSE;
	gint _tmp10_;
	self = (RygelGstSink*) base;
	g_return_val_if_fail (buffer != NULL, 0);
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_data1_->self = g_object_ref (self);
	_tmp0_ = buffer;
	_tmp1_ = _gst_mini_object_ref0 (_tmp0_);
	_gst_mini_object_unref0 (_data1_->buffer);
	_data1_->buffer = _tmp1_;
	g_mutex_lock (&self->priv->buffer_mutex);
	while (TRUE) {
		gboolean _tmp2_ = FALSE;
		GCancellable* _tmp3_;
		gboolean _tmp4_ = FALSE;
		gboolean _tmp6_;
		GMutex _tmp7_;
		_tmp3_ = self->cancellable;
		_tmp4_ = g_cancellable_is_cancelled (_tmp3_);
		if (!_tmp4_) {
			gboolean _tmp5_;
			_tmp5_ = self->priv->frozen;
			_tmp2_ = _tmp5_;
		} else {
			_tmp2_ = FALSE;
		}
		_tmp6_ = _tmp2_;
		if (!_tmp6_) {
			break;
		}
		_tmp7_ = self->priv->buffer_mutex;
		g_cond_wait (&self->priv->buffer_condition, &_tmp7_);
	}
	g_mutex_unlock (&self->priv->buffer_mutex);
	_tmp8_ = self->cancellable;
	_tmp9_ = g_cancellable_is_cancelled (_tmp8_);
	if (_tmp9_) {
		result = GST_FLOW_OK;
		block1_data_unref (_data1_);
		_data1_ = NULL;
		return result;
	}
	_tmp10_ = self->priv->priority;
	g_idle_add_full (_tmp10_, ___lambda2__gsource_func, block1_data_ref (_data1_), block1_data_unref);
	result = GST_FLOW_OK;
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return result;
}


gboolean rygel_gst_sink_push_data (RygelGstSink* self, GstBuffer* buffer) {
	gboolean result = FALSE;
	gint64 _tmp0_;
	gint64 _tmp1_;
	gint64 left;
	gboolean _tmp2_ = FALSE;
	GCancellable* _tmp3_;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp6_;
	GstBuffer* _tmp7_;
	gsize _tmp8_ = 0UL;
	gsize bufsize;
	gsize _tmp9_;
	gint64 _tmp10_;
	gint64 _tmp11_ = 0LL;
	gint64 to_send;
	GstMapInfo info = {0};
	GstBuffer* _tmp12_;
	GstMapInfo _tmp13_ = {0};
	RygelDataSource* _tmp14_;
	GstMapInfo _tmp15_;
	guint8* _tmp16_;
	gint _tmp16__length1;
	gint64 _tmp17_;
	gint64 _tmp18_;
	gint64 _tmp19_;
	gint64 _tmp20_;
	GstBuffer* _tmp21_;
	GstMapInfo _tmp22_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (buffer != NULL, FALSE);
	_tmp0_ = self->priv->max_bytes;
	_tmp1_ = self->priv->bytes_sent;
	left = _tmp0_ - _tmp1_;
	_tmp3_ = self->cancellable;
	_tmp4_ = g_cancellable_is_cancelled (_tmp3_);
	if (_tmp4_) {
		_tmp2_ = TRUE;
	} else {
		gint64 _tmp5_;
		_tmp5_ = left;
		_tmp2_ = _tmp5_ <= ((gint64) 0);
	}
	_tmp6_ = _tmp2_;
	if (_tmp6_) {
		result = FALSE;
		return result;
	}
	_tmp7_ = buffer;
	_tmp8_ = gst_buffer_get_size (_tmp7_);
	bufsize = _tmp8_;
	_tmp9_ = bufsize;
	_tmp10_ = left;
	_tmp11_ = MIN ((gint64) _tmp9_, _tmp10_);
	to_send = _tmp11_;
	_tmp12_ = buffer;
	gst_buffer_map (_tmp12_, &_tmp13_, GST_MAP_READ);
	info = _tmp13_;
	_tmp14_ = self->priv->source;
	_tmp15_ = info;
	_tmp16_ = _tmp15_.data;
	_tmp16__length1 = (gint) _tmp15_.size;
	_tmp17_ = to_send;
	g_signal_emit_by_name (_tmp14_, "data-available", _tmp16_ + 0, _tmp17_ - 0);
	_tmp18_ = self->priv->chunks_buffered;
	self->priv->chunks_buffered = _tmp18_ + 1;
	_tmp19_ = self->priv->bytes_sent;
	_tmp20_ = to_send;
	self->priv->bytes_sent = _tmp19_ + _tmp20_;
	_tmp21_ = buffer;
	_tmp22_ = info;
	gst_buffer_unmap (_tmp21_, &_tmp22_);
	result = FALSE;
	return result;
}


static void rygel_gst_sink_on_cancelled (RygelGstSink* self) {
	g_return_if_fail (self != NULL);
	g_mutex_lock (&self->priv->buffer_mutex);
	g_cond_broadcast (&self->priv->buffer_condition);
	g_mutex_unlock (&self->priv->buffer_mutex);
}


static void rygel_gst_sink_class_init (RygelGstSinkClass * klass) {
	GstCaps* _tmp0_;
	GstCaps* caps;
	GstCaps* _tmp1_;
	GstPadTemplate* _tmp2_;
	GstPadTemplate* template;
	GstPadTemplate* _tmp3_;
	GstPadTemplate* _tmp4_;
	rygel_gst_sink_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelGstSinkPrivate));
	GST_BASE_SINK_CLASS (klass)->render = rygel_gst_sink_real_render;
	G_OBJECT_CLASS (klass)->finalize = rygel_gst_sink_finalize;
	_tmp0_ = gst_caps_new_any ();
	caps = _tmp0_;
	_tmp1_ = caps;
	_tmp2_ = gst_pad_template_new (RYGEL_GST_SINK_PAD_NAME, GST_PAD_SINK, GST_PAD_ALWAYS, _tmp1_);
	g_object_ref_sink (_tmp2_);
	template = _tmp2_;
	_tmp3_ = template;
	_tmp4_ = _g_object_ref0 (_tmp3_);
	gst_element_class_add_pad_template (GST_ELEMENT_CLASS (klass), _tmp4_);
	_g_object_unref0 (template);
	_gst_mini_object_unref0 (caps);
}


static void rygel_gst_sink_instance_init (RygelGstSink * self) {
	GMutex _tmp0_ = {0};
	GCond _tmp1_ = {0};
	self->priv = RYGEL_GST_SINK_GET_PRIVATE (self);
	g_mutex_init (&_tmp0_);
	self->priv->buffer_mutex = _tmp0_;
	g_cond_init (&_tmp1_);
	self->priv->buffer_condition = _tmp1_;
}


static void rygel_gst_sink_finalize (GObject* obj) {
	RygelGstSink * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_GST_SINK, RygelGstSink);
	_g_object_unref0 (self->cancellable);
	_vala_clear_GMutex (&self->priv->buffer_mutex);
	_vala_clear_GCond (&self->priv->buffer_condition);
	_g_object_unref0 (self->priv->offsets);
	G_OBJECT_CLASS (rygel_gst_sink_parent_class)->finalize (obj);
}


GType rygel_gst_sink_get_type (void) {
	static volatile gsize rygel_gst_sink_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_gst_sink_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelGstSinkClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_gst_sink_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelGstSink), 0, (GInstanceInitFunc) rygel_gst_sink_instance_init, NULL };
		GType rygel_gst_sink_type_id;
		rygel_gst_sink_type_id = g_type_register_static (gst_base_sink_get_type (), "RygelGstSink", &g_define_type_info, 0);
		g_once_init_leave (&rygel_gst_sink_type_id__volatile, rygel_gst_sink_type_id);
	}
	return rygel_gst_sink_type_id__volatile;
}


static void _vala_clear_GMutex (GMutex * mutex) {
	GMutex zero_mutex = { 0 };
	if (memcmp (mutex, &zero_mutex, sizeof (GMutex))) {
		g_mutex_clear (mutex);
		memset (mutex, 0, sizeof (GMutex));
	}
}


static void _vala_clear_GRecMutex (GRecMutex * mutex) {
	GRecMutex zero_mutex = { 0 };
	if (memcmp (mutex, &zero_mutex, sizeof (GRecMutex))) {
		g_rec_mutex_clear (mutex);
		memset (mutex, 0, sizeof (GRecMutex));
	}
}


static void _vala_clear_GRWLock (GRWLock * mutex) {
	GRWLock zero_mutex = { 0 };
	if (memcmp (mutex, &zero_mutex, sizeof (GRWLock))) {
		g_rw_lock_clear (mutex);
		memset (mutex, 0, sizeof (GRWLock));
	}
}


static void _vala_clear_GCond (GCond * mutex) {
	GCond zero_mutex = { 0 };
	if (memcmp (mutex, &zero_mutex, sizeof (GCond))) {
		g_cond_clear (mutex);
		memset (mutex, 0, sizeof (GCond));
	}
}



