/* rygel-lms-image-years.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-lms-image-years.vala, do not modify */

/*
 * Copyright (C) 2013 Intel Corporation.
 *
 * Author: Jussi Kukkonen <jussi.kukkonen@intel.com>
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
#include <sqlite3.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>


#define RYGEL_LMS_TYPE_CATEGORY_CONTAINER (rygel_lms_category_container_get_type ())
#define RYGEL_LMS_CATEGORY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_LMS_TYPE_CATEGORY_CONTAINER, RygelLMSCategoryContainer))
#define RYGEL_LMS_CATEGORY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_LMS_TYPE_CATEGORY_CONTAINER, RygelLMSCategoryContainerClass))
#define RYGEL_LMS_IS_CATEGORY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_LMS_TYPE_CATEGORY_CONTAINER))
#define RYGEL_LMS_IS_CATEGORY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_LMS_TYPE_CATEGORY_CONTAINER))
#define RYGEL_LMS_CATEGORY_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_LMS_TYPE_CATEGORY_CONTAINER, RygelLMSCategoryContainerClass))

typedef struct _RygelLMSCategoryContainer RygelLMSCategoryContainer;
typedef struct _RygelLMSCategoryContainerClass RygelLMSCategoryContainerClass;
typedef struct _RygelLMSCategoryContainerPrivate RygelLMSCategoryContainerPrivate;

#define RYGEL_LMS_TYPE_IMAGE_YEARS (rygel_lms_image_years_get_type ())
#define RYGEL_LMS_IMAGE_YEARS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_LMS_TYPE_IMAGE_YEARS, RygelLMSImageYears))
#define RYGEL_LMS_IMAGE_YEARS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_LMS_TYPE_IMAGE_YEARS, RygelLMSImageYearsClass))
#define RYGEL_LMS_IS_IMAGE_YEARS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_LMS_TYPE_IMAGE_YEARS))
#define RYGEL_LMS_IS_IMAGE_YEARS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_LMS_TYPE_IMAGE_YEARS))
#define RYGEL_LMS_IMAGE_YEARS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_LMS_TYPE_IMAGE_YEARS, RygelLMSImageYearsClass))

typedef struct _RygelLMSImageYears RygelLMSImageYears;
typedef struct _RygelLMSImageYearsClass RygelLMSImageYearsClass;
typedef struct _RygelLMSImageYearsPrivate RygelLMSImageYearsPrivate;

#define RYGEL_LMS_TYPE_DATABASE (rygel_lms_database_get_type ())
#define RYGEL_LMS_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_LMS_TYPE_DATABASE, RygelLMSDatabase))
#define RYGEL_LMS_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_LMS_TYPE_DATABASE, RygelLMSDatabaseClass))
#define RYGEL_LMS_IS_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_LMS_TYPE_DATABASE))
#define RYGEL_LMS_IS_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_LMS_TYPE_DATABASE))
#define RYGEL_LMS_DATABASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_LMS_TYPE_DATABASE, RygelLMSDatabaseClass))

typedef struct _RygelLMSDatabase RygelLMSDatabase;
typedef struct _RygelLMSDatabaseClass RygelLMSDatabaseClass;

#define RYGEL_LMS_TYPE_IMAGE_YEAR (rygel_lms_image_year_get_type ())
#define RYGEL_LMS_IMAGE_YEAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_LMS_TYPE_IMAGE_YEAR, RygelLMSImageYear))
#define RYGEL_LMS_IMAGE_YEAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_LMS_TYPE_IMAGE_YEAR, RygelLMSImageYearClass))
#define RYGEL_LMS_IS_IMAGE_YEAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_LMS_TYPE_IMAGE_YEAR))
#define RYGEL_LMS_IS_IMAGE_YEAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_LMS_TYPE_IMAGE_YEAR))
#define RYGEL_LMS_IMAGE_YEAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_LMS_TYPE_IMAGE_YEAR, RygelLMSImageYearClass))

typedef struct _RygelLMSImageYear RygelLMSImageYear;
typedef struct _RygelLMSImageYearClass RygelLMSImageYearClass;

struct _RygelLMSCategoryContainer {
	RygelMediaContainer parent_instance;
	RygelLMSCategoryContainerPrivate * priv;
	sqlite3_stmt* stmt_all;
	sqlite3_stmt* stmt_find_object;
	gchar* child_prefix;
	gchar* ref_prefix;
};

struct _RygelLMSCategoryContainerClass {
	RygelMediaContainerClass parent_class;
	RygelMediaObject* (*object_from_statement) (RygelLMSCategoryContainer* self, sqlite3_stmt* statement);
	gchar* (*get_sql_all_with_filter) (RygelLMSCategoryContainer* self, const gchar* filter);
	gchar* (*get_sql_count_with_filter) (RygelLMSCategoryContainer* self, const gchar* filter);
	guint (*get_child_count_with_filter) (RygelLMSCategoryContainer* self, const gchar* where_filter, GValueArray* args);
	RygelMediaObjects* (*get_children_with_filter) (RygelLMSCategoryContainer* self, const gchar* where_filter, GValueArray* args, const gchar* sort_criteria, guint offset, guint max_count);
};

struct _RygelLMSImageYears {
	RygelLMSCategoryContainer parent_instance;
	RygelLMSImageYearsPrivate * priv;
};

struct _RygelLMSImageYearsClass {
	RygelLMSCategoryContainerClass parent_class;
};


static gpointer rygel_lms_image_years_parent_class = NULL;

GType rygel_lms_category_container_get_type (void) G_GNUC_CONST;
GType rygel_lms_image_years_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_LMS_IMAGE_YEARS_DUMMY_PROPERTY
};
#define RYGEL_LMS_IMAGE_YEARS_SQL_ALL "SELECT DISTINCT(strftime('%Y', images.date, 'unixepoch')) as year " "FROM images " "LIMIT ? OFFSET ?;"
#define RYGEL_LMS_IMAGE_YEARS_SQL_COUNT "SELECT COUNT(DISTINCT(strftime('%Y', images.date, 'unixepoch'))) " "FROM images;"
#define RYGEL_LMS_IMAGE_YEARS_SQL_FIND_OBJECT "SELECT strftime('%Y', images.date, 'unixepoch') as year " "FROM images " "WHERE year = CAST(? AS TEXT)"
static RygelMediaObject* rygel_lms_image_years_real_object_from_statement (RygelLMSCategoryContainer* base, sqlite3_stmt* statement);
gpointer rygel_lms_database_ref (gpointer instance);
void rygel_lms_database_unref (gpointer instance);
GParamSpec* rygel_lms_param_spec_database (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_lms_value_set_database (GValue* value, gpointer v_object);
void rygel_lms_value_take_database (GValue* value, gpointer v_object);
gpointer rygel_lms_value_get_database (const GValue* value);
GType rygel_lms_database_get_type (void) G_GNUC_CONST;
RygelLMSDatabase* rygel_lms_category_container_get_lms_db (RygelLMSCategoryContainer* self);
RygelLMSImageYear* rygel_lms_image_year_new (RygelMediaContainer* parent, const gchar* year, RygelLMSDatabase* lms_db);
RygelLMSImageYear* rygel_lms_image_year_construct (GType object_type, RygelMediaContainer* parent, const gchar* year, RygelLMSDatabase* lms_db);
GType rygel_lms_image_year_get_type (void) G_GNUC_CONST;
RygelLMSImageYears* rygel_lms_image_years_new (RygelMediaContainer* parent, RygelLMSDatabase* lms_db);
RygelLMSImageYears* rygel_lms_image_years_construct (GType object_type, RygelMediaContainer* parent, RygelLMSDatabase* lms_db);
RygelLMSCategoryContainer* rygel_lms_category_container_construct (GType object_type, const gchar* db_id, RygelMediaContainer* parent, const gchar* title, RygelLMSDatabase* lms_db, const gchar* sql_all, const gchar* sql_find_object, const gchar* sql_count);


static RygelMediaObject* rygel_lms_image_years_real_object_from_statement (RygelLMSCategoryContainer* base, sqlite3_stmt* statement) {
	RygelLMSImageYears * self;
	RygelMediaObject* result = NULL;
	sqlite3_stmt* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	RygelLMSDatabase* _tmp2_ = NULL;
	RygelLMSDatabase* _tmp3_ = NULL;
	RygelLMSImageYear* _tmp4_ = NULL;
	self = (RygelLMSImageYears*) base;
	g_return_val_if_fail (statement != NULL, NULL);
	_tmp0_ = statement;
	_tmp1_ = sqlite3_column_text (_tmp0_, 0);
	_tmp2_ = rygel_lms_category_container_get_lms_db ((RygelLMSCategoryContainer*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = rygel_lms_image_year_new ((RygelMediaContainer*) self, _tmp1_, _tmp3_);
	result = (RygelMediaObject*) _tmp4_;
	return result;
}


RygelLMSImageYears* rygel_lms_image_years_construct (GType object_type, RygelMediaContainer* parent, RygelLMSDatabase* lms_db) {
	RygelLMSImageYears * self = NULL;
	RygelMediaContainer* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	RygelLMSDatabase* _tmp2_ = NULL;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (lms_db != NULL, NULL);
	_tmp0_ = parent;
	_tmp1_ = _ ("Years");
	_tmp2_ = lms_db;
	self = (RygelLMSImageYears*) rygel_lms_category_container_construct (object_type, "years", _tmp0_, _tmp1_, _tmp2_, RYGEL_LMS_IMAGE_YEARS_SQL_ALL, RYGEL_LMS_IMAGE_YEARS_SQL_FIND_OBJECT, RYGEL_LMS_IMAGE_YEARS_SQL_COUNT);
	return self;
}


RygelLMSImageYears* rygel_lms_image_years_new (RygelMediaContainer* parent, RygelLMSDatabase* lms_db) {
	return rygel_lms_image_years_construct (RYGEL_LMS_TYPE_IMAGE_YEARS, parent, lms_db);
}


static void rygel_lms_image_years_class_init (RygelLMSImageYearsClass * klass) {
	rygel_lms_image_years_parent_class = g_type_class_peek_parent (klass);
	RYGEL_LMS_CATEGORY_CONTAINER_CLASS (klass)->object_from_statement = rygel_lms_image_years_real_object_from_statement;
}


static void rygel_lms_image_years_instance_init (RygelLMSImageYears * self) {
}


GType rygel_lms_image_years_get_type (void) {
	static volatile gsize rygel_lms_image_years_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_lms_image_years_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelLMSImageYearsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_lms_image_years_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelLMSImageYears), 0, (GInstanceInitFunc) rygel_lms_image_years_instance_init, NULL };
		GType rygel_lms_image_years_type_id;
		rygel_lms_image_years_type_id = g_type_register_static (RYGEL_LMS_TYPE_CATEGORY_CONTAINER, "RygelLMSImageYears", &g_define_type_info, 0);
		g_once_init_leave (&rygel_lms_image_years_type_id__volatile, rygel_lms_image_years_type_id);
	}
	return rygel_lms_image_years_type_id__volatile;
}


