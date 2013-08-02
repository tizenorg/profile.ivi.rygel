/* rygel-volume.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-volume.vala, do not modify */

/*
 * Copyright (C) 2008 OpenedHand Ltd.
 * Copyright (C) 2009 Nokia Corporation.
 *
 * Author: Jorn Baayen <jorn@openedhand.com>
 *         Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
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
/* Helper class for converting between double and percentage representations*/
/* of volume.*/

#include <glib.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>
#include <gobject/gvaluecollector.h>


#define RYGEL_TYPE_VOLUME (rygel_volume_get_type ())
#define RYGEL_VOLUME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_VOLUME, RygelVolume))
#define RYGEL_VOLUME_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_VOLUME, RygelVolumeClass))
#define RYGEL_IS_VOLUME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_VOLUME))
#define RYGEL_IS_VOLUME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_VOLUME))
#define RYGEL_VOLUME_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_VOLUME, RygelVolumeClass))

typedef struct _RygelVolume RygelVolume;
typedef struct _RygelVolumeClass RygelVolumeClass;
typedef struct _RygelVolumePrivate RygelVolumePrivate;
typedef struct _RygelParamSpecVolume RygelParamSpecVolume;

struct _RygelVolume {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelVolumePrivate * priv;
};

struct _RygelVolumeClass {
	GTypeClass parent_class;
	void (*finalize) (RygelVolume *self);
};

struct _RygelParamSpecVolume {
	GParamSpec parent_instance;
};


static gpointer rygel_volume_parent_class = NULL;

gpointer rygel_volume_ref (gpointer instance);
void rygel_volume_unref (gpointer instance);
GParamSpec* rygel_param_spec_volume (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_volume (GValue* value, gpointer v_object);
void rygel_value_take_volume (GValue* value, gpointer v_object);
gpointer rygel_value_get_volume (const GValue* value);
GType rygel_volume_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_VOLUME_DUMMY_PROPERTY
};
gdouble rygel_volume_from_percentage (guint percentage);
guint rygel_volume_to_percentage (gdouble volume);
RygelVolume* rygel_volume_new (void);
RygelVolume* rygel_volume_construct (GType object_type);
static void rygel_volume_finalize (RygelVolume* obj);


gdouble rygel_volume_from_percentage (guint percentage) {
	gdouble result = 0.0;
	guint _tmp0_ = 0U;
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	_tmp0_ = percentage;
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	result = ((gdouble) _tmp0_) / 100.0;
#line 28 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	return result;
#line 93 "rygel-volume.c"
}


guint rygel_volume_to_percentage (gdouble volume) {
	guint result = 0U;
	gdouble _tmp0_ = 0.0;
#line 32 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	_tmp0_ = volume;
#line 32 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	result = (guint) (_tmp0_ * 100.0);
#line 32 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	return result;
#line 106 "rygel-volume.c"
}


RygelVolume* rygel_volume_construct (GType object_type) {
	RygelVolume* self = NULL;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	self = (RygelVolume*) g_type_create_instance (object_type);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	return self;
#line 116 "rygel-volume.c"
}


RygelVolume* rygel_volume_new (void) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	return rygel_volume_construct (RYGEL_TYPE_VOLUME);
#line 123 "rygel-volume.c"
}


static void rygel_value_volume_init (GValue* value) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	value->data[0].v_pointer = NULL;
#line 130 "rygel-volume.c"
}


static void rygel_value_volume_free_value (GValue* value) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	if (value->data[0].v_pointer) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		rygel_volume_unref (value->data[0].v_pointer);
#line 139 "rygel-volume.c"
	}
}


static void rygel_value_volume_copy_value (const GValue* src_value, GValue* dest_value) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	if (src_value->data[0].v_pointer) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		dest_value->data[0].v_pointer = rygel_volume_ref (src_value->data[0].v_pointer);
#line 149 "rygel-volume.c"
	} else {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		dest_value->data[0].v_pointer = NULL;
#line 153 "rygel-volume.c"
	}
}


static gpointer rygel_value_volume_peek_pointer (const GValue* value) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	return value->data[0].v_pointer;
#line 161 "rygel-volume.c"
}


static gchar* rygel_value_volume_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	if (collect_values[0].v_pointer) {
#line 168 "rygel-volume.c"
		RygelVolume* object;
		object = collect_values[0].v_pointer;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		if (object->parent_instance.g_class == NULL) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 175 "rygel-volume.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 179 "rygel-volume.c"
		}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		value->data[0].v_pointer = rygel_volume_ref (object);
#line 183 "rygel-volume.c"
	} else {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		value->data[0].v_pointer = NULL;
#line 187 "rygel-volume.c"
	}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	return NULL;
#line 191 "rygel-volume.c"
}


static gchar* rygel_value_volume_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelVolume** object_p;
	object_p = collect_values[0].v_pointer;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	if (!object_p) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 202 "rygel-volume.c"
	}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	if (!value->data[0].v_pointer) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		*object_p = NULL;
#line 208 "rygel-volume.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		*object_p = value->data[0].v_pointer;
#line 212 "rygel-volume.c"
	} else {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		*object_p = rygel_volume_ref (value->data[0].v_pointer);
#line 216 "rygel-volume.c"
	}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	return NULL;
#line 220 "rygel-volume.c"
}


GParamSpec* rygel_param_spec_volume (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelParamSpecVolume* spec;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_TYPE_VOLUME), NULL);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	return G_PARAM_SPEC (spec);
#line 234 "rygel-volume.c"
}


gpointer rygel_value_get_volume (const GValue* value) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_VOLUME), NULL);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	return value->data[0].v_pointer;
#line 243 "rygel-volume.c"
}


void rygel_value_set_volume (GValue* value, gpointer v_object) {
	RygelVolume* old;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_VOLUME));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	old = value->data[0].v_pointer;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	if (v_object) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_VOLUME));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		value->data[0].v_pointer = v_object;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		rygel_volume_ref (value->data[0].v_pointer);
#line 263 "rygel-volume.c"
	} else {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		value->data[0].v_pointer = NULL;
#line 267 "rygel-volume.c"
	}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	if (old) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		rygel_volume_unref (old);
#line 273 "rygel-volume.c"
	}
}


void rygel_value_take_volume (GValue* value, gpointer v_object) {
	RygelVolume* old;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_VOLUME));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	old = value->data[0].v_pointer;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	if (v_object) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_VOLUME));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		value->data[0].v_pointer = v_object;
#line 292 "rygel-volume.c"
	} else {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		value->data[0].v_pointer = NULL;
#line 296 "rygel-volume.c"
	}
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	if (old) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		rygel_volume_unref (old);
#line 302 "rygel-volume.c"
	}
}


static void rygel_volume_class_init (RygelVolumeClass * klass) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	rygel_volume_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	RYGEL_VOLUME_CLASS (klass)->finalize = rygel_volume_finalize;
#line 312 "rygel-volume.c"
}


static void rygel_volume_instance_init (RygelVolume * self) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	self->ref_count = 1;
#line 319 "rygel-volume.c"
}


static void rygel_volume_finalize (RygelVolume* obj) {
	RygelVolume * self;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_VOLUME, RygelVolume);
#line 327 "rygel-volume.c"
}


GType rygel_volume_get_type (void) {
	static volatile gsize rygel_volume_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_volume_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { rygel_value_volume_init, rygel_value_volume_free_value, rygel_value_volume_copy_value, rygel_value_volume_peek_pointer, "p", rygel_value_volume_collect_value, "p", rygel_value_volume_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (RygelVolumeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_volume_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelVolume), 0, (GInstanceInitFunc) rygel_volume_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType rygel_volume_type_id;
		rygel_volume_type_id = g_type_register_fundamental (g_type_fundamental_next (), "RygelVolume", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&rygel_volume_type_id__volatile, rygel_volume_type_id);
	}
	return rygel_volume_type_id__volatile;
}


gpointer rygel_volume_ref (gpointer instance) {
	RygelVolume* self;
	self = instance;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	g_atomic_int_inc (&self->ref_count);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	return instance;
#line 352 "rygel-volume.c"
}


void rygel_volume_unref (gpointer instance) {
	RygelVolume* self;
	self = instance;
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		RYGEL_VOLUME_GET_CLASS (self)->finalize (self);
#line 26 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-renderer/rygel-volume.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 365 "rygel-volume.c"
	}
}



