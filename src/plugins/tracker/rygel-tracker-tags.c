/* rygel-tracker-tags.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-tracker-tags.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 * Copyright (C) 2008 Nokia Corporation.
 *
 * Author: Zeeshan Ali <zeenix@gmail.com>
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

#define RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES (rygel_tracker_metadata_multi_values_get_type ())
#define RYGEL_TRACKER_METADATA_MULTI_VALUES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES, RygelTrackerMetadataMultiValues))
#define RYGEL_TRACKER_METADATA_MULTI_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES, RygelTrackerMetadataMultiValuesClass))
#define RYGEL_TRACKER_IS_METADATA_MULTI_VALUES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES))
#define RYGEL_TRACKER_IS_METADATA_MULTI_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES))
#define RYGEL_TRACKER_METADATA_MULTI_VALUES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES, RygelTrackerMetadataMultiValuesClass))

typedef struct _RygelTrackerMetadataMultiValues RygelTrackerMetadataMultiValues;
typedef struct _RygelTrackerMetadataMultiValuesClass RygelTrackerMetadataMultiValuesClass;
typedef struct _RygelTrackerMetadataMultiValuesPrivate RygelTrackerMetadataMultiValuesPrivate;

#define RYGEL_TRACKER_TYPE_TAGS (rygel_tracker_tags_get_type ())
#define RYGEL_TRACKER_TAGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_TAGS, RygelTrackerTags))
#define RYGEL_TRACKER_TAGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_TAGS, RygelTrackerTagsClass))
#define RYGEL_TRACKER_IS_TAGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_TAGS))
#define RYGEL_TRACKER_IS_TAGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_TAGS))
#define RYGEL_TRACKER_TAGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_TAGS, RygelTrackerTagsClass))

typedef struct _RygelTrackerTags RygelTrackerTags;
typedef struct _RygelTrackerTagsClass RygelTrackerTagsClass;
typedef struct _RygelTrackerTagsPrivate RygelTrackerTagsPrivate;
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

struct _RygelTrackerMetadataMultiValues {
	RygelTrackerMetadataContainer parent_instance;
	RygelTrackerMetadataMultiValuesPrivate * priv;
	gchar** key_chain;
	gint key_chain_length1;
};

struct _RygelTrackerMetadataMultiValuesClass {
	RygelTrackerMetadataContainerClass parent_class;
};

struct _RygelTrackerTags {
	RygelTrackerMetadataMultiValues parent_instance;
	RygelTrackerTagsPrivate * priv;
};

struct _RygelTrackerTagsClass {
	RygelTrackerMetadataMultiValuesClass parent_class;
};


static gpointer rygel_tracker_tags_parent_class = NULL;

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
GType rygel_tracker_metadata_multi_values_get_type (void) G_GNUC_CONST;
GType rygel_tracker_tags_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_TAGS_DUMMY_PROPERTY
};
#define RYGEL_TRACKER_TAGS_TITLE "Tags"
RygelTrackerTags* rygel_tracker_tags_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerTags* rygel_tracker_tags_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerMetadataMultiValues* rygel_tracker_metadata_multi_values_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, gchar** key_chain, int key_chain_length1, const gchar* child_class);

static const gchar* RYGEL_TRACKER_TAGS_KEY_CHAIN[3] = {"nao:hasTag", "nao:prefLabel", NULL};

RygelTrackerTags* rygel_tracker_tags_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory) {
	RygelTrackerTags * self = NULL;
	RygelMediaContainer* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	RygelMediaContainer* _tmp5_ = NULL;
	RygelTrackerItemFactory* _tmp6_ = NULL;
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	g_return_val_if_fail (item_factory != NULL, NULL);
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	_tmp0_ = parent;
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	_tmp1_ = rygel_media_object_get_id ((RygelMediaObject*) _tmp0_);
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	_tmp2_ = _tmp1_;
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	_tmp3_ = g_strconcat (_tmp2_, RYGEL_TRACKER_TAGS_TITLE, NULL);
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	_tmp4_ = _tmp3_;
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	_tmp5_ = parent;
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	_tmp6_ = item_factory;
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	self = (RygelTrackerTags*) rygel_tracker_metadata_multi_values_construct (object_type, _tmp4_, _tmp5_, RYGEL_TRACKER_TAGS_TITLE, _tmp6_, RYGEL_TRACKER_TAGS_KEY_CHAIN, G_N_ELEMENTS (RYGEL_TRACKER_TAGS_KEY_CHAIN), NULL);
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	_g_free0 (_tmp4_);
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	return self;
#line 222 "rygel-tracker-tags.c"
}


RygelTrackerTags* rygel_tracker_tags_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory) {
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	return rygel_tracker_tags_construct (RYGEL_TRACKER_TYPE_TAGS, parent, item_factory);
#line 229 "rygel-tracker-tags.c"
}


static void rygel_tracker_tags_class_init (RygelTrackerTagsClass * klass) {
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-tags.vala"
	rygel_tracker_tags_parent_class = g_type_class_peek_parent (klass);
#line 236 "rygel-tracker-tags.c"
}


static void rygel_tracker_tags_instance_init (RygelTrackerTags * self) {
}


/**
 * Container listing all available tag labels in Tracker DB.
 */
GType rygel_tracker_tags_get_type (void) {
	static volatile gsize rygel_tracker_tags_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_tags_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerTagsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_tags_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerTags), 0, (GInstanceInitFunc) rygel_tracker_tags_instance_init, NULL };
		GType rygel_tracker_tags_type_id;
		rygel_tracker_tags_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_METADATA_MULTI_VALUES, "RygelTrackerTags", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_tags_type_id__volatile, rygel_tracker_tags_type_id);
	}
	return rygel_tracker_tags_type_id__volatile;
}



