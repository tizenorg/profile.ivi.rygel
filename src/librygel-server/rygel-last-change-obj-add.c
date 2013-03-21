/* rygel-last-change-obj-add.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-last-change-obj-add.vala, do not modify */

/*
 * Copyright (C) 2012 Openismus GmbH
 *
 * Author: Krzesimir Nowak <krnowak@openismus.com>
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


#define RYGEL_TYPE_LAST_CHANGE_ENTRY (rygel_last_change_entry_get_type ())
#define RYGEL_LAST_CHANGE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_LAST_CHANGE_ENTRY, RygelLastChangeEntry))
#define RYGEL_LAST_CHANGE_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_LAST_CHANGE_ENTRY, RygelLastChangeEntryClass))
#define RYGEL_IS_LAST_CHANGE_ENTRY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_LAST_CHANGE_ENTRY))
#define RYGEL_IS_LAST_CHANGE_ENTRY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_LAST_CHANGE_ENTRY))
#define RYGEL_LAST_CHANGE_ENTRY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_LAST_CHANGE_ENTRY, RygelLastChangeEntryClass))

typedef struct _RygelLastChangeEntry RygelLastChangeEntry;
typedef struct _RygelLastChangeEntryClass RygelLastChangeEntryClass;
typedef struct _RygelLastChangeEntryPrivate RygelLastChangeEntryPrivate;

#define RYGEL_TYPE_LAST_CHANGE_OBJ_ADD (rygel_last_change_obj_add_get_type ())
#define RYGEL_LAST_CHANGE_OBJ_ADD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_LAST_CHANGE_OBJ_ADD, RygelLastChangeObjAdd))
#define RYGEL_LAST_CHANGE_OBJ_ADD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_LAST_CHANGE_OBJ_ADD, RygelLastChangeObjAddClass))
#define RYGEL_IS_LAST_CHANGE_OBJ_ADD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_LAST_CHANGE_OBJ_ADD))
#define RYGEL_IS_LAST_CHANGE_OBJ_ADD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_LAST_CHANGE_OBJ_ADD))
#define RYGEL_LAST_CHANGE_OBJ_ADD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_LAST_CHANGE_OBJ_ADD, RygelLastChangeObjAddClass))

typedef struct _RygelLastChangeObjAdd RygelLastChangeObjAdd;
typedef struct _RygelLastChangeObjAddClass RygelLastChangeObjAddClass;
typedef struct _RygelLastChangeObjAddPrivate RygelLastChangeObjAddPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

struct _RygelLastChangeEntry {
	GObject parent_instance;
	RygelLastChangeEntryPrivate * priv;
};

struct _RygelLastChangeEntryClass {
	GObjectClass parent_class;
	gchar* (*additional_info) (RygelLastChangeEntry* self);
};

struct _RygelLastChangeObjAdd {
	RygelLastChangeEntry parent_instance;
	RygelLastChangeObjAddPrivate * priv;
};

struct _RygelLastChangeObjAddClass {
	RygelLastChangeEntryClass parent_class;
};

struct _RygelLastChangeObjAddPrivate {
	gboolean sub_tree_update;
	gchar* parent_id;
	gchar* upnp_class;
};


static gpointer rygel_last_change_obj_add_parent_class = NULL;

GType rygel_last_change_entry_get_type (void) G_GNUC_CONST;
GType rygel_last_change_obj_add_get_type (void) G_GNUC_CONST;
#define RYGEL_LAST_CHANGE_OBJ_ADD_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_LAST_CHANGE_OBJ_ADD, RygelLastChangeObjAddPrivate))
enum  {
	RYGEL_LAST_CHANGE_OBJ_ADD_DUMMY_PROPERTY
};
RygelLastChangeObjAdd* rygel_last_change_obj_add_new (const gchar* id, guint update_id, gboolean sub_tree_update, const gchar* parent_id, const gchar* upnp_class);
RygelLastChangeObjAdd* rygel_last_change_obj_add_construct (GType object_type, const gchar* id, guint update_id, gboolean sub_tree_update, const gchar* parent_id, const gchar* upnp_class);
RygelLastChangeEntry* rygel_last_change_entry_construct (GType object_type, const gchar* tag, const gchar* id, guint update_id);
static gchar* rygel_last_change_obj_add_real_additional_info (RygelLastChangeEntry* base);
static void rygel_last_change_obj_add_finalize (GObject* obj);


RygelLastChangeObjAdd* rygel_last_change_obj_add_construct (GType object_type, const gchar* id, guint update_id, gboolean sub_tree_update, const gchar* parent_id, const gchar* upnp_class) {
	RygelLastChangeObjAdd * self = NULL;
	const gchar* _tmp0_;
	guint _tmp1_;
	gboolean _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	const gchar* _tmp5_;
	gchar* _tmp6_;
	g_return_val_if_fail (id != NULL, NULL);
	g_return_val_if_fail (parent_id != NULL, NULL);
	g_return_val_if_fail (upnp_class != NULL, NULL);
	_tmp0_ = id;
	_tmp1_ = update_id;
	self = (RygelLastChangeObjAdd*) rygel_last_change_entry_construct (object_type, "objAdd", _tmp0_, _tmp1_);
	_tmp2_ = sub_tree_update;
	self->priv->sub_tree_update = _tmp2_;
	_tmp3_ = parent_id;
	_tmp4_ = g_strdup (_tmp3_);
	_g_free0 (self->priv->parent_id);
	self->priv->parent_id = _tmp4_;
	_tmp5_ = upnp_class;
	_tmp6_ = g_strdup (_tmp5_);
	_g_free0 (self->priv->upnp_class);
	self->priv->upnp_class = _tmp6_;
	return self;
}


RygelLastChangeObjAdd* rygel_last_change_obj_add_new (const gchar* id, guint update_id, gboolean sub_tree_update, const gchar* parent_id, const gchar* upnp_class) {
	return rygel_last_change_obj_add_construct (RYGEL_TYPE_LAST_CHANGE_OBJ_ADD, id, update_id, sub_tree_update, parent_id, upnp_class);
}


static gchar* rygel_last_change_obj_add_real_additional_info (RygelLastChangeEntry* base) {
	RygelLastChangeObjAdd * self;
	gchar* result = NULL;
	GString* _tmp0_;
	GString* str;
	const gchar* _tmp1_ = NULL;
	gboolean _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* st_update;
	GString* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	const gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	const gchar* _tmp19_;
	gchar* _tmp20_;
	gchar* _tmp21_;
	gchar* _tmp22_;
	gchar* _tmp23_;
	GString* _tmp24_;
	const gchar* _tmp25_;
	gchar* _tmp26_;
	self = (RygelLastChangeObjAdd*) base;
	_tmp0_ = g_string_new ("");
	str = _tmp0_;
	_tmp2_ = self->priv->sub_tree_update;
	if (_tmp2_) {
		_tmp1_ = "1";
	} else {
		_tmp1_ = "0";
	}
	_tmp3_ = _tmp1_;
	_tmp4_ = g_strdup (_tmp3_);
	st_update = _tmp4_;
	_tmp5_ = str;
	_tmp6_ = g_strconcat ("stUpdate=\"", st_update, NULL);
	_tmp7_ = _tmp6_;
	_tmp8_ = g_strconcat (_tmp7_, "\" ", NULL);
	_tmp9_ = _tmp8_;
	_tmp10_ = g_strconcat (_tmp9_, "objParentID=\"", NULL);
	_tmp11_ = _tmp10_;
	_tmp12_ = self->priv->parent_id;
	_tmp13_ = g_strconcat (_tmp11_, _tmp12_, NULL);
	_tmp14_ = _tmp13_;
	_tmp15_ = g_strconcat (_tmp14_, "\" ", NULL);
	_tmp16_ = _tmp15_;
	_tmp17_ = g_strconcat (_tmp16_, "objClass=\"", NULL);
	_tmp18_ = _tmp17_;
	_tmp19_ = self->priv->upnp_class;
	_tmp20_ = g_strconcat (_tmp18_, _tmp19_, NULL);
	_tmp21_ = _tmp20_;
	_tmp22_ = g_strconcat (_tmp21_, "\"", NULL);
	_tmp23_ = _tmp22_;
	g_string_append (_tmp5_, _tmp23_);
	_g_free0 (_tmp23_);
	_g_free0 (_tmp21_);
	_g_free0 (_tmp18_);
	_g_free0 (_tmp16_);
	_g_free0 (_tmp14_);
	_g_free0 (_tmp11_);
	_g_free0 (_tmp9_);
	_g_free0 (_tmp7_);
	_tmp24_ = str;
	_tmp25_ = _tmp24_->str;
	_tmp26_ = g_strdup (_tmp25_);
	result = _tmp26_;
	_g_free0 (st_update);
	_g_string_free0 (str);
	return result;
}


static void rygel_last_change_obj_add_class_init (RygelLastChangeObjAddClass * klass) {
	rygel_last_change_obj_add_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelLastChangeObjAddPrivate));
	RYGEL_LAST_CHANGE_ENTRY_CLASS (klass)->additional_info = rygel_last_change_obj_add_real_additional_info;
	G_OBJECT_CLASS (klass)->finalize = rygel_last_change_obj_add_finalize;
}


static void rygel_last_change_obj_add_instance_init (RygelLastChangeObjAdd * self) {
	self->priv = RYGEL_LAST_CHANGE_OBJ_ADD_GET_PRIVATE (self);
}


static void rygel_last_change_obj_add_finalize (GObject* obj) {
	RygelLastChangeObjAdd * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_LAST_CHANGE_OBJ_ADD, RygelLastChangeObjAdd);
	_g_free0 (self->priv->parent_id);
	_g_free0 (self->priv->upnp_class);
	G_OBJECT_CLASS (rygel_last_change_obj_add_parent_class)->finalize (obj);
}


GType rygel_last_change_obj_add_get_type (void) {
	static volatile gsize rygel_last_change_obj_add_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_last_change_obj_add_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelLastChangeObjAddClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_last_change_obj_add_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelLastChangeObjAdd), 0, (GInstanceInitFunc) rygel_last_change_obj_add_instance_init, NULL };
		GType rygel_last_change_obj_add_type_id;
		rygel_last_change_obj_add_type_id = g_type_register_static (RYGEL_TYPE_LAST_CHANGE_ENTRY, "RygelLastChangeObjAdd", &g_define_type_info, 0);
		g_once_init_leave (&rygel_last_change_obj_add_type_id__volatile, rygel_last_change_obj_add_type_id);
	}
	return rygel_last_change_obj_add_type_id__volatile;
}



