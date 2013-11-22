/* rygel-media-export-sql-function.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-media-export-sql-function.vala, do not modify */

/*
 * Copyright (C) 2010 Jens Georg <mail@jensge.org>.
 *
 * Author: Jens Georg <mail@jensge.org>
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


#define RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR (rygel_media_export_sql_operator_get_type ())
#define RYGEL_MEDIA_EXPORT_SQL_OPERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR, RygelMediaExportSqlOperator))
#define RYGEL_MEDIA_EXPORT_SQL_OPERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR, RygelMediaExportSqlOperatorClass))
#define RYGEL_MEDIA_EXPORT_IS_SQL_OPERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR))
#define RYGEL_MEDIA_EXPORT_IS_SQL_OPERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR))
#define RYGEL_MEDIA_EXPORT_SQL_OPERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR, RygelMediaExportSqlOperatorClass))

typedef struct _RygelMediaExportSqlOperator RygelMediaExportSqlOperator;
typedef struct _RygelMediaExportSqlOperatorClass RygelMediaExportSqlOperatorClass;
typedef struct _RygelMediaExportSqlOperatorPrivate RygelMediaExportSqlOperatorPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_SQL_FUNCTION (rygel_media_export_sql_function_get_type ())
#define RYGEL_MEDIA_EXPORT_SQL_FUNCTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQL_FUNCTION, RygelMediaExportSqlFunction))
#define RYGEL_MEDIA_EXPORT_SQL_FUNCTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_SQL_FUNCTION, RygelMediaExportSqlFunctionClass))
#define RYGEL_MEDIA_EXPORT_IS_SQL_FUNCTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQL_FUNCTION))
#define RYGEL_MEDIA_EXPORT_IS_SQL_FUNCTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_SQL_FUNCTION))
#define RYGEL_MEDIA_EXPORT_SQL_FUNCTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_SQL_FUNCTION, RygelMediaExportSqlFunctionClass))

typedef struct _RygelMediaExportSqlFunction RygelMediaExportSqlFunction;
typedef struct _RygelMediaExportSqlFunctionClass RygelMediaExportSqlFunctionClass;
typedef struct _RygelMediaExportSqlFunctionPrivate RygelMediaExportSqlFunctionPrivate;

struct _RygelMediaExportSqlOperator {
	GObject parent_instance;
	RygelMediaExportSqlOperatorPrivate * priv;
	gchar* name;
	gchar* arg;
	gchar* collate;
};

struct _RygelMediaExportSqlOperatorClass {
	GObjectClass parent_class;
	gchar* (*to_string) (RygelMediaExportSqlOperator* self);
};

struct _RygelMediaExportSqlFunction {
	RygelMediaExportSqlOperator parent_instance;
	RygelMediaExportSqlFunctionPrivate * priv;
};

struct _RygelMediaExportSqlFunctionClass {
	RygelMediaExportSqlOperatorClass parent_class;
};


static gpointer rygel_media_export_sql_function_parent_class = NULL;

GType rygel_media_export_sql_operator_get_type (void) G_GNUC_CONST;
GType rygel_media_export_sql_function_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MEDIA_EXPORT_SQL_FUNCTION_DUMMY_PROPERTY
};
RygelMediaExportSqlFunction* rygel_media_export_sql_function_new (const gchar* name, const gchar* arg);
RygelMediaExportSqlFunction* rygel_media_export_sql_function_construct (GType object_type, const gchar* name, const gchar* arg);
RygelMediaExportSqlOperator* rygel_media_export_sql_operator_new (const gchar* name, const gchar* arg, const gchar* collate);
RygelMediaExportSqlOperator* rygel_media_export_sql_operator_construct (GType object_type, const gchar* name, const gchar* arg, const gchar* collate);
static gchar* rygel_media_export_sql_function_real_to_string (RygelMediaExportSqlOperator* base);


RygelMediaExportSqlFunction* rygel_media_export_sql_function_construct (GType object_type, const gchar* name, const gchar* arg) {
	RygelMediaExportSqlFunction * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (arg != NULL, NULL);
	_tmp0_ = name;
	_tmp1_ = arg;
	self = (RygelMediaExportSqlFunction*) rygel_media_export_sql_operator_construct (object_type, _tmp0_, _tmp1_, "");
	return self;
}


RygelMediaExportSqlFunction* rygel_media_export_sql_function_new (const gchar* name, const gchar* arg) {
	return rygel_media_export_sql_function_construct (RYGEL_MEDIA_EXPORT_TYPE_SQL_FUNCTION, name, arg);
}


static gchar* rygel_media_export_sql_function_real_to_string (RygelMediaExportSqlOperator* base) {
	RygelMediaExportSqlFunction * self;
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	self = (RygelMediaExportSqlFunction*) base;
	_tmp0_ = ((RygelMediaExportSqlOperator*) self)->name;
	_tmp1_ = ((RygelMediaExportSqlOperator*) self)->arg;
	_tmp2_ = g_strdup_printf ("%s(%s,?)", _tmp0_, _tmp1_);
	result = _tmp2_;
	return result;
}


static void rygel_media_export_sql_function_class_init (RygelMediaExportSqlFunctionClass * klass) {
	rygel_media_export_sql_function_parent_class = g_type_class_peek_parent (klass);
	RYGEL_MEDIA_EXPORT_SQL_OPERATOR_CLASS (klass)->to_string = rygel_media_export_sql_function_real_to_string;
}


static void rygel_media_export_sql_function_instance_init (RygelMediaExportSqlFunction * self) {
}


GType rygel_media_export_sql_function_get_type (void) {
	static volatile gsize rygel_media_export_sql_function_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_export_sql_function_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaExportSqlFunctionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_export_sql_function_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaExportSqlFunction), 0, (GInstanceInitFunc) rygel_media_export_sql_function_instance_init, NULL };
		GType rygel_media_export_sql_function_type_id;
		rygel_media_export_sql_function_type_id = g_type_register_static (RYGEL_MEDIA_EXPORT_TYPE_SQL_OPERATOR, "RygelMediaExportSqlFunction", &g_define_type_info, 0);
		g_once_init_leave (&rygel_media_export_sql_function_type_id__volatile, rygel_media_export_sql_function_type_id);
	}
	return rygel_media_export_sql_function_type_id__volatile;
}



