/* rygel-lms-sql-function.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-lms-sql-function.vala, do not modify */

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


#define RYGEL_LMS_TYPE_SQL_OPERATOR (rygel_lms_sql_operator_get_type ())
#define RYGEL_LMS_SQL_OPERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_LMS_TYPE_SQL_OPERATOR, RygelLMSSqlOperator))
#define RYGEL_LMS_SQL_OPERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_LMS_TYPE_SQL_OPERATOR, RygelLMSSqlOperatorClass))
#define RYGEL_LMS_IS_SQL_OPERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_LMS_TYPE_SQL_OPERATOR))
#define RYGEL_LMS_IS_SQL_OPERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_LMS_TYPE_SQL_OPERATOR))
#define RYGEL_LMS_SQL_OPERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_LMS_TYPE_SQL_OPERATOR, RygelLMSSqlOperatorClass))

typedef struct _RygelLMSSqlOperator RygelLMSSqlOperator;
typedef struct _RygelLMSSqlOperatorClass RygelLMSSqlOperatorClass;
typedef struct _RygelLMSSqlOperatorPrivate RygelLMSSqlOperatorPrivate;

#define RYGEL_LMS_TYPE_SQL_FUNCTION (rygel_lms_sql_function_get_type ())
#define RYGEL_LMS_SQL_FUNCTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_LMS_TYPE_SQL_FUNCTION, RygelLMSSqlFunction))
#define RYGEL_LMS_SQL_FUNCTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_LMS_TYPE_SQL_FUNCTION, RygelLMSSqlFunctionClass))
#define RYGEL_LMS_IS_SQL_FUNCTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_LMS_TYPE_SQL_FUNCTION))
#define RYGEL_LMS_IS_SQL_FUNCTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_LMS_TYPE_SQL_FUNCTION))
#define RYGEL_LMS_SQL_FUNCTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_LMS_TYPE_SQL_FUNCTION, RygelLMSSqlFunctionClass))

typedef struct _RygelLMSSqlFunction RygelLMSSqlFunction;
typedef struct _RygelLMSSqlFunctionClass RygelLMSSqlFunctionClass;
typedef struct _RygelLMSSqlFunctionPrivate RygelLMSSqlFunctionPrivate;

struct _RygelLMSSqlOperator {
	GObject parent_instance;
	RygelLMSSqlOperatorPrivate * priv;
	gchar* name;
	gchar* arg;
	gchar* collate;
};

struct _RygelLMSSqlOperatorClass {
	GObjectClass parent_class;
	gchar* (*to_string) (RygelLMSSqlOperator* self);
};

struct _RygelLMSSqlFunction {
	RygelLMSSqlOperator parent_instance;
	RygelLMSSqlFunctionPrivate * priv;
};

struct _RygelLMSSqlFunctionClass {
	RygelLMSSqlOperatorClass parent_class;
};


static gpointer rygel_lms_sql_function_parent_class = NULL;

GType rygel_lms_sql_operator_get_type (void) G_GNUC_CONST;
GType rygel_lms_sql_function_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_LMS_SQL_FUNCTION_DUMMY_PROPERTY
};
RygelLMSSqlFunction* rygel_lms_sql_function_new (const gchar* name, const gchar* arg);
RygelLMSSqlFunction* rygel_lms_sql_function_construct (GType object_type, const gchar* name, const gchar* arg);
RygelLMSSqlOperator* rygel_lms_sql_operator_new (const gchar* name, const gchar* arg, const gchar* collate);
RygelLMSSqlOperator* rygel_lms_sql_operator_construct (GType object_type, const gchar* name, const gchar* arg, const gchar* collate);
static gchar* rygel_lms_sql_function_real_to_string (RygelLMSSqlOperator* base);


RygelLMSSqlFunction* rygel_lms_sql_function_construct (GType object_type, const gchar* name, const gchar* arg) {
	RygelLMSSqlFunction * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (arg != NULL, NULL);
	_tmp0_ = name;
	_tmp1_ = arg;
	self = (RygelLMSSqlFunction*) rygel_lms_sql_operator_construct (object_type, _tmp0_, _tmp1_, "");
	return self;
}


RygelLMSSqlFunction* rygel_lms_sql_function_new (const gchar* name, const gchar* arg) {
	return rygel_lms_sql_function_construct (RYGEL_LMS_TYPE_SQL_FUNCTION, name, arg);
}


static gchar* rygel_lms_sql_function_real_to_string (RygelLMSSqlOperator* base) {
	RygelLMSSqlFunction * self;
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	self = (RygelLMSSqlFunction*) base;
	_tmp0_ = ((RygelLMSSqlOperator*) self)->name;
	_tmp1_ = ((RygelLMSSqlOperator*) self)->arg;
	_tmp2_ = g_strdup_printf ("%s(%s,?)", _tmp0_, _tmp1_);
	result = _tmp2_;
	return result;
}


static void rygel_lms_sql_function_class_init (RygelLMSSqlFunctionClass * klass) {
	rygel_lms_sql_function_parent_class = g_type_class_peek_parent (klass);
	RYGEL_LMS_SQL_OPERATOR_CLASS (klass)->to_string = rygel_lms_sql_function_real_to_string;
}


static void rygel_lms_sql_function_instance_init (RygelLMSSqlFunction * self) {
}


GType rygel_lms_sql_function_get_type (void) {
	static volatile gsize rygel_lms_sql_function_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_lms_sql_function_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelLMSSqlFunctionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_lms_sql_function_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelLMSSqlFunction), 0, (GInstanceInitFunc) rygel_lms_sql_function_instance_init, NULL };
		GType rygel_lms_sql_function_type_id;
		rygel_lms_sql_function_type_id = g_type_register_static (RYGEL_LMS_TYPE_SQL_OPERATOR, "RygelLMSSqlFunction", &g_define_type_info, 0);
		g_once_init_leave (&rygel_lms_sql_function_type_id__volatile, rygel_lms_sql_function_type_id);
	}
	return rygel_lms_sql_function_type_id__volatile;
}


