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


#define RYGEL_RENDERER_TYPE_DLNA_PROFILE (rygel_renderer_dlna_profile_get_type ())
#define RYGEL_RENDERER_DLNA_PROFILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_RENDERER_TYPE_DLNA_PROFILE, RygelRendererDLNAProfile))
#define RYGEL_RENDERER_DLNA_PROFILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_RENDERER_TYPE_DLNA_PROFILE, RygelRendererDLNAProfileClass))
#define RYGEL_RENDERER_IS_DLNA_PROFILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_RENDERER_TYPE_DLNA_PROFILE))
#define RYGEL_RENDERER_IS_DLNA_PROFILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_RENDERER_TYPE_DLNA_PROFILE))
#define RYGEL_RENDERER_DLNA_PROFILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_RENDERER_TYPE_DLNA_PROFILE, RygelRendererDLNAProfileClass))

typedef struct _RygelRendererDLNAProfile RygelRendererDLNAProfile;
typedef struct _RygelRendererDLNAProfileClass RygelRendererDLNAProfileClass;
typedef struct _RygelRendererDLNAProfilePrivate RygelRendererDLNAProfilePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _RygelRendererParamSpecDLNAProfile RygelRendererParamSpecDLNAProfile;

struct _RygelRendererDLNAProfile {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelRendererDLNAProfilePrivate * priv;
	gchar* mime;
	gchar* name;
};

struct _RygelRendererDLNAProfileClass {
	GTypeClass parent_class;
	void (*finalize) (RygelRendererDLNAProfile *self);
};

struct _RygelRendererParamSpecDLNAProfile {
	GParamSpec parent_instance;
};


static gpointer rygel_renderer_dlna_profile_parent_class = NULL;

gpointer rygel_renderer_dlna_profile_ref (gpointer instance);
void rygel_renderer_dlna_profile_unref (gpointer instance);
GParamSpec* rygel_renderer_param_spec_dlna_profile (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_renderer_value_set_dlna_profile (GValue* value, gpointer v_object);
void rygel_renderer_value_take_dlna_profile (GValue* value, gpointer v_object);
gpointer rygel_renderer_value_get_dlna_profile (const GValue* value);
GType rygel_renderer_dlna_profile_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_RENDERER_DLNA_PROFILE_DUMMY_PROPERTY
};
RygelRendererDLNAProfile* rygel_renderer_dlna_profile_new (const gchar* name, const gchar* mime);
RygelRendererDLNAProfile* rygel_renderer_dlna_profile_construct (GType object_type, const gchar* name, const gchar* mime);
gint rygel_renderer_dlna_profile_compare_by_name (RygelRendererDLNAProfile* a, RygelRendererDLNAProfile* b);
static void rygel_renderer_dlna_profile_finalize (RygelRendererDLNAProfile* obj);


RygelRendererDLNAProfile* rygel_renderer_dlna_profile_construct (GType object_type, const gchar* name, const gchar* mime) {
	RygelRendererDLNAProfile* self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (mime != NULL, NULL);
	self = (RygelRendererDLNAProfile*) g_type_create_instance (object_type);
	_tmp0_ = mime;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->mime);
	self->mime = _tmp1_;
	_tmp2_ = name;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 (self->name);
	self->name = _tmp3_;
	return self;
}


RygelRendererDLNAProfile* rygel_renderer_dlna_profile_new (const gchar* name, const gchar* mime) {
	return rygel_renderer_dlna_profile_construct (RYGEL_RENDERER_TYPE_DLNA_PROFILE, name, mime);
}


/**
     * Compare two DLNA profiles by name
     */
gint rygel_renderer_dlna_profile_compare_by_name (RygelRendererDLNAProfile* a, RygelRendererDLNAProfile* b) {
	gint result = 0;
	RygelRendererDLNAProfile* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	RygelRendererDLNAProfile* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gint _tmp4_ = 0;
	g_return_val_if_fail (a != NULL, 0);
	g_return_val_if_fail (b != NULL, 0);
	_tmp0_ = a;
	_tmp1_ = _tmp0_->name;
	_tmp2_ = b;
	_tmp3_ = _tmp2_->name;
	_tmp4_ = g_ascii_strcasecmp (_tmp1_, _tmp3_);
	result = _tmp4_;
	return result;
}


static void rygel_renderer_value_dlna_profile_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void rygel_renderer_value_dlna_profile_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		rygel_renderer_dlna_profile_unref (value->data[0].v_pointer);
	}
}


static void rygel_renderer_value_dlna_profile_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = rygel_renderer_dlna_profile_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer rygel_renderer_value_dlna_profile_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* rygel_renderer_value_dlna_profile_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		RygelRendererDLNAProfile* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = rygel_renderer_dlna_profile_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* rygel_renderer_value_dlna_profile_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelRendererDLNAProfile** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = rygel_renderer_dlna_profile_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* rygel_renderer_param_spec_dlna_profile (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelRendererParamSpecDLNAProfile* spec;
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_RENDERER_TYPE_DLNA_PROFILE), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer rygel_renderer_value_get_dlna_profile (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_RENDERER_TYPE_DLNA_PROFILE), NULL);
	return value->data[0].v_pointer;
}


void rygel_renderer_value_set_dlna_profile (GValue* value, gpointer v_object) {
	RygelRendererDLNAProfile* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_RENDERER_TYPE_DLNA_PROFILE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_RENDERER_TYPE_DLNA_PROFILE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		rygel_renderer_dlna_profile_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		rygel_renderer_dlna_profile_unref (old);
	}
}


void rygel_renderer_value_take_dlna_profile (GValue* value, gpointer v_object) {
	RygelRendererDLNAProfile* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_RENDERER_TYPE_DLNA_PROFILE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_RENDERER_TYPE_DLNA_PROFILE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		rygel_renderer_dlna_profile_unref (old);
	}
}


static void rygel_renderer_dlna_profile_class_init (RygelRendererDLNAProfileClass * klass) {
	rygel_renderer_dlna_profile_parent_class = g_type_class_peek_parent (klass);
	RYGEL_RENDERER_DLNA_PROFILE_CLASS (klass)->finalize = rygel_renderer_dlna_profile_finalize;
}


static void rygel_renderer_dlna_profile_instance_init (RygelRendererDLNAProfile * self) {
	self->ref_count = 1;
}


static void rygel_renderer_dlna_profile_finalize (RygelRendererDLNAProfile* obj) {
	RygelRendererDLNAProfile * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_RENDERER_TYPE_DLNA_PROFILE, RygelRendererDLNAProfile);
	_g_free0 (self->mime);
	_g_free0 (self->name);
}


/**
 * Data class representing a DLNA profile.
 * It contains the name and the corresponding DLNA mime type.
 *
 * Note: The mime type can deviate from mime types typically used elsewhere.
 */
GType rygel_renderer_dlna_profile_get_type (void) {
	static volatile gsize rygel_renderer_dlna_profile_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_renderer_dlna_profile_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { rygel_renderer_value_dlna_profile_init, rygel_renderer_value_dlna_profile_free_value, rygel_renderer_value_dlna_profile_copy_value, rygel_renderer_value_dlna_profile_peek_pointer, "p", rygel_renderer_value_dlna_profile_collect_value, "p", rygel_renderer_value_dlna_profile_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (RygelRendererDLNAProfileClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_renderer_dlna_profile_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelRendererDLNAProfile), 0, (GInstanceInitFunc) rygel_renderer_dlna_profile_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType rygel_renderer_dlna_profile_type_id;
		rygel_renderer_dlna_profile_type_id = g_type_register_fundamental (g_type_fundamental_next (), "RygelRendererDLNAProfile", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&rygel_renderer_dlna_profile_type_id__volatile, rygel_renderer_dlna_profile_type_id);
	}
	return rygel_renderer_dlna_profile_type_id__volatile;
}


gpointer rygel_renderer_dlna_profile_ref (gpointer instance) {
	RygelRendererDLNAProfile* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void rygel_renderer_dlna_profile_unref (gpointer instance) {
	RygelRendererDLNAProfile* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		RYGEL_RENDERER_DLNA_PROFILE_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



