/* rygel-environment-test.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-environment-test.vala, do not modify */

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
#include <gst/gst.h>
#include <gobject/gvaluecollector.h>


#define TYPE_ENVIRONMENT_TEST (environment_test_get_type ())
#define ENVIRONMENT_TEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_ENVIRONMENT_TEST, EnvironmentTest))
#define ENVIRONMENT_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_ENVIRONMENT_TEST, EnvironmentTestClass))
#define IS_ENVIRONMENT_TEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_ENVIRONMENT_TEST))
#define IS_ENVIRONMENT_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_ENVIRONMENT_TEST))
#define ENVIRONMENT_TEST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_ENVIRONMENT_TEST, EnvironmentTestClass))

typedef struct _EnvironmentTest EnvironmentTest;
typedef struct _EnvironmentTestClass EnvironmentTestClass;
typedef struct _EnvironmentTestPrivate EnvironmentTestPrivate;
typedef struct _ParamSpecEnvironmentTest ParamSpecEnvironmentTest;

struct _EnvironmentTest {
	GTypeInstance parent_instance;
	volatile int ref_count;
	EnvironmentTestPrivate * priv;
};

struct _EnvironmentTestClass {
	GTypeClass parent_class;
	void (*finalize) (EnvironmentTest *self);
};

struct _ParamSpecEnvironmentTest {
	GParamSpec parent_instance;
};


static gpointer environment_test_parent_class = NULL;

gpointer environment_test_ref (gpointer instance);
void environment_test_unref (gpointer instance);
GParamSpec* param_spec_environment_test (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_environment_test (GValue* value, gpointer v_object);
void value_take_environment_test (GValue* value, gpointer v_object);
gpointer value_get_environment_test (const GValue* value);
GType environment_test_get_type (void) G_GNUC_CONST;
enum  {
	ENVIRONMENT_TEST_DUMMY_PROPERTY
};
gint environment_test_main (gchar** args, int args_length1);
EnvironmentTest* environment_test_new (void);
EnvironmentTest* environment_test_construct (GType object_type);
static void environment_test_finalize (EnvironmentTest* obj);


gint environment_test_main (gchar** args, int args_length1) {
	gint result = 0;
#line 27 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	g_assert ((G_TIME_SPAN_SECOND * GST_USECOND) == ((GTimeSpan) GST_SECOND));
#line 29 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	result = 0;
#line 29 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	return result;
#line 89 "rygel-environment-test.c"
}


int main (int argc, char ** argv) {
#line 24 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	g_type_init ();
#line 24 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	return environment_test_main (argv, argc);
#line 98 "rygel-environment-test.c"
}


EnvironmentTest* environment_test_construct (GType object_type) {
	EnvironmentTest* self = NULL;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	self = (EnvironmentTest*) g_type_create_instance (object_type);
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	return self;
#line 108 "rygel-environment-test.c"
}


EnvironmentTest* environment_test_new (void) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	return environment_test_construct (TYPE_ENVIRONMENT_TEST);
#line 115 "rygel-environment-test.c"
}


static void value_environment_test_init (GValue* value) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	value->data[0].v_pointer = NULL;
#line 122 "rygel-environment-test.c"
}


static void value_environment_test_free_value (GValue* value) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	if (value->data[0].v_pointer) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		environment_test_unref (value->data[0].v_pointer);
#line 131 "rygel-environment-test.c"
	}
}


static void value_environment_test_copy_value (const GValue* src_value, GValue* dest_value) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	if (src_value->data[0].v_pointer) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		dest_value->data[0].v_pointer = environment_test_ref (src_value->data[0].v_pointer);
#line 141 "rygel-environment-test.c"
	} else {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		dest_value->data[0].v_pointer = NULL;
#line 145 "rygel-environment-test.c"
	}
}


static gpointer value_environment_test_peek_pointer (const GValue* value) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	return value->data[0].v_pointer;
#line 153 "rygel-environment-test.c"
}


static gchar* value_environment_test_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	if (collect_values[0].v_pointer) {
#line 160 "rygel-environment-test.c"
		EnvironmentTest* object;
		object = collect_values[0].v_pointer;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		if (object->parent_instance.g_class == NULL) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 167 "rygel-environment-test.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 171 "rygel-environment-test.c"
		}
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		value->data[0].v_pointer = environment_test_ref (object);
#line 175 "rygel-environment-test.c"
	} else {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		value->data[0].v_pointer = NULL;
#line 179 "rygel-environment-test.c"
	}
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	return NULL;
#line 183 "rygel-environment-test.c"
}


static gchar* value_environment_test_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	EnvironmentTest** object_p;
	object_p = collect_values[0].v_pointer;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	if (!object_p) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 194 "rygel-environment-test.c"
	}
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	if (!value->data[0].v_pointer) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		*object_p = NULL;
#line 200 "rygel-environment-test.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		*object_p = value->data[0].v_pointer;
#line 204 "rygel-environment-test.c"
	} else {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		*object_p = environment_test_ref (value->data[0].v_pointer);
#line 208 "rygel-environment-test.c"
	}
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	return NULL;
#line 212 "rygel-environment-test.c"
}


GParamSpec* param_spec_environment_test (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecEnvironmentTest* spec;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_ENVIRONMENT_TEST), NULL);
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	return G_PARAM_SPEC (spec);
#line 226 "rygel-environment-test.c"
}


gpointer value_get_environment_test (const GValue* value) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_ENVIRONMENT_TEST), NULL);
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	return value->data[0].v_pointer;
#line 235 "rygel-environment-test.c"
}


void value_set_environment_test (GValue* value, gpointer v_object) {
	EnvironmentTest* old;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_ENVIRONMENT_TEST));
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	old = value->data[0].v_pointer;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	if (v_object) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_ENVIRONMENT_TEST));
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		value->data[0].v_pointer = v_object;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		environment_test_ref (value->data[0].v_pointer);
#line 255 "rygel-environment-test.c"
	} else {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		value->data[0].v_pointer = NULL;
#line 259 "rygel-environment-test.c"
	}
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	if (old) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		environment_test_unref (old);
#line 265 "rygel-environment-test.c"
	}
}


void value_take_environment_test (GValue* value, gpointer v_object) {
	EnvironmentTest* old;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_ENVIRONMENT_TEST));
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	old = value->data[0].v_pointer;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	if (v_object) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_ENVIRONMENT_TEST));
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		value->data[0].v_pointer = v_object;
#line 284 "rygel-environment-test.c"
	} else {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		value->data[0].v_pointer = NULL;
#line 288 "rygel-environment-test.c"
	}
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	if (old) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		environment_test_unref (old);
#line 294 "rygel-environment-test.c"
	}
}


static void environment_test_class_init (EnvironmentTestClass * klass) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	environment_test_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	ENVIRONMENT_TEST_CLASS (klass)->finalize = environment_test_finalize;
#line 304 "rygel-environment-test.c"
}


static void environment_test_instance_init (EnvironmentTest * self) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	self->ref_count = 1;
#line 311 "rygel-environment-test.c"
}


static void environment_test_finalize (EnvironmentTest* obj) {
	EnvironmentTest * self;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	self = ENVIRONMENT_TEST (obj);
#line 319 "rygel-environment-test.c"
}


GType environment_test_get_type (void) {
	static volatile gsize environment_test_type_id__volatile = 0;
	if (g_once_init_enter (&environment_test_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_environment_test_init, value_environment_test_free_value, value_environment_test_copy_value, value_environment_test_peek_pointer, "p", value_environment_test_collect_value, "p", value_environment_test_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (EnvironmentTestClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) environment_test_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (EnvironmentTest), 0, (GInstanceInitFunc) environment_test_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType environment_test_type_id;
		environment_test_type_id = g_type_register_fundamental (g_type_fundamental_next (), "EnvironmentTest", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&environment_test_type_id__volatile, environment_test_type_id);
	}
	return environment_test_type_id__volatile;
}


gpointer environment_test_ref (gpointer instance) {
	EnvironmentTest* self;
	self = instance;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	g_atomic_int_inc (&self->ref_count);
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	return instance;
#line 344 "rygel-environment-test.c"
}


void environment_test_unref (gpointer instance) {
	EnvironmentTest* self;
	self = instance;
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		ENVIRONMENT_TEST_GET_CLASS (self)->finalize (self);
#line 23 "/home/mryan/src/rygel/tests/rygel-environment-test.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 357 "rygel-environment-test.c"
	}
}



