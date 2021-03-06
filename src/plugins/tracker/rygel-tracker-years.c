/* rygel-tracker-years.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-tracker-years.vala, do not modify */

/*
 * Copyright (C) 2009 Nokia Corporation.
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
#include <rygel-server.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <glib/gi18n-lib.h>


#define RYGEL_TRACKER_TYPE_METADATA_CONTAINER (rygel_tracker_metadata_container_get_type ())
#define RYGEL_TRACKER_METADATA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainer))
#define RYGEL_TRACKER_METADATA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainerClass))
#define RYGEL_TRACKER_IS_METADATA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER))
#define RYGEL_TRACKER_IS_METADATA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_CONTAINER))
#define RYGEL_TRACKER_METADATA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainerClass))

typedef struct _RygelTrackerMetadataContainer RygelTrackerMetadataContainer;
typedef struct _RygelTrackerMetadataContainerClass RygelTrackerMetadataContainerClass;
typedef struct _RygelTrackerMetadataContainerPrivate RygelTrackerMetadataContainerPrivate;

#define RYGEL_TRACKER_TYPE_QUERY (rygel_tracker_query_get_type ())
#define RYGEL_TRACKER_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQuery))
#define RYGEL_TRACKER_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQueryClass))
#define RYGEL_TRACKER_IS_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY))
#define RYGEL_TRACKER_IS_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY))
#define RYGEL_TRACKER_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQueryClass))

typedef struct _RygelTrackerQuery RygelTrackerQuery;
typedef struct _RygelTrackerQueryClass RygelTrackerQueryClass;

#define RYGEL_TRACKER_TYPE_SELECTION_QUERY (rygel_tracker_selection_query_get_type ())
#define RYGEL_TRACKER_SELECTION_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_SELECTION_QUERY, RygelTrackerSelectionQuery))
#define RYGEL_TRACKER_SELECTION_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_SELECTION_QUERY, RygelTrackerSelectionQueryClass))
#define RYGEL_TRACKER_IS_SELECTION_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_SELECTION_QUERY))
#define RYGEL_TRACKER_IS_SELECTION_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_SELECTION_QUERY))
#define RYGEL_TRACKER_SELECTION_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_SELECTION_QUERY, RygelTrackerSelectionQueryClass))

typedef struct _RygelTrackerSelectionQuery RygelTrackerSelectionQuery;
typedef struct _RygelTrackerSelectionQueryClass RygelTrackerSelectionQueryClass;

#define RYGEL_TRACKER_TYPE_SEARCH_CONTAINER (rygel_tracker_search_container_get_type ())
#define RYGEL_TRACKER_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainer))
#define RYGEL_TRACKER_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_SEARCH_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))

typedef struct _RygelTrackerSearchContainer RygelTrackerSearchContainer;
typedef struct _RygelTrackerSearchContainerClass RygelTrackerSearchContainerClass;

#define RYGEL_TRACKER_TYPE_ITEM_FACTORY (rygel_tracker_item_factory_get_type ())
#define RYGEL_TRACKER_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactory))
#define RYGEL_TRACKER_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))
#define RYGEL_TRACKER_IS_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))

typedef struct _RygelTrackerItemFactory RygelTrackerItemFactory;
typedef struct _RygelTrackerItemFactoryClass RygelTrackerItemFactoryClass;

#define RYGEL_TRACKER_TYPE_QUERY_TRIPLETS (rygel_tracker_query_triplets_get_type ())
#define RYGEL_TRACKER_QUERY_TRIPLETS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTriplets))
#define RYGEL_TRACKER_QUERY_TRIPLETS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTripletsClass))
#define RYGEL_TRACKER_IS_QUERY_TRIPLETS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS))
#define RYGEL_TRACKER_IS_QUERY_TRIPLETS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS))
#define RYGEL_TRACKER_QUERY_TRIPLETS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTripletsClass))

typedef struct _RygelTrackerQueryTriplets RygelTrackerQueryTriplets;
typedef struct _RygelTrackerQueryTripletsClass RygelTrackerQueryTripletsClass;

#define RYGEL_TRACKER_TYPE_METADATA_VALUES (rygel_tracker_metadata_values_get_type ())
#define RYGEL_TRACKER_METADATA_VALUES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValues))
#define RYGEL_TRACKER_METADATA_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesClass))
#define RYGEL_TRACKER_IS_METADATA_VALUES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES))
#define RYGEL_TRACKER_IS_METADATA_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_VALUES))
#define RYGEL_TRACKER_METADATA_VALUES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesClass))

typedef struct _RygelTrackerMetadataValues RygelTrackerMetadataValues;
typedef struct _RygelTrackerMetadataValuesClass RygelTrackerMetadataValuesClass;
typedef struct _RygelTrackerMetadataValuesPrivate RygelTrackerMetadataValuesPrivate;

#define RYGEL_TRACKER_TYPE_YEARS (rygel_tracker_years_get_type ())
#define RYGEL_TRACKER_YEARS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_YEARS, RygelTrackerYears))
#define RYGEL_TRACKER_YEARS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_YEARS, RygelTrackerYearsClass))
#define RYGEL_TRACKER_IS_YEARS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_YEARS))
#define RYGEL_TRACKER_IS_YEARS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_YEARS))
#define RYGEL_TRACKER_YEARS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_YEARS, RygelTrackerYearsClass))

typedef struct _RygelTrackerYears RygelTrackerYears;
typedef struct _RygelTrackerYearsClass RygelTrackerYearsClass;
typedef struct _RygelTrackerYearsPrivate RygelTrackerYearsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _RygelTrackerMetadataContainer {
	RygelSimpleContainer parent_instance;
	RygelTrackerMetadataContainerPrivate * priv;
	RygelTrackerItemFactory* item_factory;
	RygelTrackerQueryTriplets* triplets;
};

struct _RygelTrackerMetadataContainerClass {
	RygelSimpleContainerClass parent_class;
	RygelTrackerSelectionQuery* (*create_query) (RygelTrackerMetadataContainer* self);
	RygelTrackerSearchContainer* (*create_container) (RygelTrackerMetadataContainer* self, const gchar* id, const gchar* title, const gchar* value);
	gchar* (*create_id_for_title) (RygelTrackerMetadataContainer* self, const gchar* title);
	gchar* (*create_title_for_value) (RygelTrackerMetadataContainer* self, const gchar* value);
	gchar* (*create_filter) (RygelTrackerMetadataContainer* self, const gchar* variable, const gchar* value);
};

struct _RygelTrackerMetadataValues {
	RygelTrackerMetadataContainer parent_instance;
	RygelTrackerMetadataValuesPrivate * priv;
};

struct _RygelTrackerMetadataValuesClass {
	RygelTrackerMetadataContainerClass parent_class;
};

struct _RygelTrackerYears {
	RygelTrackerMetadataValues parent_instance;
	RygelTrackerYearsPrivate * priv;
};

struct _RygelTrackerYearsClass {
	RygelTrackerMetadataValuesClass parent_class;
};


static gpointer rygel_tracker_years_parent_class = NULL;

GType rygel_tracker_metadata_container_get_type (void) G_GNUC_CONST;
gpointer rygel_tracker_query_ref (gpointer instance);
void rygel_tracker_query_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_query (GValue* value, gpointer v_object);
void rygel_tracker_value_take_query (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_query (const GValue* value);
GType rygel_tracker_query_get_type (void) G_GNUC_CONST;
GType rygel_tracker_selection_query_get_type (void) G_GNUC_CONST;
GType rygel_tracker_search_container_get_type (void) G_GNUC_CONST;
gpointer rygel_tracker_item_factory_ref (gpointer instance);
void rygel_tracker_item_factory_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_item_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_item_factory (GValue* value, gpointer v_object);
void rygel_tracker_value_take_item_factory (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_item_factory (const GValue* value);
GType rygel_tracker_item_factory_get_type (void) G_GNUC_CONST;
GType rygel_tracker_query_triplets_get_type (void) G_GNUC_CONST;
GType rygel_tracker_metadata_values_get_type (void) G_GNUC_CONST;
GType rygel_tracker_years_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_YEARS_DUMMY_PROPERTY
};
RygelTrackerYears* rygel_tracker_years_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerYears* rygel_tracker_years_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerMetadataValues* rygel_tracker_metadata_values_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, const gchar* property, const gchar* child_class);
static gchar* rygel_tracker_years_real_create_title_for_value (RygelTrackerMetadataContainer* base, const gchar* value);
static gchar* rygel_tracker_years_real_create_filter (RygelTrackerMetadataContainer* base, const gchar* variable, const gchar* value);
gchar* rygel_tracker_metadata_container_create_title_for_value (RygelTrackerMetadataContainer* self, const gchar* value);


RygelTrackerYears* rygel_tracker_years_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory) {
	RygelTrackerYears * self = NULL;
	RygelMediaContainer* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	RygelMediaContainer* _tmp4_;
	const gchar* _tmp5_ = NULL;
	RygelTrackerItemFactory* _tmp6_;
#line 30 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 30 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	g_return_val_if_fail (item_factory != NULL, NULL);
#line 31 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp0_ = parent;
#line 31 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp1_ = ((RygelMediaObject*) _tmp0_)->id;
#line 31 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp2_ = g_strconcat (_tmp1_, "Year", NULL);
#line 31 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp3_ = _tmp2_;
#line 31 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp4_ = parent;
#line 31 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp5_ = _ ("Year");
#line 31 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp6_ = item_factory;
#line 31 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	self = (RygelTrackerYears*) rygel_tracker_metadata_values_construct (object_type, _tmp3_, _tmp4_, _tmp5_, _tmp6_, "date", NULL);
#line 31 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (_tmp3_);
#line 30 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	return self;
#line 222 "rygel-tracker-years.c"
}


RygelTrackerYears* rygel_tracker_years_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory) {
#line 30 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	return rygel_tracker_years_construct (RYGEL_TRACKER_TYPE_YEARS, parent, item_factory);
#line 229 "rygel-tracker-years.c"
}


static glong string_strnlen (gchar* str, glong maxlen) {
	glong result = 0L;
	gchar* _tmp0_;
	glong _tmp1_;
	gchar* _tmp2_ = NULL;
	gchar* end;
	gchar* _tmp3_;
#line 1338 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp0_ = str;
#line 1338 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp1_ = maxlen;
#line 1338 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp2_ = memchr (_tmp0_, 0, (gsize) _tmp1_);
#line 1338 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	end = _tmp2_;
#line 1339 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp3_ = end;
#line 1339 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	if (_tmp3_ == NULL) {
#line 252 "rygel-tracker-years.c"
		glong _tmp4_;
#line 1340 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp4_ = maxlen;
#line 1340 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		result = _tmp4_;
#line 1340 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		return result;
#line 260 "rygel-tracker-years.c"
	} else {
		gchar* _tmp5_;
		gchar* _tmp6_;
#line 1342 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp5_ = end;
#line 1342 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp6_ = str;
#line 1342 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		result = (glong) (_tmp5_ - _tmp6_);
#line 1342 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		return result;
#line 272 "rygel-tracker-years.c"
	}
}


static gchar* string_substring (const gchar* self, glong offset, glong len) {
	gchar* result = NULL;
	glong string_length = 0L;
	gboolean _tmp0_ = FALSE;
	glong _tmp1_;
	gboolean _tmp3_;
	glong _tmp9_;
	glong _tmp15_;
	glong _tmp18_;
	glong _tmp19_;
	glong _tmp20_;
	glong _tmp21_;
	glong _tmp22_;
	gchar* _tmp23_ = NULL;
#line 1349 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, NULL);
#line 1351 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp1_ = offset;
#line 1351 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	if (_tmp1_ >= ((glong) 0)) {
#line 297 "rygel-tracker-years.c"
		glong _tmp2_;
#line 1351 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp2_ = len;
#line 1351 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp0_ = _tmp2_ >= ((glong) 0);
#line 303 "rygel-tracker-years.c"
	} else {
#line 1351 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp0_ = FALSE;
#line 307 "rygel-tracker-years.c"
	}
#line 1351 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp3_ = _tmp0_;
#line 1351 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	if (_tmp3_) {
#line 313 "rygel-tracker-years.c"
		glong _tmp4_;
		glong _tmp5_;
		glong _tmp6_ = 0L;
#line 1353 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp4_ = offset;
#line 1353 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp5_ = len;
#line 1353 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp6_ = string_strnlen ((gchar*) self, _tmp4_ + _tmp5_);
#line 1353 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		string_length = _tmp6_;
#line 325 "rygel-tracker-years.c"
	} else {
		gint _tmp7_;
		gint _tmp8_;
#line 1355 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp7_ = strlen (self);
#line 1355 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp8_ = _tmp7_;
#line 1355 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		string_length = (glong) _tmp8_;
#line 335 "rygel-tracker-years.c"
	}
#line 1358 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp9_ = offset;
#line 1358 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	if (_tmp9_ < ((glong) 0)) {
#line 341 "rygel-tracker-years.c"
		glong _tmp10_;
		glong _tmp11_;
		glong _tmp12_;
#line 1359 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp10_ = string_length;
#line 1359 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp11_ = offset;
#line 1359 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		offset = _tmp10_ + _tmp11_;
#line 1360 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp12_ = offset;
#line 1360 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		g_return_val_if_fail (_tmp12_ >= ((glong) 0), NULL);
#line 355 "rygel-tracker-years.c"
	} else {
		glong _tmp13_;
		glong _tmp14_;
#line 1362 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp13_ = offset;
#line 1362 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp14_ = string_length;
#line 1362 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		g_return_val_if_fail (_tmp13_ <= _tmp14_, NULL);
#line 365 "rygel-tracker-years.c"
	}
#line 1364 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp15_ = len;
#line 1364 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	if (_tmp15_ < ((glong) 0)) {
#line 371 "rygel-tracker-years.c"
		glong _tmp16_;
		glong _tmp17_;
#line 1365 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp16_ = string_length;
#line 1365 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		_tmp17_ = offset;
#line 1365 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
		len = _tmp16_ - _tmp17_;
#line 380 "rygel-tracker-years.c"
	}
#line 1367 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp18_ = offset;
#line 1367 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp19_ = len;
#line 1367 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp20_ = string_length;
#line 1367 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	g_return_val_if_fail ((_tmp18_ + _tmp19_) <= _tmp20_, NULL);
#line 1368 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp21_ = offset;
#line 1368 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp22_ = len;
#line 1368 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	_tmp23_ = g_strndup (((gchar*) self) + _tmp21_, (gsize) _tmp22_);
#line 1368 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	result = _tmp23_;
#line 1368 "/usr/share/vala-0.16/vapi/glib-2.0.vapi"
	return result;
#line 400 "rygel-tracker-years.c"
}


static gchar* rygel_tracker_years_real_create_title_for_value (RygelTrackerMetadataContainer* base, const gchar* value) {
	RygelTrackerYears * self;
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_ = NULL;
#line 38 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	self = (RygelTrackerYears*) base;
#line 38 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	g_return_val_if_fail (value != NULL, NULL);
#line 39 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp0_ = value;
#line 39 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp1_ = string_substring (_tmp0_, (glong) 0, (glong) 4);
#line 39 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	result = _tmp1_;
#line 39 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	return result;
#line 421 "rygel-tracker-years.c"
}


static gchar* rygel_tracker_years_real_create_filter (RygelTrackerMetadataContainer* base, const gchar* variable, const gchar* value) {
	RygelTrackerYears * self;
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_ = NULL;
	gchar* year;
	const gchar* _tmp2_;
	gint _tmp3_ = 0;
	gchar* _tmp4_ = NULL;
	gchar* next_year;
	const gchar* _tmp5_;
	gchar* _tmp6_;
	const gchar* _tmp7_;
	gchar* _tmp8_;
	const gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	const gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	const gchar* _tmp17_;
	gchar* _tmp18_;
	gchar* _tmp19_;
	gchar* _tmp20_;
	gchar* _tmp21_;
	const gchar* _tmp22_;
	gchar* _tmp23_;
	gchar* _tmp24_;
	gchar* _tmp25_;
	gchar* _tmp26_;
#line 42 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	self = (RygelTrackerYears*) base;
#line 42 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	g_return_val_if_fail (variable != NULL, NULL);
#line 42 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	g_return_val_if_fail (value != NULL, NULL);
#line 43 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp0_ = value;
#line 43 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp1_ = rygel_tracker_metadata_container_create_title_for_value ((RygelTrackerMetadataContainer*) self, _tmp0_);
#line 43 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	year = _tmp1_;
#line 44 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp2_ = year;
#line 44 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp3_ = atoi (_tmp2_);
#line 44 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp4_ = g_strdup_printf ("%i", _tmp3_ + 1);
#line 44 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	next_year = _tmp4_;
#line 46 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp5_ = year;
#line 46 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp6_ = g_strconcat (_tmp5_, "-01-01T00:00:00Z", NULL);
#line 46 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (year);
#line 46 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	year = _tmp6_;
#line 47 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp7_ = next_year;
#line 47 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp8_ = g_strconcat (_tmp7_, "-01-01T00:00:00Z", NULL);
#line 47 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (next_year);
#line 47 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	next_year = _tmp8_;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp9_ = variable;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp10_ = g_strconcat (_tmp9_, " > \"", NULL);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp11_ = _tmp10_;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp12_ = year;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp13_ = g_strconcat (_tmp11_, _tmp12_, NULL);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp14_ = _tmp13_;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp15_ = g_strconcat (_tmp14_, "\" && ", NULL);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp16_ = _tmp15_;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp17_ = variable;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp18_ = g_strconcat (_tmp16_, _tmp17_, NULL);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp19_ = _tmp18_;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp20_ = g_strconcat (_tmp19_, " < \"", NULL);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp21_ = _tmp20_;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp22_ = next_year;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp23_ = g_strconcat (_tmp21_, _tmp22_, NULL);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp24_ = _tmp23_;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp25_ = g_strconcat (_tmp24_, "\"", NULL);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_tmp26_ = _tmp25_;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (_tmp24_);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (_tmp21_);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (_tmp19_);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (_tmp16_);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (_tmp14_);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (_tmp11_);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	result = _tmp26_;
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (next_year);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	_g_free0 (year);
#line 49 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	return result;
#line 549 "rygel-tracker-years.c"
}


static void rygel_tracker_years_class_init (RygelTrackerYearsClass * klass) {
#line 29 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	rygel_tracker_years_parent_class = g_type_class_peek_parent (klass);
#line 29 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	RYGEL_TRACKER_METADATA_CONTAINER_CLASS (klass)->create_title_for_value = rygel_tracker_years_real_create_title_for_value;
#line 29 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-years.vala"
	RYGEL_TRACKER_METADATA_CONTAINER_CLASS (klass)->create_filter = rygel_tracker_years_real_create_filter;
#line 560 "rygel-tracker-years.c"
}


static void rygel_tracker_years_instance_init (RygelTrackerYears * self) {
}


/**
 * Container listing content hierarchy by year of creation.
 */
GType rygel_tracker_years_get_type (void) {
	static volatile gsize rygel_tracker_years_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_years_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerYearsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_years_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerYears), 0, (GInstanceInitFunc) rygel_tracker_years_instance_init, NULL };
		GType rygel_tracker_years_type_id;
		rygel_tracker_years_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_METADATA_VALUES, "RygelTrackerYears", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_years_type_id__volatile, rygel_tracker_years_type_id);
	}
	return rygel_tracker_years_type_id__volatile;
}



