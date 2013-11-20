/* rygel-tracker-metadata-values.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-tracker-metadata-values.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 * Copyright (C) 2008-2012 Nokia Corporation.
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
#include <rygel-server.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <libtracker-sparql/tracker-sparql.h>
#include <gio/gio.h>


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
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _RygelTrackerItemFactoryPrivate RygelTrackerItemFactoryPrivate;

#define RYGEL_TRACKER_TYPE_QUERY_TRIPLET (rygel_tracker_query_triplet_get_type ())
#define RYGEL_TRACKER_QUERY_TRIPLET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLET, RygelTrackerQueryTriplet))
#define RYGEL_TRACKER_QUERY_TRIPLET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLET, RygelTrackerQueryTripletClass))
#define RYGEL_TRACKER_IS_QUERY_TRIPLET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLET))
#define RYGEL_TRACKER_IS_QUERY_TRIPLET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLET))
#define RYGEL_TRACKER_QUERY_TRIPLET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLET, RygelTrackerQueryTripletClass))

typedef struct _RygelTrackerQueryTriplet RygelTrackerQueryTriplet;
typedef struct _RygelTrackerQueryTripletClass RygelTrackerQueryTripletClass;
#define _rygel_tracker_query_triplet_unref0(var) ((var == NULL) ? NULL : (var = (rygel_tracker_query_triplet_unref (var), NULL)))

#define RYGEL_TRACKER_TYPE_UPN_PPROPERTY_MAP (rygel_tracker_upn_pproperty_map_get_type ())
#define RYGEL_TRACKER_UPN_PPROPERTY_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_UPN_PPROPERTY_MAP, RygelTrackerUPnPPropertyMap))
#define RYGEL_TRACKER_UPN_PPROPERTY_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_UPN_PPROPERTY_MAP, RygelTrackerUPnPPropertyMapClass))
#define RYGEL_TRACKER_IS_UPN_PPROPERTY_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_UPN_PPROPERTY_MAP))
#define RYGEL_TRACKER_IS_UPN_PPROPERTY_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_UPN_PPROPERTY_MAP))
#define RYGEL_TRACKER_UPN_PPROPERTY_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_UPN_PPROPERTY_MAP, RygelTrackerUPnPPropertyMapClass))

typedef struct _RygelTrackerUPnPPropertyMap RygelTrackerUPnPPropertyMap;
typedef struct _RygelTrackerUPnPPropertyMapClass RygelTrackerUPnPPropertyMapClass;

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

struct _RygelTrackerMetadataValuesPrivate {
	gchar* property;
};

struct _RygelTrackerItemFactory {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelTrackerItemFactoryPrivate * priv;
	gchar* category;
	gchar* category_iri;
	gchar* upnp_class;
	gchar* upload_dir;
	GeeArrayList* properties;
};

struct _RygelTrackerItemFactoryClass {
	GTypeClass parent_class;
	void (*finalize) (RygelTrackerItemFactory *self);
	RygelMediaItem* (*create) (RygelTrackerItemFactory* self, const gchar* id, const gchar* uri, RygelTrackerSearchContainer* parent, TrackerSparqlCursor* metadata, GError** error);
	void (*set_metadata) (RygelTrackerItemFactory* self, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error);
};


static gpointer rygel_tracker_metadata_values_parent_class = NULL;

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
#define RYGEL_TRACKER_METADATA_VALUES_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesPrivate))
enum  {
	RYGEL_TRACKER_METADATA_VALUES_DUMMY_PROPERTY
};
RygelTrackerMetadataValues* rygel_tracker_metadata_values_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, const gchar* property, const gchar* child_class);
RygelTrackerMetadataContainer* rygel_tracker_metadata_container_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, const gchar* child_class);
RygelTrackerQueryTriplets* rygel_tracker_query_triplets_new (void);
RygelTrackerQueryTriplets* rygel_tracker_query_triplets_construct (GType object_type);
#define RYGEL_TRACKER_SELECTION_QUERY_ITEM_VARIABLE "?item"
RygelTrackerQueryTriplet* rygel_tracker_query_triplet_new (const gchar* subject, const gchar* predicate, const gchar* obj);
RygelTrackerQueryTriplet* rygel_tracker_query_triplet_construct (GType object_type, const gchar* subject, const gchar* predicate, const gchar* obj);
gpointer rygel_tracker_query_triplet_ref (gpointer instance);
void rygel_tracker_query_triplet_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_query_triplet (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_query_triplet (GValue* value, gpointer v_object);
void rygel_tracker_value_take_query_triplet (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_query_triplet (const GValue* value);
GType rygel_tracker_query_triplet_get_type (void) G_GNUC_CONST;
void rygel_tracker_metadata_container_fetch_metadata_values (RygelTrackerMetadataContainer* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_tracker_metadata_container_fetch_metadata_values_finish (RygelTrackerMetadataContainer* self, GAsyncResult* _res_);
static RygelTrackerSelectionQuery* rygel_tracker_metadata_values_real_create_query (RygelTrackerMetadataContainer* base);
GType rygel_tracker_upn_pproperty_map_get_type (void) G_GNUC_CONST;
RygelTrackerUPnPPropertyMap* rygel_tracker_upn_pproperty_map_get_property_map (void);
gchar* rygel_tracker_upn_pproperty_map_get (RygelTrackerUPnPPropertyMap* self, const gchar* property);
RygelTrackerSelectionQuery* rygel_tracker_selection_query_new (GeeArrayList* variables, RygelTrackerQueryTriplets* triplets, GeeArrayList* filters, const gchar* order_by, gint offset, gint max_count);
RygelTrackerSelectionQuery* rygel_tracker_selection_query_construct (GType object_type, GeeArrayList* variables, RygelTrackerQueryTriplets* triplets, GeeArrayList* filters, const gchar* order_by, gint offset, gint max_count);
static RygelTrackerSearchContainer* rygel_tracker_metadata_values_real_create_container (RygelTrackerMetadataContainer* base, const gchar* id, const gchar* title, const gchar* value);
RygelTrackerQueryTriplets* rygel_tracker_query_triplets_new_clone (RygelTrackerQueryTriplets* triplets);
RygelTrackerQueryTriplets* rygel_tracker_query_triplets_construct_clone (GType object_type, RygelTrackerQueryTriplets* triplets);
gchar* rygel_tracker_metadata_container_create_filter (RygelTrackerMetadataContainer* self, const gchar* variable, const gchar* value);
RygelTrackerSearchContainer* rygel_tracker_search_container_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, RygelTrackerQueryTriplets* triplets, GeeArrayList* filters);
RygelTrackerSearchContainer* rygel_tracker_search_container_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, RygelTrackerQueryTriplets* triplets, GeeArrayList* filters);
static void rygel_tracker_metadata_values_finalize (GObject* obj);


RygelTrackerMetadataValues* rygel_tracker_metadata_values_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, const gchar* property, const gchar* child_class) {
	RygelTrackerMetadataValues * self = NULL;
	const gchar* _tmp0_ = NULL;
	RygelMediaContainer* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	RygelTrackerItemFactory* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	RygelTrackerQueryTriplets* _tmp7_ = NULL;
	RygelTrackerQueryTriplets* _tmp8_ = NULL;
	RygelTrackerItemFactory* _tmp9_ = NULL;
	const gchar* _tmp10_ = NULL;
	RygelTrackerQueryTriplet* _tmp11_ = NULL;
	RygelTrackerQueryTriplet* _tmp12_ = NULL;
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	g_return_val_if_fail (id != NULL, NULL);
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	g_return_val_if_fail (title != NULL, NULL);
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	g_return_val_if_fail (item_factory != NULL, NULL);
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	g_return_val_if_fail (property != NULL, NULL);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp0_ = id;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp1_ = parent;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp2_ = title;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp3_ = item_factory;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp4_ = child_class;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	self = (RygelTrackerMetadataValues*) rygel_tracker_metadata_container_construct (object_type, _tmp0_, _tmp1_, _tmp2_, _tmp3_, _tmp4_);
#line 44 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp5_ = property;
#line 44 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp6_ = g_strdup (_tmp5_);
#line 44 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_free0 (self->priv->property);
#line 44 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	self->priv->property = _tmp6_;
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp7_ = rygel_tracker_query_triplets_new ();
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_object_unref0 (((RygelTrackerMetadataContainer*) self)->triplets);
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	((RygelTrackerMetadataContainer*) self)->triplets = _tmp7_;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp8_ = ((RygelTrackerMetadataContainer*) self)->triplets;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp9_ = ((RygelTrackerMetadataContainer*) self)->item_factory;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp10_ = _tmp9_->category;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp11_ = rygel_tracker_query_triplet_new (RYGEL_TRACKER_SELECTION_QUERY_ITEM_VARIABLE, "a", _tmp10_);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp12_ = _tmp11_;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp8_, _tmp12_);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_rygel_tracker_query_triplet_unref0 (_tmp12_);
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	rygel_tracker_metadata_container_fetch_metadata_values ((RygelTrackerMetadataContainer*) self, NULL, NULL);
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	return self;
#line 308 "rygel-tracker-metadata-values.c"
}


static RygelTrackerSelectionQuery* rygel_tracker_metadata_values_real_create_query (RygelTrackerMetadataContainer* base) {
	RygelTrackerMetadataValues * self;
	RygelTrackerSelectionQuery* result = NULL;
	RygelTrackerUPnPPropertyMap* property_map = NULL;
	RygelTrackerUPnPPropertyMap* _tmp0_ = NULL;
	GeeArrayList* selected = NULL;
	GeeArrayList* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	RygelTrackerQueryTriplets* _tmp9_ = NULL;
	RygelTrackerSelectionQuery* _tmp10_ = NULL;
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	self = (RygelTrackerMetadataValues*) base;
#line 55 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp0_ = rygel_tracker_upn_pproperty_map_get_property_map ();
#line 55 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	property_map = _tmp0_;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp1_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	selected = _tmp1_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp2_ = self->priv->property;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp3_ = rygel_tracker_upn_pproperty_map_get (property_map, _tmp2_);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp4_ = _tmp3_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp5_ = g_strconcat ("DISTINCT ", _tmp4_, NULL);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp6_ = _tmp5_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp7_ = g_strconcat (_tmp6_, " AS x", NULL);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp8_ = _tmp7_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) selected, _tmp8_);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_free0 (_tmp8_);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_free0 (_tmp6_);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_free0 (_tmp4_);
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp9_ = ((RygelTrackerMetadataContainer*) self)->triplets;
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp10_ = rygel_tracker_selection_query_new (selected, _tmp9_, NULL, "?x", 0, -1);
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	result = _tmp10_;
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_object_unref0 (selected);
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_object_unref0 (property_map);
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	return result;
#line 372 "rygel-tracker-metadata-values.c"
}


static RygelTrackerSearchContainer* rygel_tracker_metadata_values_real_create_container (RygelTrackerMetadataContainer* base, const gchar* id, const gchar* title, const gchar* value) {
	RygelTrackerMetadataValues * self;
	RygelTrackerSearchContainer* result = NULL;
	RygelTrackerQueryTriplets* child_triplets = NULL;
	RygelTrackerQueryTriplets* _tmp0_ = NULL;
	RygelTrackerQueryTriplets* _tmp1_ = NULL;
	GeeArrayList* filters = NULL;
	GeeArrayList* _tmp2_ = NULL;
	RygelTrackerUPnPPropertyMap* property_map = NULL;
	RygelTrackerUPnPPropertyMap* _tmp3_ = NULL;
	gchar* property = NULL;
	RygelTrackerUPnPPropertyMap* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar* filter = NULL;
	const gchar* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	GeeArrayList* _tmp10_ = NULL;
	const gchar* _tmp11_ = NULL;
	RygelTrackerSearchContainer* child = NULL;
	const gchar* _tmp12_ = NULL;
	const gchar* _tmp13_ = NULL;
	RygelTrackerItemFactory* _tmp14_ = NULL;
	RygelTrackerQueryTriplets* _tmp15_ = NULL;
	GeeArrayList* _tmp16_ = NULL;
	RygelTrackerSearchContainer* _tmp17_ = NULL;
	const gchar* _tmp18_ = NULL;
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	self = (RygelTrackerMetadataValues*) base;
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	g_return_val_if_fail (id != NULL, NULL);
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	g_return_val_if_fail (title != NULL, NULL);
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	g_return_val_if_fail (value != NULL, NULL);
#line 69 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp0_ = ((RygelTrackerMetadataContainer*) self)->triplets;
#line 69 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp1_ = rygel_tracker_query_triplets_new_clone (_tmp0_);
#line 69 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	child_triplets = _tmp1_;
#line 72 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp2_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
#line 72 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	filters = _tmp2_;
#line 73 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp3_ = rygel_tracker_upn_pproperty_map_get_property_map ();
#line 73 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	property_map = _tmp3_;
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp4_ = property_map;
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp5_ = self->priv->property;
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp6_ = rygel_tracker_upn_pproperty_map_get (_tmp4_, _tmp5_);
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	property = _tmp6_;
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp7_ = property;
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp8_ = value;
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp9_ = rygel_tracker_metadata_container_create_filter ((RygelTrackerMetadataContainer*) self, _tmp7_, _tmp8_);
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	filter = _tmp9_;
#line 76 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp10_ = filters;
#line 76 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp11_ = filter;
#line 76 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp10_, _tmp11_);
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp12_ = id;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp13_ = title;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp14_ = ((RygelTrackerMetadataContainer*) self)->item_factory;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp15_ = child_triplets;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp16_ = filters;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp17_ = rygel_tracker_search_container_new (_tmp12_, (RygelMediaContainer*) self, _tmp13_, _tmp14_, _tmp15_, _tmp16_);
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	child = _tmp17_;
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_tmp18_ = self->priv->property;
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	if (g_strcmp0 (_tmp18_, "upnp:album") == 0) {
#line 466 "rygel-tracker-metadata-values.c"
		RygelTrackerSearchContainer* _tmp19_ = NULL;
#line 85 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
		_tmp19_ = child;
#line 85 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
		rygel_media_container_set_sort_criteria ((RygelMediaContainer*) _tmp19_, RYGEL_MEDIA_CONTAINER_ALBUM_SORT_CRITERIA);
#line 472 "rygel-tracker-metadata-values.c"
	}
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	result = child;
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_free0 (filter);
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_free0 (property);
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_object_unref0 (property_map);
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_object_unref0 (filters);
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_object_unref0 (child_triplets);
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	return result;
#line 488 "rygel-tracker-metadata-values.c"
}


static void rygel_tracker_metadata_values_class_init (RygelTrackerMetadataValuesClass * klass) {
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	rygel_tracker_metadata_values_parent_class = g_type_class_peek_parent (klass);
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	g_type_class_add_private (klass, sizeof (RygelTrackerMetadataValuesPrivate));
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	RYGEL_TRACKER_METADATA_CONTAINER_CLASS (klass)->create_query = rygel_tracker_metadata_values_real_create_query;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	RYGEL_TRACKER_METADATA_CONTAINER_CLASS (klass)->create_container = rygel_tracker_metadata_values_real_create_container;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_tracker_metadata_values_finalize;
#line 503 "rygel-tracker-metadata-values.c"
}


static void rygel_tracker_metadata_values_instance_init (RygelTrackerMetadataValues * self) {
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	self->priv = RYGEL_TRACKER_METADATA_VALUES_GET_PRIVATE (self);
#line 510 "rygel-tracker-metadata-values.c"
}


static void rygel_tracker_metadata_values_finalize (GObject* obj) {
	RygelTrackerMetadataValues * self;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValues);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	_g_free0 (self->priv->property);
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-metadata-values.vala"
	G_OBJECT_CLASS (rygel_tracker_metadata_values_parent_class)->finalize (obj);
#line 522 "rygel-tracker-metadata-values.c"
}


/**
 * Container listing possible values of a particuler Tracker metadata key.
 * The key needs to be single-valued.
 */
GType rygel_tracker_metadata_values_get_type (void) {
	static volatile gsize rygel_tracker_metadata_values_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_metadata_values_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerMetadataValuesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_metadata_values_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerMetadataValues), 0, (GInstanceInitFunc) rygel_tracker_metadata_values_instance_init, NULL };
		GType rygel_tracker_metadata_values_type_id;
		rygel_tracker_metadata_values_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_METADATA_CONTAINER, "RygelTrackerMetadataValues", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_tracker_metadata_values_type_id__volatile, rygel_tracker_metadata_values_type_id);
	}
	return rygel_tracker_metadata_values_type_id__volatile;
}



