/* rygel-simple-data-source.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-simple-data-source.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <gio/gio.h>


#define RYGEL_TYPE_SIMPLE_DATA_SOURCE (rygel_simple_data_source_get_type ())
#define RYGEL_SIMPLE_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SIMPLE_DATA_SOURCE, RygelSimpleDataSource))
#define RYGEL_SIMPLE_DATA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SIMPLE_DATA_SOURCE, RygelSimpleDataSourceClass))
#define RYGEL_IS_SIMPLE_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SIMPLE_DATA_SOURCE))
#define RYGEL_IS_SIMPLE_DATA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SIMPLE_DATA_SOURCE))
#define RYGEL_SIMPLE_DATA_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SIMPLE_DATA_SOURCE, RygelSimpleDataSourceClass))

typedef struct _RygelSimpleDataSource RygelSimpleDataSource;
typedef struct _RygelSimpleDataSourceClass RygelSimpleDataSourceClass;
typedef struct _RygelSimpleDataSourcePrivate RygelSimpleDataSourcePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_thread_unref0(var) ((var == NULL) ? NULL : (var = (g_thread_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block1Data Block1Data;
#define _g_mapped_file_unref0(var) ((var == NULL) ? NULL : (var = (g_mapped_file_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _RygelSimpleDataSource {
	GObject parent_instance;
	RygelSimpleDataSourcePrivate * priv;
};

struct _RygelSimpleDataSourceClass {
	GObjectClass parent_class;
};

struct _RygelSimpleDataSourcePrivate {
	gchar* uri;
	GThread* thread;
	GMutex mutex;
	GCond cond;
	guint64 first_byte;
	guint64 last_byte;
	gboolean frozen;
	gboolean stop_thread;
	RygelHTTPSeek* offsets;
};

struct _Block1Data {
	int _ref_count_;
	RygelSimpleDataSource * self;
	guint8* slice;
	gint slice_length1;
	gint _slice_size_;
};


static gpointer rygel_simple_data_source_parent_class = NULL;
static RygelDataSourceIface* rygel_simple_data_source_rygel_data_source_parent_iface = NULL;

GType rygel_simple_data_source_get_type (void) G_GNUC_CONST;
#define RYGEL_SIMPLE_DATA_SOURCE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_SIMPLE_DATA_SOURCE, RygelSimpleDataSourcePrivate))
enum  {
	RYGEL_SIMPLE_DATA_SOURCE_DUMMY_PROPERTY
};
RygelSimpleDataSource* rygel_simple_data_source_new (const gchar* uri);
RygelSimpleDataSource* rygel_simple_data_source_construct (GType object_type, const gchar* uri);
static void rygel_simple_data_source_real_start (RygelDataSource* base, RygelHTTPSeek* offsets, GError** error);
static void* rygel_simple_data_source_thread_func (RygelSimpleDataSource* self);
static gpointer _rygel_simple_data_source_thread_func_gthread_func (gpointer self);
static void rygel_simple_data_source_real_freeze (RygelDataSource* base);
static void rygel_simple_data_source_real_thaw (RygelDataSource* base);
static void rygel_simple_data_source_real_stop (RygelDataSource* base);
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static guint8* _vala_array_dup1 (guint8* self, int length);
static gboolean ____lambda2_ (Block1Data* _data1_);
static gboolean _____lambda2__gsource_func (gpointer self);
static gboolean __lambda3_ (RygelSimpleDataSource* self);
static gboolean ___lambda3__gsource_func (gpointer self);
static void rygel_simple_data_source_finalize (GObject* obj);
static void _vala_clear_GMutex (GMutex * mutex);
static void _vala_clear_GRecMutex (GRecMutex * mutex);
static void _vala_clear_GRWLock (GRWLock * mutex);
static void _vala_clear_GCond (GCond * mutex);


RygelSimpleDataSource* rygel_simple_data_source_construct (GType object_type, const gchar* uri) {
	RygelSimpleDataSource * self = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	g_return_val_if_fail (uri != NULL, NULL);
	self = (RygelSimpleDataSource*) g_object_new (object_type, NULL);
	_tmp0_ = uri;
	g_debug ("rygel-simple-data-source.vala:44: Creating new data source for %s", _tmp0_);
	_tmp1_ = uri;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (self->priv->uri);
	self->priv->uri = _tmp2_;
	return self;
}


RygelSimpleDataSource* rygel_simple_data_source_new (const gchar* uri) {
	return rygel_simple_data_source_construct (RYGEL_TYPE_SIMPLE_DATA_SOURCE, uri);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gpointer _rygel_simple_data_source_thread_func_gthread_func (gpointer self) {
	gpointer result;
	result = rygel_simple_data_source_thread_func (self);
	g_object_unref (self);
	return result;
}


static void rygel_simple_data_source_real_start (RygelDataSource* base, RygelHTTPSeek* offsets, GError** error) {
	RygelSimpleDataSource * self;
	RygelHTTPSeek* _tmp0_;
	RygelHTTPSeek* _tmp6_;
	RygelHTTPSeek* _tmp7_;
	const gchar* _tmp8_;
	GThread* _tmp9_;
	GError * _inner_error_ = NULL;
	self = (RygelSimpleDataSource*) base;
	_tmp0_ = offsets;
	if (_tmp0_ != NULL) {
		RygelHTTPSeek* _tmp1_;
		RygelHTTPSeekType _tmp2_;
		RygelHTTPSeekType _tmp3_;
		_tmp1_ = offsets;
		_tmp2_ = rygel_http_seek_get_seek_type (_tmp1_);
		_tmp3_ = _tmp2_;
		if (_tmp3_ == RYGEL_HTTP_SEEK_TYPE_TIME) {
			const gchar* _tmp4_ = NULL;
			GError* _tmp5_;
			_tmp4_ = _ ("Time-based seek not supported");
			_tmp5_ = g_error_new_literal (RYGEL_DATA_SOURCE_ERROR, RYGEL_DATA_SOURCE_ERROR_SEEK_FAILED, _tmp4_);
			_inner_error_ = _tmp5_;
			g_propagate_error (error, _inner_error_);
			return;
		}
	}
	_tmp6_ = offsets;
	_tmp7_ = _g_object_ref0 (_tmp6_);
	_g_object_unref0 (self->priv->offsets);
	self->priv->offsets = _tmp7_;
	_tmp8_ = self->priv->uri;
	g_debug ("rygel-simple-data-source.vala:63: Starting data source for uri %s", _tmp8_);
	_tmp9_ = g_thread_new ("Rygel Serving thread", _rygel_simple_data_source_thread_func_gthread_func, g_object_ref (self));
	_g_thread_unref0 (self->priv->thread);
	self->priv->thread = _tmp9_;
}


static void rygel_simple_data_source_real_freeze (RygelDataSource* base) {
	RygelSimpleDataSource * self;
	gboolean _tmp0_;
	self = (RygelSimpleDataSource*) base;
	_tmp0_ = self->priv->frozen;
	if (_tmp0_) {
		return;
	}
	g_mutex_lock (&self->priv->mutex);
	self->priv->frozen = TRUE;
	g_mutex_unlock (&self->priv->mutex);
}


static void rygel_simple_data_source_real_thaw (RygelDataSource* base) {
	RygelSimpleDataSource * self;
	gboolean _tmp0_;
	self = (RygelSimpleDataSource*) base;
	_tmp0_ = self->priv->frozen;
	if (!_tmp0_) {
		return;
	}
	g_mutex_lock (&self->priv->mutex);
	self->priv->frozen = FALSE;
	g_cond_broadcast (&self->priv->cond);
	g_mutex_unlock (&self->priv->mutex);
}


static void rygel_simple_data_source_real_stop (RygelDataSource* base) {
	RygelSimpleDataSource * self;
	gboolean _tmp0_;
	self = (RygelSimpleDataSource*) base;
	_tmp0_ = self->priv->stop_thread;
	if (_tmp0_) {
		return;
	}
	g_mutex_lock (&self->priv->mutex);
	self->priv->frozen = FALSE;
	self->priv->stop_thread = TRUE;
	g_cond_broadcast (&self->priv->cond);
	g_mutex_unlock (&self->priv->mutex);
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		RygelSimpleDataSource * self;
		self = _data1_->self;
		_data1_->slice = (g_free (_data1_->slice), NULL);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static guint8* _vala_array_dup1 (guint8* self, int length) {
	return g_memdup (self, length * sizeof (guint8));
}


static gboolean ____lambda2_ (Block1Data* _data1_) {
	RygelSimpleDataSource * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	self = _data1_->self;
	_tmp0_ = self->priv->stop_thread;
	if (!_tmp0_) {
		guint8* _tmp1_;
		gint _tmp1__length1;
		_tmp1_ = _data1_->slice;
		_tmp1__length1 = _data1_->slice_length1;
		g_signal_emit_by_name ((RygelDataSource*) self, "data-available", _tmp1_, _tmp1__length1);
	}
	result = FALSE;
	return result;
}


static gboolean _____lambda2__gsource_func (gpointer self) {
	gboolean result;
	result = ____lambda2_ (self);
	return result;
}


static gboolean __lambda3_ (RygelSimpleDataSource* self) {
	gboolean result = FALSE;
	g_signal_emit_by_name ((RygelDataSource*) self, "done");
	result = FALSE;
	return result;
}


static gboolean ___lambda3__gsource_func (gpointer self) {
	gboolean result;
	result = __lambda3_ (self);
	return result;
}


static void* rygel_simple_data_source_thread_func (RygelSimpleDataSource* self) {
	void* result = NULL;
	const gchar* _tmp0_;
	GFile* _tmp1_ = NULL;
	GFile* file;
	const gchar* _tmp2_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->uri;
	_tmp1_ = g_file_new_for_commandline_arg (_tmp0_);
	file = _tmp1_;
	_tmp2_ = self->priv->uri;
	g_debug ("rygel-simple-data-source.vala:105: Spawning new thread for streaming f" \
"ile %s", _tmp2_);
	{
		GFile* _tmp3_;
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_;
		GMappedFile* _tmp6_;
		GMappedFile* _tmp7_;
		GMappedFile* mapped;
		RygelHTTPSeek* _tmp8_;
		_tmp3_ = file;
		_tmp4_ = g_file_get_path (_tmp3_);
		_tmp5_ = _tmp4_;
		_tmp6_ = g_mapped_file_new (_tmp5_, FALSE, &_inner_error_);
		_tmp7_ = _tmp6_;
		_g_free0 (_tmp5_);
		mapped = _tmp7_;
		if (_inner_error_ != NULL) {
			goto __catch0_g_error;
		}
		_tmp8_ = self->priv->offsets;
		if (_tmp8_ != NULL) {
			RygelHTTPSeek* _tmp9_;
			gint64 _tmp10_;
			gint64 _tmp11_;
			RygelHTTPSeek* _tmp12_;
			gint64 _tmp13_;
			gint64 _tmp14_;
			_tmp9_ = self->priv->offsets;
			_tmp10_ = rygel_http_seek_get_start (_tmp9_);
			_tmp11_ = _tmp10_;
			self->priv->first_byte = (guint64) _tmp11_;
			_tmp12_ = self->priv->offsets;
			_tmp13_ = rygel_http_seek_get_stop (_tmp12_);
			_tmp14_ = _tmp13_;
			self->priv->last_byte = (guint64) (_tmp14_ + 1);
		} else {
			GMappedFile* _tmp15_;
			gsize _tmp16_ = 0UL;
			_tmp15_ = mapped;
			_tmp16_ = g_mapped_file_get_length (_tmp15_);
			self->priv->last_byte = (guint64) _tmp16_;
		}
		while (TRUE) {
			Block1Data* _data1_;
			gboolean exit = FALSE;
			gboolean _tmp19_;
			gboolean _tmp20_ = FALSE;
			gboolean _tmp21_;
			gboolean _tmp24_;
			guint64 _tmp25_;
			guint64 start;
			guint64 _tmp26_;
			guint16 _tmp27_;
			guint64 stop;
			guint64 _tmp28_;
			guint64 _tmp29_;
			GMappedFile* _tmp31_;
			gchar* _tmp32_ = NULL;
			guint8* data;
			gint data_length1;
			gint _data_size_;
			GMappedFile* _tmp33_;
			gsize _tmp34_ = 0UL;
			gint _tmp35_;
			guint8* _tmp36_;
			gint _tmp36__length1;
			guint64 _tmp37_;
			guint64 _tmp38_;
			guint8* _tmp39_;
			gint _tmp39__length1;
			guint64 _tmp40_;
			_data1_ = g_slice_new0 (Block1Data);
			_data1_->_ref_count_ = 1;
			_data1_->self = g_object_ref (self);
			g_mutex_lock (&self->priv->mutex);
			while (TRUE) {
				gboolean _tmp17_;
				GMutex _tmp18_;
				_tmp17_ = self->priv->frozen;
				if (!_tmp17_) {
					break;
				}
				_tmp18_ = self->priv->mutex;
				g_cond_wait (&self->priv->cond, &_tmp18_);
			}
			_tmp19_ = self->priv->stop_thread;
			exit = _tmp19_;
			g_mutex_unlock (&self->priv->mutex);
			_tmp21_ = exit;
			if (_tmp21_) {
				_tmp20_ = TRUE;
			} else {
				guint64 _tmp22_;
				guint64 _tmp23_;
				_tmp22_ = self->priv->first_byte;
				_tmp23_ = self->priv->last_byte;
				_tmp20_ = _tmp22_ == _tmp23_;
			}
			_tmp24_ = _tmp20_;
			if (_tmp24_) {
				g_debug ("rygel-simple-data-source.vala:126: Done streaming!");
				block1_data_unref (_data1_);
				_data1_ = NULL;
				break;
			}
			_tmp25_ = self->priv->first_byte;
			start = _tmp25_;
			_tmp26_ = start;
			_tmp27_ = G_MAXUINT16;
			stop = _tmp26_ + _tmp27_;
			_tmp28_ = stop;
			_tmp29_ = self->priv->last_byte;
			if (_tmp28_ > _tmp29_) {
				guint64 _tmp30_;
				_tmp30_ = self->priv->last_byte;
				stop = _tmp30_;
			}
			_tmp31_ = mapped;
			_tmp32_ = g_mapped_file_get_contents (_tmp31_);
			data = (guint8*) _tmp32_;
			data_length1 = -1;
			_data_size_ = data_length1;
			_tmp33_ = mapped;
			_tmp34_ = g_mapped_file_get_length (_tmp33_);
			data_length1 = (gint) _tmp34_;
			_tmp35_ = data_length1;
			_tmp36_ = data;
			_tmp36__length1 = data_length1;
			_tmp37_ = start;
			_tmp38_ = stop;
			_tmp39_ = ((_tmp36_ + _tmp37_) != NULL) ? _vala_array_dup1 (_tmp36_ + _tmp37_, _tmp38_ - _tmp37_) : ((gpointer) (_tmp36_ + _tmp37_));
			_tmp39__length1 = _tmp38_ - _tmp37_;
			_data1_->slice = _tmp39_;
			_data1_->slice_length1 = _tmp39__length1;
			_data1_->_slice_size_ = _data1_->slice_length1;
			_tmp40_ = stop;
			self->priv->first_byte = _tmp40_;
			g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, _____lambda2__gsource_func, block1_data_ref (_data1_), block1_data_unref);
			block1_data_unref (_data1_);
			_data1_ = NULL;
		}
		_g_mapped_file_unref0 (mapped);
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* _error_ = NULL;
		GError* _tmp41_;
		const gchar* _tmp42_;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_tmp41_ = _error_;
		_tmp42_ = _tmp41_->message;
		g_warning ("rygel-simple-data-source.vala:152: Failed to map file: %s", _tmp42_);
		_g_error_free0 (_error_);
	}
	__finally0:
	if (_inner_error_ != NULL) {
		_g_object_unref0 (file);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	g_idle_add_full (G_PRIORITY_DEFAULT_IDLE, ___lambda3__gsource_func, g_object_ref (self), g_object_unref);
	result = NULL;
	_g_object_unref0 (file);
	return result;
}


static void rygel_simple_data_source_class_init (RygelSimpleDataSourceClass * klass) {
	rygel_simple_data_source_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelSimpleDataSourcePrivate));
	G_OBJECT_CLASS (klass)->finalize = rygel_simple_data_source_finalize;
}


static void rygel_simple_data_source_rygel_data_source_interface_init (RygelDataSourceIface * iface) {
	rygel_simple_data_source_rygel_data_source_parent_iface = g_type_interface_peek_parent (iface);
	iface->start = (void (*)(RygelDataSource*, RygelHTTPSeek*, GError**)) rygel_simple_data_source_real_start;
	iface->freeze = (void (*)(RygelDataSource*)) rygel_simple_data_source_real_freeze;
	iface->thaw = (void (*)(RygelDataSource*)) rygel_simple_data_source_real_thaw;
	iface->stop = (void (*)(RygelDataSource*)) rygel_simple_data_source_real_stop;
}


static void rygel_simple_data_source_instance_init (RygelSimpleDataSource * self) {
	GMutex _tmp0_ = {0};
	GCond _tmp1_ = {0};
	self->priv = RYGEL_SIMPLE_DATA_SOURCE_GET_PRIVATE (self);
	g_mutex_init (&_tmp0_);
	self->priv->mutex = _tmp0_;
	g_cond_init (&_tmp1_);
	self->priv->cond = _tmp1_;
	self->priv->first_byte = (guint64) 0;
	self->priv->last_byte = (guint64) 0;
	self->priv->frozen = FALSE;
	self->priv->stop_thread = FALSE;
	self->priv->offsets = NULL;
}


static void rygel_simple_data_source_finalize (GObject* obj) {
	RygelSimpleDataSource * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_SIMPLE_DATA_SOURCE, RygelSimpleDataSource);
	rygel_data_source_stop ((RygelDataSource*) self);
	_g_free0 (self->priv->uri);
	_g_thread_unref0 (self->priv->thread);
	_vala_clear_GMutex (&self->priv->mutex);
	_vala_clear_GCond (&self->priv->cond);
	_g_object_unref0 (self->priv->offsets);
	G_OBJECT_CLASS (rygel_simple_data_source_parent_class)->finalize (obj);
}


/**
 * A simple data source for use with the simple media engine (RygelSimpleMediaEngine).
 *
 * This does not support time-base seeking with 
 * rygel_data_source_start() because it does not
 * use any multimedia framework. Therefore, calling start() with
 * RYGEL_HTTP_SEEK_TYPE_TIME will fail with a 
 * RYGEL_DATA_SOURCE_ERROR_SEEK_FAILED GError code,
 */
GType rygel_simple_data_source_get_type (void) {
	static volatile gsize rygel_simple_data_source_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_simple_data_source_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelSimpleDataSourceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_simple_data_source_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelSimpleDataSource), 0, (GInstanceInitFunc) rygel_simple_data_source_instance_init, NULL };
		static const GInterfaceInfo rygel_data_source_info = { (GInterfaceInitFunc) rygel_simple_data_source_rygel_data_source_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType rygel_simple_data_source_type_id;
		rygel_simple_data_source_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelSimpleDataSource", &g_define_type_info, 0);
		g_type_add_interface_static (rygel_simple_data_source_type_id, RYGEL_TYPE_DATA_SOURCE, &rygel_data_source_info);
		g_once_init_leave (&rygel_simple_data_source_type_id__volatile, rygel_simple_data_source_type_id);
	}
	return rygel_simple_data_source_type_id__volatile;
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



