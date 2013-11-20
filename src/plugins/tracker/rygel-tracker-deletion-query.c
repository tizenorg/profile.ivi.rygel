/* rygel-tracker-deletion-query.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-tracker-deletion-query.vala, do not modify */

/*
 * Copyright (C) 2010-2012 Nokia Corporation.
 *
 * Author: Zeeshan Ali <zeenix@gmail.com>
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
#include <gio/gio.h>
#include <libtracker-sparql/tracker-sparql.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


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

#define RYGEL_TRACKER_TYPE_DELETION_QUERY (rygel_tracker_deletion_query_get_type ())
#define RYGEL_TRACKER_DELETION_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_DELETION_QUERY, RygelTrackerDeletionQuery))
#define RYGEL_TRACKER_DELETION_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_DELETION_QUERY, RygelTrackerDeletionQueryClass))
#define RYGEL_TRACKER_IS_DELETION_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_DELETION_QUERY))
#define RYGEL_TRACKER_IS_DELETION_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_DELETION_QUERY))
#define RYGEL_TRACKER_DELETION_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_DELETION_QUERY, RygelTrackerDeletionQueryClass))

typedef struct _RygelTrackerDeletionQuery RygelTrackerDeletionQuery;
typedef struct _RygelTrackerDeletionQueryClass RygelTrackerDeletionQueryClass;
typedef struct _RygelTrackerDeletionQueryPrivate RygelTrackerDeletionQueryPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

#define RYGEL_TRACKER_TYPE_QUERY_TRIPLET (rygel_tracker_query_triplet_get_type ())
#define RYGEL_TRACKER_QUERY_TRIPLET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLET, RygelTrackerQueryTriplet))
#define RYGEL_TRACKER_QUERY_TRIPLET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLET, RygelTrackerQueryTripletClass))
#define RYGEL_TRACKER_IS_QUERY_TRIPLET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLET))
#define RYGEL_TRACKER_IS_QUERY_TRIPLET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLET))
#define RYGEL_TRACKER_QUERY_TRIPLET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLET, RygelTrackerQueryTripletClass))

typedef struct _RygelTrackerQueryTriplet RygelTrackerQueryTriplet;
typedef struct _RygelTrackerQueryTripletClass RygelTrackerQueryTripletClass;
#define _rygel_tracker_query_triplet_unref0(var) ((var == NULL) ? NULL : (var = (rygel_tracker_query_triplet_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _rygel_tracker_query_unref0(var) ((var == NULL) ? NULL : (var = (rygel_tracker_query_unref (var), NULL)))
typedef struct _RygelTrackerDeletionQueryExecuteData RygelTrackerDeletionQueryExecuteData;

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

struct _RygelTrackerDeletionQuery {
	RygelTrackerQuery parent_instance;
	RygelTrackerDeletionQueryPrivate * priv;
};

struct _RygelTrackerDeletionQueryClass {
	RygelTrackerQueryClass parent_class;
};

struct _RygelTrackerDeletionQueryPrivate {
	gchar* id;
};

struct _RygelTrackerDeletionQueryExecuteData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelTrackerDeletionQuery* self;
	TrackerSparqlConnection* resources;
	gchar* str;
	gchar* _tmp0_;
	TrackerSparqlConnection* _tmp1_;
	const gchar* _tmp2_;
	GError * _inner_error_;
};


static gpointer rygel_tracker_deletion_query_parent_class = NULL;

gpointer rygel_tracker_query_ref (gpointer instance);
void rygel_tracker_query_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_query (GValue* value, gpointer v_object);
void rygel_tracker_value_take_query (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_query (const GValue* value);
GType rygel_tracker_query_get_type (void) G_GNUC_CONST;
GType rygel_tracker_query_triplets_get_type (void) G_GNUC_CONST;
GType rygel_tracker_deletion_query_get_type (void) G_GNUC_CONST;
#define RYGEL_TRACKER_DELETION_QUERY_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TRACKER_TYPE_DELETION_QUERY, RygelTrackerDeletionQueryPrivate))
enum  {
	RYGEL_TRACKER_DELETION_QUERY_DUMMY_PROPERTY
};
RygelTrackerDeletionQuery* rygel_tracker_deletion_query_new (const gchar* id);
RygelTrackerDeletionQuery* rygel_tracker_deletion_query_construct (GType object_type, const gchar* id);
RygelTrackerQueryTriplets* rygel_tracker_query_triplets_new (void);
RygelTrackerQueryTriplets* rygel_tracker_query_triplets_construct (GType object_type);
RygelTrackerQueryTriplet* rygel_tracker_query_triplet_new (const gchar* subject, const gchar* predicate, const gchar* obj);
RygelTrackerQueryTriplet* rygel_tracker_query_triplet_construct (GType object_type, const gchar* subject, const gchar* predicate, const gchar* obj);
gpointer rygel_tracker_query_triplet_ref (gpointer instance);
void rygel_tracker_query_triplet_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_query_triplet (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_query_triplet (GValue* value, gpointer v_object);
void rygel_tracker_value_take_query_triplet (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_query_triplet (const GValue* value);
GType rygel_tracker_query_triplet_get_type (void) G_GNUC_CONST;
RygelTrackerQuery* rygel_tracker_query_construct (GType object_type, RygelTrackerQueryTriplets* triplets);
static void rygel_tracker_deletion_query_real_execute_data_free (gpointer _data);
static void rygel_tracker_deletion_query_real_execute (RygelTrackerQuery* base, TrackerSparqlConnection* resources, GAsyncReadyCallback _callback_, gpointer _user_data_);
static gboolean rygel_tracker_deletion_query_real_execute_co (RygelTrackerDeletionQueryExecuteData* _data_);
gchar* rygel_tracker_query_to_string (RygelTrackerQuery* self);
static void rygel_tracker_deletion_query_execute_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static gchar* rygel_tracker_deletion_query_real_to_string (RygelTrackerQuery* base);
static void rygel_tracker_deletion_query_finalize (RygelTrackerQuery* obj);


RygelTrackerDeletionQuery* rygel_tracker_deletion_query_construct (GType object_type, const gchar* id) {
	RygelTrackerDeletionQuery* self = NULL;
	RygelTrackerQueryTriplets* triplets = NULL;
	RygelTrackerQueryTriplets* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	RygelTrackerQueryTriplet* _tmp6_ = NULL;
	RygelTrackerQueryTriplet* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	g_return_val_if_fail (id != NULL, NULL);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp0_ = rygel_tracker_query_triplets_new ();
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	triplets = _tmp0_;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp1_ = id;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp2_ = g_strconcat ("<", _tmp1_, NULL);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp3_ = _tmp2_;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp4_ = g_strconcat (_tmp3_, ">", NULL);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp5_ = _tmp4_;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp6_ = rygel_tracker_query_triplet_new (_tmp5_, "a", "rdfs:Resource");
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp7_ = _tmp6_;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) triplets, _tmp7_);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_rygel_tracker_query_triplet_unref0 (_tmp7_);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_g_free0 (_tmp5_);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_g_free0 (_tmp3_);
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	self = (RygelTrackerDeletionQuery*) rygel_tracker_query_construct (object_type, triplets);
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp8_ = id;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp9_ = g_strdup (_tmp8_);
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_g_free0 (self->priv->id);
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	self->priv->id = _tmp9_;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_g_object_unref0 (triplets);
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	return self;
#line 220 "rygel-tracker-deletion-query.c"
}


RygelTrackerDeletionQuery* rygel_tracker_deletion_query_new (const gchar* id) {
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	return rygel_tracker_deletion_query_construct (RYGEL_TRACKER_TYPE_DELETION_QUERY, id);
#line 227 "rygel-tracker-deletion-query.c"
}


static void rygel_tracker_deletion_query_real_execute_data_free (gpointer _data) {
	RygelTrackerDeletionQueryExecuteData* _data_;
	_data_ = _data;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_g_object_unref0 (_data_->resources);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_rygel_tracker_query_unref0 (_data_->self);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	g_slice_free (RygelTrackerDeletionQueryExecuteData, _data_);
#line 240 "rygel-tracker-deletion-query.c"
}


static gpointer _rygel_tracker_query_ref0 (gpointer self) {
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	return self ? rygel_tracker_query_ref (self) : NULL;
#line 247 "rygel-tracker-deletion-query.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	return self ? g_object_ref (self) : NULL;
#line 254 "rygel-tracker-deletion-query.c"
}


static void rygel_tracker_deletion_query_real_execute (RygelTrackerQuery* base, TrackerSparqlConnection* resources, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelTrackerDeletionQuery * self;
	RygelTrackerDeletionQueryExecuteData* _data_;
	RygelTrackerDeletionQuery* _tmp0_ = NULL;
	TrackerSparqlConnection* _tmp1_ = NULL;
	TrackerSparqlConnection* _tmp2_ = NULL;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	self = (RygelTrackerDeletionQuery*) base;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_ = g_slice_new0 (RygelTrackerDeletionQueryExecuteData);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->_async_result = g_simple_async_result_new (NULL, _callback_, _user_data_, rygel_tracker_deletion_query_real_execute);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_tracker_deletion_query_real_execute_data_free);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp0_ = _rygel_tracker_query_ref0 (self);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->self = _tmp0_;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp1_ = resources;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp2_ = _g_object_ref0 (_tmp1_);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_g_object_unref0 (_data_->resources);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->resources = _tmp2_;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	rygel_tracker_deletion_query_real_execute_co (_data_);
#line 286 "rygel-tracker-deletion-query.c"
}


static void rygel_tracker_deletion_query_real_execute_finish (RygelTrackerQuery* base, GAsyncResult* _res_, GError** error) {
	RygelTrackerDeletionQueryExecuteData* _data_;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
		return;
#line 296 "rygel-tracker-deletion-query.c"
	}
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
#line 300 "rygel-tracker-deletion-query.c"
}


static void rygel_tracker_deletion_query_execute_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RygelTrackerDeletionQueryExecuteData* _data_;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_ = _user_data_;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->_source_object_ = source_object;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->_res_ = _res_;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	rygel_tracker_deletion_query_real_execute_co (_data_);
#line 314 "rygel-tracker-deletion-query.c"
}


static gboolean rygel_tracker_deletion_query_real_execute_co (RygelTrackerDeletionQueryExecuteData* _data_) {
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	switch (_data_->_state_) {
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
		case 0:
#line 323 "rygel-tracker-deletion-query.c"
		goto _state_0;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
		case 1:
#line 327 "rygel-tracker-deletion-query.c"
		goto _state_1;
		default:
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
		g_assert_not_reached ();
#line 332 "rygel-tracker-deletion-query.c"
	}
	_state_0:
#line 44 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->_tmp0_ = NULL;
#line 44 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->_tmp0_ = rygel_tracker_query_to_string ((RygelTrackerQuery*) _data_->self);
#line 44 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->str = _data_->_tmp0_;
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	g_debug ("rygel-tracker-deletion-query.vala:46: Executing SPARQL query: %s", _data_->str);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->_tmp1_ = NULL;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->_tmp1_ = _data_->resources;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->_state_ = 1;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	tracker_sparql_connection_update_async (_data_->_tmp1_, _data_->str, G_PRIORITY_DEFAULT, NULL, rygel_tracker_deletion_query_execute_ready, _data_);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	return FALSE;
#line 353 "rygel-tracker-deletion-query.c"
	_state_1:
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	tracker_sparql_connection_update_finish (_data_->_tmp1_, _data_->_res_, &_data_->_inner_error_);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	if (_data_->_inner_error_ != NULL) {
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
		if (((_data_->_inner_error_->domain == G_IO_ERROR) || (_data_->_inner_error_->domain == TRACKER_SPARQL_ERROR)) || (_data_->_inner_error_->domain == G_DBUS_ERROR)) {
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
			g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
			g_error_free (_data_->_inner_error_);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
			_g_free0 (_data_->str);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
			if (_data_->_state_ == 0) {
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
				g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 371 "rygel-tracker-deletion-query.c"
			} else {
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
				g_simple_async_result_complete (_data_->_async_result);
#line 375 "rygel-tracker-deletion-query.c"
			}
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
			g_object_unref (_data_->_async_result);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
			return FALSE;
#line 381 "rygel-tracker-deletion-query.c"
		} else {
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
			_g_free0 (_data_->str);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
			g_clear_error (&_data_->_inner_error_);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
			return FALSE;
#line 391 "rygel-tracker-deletion-query.c"
		}
	}
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->_tmp2_ = NULL;
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_data_->_tmp2_ = _data_->self->priv->id;
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	g_debug ("rygel-tracker-deletion-query.vala:50: Deleted item '%s' from Tracker s" \
"tore", _data_->_tmp2_);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_g_free0 (_data_->str);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	if (_data_->_state_ == 0) {
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
		g_simple_async_result_complete_in_idle (_data_->_async_result);
#line 406 "rygel-tracker-deletion-query.c"
	} else {
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
		g_simple_async_result_complete (_data_->_async_result);
#line 410 "rygel-tracker-deletion-query.c"
	}
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	g_object_unref (_data_->_async_result);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	return FALSE;
#line 416 "rygel-tracker-deletion-query.c"
}


static gchar* rygel_tracker_deletion_query_real_to_string (RygelTrackerQuery* base) {
	RygelTrackerDeletionQuery * self;
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	self = (RygelTrackerDeletionQuery*) base;
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp0_ = RYGEL_TRACKER_QUERY_CLASS (rygel_tracker_deletion_query_parent_class)->to_string (G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQuery));
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp1_ = _tmp0_;
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp2_ = g_strconcat ("DELETE { ", _tmp1_, NULL);
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp3_ = _tmp2_;
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp4_ = g_strconcat (_tmp3_, " }", NULL);
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_tmp5_ = _tmp4_;
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_g_free0 (_tmp3_);
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_g_free0 (_tmp1_);
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	result = _tmp5_;
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	return result;
#line 451 "rygel-tracker-deletion-query.c"
}


static void rygel_tracker_deletion_query_class_init (RygelTrackerDeletionQueryClass * klass) {
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	rygel_tracker_deletion_query_parent_class = g_type_class_peek_parent (klass);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	RYGEL_TRACKER_QUERY_CLASS (klass)->finalize = rygel_tracker_deletion_query_finalize;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	g_type_class_add_private (klass, sizeof (RygelTrackerDeletionQueryPrivate));
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	RYGEL_TRACKER_QUERY_CLASS (klass)->execute = rygel_tracker_deletion_query_real_execute;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	RYGEL_TRACKER_QUERY_CLASS (klass)->execute_finish = rygel_tracker_deletion_query_real_execute_finish;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	RYGEL_TRACKER_QUERY_CLASS (klass)->to_string = rygel_tracker_deletion_query_real_to_string;
#line 468 "rygel-tracker-deletion-query.c"
}


static void rygel_tracker_deletion_query_instance_init (RygelTrackerDeletionQuery * self) {
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	self->priv = RYGEL_TRACKER_DELETION_QUERY_GET_PRIVATE (self);
#line 475 "rygel-tracker-deletion-query.c"
}


static void rygel_tracker_deletion_query_finalize (RygelTrackerQuery* obj) {
	RygelTrackerDeletionQuery * self;
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TRACKER_TYPE_DELETION_QUERY, RygelTrackerDeletionQuery);
#line 31 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	_g_free0 (self->priv->id);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-deletion-query.vala"
	RYGEL_TRACKER_QUERY_CLASS (rygel_tracker_deletion_query_parent_class)->finalize (obj);
#line 487 "rygel-tracker-deletion-query.c"
}


/**
 * Represents Tracker SPARQL Deletion query
 */
GType rygel_tracker_deletion_query_get_type (void) {
	static volatile gsize rygel_tracker_deletion_query_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_deletion_query_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerDeletionQueryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_deletion_query_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerDeletionQuery), 0, (GInstanceInitFunc) rygel_tracker_deletion_query_instance_init, NULL };
		GType rygel_tracker_deletion_query_type_id;
		rygel_tracker_deletion_query_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_QUERY, "RygelTrackerDeletionQuery", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_deletion_query_type_id__volatile, rygel_tracker_deletion_query_type_id);
	}
	return rygel_tracker_deletion_query_type_id__volatile;
}



