/* rygel-lms-sql-operator.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-lms-sql-operator.vala, do not modify */

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
#include <libgupnp-av/gupnp-av.h>


#define RYGEL_LMS_TYPE_SQL_OPERATOR (rygel_lms_sql_operator_get_type ())
#define RYGEL_LMS_SQL_OPERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_LMS_TYPE_SQL_OPERATOR, RygelLMSSqlOperator))
#define RYGEL_LMS_SQL_OPERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_LMS_TYPE_SQL_OPERATOR, RygelLMSSqlOperatorClass))
#define RYGEL_LMS_IS_SQL_OPERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_LMS_TYPE_SQL_OPERATOR))
#define RYGEL_LMS_IS_SQL_OPERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_LMS_TYPE_SQL_OPERATOR))
#define RYGEL_LMS_SQL_OPERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_LMS_TYPE_SQL_OPERATOR, RygelLMSSqlOperatorClass))

typedef struct _RygelLMSSqlOperator RygelLMSSqlOperator;
typedef struct _RygelLMSSqlOperatorClass RygelLMSSqlOperatorClass;
typedef struct _RygelLMSSqlOperatorPrivate RygelLMSSqlOperatorPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

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


static gpointer rygel_lms_sql_operator_parent_class = NULL;

GType rygel_lms_sql_operator_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_LMS_SQL_OPERATOR_DUMMY_PROPERTY
};
RygelLMSSqlOperator* rygel_lms_sql_operator_new (const gchar* name, const gchar* arg, const gchar* collate);
RygelLMSSqlOperator* rygel_lms_sql_operator_construct (GType object_type, const gchar* name, const gchar* arg, const gchar* collate);
RygelLMSSqlOperator* rygel_lms_sql_operator_new_from_search_criteria_op (GUPnPSearchCriteriaOp op, const gchar* arg, const gchar* collate);
RygelLMSSqlOperator* rygel_lms_sql_operator_construct_from_search_criteria_op (GType object_type, GUPnPSearchCriteriaOp op, const gchar* arg, const gchar* collate);
gchar* rygel_lms_sql_operator_to_string (RygelLMSSqlOperator* self);
static gchar* rygel_lms_sql_operator_real_to_string (RygelLMSSqlOperator* self);
static void rygel_lms_sql_operator_finalize (GObject* obj);


RygelLMSSqlOperator* rygel_lms_sql_operator_construct (GType object_type, const gchar* name, const gchar* arg, const gchar* collate) {
	RygelLMSSqlOperator * self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (arg != NULL, NULL);
	g_return_val_if_fail (collate != NULL, NULL);
	self = (RygelLMSSqlOperator*) g_object_new (object_type, NULL);
	_tmp0_ = name;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->name);
	self->name = _tmp1_;
	_tmp2_ = arg;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 (self->arg);
	self->arg = _tmp3_;
	_tmp4_ = collate;
	_tmp5_ = g_strdup (_tmp4_);
	_g_free0 (self->collate);
	self->collate = _tmp5_;
	return self;
}


RygelLMSSqlOperator* rygel_lms_sql_operator_new (const gchar* name, const gchar* arg, const gchar* collate) {
	return rygel_lms_sql_operator_construct (RYGEL_LMS_TYPE_SQL_OPERATOR, name, arg, collate);
}


RygelLMSSqlOperator* rygel_lms_sql_operator_construct_from_search_criteria_op (GType object_type, GUPnPSearchCriteriaOp op, const gchar* arg, const gchar* collate) {
	RygelLMSSqlOperator * self = NULL;
	gchar* sql = NULL;
	GUPnPSearchCriteriaOp _tmp0_ = 0;
	const gchar* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	const gchar* _tmp9_ = NULL;
	g_return_val_if_fail (arg != NULL, NULL);
	g_return_val_if_fail (collate != NULL, NULL);
	sql = NULL;
	_tmp0_ = op;
	switch (_tmp0_) {
		case GUPNP_SEARCH_CRITERIA_OP_EQ:
		{
			gchar* _tmp1_ = NULL;
			_tmp1_ = g_strdup ("=");
			_g_free0 (sql);
			sql = _tmp1_;
			break;
		}
		case GUPNP_SEARCH_CRITERIA_OP_NEQ:
		{
			gchar* _tmp2_ = NULL;
			_tmp2_ = g_strdup ("!=");
			_g_free0 (sql);
			sql = _tmp2_;
			break;
		}
		case GUPNP_SEARCH_CRITERIA_OP_LESS:
		{
			gchar* _tmp3_ = NULL;
			_tmp3_ = g_strdup ("<");
			_g_free0 (sql);
			sql = _tmp3_;
			break;
		}
		case GUPNP_SEARCH_CRITERIA_OP_LEQ:
		{
			gchar* _tmp4_ = NULL;
			_tmp4_ = g_strdup ("<=");
			_g_free0 (sql);
			sql = _tmp4_;
			break;
		}
		case GUPNP_SEARCH_CRITERIA_OP_GREATER:
		{
			gchar* _tmp5_ = NULL;
			_tmp5_ = g_strdup (">");
			_g_free0 (sql);
			sql = _tmp5_;
			break;
		}
		case GUPNP_SEARCH_CRITERIA_OP_GEQ:
		{
			gchar* _tmp6_ = NULL;
			_tmp6_ = g_strdup (">=");
			_g_free0 (sql);
			sql = _tmp6_;
			break;
		}
		default:
		{
			g_assert_not_reached ();
		}
	}
	_tmp7_ = sql;
	_tmp8_ = arg;
	_tmp9_ = collate;
	self = (RygelLMSSqlOperator*) rygel_lms_sql_operator_construct (object_type, _tmp7_, _tmp8_, _tmp9_);
	_g_free0 (sql);
	return self;
}


RygelLMSSqlOperator* rygel_lms_sql_operator_new_from_search_criteria_op (GUPnPSearchCriteriaOp op, const gchar* arg, const gchar* collate) {
	return rygel_lms_sql_operator_construct_from_search_criteria_op (RYGEL_LMS_TYPE_SQL_OPERATOR, op, arg, collate);
}


static gchar* rygel_lms_sql_operator_real_to_string (RygelLMSSqlOperator* self) {
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	_tmp0_ = self->arg;
	_tmp1_ = self->name;
	_tmp2_ = self->collate;
	_tmp3_ = g_strdup_printf ("(%s %s ? %s)", _tmp0_, _tmp1_, _tmp2_);
	result = _tmp3_;
	return result;
}


gchar* rygel_lms_sql_operator_to_string (RygelLMSSqlOperator* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_LMS_SQL_OPERATOR_GET_CLASS (self)->to_string (self);
}


static void rygel_lms_sql_operator_class_init (RygelLMSSqlOperatorClass * klass) {
	rygel_lms_sql_operator_parent_class = g_type_class_peek_parent (klass);
	RYGEL_LMS_SQL_OPERATOR_CLASS (klass)->to_string = rygel_lms_sql_operator_real_to_string;
	G_OBJECT_CLASS (klass)->finalize = rygel_lms_sql_operator_finalize;
}


static void rygel_lms_sql_operator_instance_init (RygelLMSSqlOperator * self) {
}


static void rygel_lms_sql_operator_finalize (GObject* obj) {
	RygelLMSSqlOperator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_LMS_TYPE_SQL_OPERATOR, RygelLMSSqlOperator);
	_g_free0 (self->name);
	_g_free0 (self->arg);
	_g_free0 (self->collate);
	G_OBJECT_CLASS (rygel_lms_sql_operator_parent_class)->finalize (obj);
}


GType rygel_lms_sql_operator_get_type (void) {
	static volatile gsize rygel_lms_sql_operator_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_lms_sql_operator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelLMSSqlOperatorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_lms_sql_operator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelLMSSqlOperator), 0, (GInstanceInitFunc) rygel_lms_sql_operator_instance_init, NULL };
		GType rygel_lms_sql_operator_type_id;
		rygel_lms_sql_operator_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelLMSSqlOperator", &g_define_type_info, 0);
		g_once_init_leave (&rygel_lms_sql_operator_type_id__volatile, rygel_lms_sql_operator_type_id);
	}
	return rygel_lms_sql_operator_type_id__volatile;
}



