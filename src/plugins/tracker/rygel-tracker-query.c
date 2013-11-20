/* rygel-tracker-query.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-tracker-query.vala, do not modify */

/*
 * Copyright (C) 2008-2012 Nokia Corporation.
 *
 * Authors: Zeeshan Ali <zeenix@gmail.com>
 *          Ivan Frade <ivan.frade@nokia.com>
 *          Jens Georg <jensg@openismus.com>
 *          Luis de Bethencourt <luisbg@collabora.com>
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
#include <libtracker-sparql/tracker-sparql.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <gobject/gvaluecollector.h>


#define RYGEL_TRACKER_TYPE_QUERY (rygel_tracker_query_get_type ())
#define RYGEL_TRACKER_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQuery))
#define RYGEL_TRACKER_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQueryClass))
#define RYGEL_TRACKER_IS_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY))
#define RYGEL_TRACKER_IS_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY))
#define RYGEL_TRACKER_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQueryClass))

typedef struct _RygelTrackerQuery RygelTrackerQuery;
typedef struct _RygelTrackerQueryClass RygelTrackerQueryClass;
typedef struct _RygelTrackerQueryPrivate RygelTrackerQueryPrivate;

#define RYGEL_TRACKER_TYPE_QUERY_TRIPLETS (rygel_tracker_query_triplets_get_type ())
#define RYGEL_TRACKER_QUERY_TRIPLETS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTriplets))
#define RYGEL_TRACKER_QUERY_TRIPLETS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTripletsClass))
#define RYGEL_TRACKER_IS_QUERY_TRIPLETS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS))
#define RYGEL_TRACKER_IS_QUERY_TRIPLETS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS))
#define RYGEL_TRACKER_QUERY_TRIPLETS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTripletsClass))

typedef struct _RygelTrackerQueryTriplets RygelTrackerQueryTriplets;
typedef struct _RygelTrackerQueryTripletsClass RygelTrackerQueryTripletsClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))
typedef struct _RygelTrackerParamSpecQuery RygelTrackerParamSpecQuery;

struct _RygelTrackerQuery {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelTrackerQueryPrivate * priv;
	RygelTrackerQueryTriplets* triplets;
};

struct _RygelTrackerQueryClass {
	GTypeClass parent_class;
	void (*finalize) (RygelTrackerQuery *self);
	void (*execute) (RygelTrackerQuery* self, TrackerSparqlConnection* resources, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*execute_finish) (RygelTrackerQuery* self, GAsyncResult* _res_, GError** error);
	gchar* (*to_string) (RygelTrackerQuery* self);
};

struct _RygelTrackerParamSpecQuery {
	GParamSpec parent_instance;
};


static gpointer rygel_tracker_query_parent_class = NULL;

gpointer rygel_tracker_query_ref (gpointer instance);
void rygel_tracker_query_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_query (GValue* value, gpointer v_object);
void rygel_tracker_value_take_query (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_query (const GValue* value);
GType rygel_tracker_query_get_type (void) G_GNUC_CONST;
GType rygel_tracker_query_triplets_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_QUERY_DUMMY_PROPERTY
};
RygelTrackerQuery* rygel_tracker_query_construct (GType object_type, RygelTrackerQueryTriplets* triplets);
void rygel_tracker_query_execute (RygelTrackerQuery* self, TrackerSparqlConnection* resources, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_tracker_query_execute_finish (RygelTrackerQuery* self, GAsyncResult* _res_, GError** error);
gchar* rygel_tracker_query_to_string (RygelTrackerQuery* self);
static gchar* rygel_tracker_query_real_to_string (RygelTrackerQuery* self);
gchar* rygel_tracker_query_triplets_serialize (RygelTrackerQueryTriplets* self);
gchar* rygel_tracker_query_escape_regex (const gchar* literal);
gchar* rygel_tracker_query_escape_string (const gchar* literal);
static void rygel_tracker_query_finalize (RygelTrackerQuery* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


RygelTrackerQuery* rygel_tracker_query_construct (GType object_type, RygelTrackerQueryTriplets* triplets) {
	RygelTrackerQuery* self = NULL;
	RygelTrackerQueryTriplets* _tmp0_ = NULL;
	RygelTrackerQueryTriplets* _tmp1_ = NULL;
	g_return_val_if_fail (triplets != NULL, NULL);
	self = (RygelTrackerQuery*) g_type_create_instance (object_type);
	_tmp0_ = triplets;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->triplets);
	self->triplets = _tmp1_;
	return self;
}


void rygel_tracker_query_execute (RygelTrackerQuery* self, TrackerSparqlConnection* resources, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RYGEL_TRACKER_QUERY_GET_CLASS (self)->execute (self, resources, _callback_, _user_data_);
}


void rygel_tracker_query_execute_finish (RygelTrackerQuery* self, GAsyncResult* _res_, GError** error) {
	RYGEL_TRACKER_QUERY_GET_CLASS (self)->execute_finish (self, _res_, error);
}


static gchar* rygel_tracker_query_real_to_string (RygelTrackerQuery* self) {
	gchar* result = NULL;
	RygelTrackerQueryTriplets* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	_tmp0_ = self->triplets;
	_tmp1_ = rygel_tracker_query_triplets_serialize (_tmp0_);
	result = _tmp1_;
	return result;
}


gchar* rygel_tracker_query_to_string (RygelTrackerQuery* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_TRACKER_QUERY_GET_CLASS (self)->to_string (self);
}


/**
     * Convenience function to combine Query.escape_string and
     * Regex.escape_string in one function call
     *
     * @param literal A string to escape
     *
     * @return A newly allocated string with the sparql-escaped regex-escaped
     * version of literal. The returned string should be freed with g_free()
     * when no longer needed.
     */
gchar* rygel_tracker_query_escape_regex (const gchar* literal) {
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	g_return_val_if_fail (literal != NULL, NULL);
	_tmp0_ = literal;
	_tmp1_ = g_regex_escape_string (_tmp0_, -1);
	_tmp2_ = _tmp1_;
	_tmp3_ = rygel_tracker_query_escape_string (_tmp2_);
	_tmp4_ = _tmp3_;
	_g_free0 (_tmp2_);
	result = _tmp4_;
	return result;
}


/**
     * tracker_sparql_escape_string: Escapes a string so that it can be
     * used in a SPARQL query. Copied from Tracker project.
     *
     * @param literal A string to escape
     *
     * @return A newly-allocated string with the escaped version of
     * literal. The returned string should be freed with g_free() when no
     * longer needed.
     */
gchar* rygel_tracker_query_escape_string (const gchar* literal) {
	gchar* result = NULL;
	GString* str = NULL;
	GString* _tmp0_ = NULL;
	gchar* p = NULL;
	const gchar* _tmp1_ = NULL;
	GString* _tmp19_ = NULL;
	const gchar* _tmp20_ = NULL;
	gchar* _tmp21_ = NULL;
	g_return_val_if_fail (literal != NULL, NULL);
	_tmp0_ = g_string_new ("");
	str = _tmp0_;
	_tmp1_ = literal;
	p = _tmp1_;
	while (TRUE) {
		gchar* _tmp2_ = NULL;
		gsize len = 0UL;
		gchar* _tmp3_ = NULL;
		gsize _tmp4_ = 0UL;
		GString* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		gsize _tmp7_ = 0UL;
		gchar* _tmp8_ = NULL;
		gsize _tmp9_ = 0UL;
		gchar* _tmp10_ = NULL;
		gchar* _tmp18_ = NULL;
		_tmp2_ = p;
		if (!((*_tmp2_) != '\0')) {
			break;
		}
		_tmp3_ = p;
		_tmp4_ = strcspn ((const gchar*) _tmp3_, "\t\n\r\b\f\"\\");
		len = _tmp4_;
		_tmp5_ = str;
		_tmp6_ = p;
		_tmp7_ = len;
		g_string_append_len (_tmp5_, (const gchar*) _tmp6_, (gssize) ((glong) _tmp7_));
		_tmp8_ = p;
		_tmp9_ = len;
		p = _tmp8_ + _tmp9_;
		_tmp10_ = p;
		switch (*_tmp10_) {
			case '\t':
			{
				GString* _tmp11_ = NULL;
				_tmp11_ = str;
				g_string_append (_tmp11_, "\\t");
				break;
			}
			case '\n':
			{
				GString* _tmp12_ = NULL;
				_tmp12_ = str;
				g_string_append (_tmp12_, "\\n");
				break;
			}
			case '\r':
			{
				GString* _tmp13_ = NULL;
				_tmp13_ = str;
				g_string_append (_tmp13_, "\\r");
				break;
			}
			case '\b':
			{
				GString* _tmp14_ = NULL;
				_tmp14_ = str;
				g_string_append (_tmp14_, "\\b");
				break;
			}
			case '\f':
			{
				GString* _tmp15_ = NULL;
				_tmp15_ = str;
				g_string_append (_tmp15_, "\\f");
				break;
			}
			case '"':
			{
				GString* _tmp16_ = NULL;
				_tmp16_ = str;
				g_string_append (_tmp16_, "\\\"");
				break;
			}
			case '\\':
			{
				GString* _tmp17_ = NULL;
				_tmp17_ = str;
				g_string_append (_tmp17_, "\\\\");
				break;
			}
			default:
			{
				continue;
			}
		}
		_tmp18_ = p;
		p = _tmp18_ + 1;
	}
	_tmp19_ = str;
	_tmp20_ = _tmp19_->str;
	_tmp21_ = g_strdup (_tmp20_);
	result = _tmp21_;
	_g_string_free0 (str);
	return result;
}


static void rygel_tracker_value_query_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void rygel_tracker_value_query_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		rygel_tracker_query_unref (value->data[0].v_pointer);
	}
}


static void rygel_tracker_value_query_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = rygel_tracker_query_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer rygel_tracker_value_query_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* rygel_tracker_value_query_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		RygelTrackerQuery* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = rygel_tracker_query_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* rygel_tracker_value_query_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelTrackerQuery** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = rygel_tracker_query_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* rygel_tracker_param_spec_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelTrackerParamSpecQuery* spec;
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_TRACKER_TYPE_QUERY), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer rygel_tracker_value_get_query (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TRACKER_TYPE_QUERY), NULL);
	return value->data[0].v_pointer;
}


void rygel_tracker_value_set_query (GValue* value, gpointer v_object) {
	RygelTrackerQuery* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TRACKER_TYPE_QUERY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TRACKER_TYPE_QUERY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		rygel_tracker_query_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		rygel_tracker_query_unref (old);
	}
}


void rygel_tracker_value_take_query (GValue* value, gpointer v_object) {
	RygelTrackerQuery* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TRACKER_TYPE_QUERY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TRACKER_TYPE_QUERY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		rygel_tracker_query_unref (old);
	}
}


static void rygel_tracker_query_class_init (RygelTrackerQueryClass * klass) {
	rygel_tracker_query_parent_class = g_type_class_peek_parent (klass);
	RYGEL_TRACKER_QUERY_CLASS (klass)->finalize = rygel_tracker_query_finalize;
	RYGEL_TRACKER_QUERY_CLASS (klass)->to_string = rygel_tracker_query_real_to_string;
}


static void rygel_tracker_query_instance_init (RygelTrackerQuery * self) {
	self->ref_count = 1;
}


static void rygel_tracker_query_finalize (RygelTrackerQuery* obj) {
	RygelTrackerQuery * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQuery);
	_g_object_unref0 (self->triplets);
}


/**
 * Represents Tracker SPARQL query
 */
GType rygel_tracker_query_get_type (void) {
	static volatile gsize rygel_tracker_query_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_query_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { rygel_tracker_value_query_init, rygel_tracker_value_query_free_value, rygel_tracker_value_query_copy_value, rygel_tracker_value_query_peek_pointer, "p", rygel_tracker_value_query_collect_value, "p", rygel_tracker_value_query_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerQueryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_query_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerQuery), 0, (GInstanceInitFunc) rygel_tracker_query_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType rygel_tracker_query_type_id;
		rygel_tracker_query_type_id = g_type_register_fundamental (g_type_fundamental_next (), "RygelTrackerQuery", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_tracker_query_type_id__volatile, rygel_tracker_query_type_id);
	}
	return rygel_tracker_query_type_id__volatile;
}


gpointer rygel_tracker_query_ref (gpointer instance) {
	RygelTrackerQuery* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void rygel_tracker_query_unref (gpointer instance) {
	RygelTrackerQuery* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		RYGEL_TRACKER_QUERY_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



