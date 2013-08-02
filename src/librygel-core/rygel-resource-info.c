/* rygel-resource-info.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-resource-info.vala, do not modify */

/*
 * Copyright (C) 2008 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
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


#define RYGEL_TYPE_RESOURCE_INFO (rygel_resource_info_get_type ())
#define RYGEL_RESOURCE_INFO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_RESOURCE_INFO, RygelResourceInfo))
#define RYGEL_RESOURCE_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_RESOURCE_INFO, RygelResourceInfoClass))
#define RYGEL_IS_RESOURCE_INFO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_RESOURCE_INFO))
#define RYGEL_IS_RESOURCE_INFO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_RESOURCE_INFO))
#define RYGEL_RESOURCE_INFO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_RESOURCE_INFO, RygelResourceInfoClass))

typedef struct _RygelResourceInfo RygelResourceInfo;
typedef struct _RygelResourceInfoClass RygelResourceInfoClass;
typedef struct _RygelResourceInfoPrivate RygelResourceInfoPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _RygelParamSpecResourceInfo RygelParamSpecResourceInfo;

struct _RygelResourceInfo {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelResourceInfoPrivate * priv;
	gchar* upnp_type;
	gchar* upnp_id;
	gchar* description_path;
	GType type;
};

struct _RygelResourceInfoClass {
	GTypeClass parent_class;
	void (*finalize) (RygelResourceInfo *self);
};

struct _RygelParamSpecResourceInfo {
	GParamSpec parent_instance;
};


static gpointer rygel_resource_info_parent_class = NULL;

gpointer rygel_resource_info_ref (gpointer instance);
void rygel_resource_info_unref (gpointer instance);
GParamSpec* rygel_param_spec_resource_info (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_resource_info (GValue* value, gpointer v_object);
void rygel_value_take_resource_info (GValue* value, gpointer v_object);
gpointer rygel_value_get_resource_info (const GValue* value);
GType rygel_resource_info_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_RESOURCE_INFO_DUMMY_PROPERTY
};
RygelResourceInfo* rygel_resource_info_new (const gchar* upnp_id, const gchar* upnp_type, const gchar* description_path, GType type);
RygelResourceInfo* rygel_resource_info_construct (GType object_type, const gchar* upnp_id, const gchar* upnp_type, const gchar* description_path, GType type);
static void rygel_resource_info_finalize (RygelResourceInfo* obj);


RygelResourceInfo* rygel_resource_info_construct (GType object_type, const gchar* upnp_id, const gchar* upnp_type, const gchar* description_path, GType type) {
	RygelResourceInfo* self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	GType _tmp6_ = 0UL;
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	g_return_val_if_fail (upnp_id != NULL, NULL);
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	g_return_val_if_fail (upnp_type != NULL, NULL);
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	g_return_val_if_fail (description_path != NULL, NULL);
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	self = (RygelResourceInfo*) g_type_create_instance (object_type);
#line 43 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_tmp0_ = upnp_type;
#line 43 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 43 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_g_free0 (self->upnp_type);
#line 43 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	self->upnp_type = _tmp1_;
#line 44 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_tmp2_ = upnp_id;
#line 44 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_tmp3_ = g_strdup (_tmp2_);
#line 44 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_g_free0 (self->upnp_id);
#line 44 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	self->upnp_id = _tmp3_;
#line 45 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_tmp4_ = description_path;
#line 45 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_tmp5_ = g_strdup (_tmp4_);
#line 45 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_g_free0 (self->description_path);
#line 45 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	self->description_path = _tmp5_;
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_tmp6_ = type;
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	self->type = _tmp6_;
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	return self;
#line 132 "rygel-resource-info.c"
}


RygelResourceInfo* rygel_resource_info_new (const gchar* upnp_id, const gchar* upnp_type, const gchar* description_path, GType type) {
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	return rygel_resource_info_construct (RYGEL_TYPE_RESOURCE_INFO, upnp_id, upnp_type, description_path, type);
#line 139 "rygel-resource-info.c"
}


static void rygel_value_resource_info_init (GValue* value) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	value->data[0].v_pointer = NULL;
#line 146 "rygel-resource-info.c"
}


static void rygel_value_resource_info_free_value (GValue* value) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	if (value->data[0].v_pointer) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		rygel_resource_info_unref (value->data[0].v_pointer);
#line 155 "rygel-resource-info.c"
	}
}


static void rygel_value_resource_info_copy_value (const GValue* src_value, GValue* dest_value) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	if (src_value->data[0].v_pointer) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		dest_value->data[0].v_pointer = rygel_resource_info_ref (src_value->data[0].v_pointer);
#line 165 "rygel-resource-info.c"
	} else {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		dest_value->data[0].v_pointer = NULL;
#line 169 "rygel-resource-info.c"
	}
}


static gpointer rygel_value_resource_info_peek_pointer (const GValue* value) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	return value->data[0].v_pointer;
#line 177 "rygel-resource-info.c"
}


static gchar* rygel_value_resource_info_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	if (collect_values[0].v_pointer) {
#line 184 "rygel-resource-info.c"
		RygelResourceInfo* object;
		object = collect_values[0].v_pointer;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		if (object->parent_instance.g_class == NULL) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 191 "rygel-resource-info.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 195 "rygel-resource-info.c"
		}
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		value->data[0].v_pointer = rygel_resource_info_ref (object);
#line 199 "rygel-resource-info.c"
	} else {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		value->data[0].v_pointer = NULL;
#line 203 "rygel-resource-info.c"
	}
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	return NULL;
#line 207 "rygel-resource-info.c"
}


static gchar* rygel_value_resource_info_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelResourceInfo** object_p;
	object_p = collect_values[0].v_pointer;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	if (!object_p) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 218 "rygel-resource-info.c"
	}
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	if (!value->data[0].v_pointer) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		*object_p = NULL;
#line 224 "rygel-resource-info.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		*object_p = value->data[0].v_pointer;
#line 228 "rygel-resource-info.c"
	} else {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		*object_p = rygel_resource_info_ref (value->data[0].v_pointer);
#line 232 "rygel-resource-info.c"
	}
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	return NULL;
#line 236 "rygel-resource-info.c"
}


GParamSpec* rygel_param_spec_resource_info (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelParamSpecResourceInfo* spec;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_TYPE_RESOURCE_INFO), NULL);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	return G_PARAM_SPEC (spec);
#line 250 "rygel-resource-info.c"
}


gpointer rygel_value_get_resource_info (const GValue* value) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_RESOURCE_INFO), NULL);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	return value->data[0].v_pointer;
#line 259 "rygel-resource-info.c"
}


void rygel_value_set_resource_info (GValue* value, gpointer v_object) {
	RygelResourceInfo* old;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_RESOURCE_INFO));
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	old = value->data[0].v_pointer;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	if (v_object) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_RESOURCE_INFO));
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		value->data[0].v_pointer = v_object;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		rygel_resource_info_ref (value->data[0].v_pointer);
#line 279 "rygel-resource-info.c"
	} else {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		value->data[0].v_pointer = NULL;
#line 283 "rygel-resource-info.c"
	}
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	if (old) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		rygel_resource_info_unref (old);
#line 289 "rygel-resource-info.c"
	}
}


void rygel_value_take_resource_info (GValue* value, gpointer v_object) {
	RygelResourceInfo* old;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_RESOURCE_INFO));
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	old = value->data[0].v_pointer;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	if (v_object) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_RESOURCE_INFO));
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		value->data[0].v_pointer = v_object;
#line 308 "rygel-resource-info.c"
	} else {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		value->data[0].v_pointer = NULL;
#line 312 "rygel-resource-info.c"
	}
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	if (old) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		rygel_resource_info_unref (old);
#line 318 "rygel-resource-info.c"
	}
}


static void rygel_resource_info_class_init (RygelResourceInfoClass * klass) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	rygel_resource_info_parent_class = g_type_class_peek_parent (klass);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	RYGEL_RESOURCE_INFO_CLASS (klass)->finalize = rygel_resource_info_finalize;
#line 328 "rygel-resource-info.c"
}


static void rygel_resource_info_instance_init (RygelResourceInfo * self) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	self->ref_count = 1;
#line 335 "rygel-resource-info.c"
}


static void rygel_resource_info_finalize (RygelResourceInfo* obj) {
	RygelResourceInfo * self;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_RESOURCE_INFO, RygelResourceInfo);
#line 32 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_g_free0 (self->upnp_type);
#line 33 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_g_free0 (self->upnp_id);
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	_g_free0 (self->description_path);
#line 349 "rygel-resource-info.c"
}


/**
 * Holds information about a particular resource (device and service)
 * implementation.
 */
GType rygel_resource_info_get_type (void) {
	static volatile gsize rygel_resource_info_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_resource_info_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { rygel_value_resource_info_init, rygel_value_resource_info_free_value, rygel_value_resource_info_copy_value, rygel_value_resource_info_peek_pointer, "p", rygel_value_resource_info_collect_value, "p", rygel_value_resource_info_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (RygelResourceInfoClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_resource_info_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelResourceInfo), 0, (GInstanceInitFunc) rygel_resource_info_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType rygel_resource_info_type_id;
		rygel_resource_info_type_id = g_type_register_fundamental (g_type_fundamental_next (), "RygelResourceInfo", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&rygel_resource_info_type_id__volatile, rygel_resource_info_type_id);
	}
	return rygel_resource_info_type_id__volatile;
}


gpointer rygel_resource_info_ref (gpointer instance) {
	RygelResourceInfo* self;
	self = instance;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	g_atomic_int_inc (&self->ref_count);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	return instance;
#line 378 "rygel-resource-info.c"
}


void rygel_resource_info_unref (gpointer instance) {
	RygelResourceInfo* self;
	self = instance;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		RYGEL_RESOURCE_INFO_GET_CLASS (self)->finalize (self);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-resource-info.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 391 "rygel-resource-info.c"
	}
}



