/* rygel-tracker-query.c generated by valac 0.16.1, the Vala compiler
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
#line 36 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return self ? g_object_ref (self) : NULL;
#line 112 "rygel-tracker-query.c"
}


RygelTrackerQuery* rygel_tracker_query_construct (GType object_type, RygelTrackerQueryTriplets* triplets) {
	RygelTrackerQuery* self = NULL;
	RygelTrackerQueryTriplets* _tmp0_;
	RygelTrackerQueryTriplets* _tmp1_;
#line 35 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	g_return_val_if_fail (triplets != NULL, NULL);
#line 35 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	self = (RygelTrackerQuery*) g_type_create_instance (object_type);
#line 36 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp0_ = triplets;
#line 36 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 36 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_g_object_unref0 (self->triplets);
#line 36 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	self->triplets = _tmp1_;
#line 35 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return self;
#line 134 "rygel-tracker-query.c"
}


void rygel_tracker_query_execute (RygelTrackerQuery* self, TrackerSparqlConnection* resources, GAsyncReadyCallback _callback_, gpointer _user_data_) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	RYGEL_TRACKER_QUERY_GET_CLASS (self)->execute (self, resources, _callback_, _user_data_);
#line 141 "rygel-tracker-query.c"
}


void rygel_tracker_query_execute_finish (RygelTrackerQuery* self, GAsyncResult* _res_, GError** error) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	RYGEL_TRACKER_QUERY_GET_CLASS (self)->execute_finish (self, _res_, error);
#line 148 "rygel-tracker-query.c"
}


static gchar* rygel_tracker_query_real_to_string (RygelTrackerQuery* self) {
	gchar* result = NULL;
	RygelTrackerQueryTriplets* _tmp0_;
	gchar* _tmp1_ = NULL;
#line 47 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp0_ = self->triplets;
#line 47 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp1_ = rygel_tracker_query_triplets_serialize (_tmp0_);
#line 47 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	result = _tmp1_;
#line 47 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return result;
#line 164 "rygel-tracker-query.c"
}


gchar* rygel_tracker_query_to_string (RygelTrackerQuery* self) {
#line 46 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 46 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return RYGEL_TRACKER_QUERY_GET_CLASS (self)->to_string (self);
#line 173 "rygel-tracker-query.c"
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
	const gchar* _tmp0_;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_;
#line 60 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	g_return_val_if_fail (literal != NULL, NULL);
#line 61 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp0_ = literal;
#line 61 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp1_ = g_regex_escape_string (_tmp0_, -1);
#line 61 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp2_ = _tmp1_;
#line 61 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp3_ = rygel_tracker_query_escape_string (_tmp2_);
#line 61 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp4_ = _tmp3_;
#line 61 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_g_free0 (_tmp2_);
#line 61 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	result = _tmp4_;
#line 61 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return result;
#line 212 "rygel-tracker-query.c"
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
	GString* _tmp0_;
	GString* str;
	const gchar* _tmp1_;
	gchar* p;
	GString* _tmp19_;
	const gchar* _tmp20_;
	gchar* _tmp21_;
#line 74 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	g_return_val_if_fail (literal != NULL, NULL);
#line 75 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp0_ = g_string_new ("");
#line 75 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	str = _tmp0_;
#line 76 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp1_ = literal;
#line 76 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	p = _tmp1_;
#line 78 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	while (TRUE) {
#line 247 "rygel-tracker-query.c"
		gchar* _tmp2_;
		gchar* _tmp3_;
		gsize _tmp4_ = 0UL;
		gsize len;
		GString* _tmp5_;
		gchar* _tmp6_;
		gsize _tmp7_;
		gchar* _tmp8_;
		gsize _tmp9_;
		gchar* _tmp10_;
		gchar* _tmp18_;
#line 78 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		_tmp2_ = p;
#line 78 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		if (!((*_tmp2_) != '\0')) {
#line 78 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
			break;
#line 265 "rygel-tracker-query.c"
		}
#line 79 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		_tmp3_ = p;
#line 79 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		_tmp4_ = strcspn ((const gchar*) _tmp3_, "\t\n\r\b\f\"\\");
#line 79 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		len = _tmp4_;
#line 80 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		_tmp5_ = str;
#line 80 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		_tmp6_ = p;
#line 80 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		_tmp7_ = len;
#line 80 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		g_string_append_len (_tmp5_, (const gchar*) _tmp6_, (gssize) ((glong) _tmp7_));
#line 81 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		_tmp8_ = p;
#line 81 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		_tmp9_ = len;
#line 81 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		p = _tmp8_ + _tmp9_;
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		_tmp10_ = p;
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		switch (*_tmp10_) {
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
			case '\t':
#line 293 "rygel-tracker-query.c"
			{
				GString* _tmp11_;
#line 85 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				_tmp11_ = str;
#line 85 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				g_string_append (_tmp11_, "\\t");
#line 86 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				break;
#line 302 "rygel-tracker-query.c"
			}
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
			case '\n':
#line 306 "rygel-tracker-query.c"
			{
				GString* _tmp12_;
#line 88 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				_tmp12_ = str;
#line 88 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				g_string_append (_tmp12_, "\\n");
#line 89 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				break;
#line 315 "rygel-tracker-query.c"
			}
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
			case '\r':
#line 319 "rygel-tracker-query.c"
			{
				GString* _tmp13_;
#line 91 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				_tmp13_ = str;
#line 91 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				g_string_append (_tmp13_, "\\r");
#line 92 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				break;
#line 328 "rygel-tracker-query.c"
			}
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
			case '\b':
#line 332 "rygel-tracker-query.c"
			{
				GString* _tmp14_;
#line 94 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				_tmp14_ = str;
#line 94 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				g_string_append (_tmp14_, "\\b");
#line 95 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				break;
#line 341 "rygel-tracker-query.c"
			}
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
			case '\f':
#line 345 "rygel-tracker-query.c"
			{
				GString* _tmp15_;
#line 97 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				_tmp15_ = str;
#line 97 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				g_string_append (_tmp15_, "\\f");
#line 98 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				break;
#line 354 "rygel-tracker-query.c"
			}
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
			case '"':
#line 358 "rygel-tracker-query.c"
			{
				GString* _tmp16_;
#line 100 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				_tmp16_ = str;
#line 100 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				g_string_append (_tmp16_, "\\\"");
#line 101 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				break;
#line 367 "rygel-tracker-query.c"
			}
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
			case '\\':
#line 371 "rygel-tracker-query.c"
			{
				GString* _tmp17_;
#line 103 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				_tmp17_ = str;
#line 103 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				g_string_append (_tmp17_, "\\\\");
#line 104 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				break;
#line 380 "rygel-tracker-query.c"
			}
			default:
			{
#line 106 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
				continue;
#line 386 "rygel-tracker-query.c"
			}
		}
#line 109 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		_tmp18_ = p;
#line 109 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		p = _tmp18_ + 1;
#line 393 "rygel-tracker-query.c"
	}
#line 112 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp19_ = str;
#line 112 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp20_ = _tmp19_->str;
#line 112 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_tmp21_ = g_strdup (_tmp20_);
#line 112 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	result = _tmp21_;
#line 112 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_g_string_free0 (str);
#line 112 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return result;
#line 407 "rygel-tracker-query.c"
}


static void rygel_tracker_value_query_init (GValue* value) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	value->data[0].v_pointer = NULL;
#line 414 "rygel-tracker-query.c"
}


static void rygel_tracker_value_query_free_value (GValue* value) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	if (value->data[0].v_pointer) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		rygel_tracker_query_unref (value->data[0].v_pointer);
#line 423 "rygel-tracker-query.c"
	}
}


static void rygel_tracker_value_query_copy_value (const GValue* src_value, GValue* dest_value) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	if (src_value->data[0].v_pointer) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		dest_value->data[0].v_pointer = rygel_tracker_query_ref (src_value->data[0].v_pointer);
#line 433 "rygel-tracker-query.c"
	} else {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		dest_value->data[0].v_pointer = NULL;
#line 437 "rygel-tracker-query.c"
	}
}


static gpointer rygel_tracker_value_query_peek_pointer (const GValue* value) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return value->data[0].v_pointer;
#line 445 "rygel-tracker-query.c"
}


static gchar* rygel_tracker_value_query_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	if (collect_values[0].v_pointer) {
#line 452 "rygel-tracker-query.c"
		RygelTrackerQuery* object;
		object = collect_values[0].v_pointer;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		if (object->parent_instance.g_class == NULL) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 459 "rygel-tracker-query.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 463 "rygel-tracker-query.c"
		}
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		value->data[0].v_pointer = rygel_tracker_query_ref (object);
#line 467 "rygel-tracker-query.c"
	} else {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		value->data[0].v_pointer = NULL;
#line 471 "rygel-tracker-query.c"
	}
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return NULL;
#line 475 "rygel-tracker-query.c"
}


static gchar* rygel_tracker_value_query_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelTrackerQuery** object_p;
	object_p = collect_values[0].v_pointer;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	if (!object_p) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 486 "rygel-tracker-query.c"
	}
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	if (!value->data[0].v_pointer) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		*object_p = NULL;
#line 492 "rygel-tracker-query.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		*object_p = value->data[0].v_pointer;
#line 496 "rygel-tracker-query.c"
	} else {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		*object_p = rygel_tracker_query_ref (value->data[0].v_pointer);
#line 500 "rygel-tracker-query.c"
	}
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return NULL;
#line 504 "rygel-tracker-query.c"
}


GParamSpec* rygel_tracker_param_spec_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelTrackerParamSpecQuery* spec;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_TRACKER_TYPE_QUERY), NULL);
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return G_PARAM_SPEC (spec);
#line 518 "rygel-tracker-query.c"
}


gpointer rygel_tracker_value_get_query (const GValue* value) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TRACKER_TYPE_QUERY), NULL);
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return value->data[0].v_pointer;
#line 527 "rygel-tracker-query.c"
}


void rygel_tracker_value_set_query (GValue* value, gpointer v_object) {
	RygelTrackerQuery* old;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TRACKER_TYPE_QUERY));
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	old = value->data[0].v_pointer;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	if (v_object) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TRACKER_TYPE_QUERY));
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		value->data[0].v_pointer = v_object;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		rygel_tracker_query_ref (value->data[0].v_pointer);
#line 547 "rygel-tracker-query.c"
	} else {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		value->data[0].v_pointer = NULL;
#line 551 "rygel-tracker-query.c"
	}
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	if (old) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		rygel_tracker_query_unref (old);
#line 557 "rygel-tracker-query.c"
	}
}


void rygel_tracker_value_take_query (GValue* value, gpointer v_object) {
	RygelTrackerQuery* old;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TRACKER_TYPE_QUERY));
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	old = value->data[0].v_pointer;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	if (v_object) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TRACKER_TYPE_QUERY));
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		value->data[0].v_pointer = v_object;
#line 576 "rygel-tracker-query.c"
	} else {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		value->data[0].v_pointer = NULL;
#line 580 "rygel-tracker-query.c"
	}
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	if (old) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		rygel_tracker_query_unref (old);
#line 586 "rygel-tracker-query.c"
	}
}


static void rygel_tracker_query_class_init (RygelTrackerQueryClass * klass) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	rygel_tracker_query_parent_class = g_type_class_peek_parent (klass);
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	RYGEL_TRACKER_QUERY_CLASS (klass)->finalize = rygel_tracker_query_finalize;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	RYGEL_TRACKER_QUERY_CLASS (klass)->to_string = rygel_tracker_query_real_to_string;
#line 598 "rygel-tracker-query.c"
}


static void rygel_tracker_query_instance_init (RygelTrackerQuery * self) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	self->ref_count = 1;
#line 605 "rygel-tracker-query.c"
}


static void rygel_tracker_query_finalize (RygelTrackerQuery* obj) {
	RygelTrackerQuery * self;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	self = RYGEL_TRACKER_QUERY (obj);
#line 33 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	_g_object_unref0 (self->triplets);
#line 615 "rygel-tracker-query.c"
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
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	g_atomic_int_inc (&self->ref_count);
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	return instance;
#line 643 "rygel-tracker-query.c"
}


void rygel_tracker_query_unref (gpointer instance) {
	RygelTrackerQuery* self;
	self = instance;
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		RYGEL_TRACKER_QUERY_GET_CLASS (self)->finalize (self);
#line 32 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-query.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 656 "rygel-tracker-query.c"
	}
}



