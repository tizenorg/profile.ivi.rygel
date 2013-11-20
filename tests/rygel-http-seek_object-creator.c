/* rygel-http-seek_object-creator.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-http-seek_object-creator.vala, do not modify */

/*
 * Copyright (C) 2008-2009 Nokia Corporation.
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
#include <glib/gi18n-lib.h>


#define RYGEL_TYPE_HTTP_SEEK_TYPE (rygel_http_seek_type_get_type ())

#define RYGEL_TYPE_HTTP_SEEK (rygel_http_seek_get_type ())
#define RYGEL_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeek))
#define RYGEL_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))
#define RYGEL_IS_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_IS_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_HTTP_SEEK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))

typedef struct _RygelHTTPSeek RygelHTTPSeek;
typedef struct _RygelHTTPSeekClass RygelHTTPSeekClass;
typedef struct _RygelHTTPSeekPrivate RygelHTTPSeekPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

typedef enum  {
	RYGEL_HTTP_SEEK_ERROR_INVALID_RANGE = SOUP_STATUS_BAD_REQUEST,
	RYGEL_HTTP_SEEK_ERROR_OUT_OF_RANGE = SOUP_STATUS_REQUESTED_RANGE_NOT_SATISFIABLE
} RygelHTTPSeekError;
#define RYGEL_HTTP_SEEK_ERROR rygel_http_seek_error_quark ()
typedef enum  {
	RYGEL_HTTP_SEEK_TYPE_BYTE,
	RYGEL_HTTP_SEEK_TYPE_TIME
} RygelHTTPSeekType;

struct _RygelHTTPSeek {
	GObject parent_instance;
	RygelHTTPSeekPrivate * priv;
};

struct _RygelHTTPSeekClass {
	GObjectClass parent_class;
	void (*add_response_headers) (RygelHTTPSeek* self);
};

struct _RygelHTTPSeekPrivate {
	RygelHTTPSeekType _seek_type;
	SoupMessage* _msg;
	gint64 _start;
	gint64 _stop;
	gint64 _step;
	gint64 _length;
	gint64 _total_length;
};


static gpointer rygel_http_seek_parent_class = NULL;

GQuark rygel_http_seek_error_quark (void);
GType rygel_http_seek_type_get_type (void) G_GNUC_CONST;
GType rygel_http_seek_get_type (void) G_GNUC_CONST;
#define RYGEL_HTTP_SEEK_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekPrivate))
enum  {
	RYGEL_HTTP_SEEK_DUMMY_PROPERTY,
	RYGEL_HTTP_SEEK_SEEK_TYPE,
	RYGEL_HTTP_SEEK_MSG,
	RYGEL_HTTP_SEEK_START,
	RYGEL_HTTP_SEEK_STOP,
	RYGEL_HTTP_SEEK_STEP,
	RYGEL_HTTP_SEEK_LENGTH,
	RYGEL_HTTP_SEEK_TOTAL_LENGTH
};
RygelHTTPSeek* rygel_http_seek_construct (GType object_type, SoupMessage* msg, gint64 start, gint64 stop, gint64 step, gint64 total_length, GError** error);
static void rygel_http_seek_set_msg (RygelHTTPSeek* self, SoupMessage* value);
static void rygel_http_seek_set_start (RygelHTTPSeek* self, gint64 value);
static void rygel_http_seek_set_stop (RygelHTTPSeek* self, gint64 value);
gint64 rygel_http_seek_get_length (RygelHTTPSeek* self);
static void rygel_http_seek_set_length (RygelHTTPSeek* self, gint64 value);
static void rygel_http_seek_set_total_length (RygelHTTPSeek* self, gint64 value);
void rygel_http_seek_add_response_headers (RygelHTTPSeek* self);
static void rygel_http_seek_real_add_response_headers (RygelHTTPSeek* self);
RygelHTTPSeekType rygel_http_seek_get_seek_type (RygelHTTPSeek* self);
void rygel_http_seek_set_seek_type (RygelHTTPSeek* self, RygelHTTPSeekType value);
SoupMessage* rygel_http_seek_get_msg (RygelHTTPSeek* self);
gint64 rygel_http_seek_get_start (RygelHTTPSeek* self);
gint64 rygel_http_seek_get_stop (RygelHTTPSeek* self);
gint64 rygel_http_seek_get_step (RygelHTTPSeek* self);
static void rygel_http_seek_set_step (RygelHTTPSeek* self, gint64 value);
gint64 rygel_http_seek_get_total_length (RygelHTTPSeek* self);
static void rygel_http_seek_finalize (GObject* obj);
static void _vala_rygel_http_seek_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_http_seek_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GQuark rygel_http_seek_error_quark (void) {
	return g_quark_from_static_string ("rygel_http_seek_error-quark");
}


GType rygel_http_seek_type_get_type (void) {
	static volatile gsize rygel_http_seek_type_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_http_seek_type_type_id__volatile)) {
		static const GEnumValue values[] = {{RYGEL_HTTP_SEEK_TYPE_BYTE, "RYGEL_HTTP_SEEK_TYPE_BYTE", "byte"}, {RYGEL_HTTP_SEEK_TYPE_TIME, "RYGEL_HTTP_SEEK_TYPE_TIME", "time"}, {0, NULL, NULL}};
		GType rygel_http_seek_type_type_id;
		rygel_http_seek_type_type_id = g_enum_register_static ("RygelHTTPSeekType", values);
		g_once_init_leave (&rygel_http_seek_type_type_id__volatile, rygel_http_seek_type_type_id);
	}
	return rygel_http_seek_type_type_id__volatile;
}


RygelHTTPSeek* rygel_http_seek_construct (GType object_type, SoupMessage* msg, gint64 start, gint64 stop, gint64 step, gint64 total_length, GError** error) {
	RygelHTTPSeek * self = NULL;
	SoupMessage* _tmp0_ = NULL;
	gint64 _tmp1_ = 0LL;
	gint64 _tmp2_ = 0LL;
	gint64 _tmp3_ = 0LL;
	gint64 _tmp4_ = 0LL;
	gboolean _tmp5_ = FALSE;
	gint64 _tmp6_ = 0LL;
	gboolean _tmp9_ = FALSE;
	gboolean _tmp13_ = FALSE;
	gint64 _tmp14_ = 0LL;
	gboolean _tmp17_ = FALSE;
	gint64 _tmp21_ = 0LL;
	gint64 _tmp26_ = 0LL;
	gint64 _tmp27_ = 0LL;
	gint64 _tmp28_ = 0LL;
	GError * _inner_error_ = NULL;
#line 83 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_val_if_fail (msg != NULL, NULL);
#line 83 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	self = (RygelHTTPSeek*) g_object_new (object_type, NULL);
#line 88 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = msg;
#line 88 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	rygel_http_seek_set_msg (self, _tmp0_);
#line 89 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp1_ = start;
#line 89 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	rygel_http_seek_set_start (self, _tmp1_);
#line 90 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp2_ = stop;
#line 90 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	rygel_http_seek_set_stop (self, _tmp2_);
#line 91 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp3_ = self->priv->_length;
#line 91 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	rygel_http_seek_set_length (self, _tmp3_);
#line 92 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp4_ = total_length;
#line 92 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	rygel_http_seek_set_total_length (self, _tmp4_);
#line 94 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp6_ = start;
#line 94 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	if (_tmp6_ < ((gint64) 0)) {
#line 94 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp5_ = TRUE;
#line 184 "rygel-http-seek_object-creator.c"
	} else {
		gint64 _tmp7_ = 0LL;
		gint64 _tmp8_ = 0LL;
#line 94 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp7_ = start;
#line 94 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp8_ = total_length;
#line 94 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp5_ = _tmp7_ >= _tmp8_;
#line 194 "rygel-http-seek_object-creator.c"
	}
#line 94 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp9_ = _tmp5_;
#line 94 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	if (_tmp9_) {
#line 200 "rygel-http-seek_object-creator.c"
		const gchar* _tmp10_ = NULL;
		gint64 _tmp11_ = 0LL;
		GError* _tmp12_ = NULL;
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp10_ = _ ("Out Of Range Start '%ld'");
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp11_ = start;
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp12_ = g_error_new (RYGEL_HTTP_SEEK_ERROR, RYGEL_HTTP_SEEK_ERROR_OUT_OF_RANGE, _tmp10_, _tmp11_);
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_inner_error_ = _tmp12_;
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		if (_inner_error_->domain == RYGEL_HTTP_SEEK_ERROR) {
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			g_propagate_error (error, _inner_error_);
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			_g_object_unref0 (self);
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			return NULL;
#line 220 "rygel-http-seek_object-creator.c"
		} else {
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			g_clear_error (&_inner_error_);
#line 95 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			return NULL;
#line 228 "rygel-http-seek_object-creator.c"
		}
	}
#line 98 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp14_ = stop;
#line 98 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	if (_tmp14_ < ((gint64) 0)) {
#line 98 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp13_ = TRUE;
#line 237 "rygel-http-seek_object-creator.c"
	} else {
		gint64 _tmp15_ = 0LL;
		gint64 _tmp16_ = 0LL;
#line 98 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp15_ = stop;
#line 98 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp16_ = total_length;
#line 98 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp13_ = _tmp15_ >= _tmp16_;
#line 247 "rygel-http-seek_object-creator.c"
	}
#line 98 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp17_ = _tmp13_;
#line 98 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	if (_tmp17_) {
#line 253 "rygel-http-seek_object-creator.c"
		const gchar* _tmp18_ = NULL;
		gint64 _tmp19_ = 0LL;
		GError* _tmp20_ = NULL;
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp18_ = _ ("Out Of Range Stop '%ld'");
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp19_ = stop;
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp20_ = g_error_new (RYGEL_HTTP_SEEK_ERROR, RYGEL_HTTP_SEEK_ERROR_OUT_OF_RANGE, _tmp18_, _tmp19_);
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_inner_error_ = _tmp20_;
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		if (_inner_error_->domain == RYGEL_HTTP_SEEK_ERROR) {
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			g_propagate_error (error, _inner_error_);
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			_g_object_unref0 (self);
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			return NULL;
#line 273 "rygel-http-seek_object-creator.c"
		} else {
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			g_clear_error (&_inner_error_);
#line 99 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
			return NULL;
#line 281 "rygel-http-seek_object-creator.c"
		}
	}
#line 103 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp21_ = self->priv->_length;
#line 103 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	if (_tmp21_ > ((gint64) 0)) {
#line 288 "rygel-http-seek_object-creator.c"
		gint64 _tmp22_ = 0LL;
		gint64 _tmp23_ = 0LL;
		gint64 _tmp24_ = 0LL;
		gint64 _tmp25_ = 0LL;
#line 104 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp22_ = stop;
#line 104 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp23_ = start;
#line 104 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp24_ = self->priv->_length;
#line 104 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		_tmp25_ = CLAMP (_tmp22_, _tmp23_ + 1, _tmp24_ - 1);
#line 104 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		rygel_http_seek_set_stop (self, _tmp25_);
#line 303 "rygel-http-seek_object-creator.c"
	}
#line 107 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp26_ = stop;
#line 107 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp27_ = step;
#line 107 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp28_ = start;
#line 107 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	rygel_http_seek_set_length (self, (_tmp26_ + _tmp27_) - _tmp28_);
#line 83 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	return self;
#line 315 "rygel-http-seek_object-creator.c"
}


static void rygel_http_seek_real_add_response_headers (RygelHTTPSeek* self) {
#line 110 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_critical ("Type `%s' does not implement abstract method `rygel_http_seek_add_response_headers'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
#line 110 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	return;
#line 324 "rygel-http-seek_object-creator.c"
}


void rygel_http_seek_add_response_headers (RygelHTTPSeek* self) {
#line 110 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_if_fail (self != NULL);
#line 110 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	RYGEL_HTTP_SEEK_GET_CLASS (self)->add_response_headers (self);
#line 333 "rygel-http-seek_object-creator.c"
}


RygelHTTPSeekType rygel_http_seek_get_seek_type (RygelHTTPSeek* self) {
	RygelHTTPSeekType result;
	RygelHTTPSeekType _tmp0_ = 0;
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = self->priv->_seek_type;
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	result = _tmp0_;
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	return result;
#line 348 "rygel-http-seek_object-creator.c"
}


void rygel_http_seek_set_seek_type (RygelHTTPSeek* self, RygelHTTPSeekType value) {
	RygelHTTPSeekType _tmp0_ = 0;
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_if_fail (self != NULL);
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = value;
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	self->priv->_seek_type = _tmp0_;
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_notify ((GObject *) self, "seek-type");
#line 362 "rygel-http-seek_object-creator.c"
}


SoupMessage* rygel_http_seek_get_msg (RygelHTTPSeek* self) {
	SoupMessage* result;
	SoupMessage* _tmp0_ = NULL;
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = self->priv->_msg;
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	result = _tmp0_;
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	return result;
#line 377 "rygel-http-seek_object-creator.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	return self ? g_object_ref (self) : NULL;
#line 384 "rygel-http-seek_object-creator.c"
}


static void rygel_http_seek_set_msg (RygelHTTPSeek* self, SoupMessage* value) {
	SoupMessage* _tmp0_ = NULL;
	SoupMessage* _tmp1_ = NULL;
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_if_fail (self != NULL);
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = value;
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_g_object_unref0 (self->priv->_msg);
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	self->priv->_msg = _tmp1_;
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_notify ((GObject *) self, "msg");
#line 403 "rygel-http-seek_object-creator.c"
}


gint64 rygel_http_seek_get_start (RygelHTTPSeek* self) {
	gint64 result;
	gint64 _tmp0_ = 0LL;
#line 57 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_val_if_fail (self != NULL, 0LL);
#line 57 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = self->priv->_start;
#line 57 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	result = _tmp0_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	return result;
#line 418 "rygel-http-seek_object-creator.c"
}


static void rygel_http_seek_set_start (RygelHTTPSeek* self, gint64 value) {
	gint64 _tmp0_ = 0LL;
#line 57 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_if_fail (self != NULL);
#line 57 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = value;
#line 57 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	self->priv->_start = _tmp0_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_notify ((GObject *) self, "start");
#line 432 "rygel-http-seek_object-creator.c"
}


gint64 rygel_http_seek_get_stop (RygelHTTPSeek* self) {
	gint64 result;
	gint64 _tmp0_ = 0LL;
#line 63 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_val_if_fail (self != NULL, 0LL);
#line 63 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = self->priv->_stop;
#line 63 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	result = _tmp0_;
#line 63 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	return result;
#line 447 "rygel-http-seek_object-creator.c"
}


static void rygel_http_seek_set_stop (RygelHTTPSeek* self, gint64 value) {
	gint64 _tmp0_ = 0LL;
#line 63 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_if_fail (self != NULL);
#line 63 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = value;
#line 63 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	self->priv->_stop = _tmp0_;
#line 63 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_notify ((GObject *) self, "stop");
#line 461 "rygel-http-seek_object-creator.c"
}


gint64 rygel_http_seek_get_step (RygelHTTPSeek* self) {
	gint64 result;
	gint64 _tmp0_ = 0LL;
#line 69 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_val_if_fail (self != NULL, 0LL);
#line 69 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = self->priv->_step;
#line 69 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	result = _tmp0_;
#line 69 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	return result;
#line 476 "rygel-http-seek_object-creator.c"
}


static void rygel_http_seek_set_step (RygelHTTPSeek* self, gint64 value) {
	gint64 _tmp0_ = 0LL;
#line 69 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_if_fail (self != NULL);
#line 69 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = value;
#line 69 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	self->priv->_step = _tmp0_;
#line 69 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_notify ((GObject *) self, "step");
#line 490 "rygel-http-seek_object-creator.c"
}


gint64 rygel_http_seek_get_length (RygelHTTPSeek* self) {
	gint64 result;
	gint64 _tmp0_ = 0LL;
#line 75 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_val_if_fail (self != NULL, 0LL);
#line 75 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = self->priv->_length;
#line 75 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	result = _tmp0_;
#line 75 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	return result;
#line 505 "rygel-http-seek_object-creator.c"
}


static void rygel_http_seek_set_length (RygelHTTPSeek* self, gint64 value) {
	gint64 _tmp0_ = 0LL;
#line 75 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_if_fail (self != NULL);
#line 75 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = value;
#line 75 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	self->priv->_length = _tmp0_;
#line 75 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_notify ((GObject *) self, "length");
#line 519 "rygel-http-seek_object-creator.c"
}


gint64 rygel_http_seek_get_total_length (RygelHTTPSeek* self) {
	gint64 result;
	gint64 _tmp0_ = 0LL;
#line 81 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_val_if_fail (self != NULL, 0LL);
#line 81 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = self->priv->_total_length;
#line 81 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	result = _tmp0_;
#line 81 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	return result;
#line 534 "rygel-http-seek_object-creator.c"
}


static void rygel_http_seek_set_total_length (RygelHTTPSeek* self, gint64 value) {
	gint64 _tmp0_ = 0LL;
#line 81 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_return_if_fail (self != NULL);
#line 81 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_tmp0_ = value;
#line 81 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	self->priv->_total_length = _tmp0_;
#line 81 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_notify ((GObject *) self, "total-length");
#line 548 "rygel-http-seek_object-creator.c"
}


static void rygel_http_seek_class_init (RygelHTTPSeekClass * klass) {
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	rygel_http_seek_parent_class = g_type_class_peek_parent (klass);
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_type_class_add_private (klass, sizeof (RygelHTTPSeekPrivate));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	RYGEL_HTTP_SEEK_CLASS (klass)->add_response_headers = rygel_http_seek_real_add_response_headers;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_http_seek_get_property;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_http_seek_set_property;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_http_seek_finalize;
#line 565 "rygel-http-seek_object-creator.c"
	/**
	     * Identifies whether this is a class Range request or a DLNA-specific
	     * "TimeSeekRange.dlna.org" request.
	     */
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_SEEK_SEEK_TYPE, g_param_spec_enum ("seek-type", "seek-type", "seek-type", RYGEL_TYPE_HTTP_SEEK_TYPE, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_SEEK_MSG, g_param_spec_object ("msg", "msg", "msg", soup_message_get_type (), G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 574 "rygel-http-seek_object-creator.c"
	/**
	     * The start of the range as a number of bytes (classic) or as microseconds 
	     * (DLNA-specific). See seek_type.
	     */
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_SEEK_START, g_param_spec_int64 ("start", "start", "start", G_MININT64, G_MAXINT64, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 581 "rygel-http-seek_object-creator.c"
	/**
	     * The end of the range as a number of bytes (classic) or as microseconds 
	     * (DLNA-specific). See seek_type.
	     */
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_SEEK_STOP, g_param_spec_int64 ("stop", "stop", "stop", G_MININT64, G_MAXINT64, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 588 "rygel-http-seek_object-creator.c"
	/**
	     * Either 1 byte (classic) or as 1000 G_TIME_SPAN_MILLISECOND microseconds 
	     * (DLNA-specific). See seek_type.
	     */
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_SEEK_STEP, g_param_spec_int64 ("step", "step", "step", G_MININT64, G_MAXINT64, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 595 "rygel-http-seek_object-creator.c"
	/**
	     * The length of the range as a number of bytes (classic) or as microseconds 
	     * (DLNA-specific). See seek_type.
	     */
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_SEEK_LENGTH, g_param_spec_int64 ("length", "length", "length", G_MININT64, G_MAXINT64, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 602 "rygel-http-seek_object-creator.c"
	/**
	     * The length of the media file as a number of bytes (classic) or as microseconds 
	     * (DLNA-specific). See seek_type.
	     */
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_HTTP_SEEK_TOTAL_LENGTH, g_param_spec_int64 ("total-length", "total-length", "total-length", G_MININT64, G_MAXINT64, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE));
#line 609 "rygel-http-seek_object-creator.c"
}


static void rygel_http_seek_instance_init (RygelHTTPSeek * self) {
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	self->priv = RYGEL_HTTP_SEEK_GET_PRIVATE (self);
#line 616 "rygel-http-seek_object-creator.c"
}


static void rygel_http_seek_finalize (GObject* obj) {
	RygelHTTPSeek * self;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeek);
#line 51 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	_g_object_unref0 (self->priv->_msg);
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	G_OBJECT_CLASS (rygel_http_seek_parent_class)->finalize (obj);
#line 628 "rygel-http-seek_object-creator.c"
}


/**
 * HTTPSeek is an abstract representation of a ranged HTTP request.
 *
 * It can be one of:
 *
 *  - The classic Range request (seek_type == HTTPSeekType.BYTE), with start and stop in bytes.
 *  - The DLNA-Specific "TimeSeekRange.dlna.org" request (seek_type == HTTPSeekType.TIME) with start and stop in microseconds.
 */
GType rygel_http_seek_get_type (void) {
	static volatile gsize rygel_http_seek_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_http_seek_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelHTTPSeekClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_http_seek_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelHTTPSeek), 0, (GInstanceInitFunc) rygel_http_seek_instance_init, NULL };
		GType rygel_http_seek_type_id;
		rygel_http_seek_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelHTTPSeek", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_http_seek_type_id__volatile, rygel_http_seek_type_id);
	}
	return rygel_http_seek_type_id__volatile;
}


static void _vala_rygel_http_seek_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelHTTPSeek * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeek);
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	switch (property_id) {
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_SEEK_TYPE:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		g_value_set_enum (value, rygel_http_seek_get_seek_type (self));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_MSG:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		g_value_set_object (value, rygel_http_seek_get_msg (self));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_START:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		g_value_set_int64 (value, rygel_http_seek_get_start (self));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_STOP:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		g_value_set_int64 (value, rygel_http_seek_get_stop (self));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_STEP:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		g_value_set_int64 (value, rygel_http_seek_get_step (self));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_LENGTH:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		g_value_set_int64 (value, rygel_http_seek_get_length (self));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_TOTAL_LENGTH:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		g_value_set_int64 (value, rygel_http_seek_get_total_length (self));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 699 "rygel-http-seek_object-creator.c"
		default:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 705 "rygel-http-seek_object-creator.c"
	}
}


static void _vala_rygel_http_seek_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelHTTPSeek * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeek);
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
	switch (property_id) {
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_SEEK_TYPE:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		rygel_http_seek_set_seek_type (self, g_value_get_enum (value));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_MSG:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		rygel_http_seek_set_msg (self, g_value_get_object (value));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_START:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		rygel_http_seek_set_start (self, g_value_get_int64 (value));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_STOP:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		rygel_http_seek_set_stop (self, g_value_get_int64 (value));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_STEP:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		rygel_http_seek_set_step (self, g_value_get_int64 (value));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_LENGTH:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		rygel_http_seek_set_length (self, g_value_get_int64 (value));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		case RYGEL_HTTP_SEEK_TOTAL_LENGTH:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		rygel_http_seek_set_total_length (self, g_value_get_int64 (value));
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 757 "rygel-http-seek_object-creator.c"
		default:
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-http-seek_object-creator.vala"
		break;
#line 763 "rygel-http-seek_object-creator.c"
	}
}



