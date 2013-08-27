/* rygel-time-utils.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-time-utils.vala, do not modify */

/*
 * Copyright (C) 2009 Nokia Corporation.
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
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <gobject/gvaluecollector.h>


#define RYGEL_TYPE_TIME_UTILS (rygel_time_utils_get_type ())
#define RYGEL_TIME_UTILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_TIME_UTILS, RygelTimeUtils))
#define RYGEL_TIME_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_TIME_UTILS, RygelTimeUtilsClass))
#define RYGEL_IS_TIME_UTILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_TIME_UTILS))
#define RYGEL_IS_TIME_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_TIME_UTILS))
#define RYGEL_TIME_UTILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_TIME_UTILS, RygelTimeUtilsClass))

typedef struct _RygelTimeUtils RygelTimeUtils;
typedef struct _RygelTimeUtilsClass RygelTimeUtilsClass;
typedef struct _RygelTimeUtilsPrivate RygelTimeUtilsPrivate;
typedef struct _RygelParamSpecTimeUtils RygelParamSpecTimeUtils;

struct _RygelTimeUtils {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelTimeUtilsPrivate * priv;
};

struct _RygelTimeUtilsClass {
	GTypeClass parent_class;
	void (*finalize) (RygelTimeUtils *self);
};

struct _RygelParamSpecTimeUtils {
	GParamSpec parent_instance;
};


static gpointer rygel_time_utils_parent_class = NULL;

gpointer rygel_time_utils_ref (gpointer instance);
void rygel_time_utils_unref (gpointer instance);
GParamSpec* rygel_param_spec_time_utils (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_time_utils (GValue* value, gpointer v_object);
void rygel_value_take_time_utils (GValue* value, gpointer v_object);
gpointer rygel_value_get_time_utils (const GValue* value);
GType rygel_time_utils_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TIME_UTILS_DUMMY_PROPERTY
};
gint64 rygel_time_utils_time_from_string (const gchar* str);
gchar* rygel_time_utils_time_to_string (gint64 time);
RygelTimeUtils* rygel_time_utils_construct (GType object_type);
static void rygel_time_utils_finalize (RygelTimeUtils* obj);


gint64 rygel_time_utils_time_from_string (const gchar* str) {
	gint64 result = 0LL;
	guint64 hours = 0ULL;
	guint64 minutes = 0ULL;
	guint64 seconds = 0ULL;
	const gchar* _tmp0_ = NULL;
#line 27 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	g_return_val_if_fail (str != NULL, 0LL);
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	_tmp0_ = str;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	sscanf (_tmp0_, "%llu:%2llu:%2llu%*s", &hours, &minutes, &seconds);
#line 32 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	result = ((gint64) (((hours * 3600) + (minutes * 60)) + seconds)) * G_TIME_SPAN_SECOND;
#line 32 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	return result;
#line 100 "rygel-time-utils.c"
}


gchar* rygel_time_utils_time_to_string (gint64 time) {
	gchar* result = NULL;
	guint64 hours = 0ULL;
	guint64 minutes = 0ULL;
	guint64 seconds = 0ULL;
	gint64 _tmp0_ = 0LL;
	gint64 _tmp1_ = 0LL;
	guint64 _tmp2_ = 0ULL;
	guint64 _tmp3_ = 0ULL;
	guint64 _tmp4_ = 0ULL;
	gchar* _tmp5_ = NULL;
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	_tmp0_ = time;
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	hours = (guint64) ((_tmp0_ / G_TIME_SPAN_SECOND) / 3600);
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	_tmp1_ = time;
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	seconds = (guint64) ((_tmp1_ / G_TIME_SPAN_SECOND) % 3600);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	_tmp2_ = seconds;
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	minutes = _tmp2_ / 60;
#line 41 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	_tmp3_ = seconds;
#line 41 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	seconds = _tmp3_ % 60;
#line 43 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	_tmp4_ = seconds;
#line 43 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	_tmp5_ = g_strdup_printf ("%llu:%.2llu:%.2llu", hours, minutes, _tmp4_);
#line 43 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	result = _tmp5_;
#line 43 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	return result;
#line 139 "rygel-time-utils.c"
}


RygelTimeUtils* rygel_time_utils_construct (GType object_type) {
	RygelTimeUtils* self = NULL;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	self = (RygelTimeUtils*) g_type_create_instance (object_type);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	return self;
#line 149 "rygel-time-utils.c"
}


static void rygel_value_time_utils_init (GValue* value) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	value->data[0].v_pointer = NULL;
#line 156 "rygel-time-utils.c"
}


static void rygel_value_time_utils_free_value (GValue* value) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	if (value->data[0].v_pointer) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		rygel_time_utils_unref (value->data[0].v_pointer);
#line 165 "rygel-time-utils.c"
	}
}


static void rygel_value_time_utils_copy_value (const GValue* src_value, GValue* dest_value) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	if (src_value->data[0].v_pointer) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		dest_value->data[0].v_pointer = rygel_time_utils_ref (src_value->data[0].v_pointer);
#line 175 "rygel-time-utils.c"
	} else {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		dest_value->data[0].v_pointer = NULL;
#line 179 "rygel-time-utils.c"
	}
}


static gpointer rygel_value_time_utils_peek_pointer (const GValue* value) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	return value->data[0].v_pointer;
#line 187 "rygel-time-utils.c"
}


static gchar* rygel_value_time_utils_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	if (collect_values[0].v_pointer) {
#line 194 "rygel-time-utils.c"
		RygelTimeUtils* object;
		object = collect_values[0].v_pointer;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		if (object->parent_instance.g_class == NULL) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 201 "rygel-time-utils.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 205 "rygel-time-utils.c"
		}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		value->data[0].v_pointer = rygel_time_utils_ref (object);
#line 209 "rygel-time-utils.c"
	} else {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		value->data[0].v_pointer = NULL;
#line 213 "rygel-time-utils.c"
	}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	return NULL;
#line 217 "rygel-time-utils.c"
}


static gchar* rygel_value_time_utils_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelTimeUtils** object_p;
	object_p = collect_values[0].v_pointer;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	if (!object_p) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 228 "rygel-time-utils.c"
	}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	if (!value->data[0].v_pointer) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		*object_p = NULL;
#line 234 "rygel-time-utils.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		*object_p = value->data[0].v_pointer;
#line 238 "rygel-time-utils.c"
	} else {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		*object_p = rygel_time_utils_ref (value->data[0].v_pointer);
#line 242 "rygel-time-utils.c"
	}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	return NULL;
#line 246 "rygel-time-utils.c"
}


GParamSpec* rygel_param_spec_time_utils (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelParamSpecTimeUtils* spec;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_TYPE_TIME_UTILS), NULL);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	return G_PARAM_SPEC (spec);
#line 260 "rygel-time-utils.c"
}


gpointer rygel_value_get_time_utils (const GValue* value) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_TIME_UTILS), NULL);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	return value->data[0].v_pointer;
#line 269 "rygel-time-utils.c"
}


void rygel_value_set_time_utils (GValue* value, gpointer v_object) {
	RygelTimeUtils* old;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_TIME_UTILS));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	old = value->data[0].v_pointer;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	if (v_object) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_TIME_UTILS));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		value->data[0].v_pointer = v_object;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		rygel_time_utils_ref (value->data[0].v_pointer);
#line 289 "rygel-time-utils.c"
	} else {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		value->data[0].v_pointer = NULL;
#line 293 "rygel-time-utils.c"
	}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	if (old) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		rygel_time_utils_unref (old);
#line 299 "rygel-time-utils.c"
	}
}


void rygel_value_take_time_utils (GValue* value, gpointer v_object) {
	RygelTimeUtils* old;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_TIME_UTILS));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	old = value->data[0].v_pointer;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	if (v_object) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_TIME_UTILS));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		value->data[0].v_pointer = v_object;
#line 318 "rygel-time-utils.c"
	} else {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		value->data[0].v_pointer = NULL;
#line 322 "rygel-time-utils.c"
	}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	if (old) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		rygel_time_utils_unref (old);
#line 328 "rygel-time-utils.c"
	}
}


static void rygel_time_utils_class_init (RygelTimeUtilsClass * klass) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	rygel_time_utils_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	RYGEL_TIME_UTILS_CLASS (klass)->finalize = rygel_time_utils_finalize;
#line 338 "rygel-time-utils.c"
}


static void rygel_time_utils_instance_init (RygelTimeUtils * self) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	self->ref_count = 1;
#line 345 "rygel-time-utils.c"
}


static void rygel_time_utils_finalize (RygelTimeUtils* obj) {
	RygelTimeUtils * self;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_TIME_UTILS, RygelTimeUtils);
#line 353 "rygel-time-utils.c"
}


GType rygel_time_utils_get_type (void) {
	static volatile gsize rygel_time_utils_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_time_utils_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { rygel_value_time_utils_init, rygel_value_time_utils_free_value, rygel_value_time_utils_copy_value, rygel_value_time_utils_peek_pointer, "p", rygel_value_time_utils_collect_value, "p", rygel_value_time_utils_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (RygelTimeUtilsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_time_utils_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTimeUtils), 0, (GInstanceInitFunc) rygel_time_utils_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType rygel_time_utils_type_id;
		rygel_time_utils_type_id = g_type_register_fundamental (g_type_fundamental_next (), "RygelTimeUtils", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_time_utils_type_id__volatile, rygel_time_utils_type_id);
	}
	return rygel_time_utils_type_id__volatile;
}


gpointer rygel_time_utils_ref (gpointer instance) {
	RygelTimeUtils* self;
	self = instance;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	g_atomic_int_inc (&self->ref_count);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	return instance;
#line 378 "rygel-time-utils.c"
}


void rygel_time_utils_unref (gpointer instance) {
	RygelTimeUtils* self;
	self = instance;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		RYGEL_TIME_UTILS_GET_CLASS (self)->finalize (self);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-time-utils.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 391 "rygel-time-utils.c"
	}
}


