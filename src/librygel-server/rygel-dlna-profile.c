/* rygel-dlna-profile.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-dlna-profile.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define RYGEL_TYPE_DLNA_PROFILE (rygel_dlna_profile_get_type ())
#define RYGEL_DLNA_PROFILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DLNA_PROFILE, RygelDLNAProfile))
#define RYGEL_DLNA_PROFILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_DLNA_PROFILE, RygelDLNAProfileClass))
#define RYGEL_IS_DLNA_PROFILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DLNA_PROFILE))
#define RYGEL_IS_DLNA_PROFILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_DLNA_PROFILE))
#define RYGEL_DLNA_PROFILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_DLNA_PROFILE, RygelDLNAProfileClass))

typedef struct _RygelDLNAProfile RygelDLNAProfile;
typedef struct _RygelDLNAProfileClass RygelDLNAProfileClass;
typedef struct _RygelDLNAProfilePrivate RygelDLNAProfilePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _RygelParamSpecDLNAProfile RygelParamSpecDLNAProfile;

struct _RygelDLNAProfile {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelDLNAProfilePrivate * priv;
	gchar* mime;
	gchar* name;
};

struct _RygelDLNAProfileClass {
	GTypeClass parent_class;
	void (*finalize) (RygelDLNAProfile *self);
};

struct _RygelParamSpecDLNAProfile {
	GParamSpec parent_instance;
};


static gpointer rygel_dlna_profile_parent_class = NULL;

gpointer rygel_dlna_profile_ref (gpointer instance);
void rygel_dlna_profile_unref (gpointer instance);
GParamSpec* rygel_param_spec_dlna_profile (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_dlna_profile (GValue* value, gpointer v_object);
void rygel_value_take_dlna_profile (GValue* value, gpointer v_object);
gpointer rygel_value_get_dlna_profile (const GValue* value);
GType rygel_dlna_profile_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_DLNA_PROFILE_DUMMY_PROPERTY
};
RygelDLNAProfile* rygel_dlna_profile_new (const gchar* name, const gchar* mime);
RygelDLNAProfile* rygel_dlna_profile_construct (GType object_type, const gchar* name, const gchar* mime);
gint rygel_dlna_profile_compare_by_name (RygelDLNAProfile* a, RygelDLNAProfile* b);
static void rygel_dlna_profile_finalize (RygelDLNAProfile* obj);


RygelDLNAProfile* rygel_dlna_profile_construct (GType object_type, const gchar* name, const gchar* mime) {
	RygelDLNAProfile* self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	g_return_val_if_fail (name != NULL, NULL);
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	g_return_val_if_fail (mime != NULL, NULL);
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	self = (RygelDLNAProfile*) g_type_create_instance (object_type);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_tmp0_ = mime;
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_g_free0 (self->mime);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	self->mime = _tmp1_;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_tmp2_ = name;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_tmp3_ = g_strdup (_tmp2_);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_g_free0 (self->name);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	self->name = _tmp3_;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	return self;
#line 113 "rygel-dlna-profile.c"
}


RygelDLNAProfile* rygel_dlna_profile_new (const gchar* name, const gchar* mime) {
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	return rygel_dlna_profile_construct (RYGEL_TYPE_DLNA_PROFILE, name, mime);
#line 120 "rygel-dlna-profile.c"
}


/**
     * Compare two DLNA profiles by name
     */
gint rygel_dlna_profile_compare_by_name (RygelDLNAProfile* a, RygelDLNAProfile* b) {
	gint result = 0;
	RygelDLNAProfile* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	RygelDLNAProfile* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gint _tmp4_ = 0;
#line 41 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	g_return_val_if_fail (a != NULL, 0);
#line 41 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	g_return_val_if_fail (b != NULL, 0);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_tmp0_ = a;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_tmp1_ = _tmp0_->name;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_tmp2_ = b;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_tmp3_ = _tmp2_->name;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_tmp4_ = g_ascii_strcasecmp (_tmp1_, _tmp3_);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	result = _tmp4_;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	return result;
#line 152 "rygel-dlna-profile.c"
}


static void rygel_value_dlna_profile_init (GValue* value) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	value->data[0].v_pointer = NULL;
#line 159 "rygel-dlna-profile.c"
}


static void rygel_value_dlna_profile_free_value (GValue* value) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	if (value->data[0].v_pointer) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		rygel_dlna_profile_unref (value->data[0].v_pointer);
#line 168 "rygel-dlna-profile.c"
	}
}


static void rygel_value_dlna_profile_copy_value (const GValue* src_value, GValue* dest_value) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	if (src_value->data[0].v_pointer) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		dest_value->data[0].v_pointer = rygel_dlna_profile_ref (src_value->data[0].v_pointer);
#line 178 "rygel-dlna-profile.c"
	} else {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		dest_value->data[0].v_pointer = NULL;
#line 182 "rygel-dlna-profile.c"
	}
}


static gpointer rygel_value_dlna_profile_peek_pointer (const GValue* value) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	return value->data[0].v_pointer;
#line 190 "rygel-dlna-profile.c"
}


static gchar* rygel_value_dlna_profile_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	if (collect_values[0].v_pointer) {
#line 197 "rygel-dlna-profile.c"
		RygelDLNAProfile* object;
		object = collect_values[0].v_pointer;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		if (object->parent_instance.g_class == NULL) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 204 "rygel-dlna-profile.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 208 "rygel-dlna-profile.c"
		}
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		value->data[0].v_pointer = rygel_dlna_profile_ref (object);
#line 212 "rygel-dlna-profile.c"
	} else {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		value->data[0].v_pointer = NULL;
#line 216 "rygel-dlna-profile.c"
	}
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	return NULL;
#line 220 "rygel-dlna-profile.c"
}


static gchar* rygel_value_dlna_profile_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelDLNAProfile** object_p;
	object_p = collect_values[0].v_pointer;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	if (!object_p) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 231 "rygel-dlna-profile.c"
	}
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	if (!value->data[0].v_pointer) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		*object_p = NULL;
#line 237 "rygel-dlna-profile.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		*object_p = value->data[0].v_pointer;
#line 241 "rygel-dlna-profile.c"
	} else {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		*object_p = rygel_dlna_profile_ref (value->data[0].v_pointer);
#line 245 "rygel-dlna-profile.c"
	}
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	return NULL;
#line 249 "rygel-dlna-profile.c"
}


GParamSpec* rygel_param_spec_dlna_profile (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelParamSpecDLNAProfile* spec;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_TYPE_DLNA_PROFILE), NULL);
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	return G_PARAM_SPEC (spec);
#line 263 "rygel-dlna-profile.c"
}


gpointer rygel_value_get_dlna_profile (const GValue* value) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_DLNA_PROFILE), NULL);
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	return value->data[0].v_pointer;
#line 272 "rygel-dlna-profile.c"
}


void rygel_value_set_dlna_profile (GValue* value, gpointer v_object) {
	RygelDLNAProfile* old;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_DLNA_PROFILE));
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	old = value->data[0].v_pointer;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	if (v_object) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_DLNA_PROFILE));
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		value->data[0].v_pointer = v_object;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		rygel_dlna_profile_ref (value->data[0].v_pointer);
#line 292 "rygel-dlna-profile.c"
	} else {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		value->data[0].v_pointer = NULL;
#line 296 "rygel-dlna-profile.c"
	}
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	if (old) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		rygel_dlna_profile_unref (old);
#line 302 "rygel-dlna-profile.c"
	}
}


void rygel_value_take_dlna_profile (GValue* value, gpointer v_object) {
	RygelDLNAProfile* old;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_DLNA_PROFILE));
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	old = value->data[0].v_pointer;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	if (v_object) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_DLNA_PROFILE));
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		value->data[0].v_pointer = v_object;
#line 321 "rygel-dlna-profile.c"
	} else {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		value->data[0].v_pointer = NULL;
#line 325 "rygel-dlna-profile.c"
	}
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	if (old) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		rygel_dlna_profile_unref (old);
#line 331 "rygel-dlna-profile.c"
	}
}


static void rygel_dlna_profile_class_init (RygelDLNAProfileClass * klass) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	rygel_dlna_profile_parent_class = g_type_class_peek_parent (klass);
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	RYGEL_DLNA_PROFILE_CLASS (klass)->finalize = rygel_dlna_profile_finalize;
#line 341 "rygel-dlna-profile.c"
}


static void rygel_dlna_profile_instance_init (RygelDLNAProfile * self) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	self->ref_count = 1;
#line 348 "rygel-dlna-profile.c"
}


static void rygel_dlna_profile_finalize (RygelDLNAProfile* obj) {
	RygelDLNAProfile * self;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_DLNA_PROFILE, RygelDLNAProfile);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_g_free0 (self->mime);
#line 31 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	_g_free0 (self->name);
#line 360 "rygel-dlna-profile.c"
}


/**
 * Data class representing a DLNA profile.
 * It contains the name and the corresponding DLNA mime type.
 *
 * Note: The mime type can deviate from mime types typically used elsewhere.
 */
GType rygel_dlna_profile_get_type (void) {
	static volatile gsize rygel_dlna_profile_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_dlna_profile_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { rygel_value_dlna_profile_init, rygel_value_dlna_profile_free_value, rygel_value_dlna_profile_copy_value, rygel_value_dlna_profile_peek_pointer, "p", rygel_value_dlna_profile_collect_value, "p", rygel_value_dlna_profile_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (RygelDLNAProfileClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_dlna_profile_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelDLNAProfile), 0, (GInstanceInitFunc) rygel_dlna_profile_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType rygel_dlna_profile_type_id;
		rygel_dlna_profile_type_id = g_type_register_fundamental (g_type_fundamental_next (), "RygelDLNAProfile", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&rygel_dlna_profile_type_id__volatile, rygel_dlna_profile_type_id);
	}
	return rygel_dlna_profile_type_id__volatile;
}


gpointer rygel_dlna_profile_ref (gpointer instance) {
	RygelDLNAProfile* self;
	self = instance;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	g_atomic_int_inc (&self->ref_count);
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	return instance;
#line 391 "rygel-dlna-profile.c"
}


void rygel_dlna_profile_unref (gpointer instance) {
	RygelDLNAProfile* self;
	self = instance;
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		RYGEL_DLNA_PROFILE_GET_CLASS (self)->finalize (self);
#line 29 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-dlna-profile.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 404 "rygel-dlna-profile.c"
	}
}



