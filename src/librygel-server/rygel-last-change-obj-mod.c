/* rygel-last-change-obj-mod.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-last-change-obj-mod.vala, do not modify */

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

#define RYGEL_TYPE_LAST_CHANGE_OBJ_MOD (rygel_last_change_obj_mod_get_type ())
#define RYGEL_LAST_CHANGE_OBJ_MOD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_LAST_CHANGE_OBJ_MOD, RygelLastChangeObjMod))
#define RYGEL_LAST_CHANGE_OBJ_MOD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_LAST_CHANGE_OBJ_MOD, RygelLastChangeObjModClass))
#define RYGEL_IS_LAST_CHANGE_OBJ_MOD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_LAST_CHANGE_OBJ_MOD))
#define RYGEL_IS_LAST_CHANGE_OBJ_MOD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_LAST_CHANGE_OBJ_MOD))
#define RYGEL_LAST_CHANGE_OBJ_MOD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_LAST_CHANGE_OBJ_MOD, RygelLastChangeObjModClass))

typedef struct _RygelLastChangeObjMod RygelLastChangeObjMod;
typedef struct _RygelLastChangeObjModClass RygelLastChangeObjModClass;
typedef struct _RygelLastChangeObjModPrivate RygelLastChangeObjModPrivate;
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

struct _RygelLastChangeObjMod {
	RygelLastChangeEntry parent_instance;
	RygelLastChangeObjModPrivate * priv;
};

struct _RygelLastChangeObjModClass {
	RygelLastChangeEntryClass parent_class;
};

struct _RygelLastChangeObjModPrivate {
	gboolean sub_tree_update;
};


static gpointer rygel_last_change_obj_mod_parent_class = NULL;

GType rygel_last_change_entry_get_type (void) G_GNUC_CONST;
GType rygel_last_change_obj_mod_get_type (void) G_GNUC_CONST;
#define RYGEL_LAST_CHANGE_OBJ_MOD_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_LAST_CHANGE_OBJ_MOD, RygelLastChangeObjModPrivate))
enum  {
	RYGEL_LAST_CHANGE_OBJ_MOD_DUMMY_PROPERTY
};
RygelLastChangeObjMod* rygel_last_change_obj_mod_new (const gchar* id, guint update_id, gboolean sub_tree_update);
RygelLastChangeObjMod* rygel_last_change_obj_mod_construct (GType object_type, const gchar* id, guint update_id, gboolean sub_tree_update);
RygelLastChangeEntry* rygel_last_change_entry_construct (GType object_type, const gchar* tag, const gchar* id, guint update_id);
static gchar* rygel_last_change_obj_mod_real_additional_info (RygelLastChangeEntry* base);
static void rygel_last_change_obj_mod_finalize (GObject* obj);


RygelLastChangeObjMod* rygel_last_change_obj_mod_construct (GType object_type, const gchar* id, guint update_id, gboolean sub_tree_update) {
	RygelLastChangeObjMod * self = NULL;
	const gchar* _tmp0_ = NULL;
	guint _tmp1_ = 0U;
	gboolean _tmp2_ = FALSE;
#line 27 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	g_return_val_if_fail (id != NULL, NULL);
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp0_ = id;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp1_ = update_id;
#line 30 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	self = (RygelLastChangeObjMod*) rygel_last_change_entry_construct (object_type, "objMod", _tmp0_, _tmp1_);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp2_ = sub_tree_update;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	self->priv->sub_tree_update = _tmp2_;
#line 27 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	return self;
#line 113 "rygel-last-change-obj-mod.c"
}


RygelLastChangeObjMod* rygel_last_change_obj_mod_new (const gchar* id, guint update_id, gboolean sub_tree_update) {
#line 27 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	return rygel_last_change_obj_mod_construct (RYGEL_TYPE_LAST_CHANGE_OBJ_MOD, id, update_id, sub_tree_update);
#line 120 "rygel-last-change-obj-mod.c"
}


static gchar* rygel_last_change_obj_mod_real_additional_info (RygelLastChangeEntry* base) {
	RygelLastChangeObjMod * self;
	gchar* result = NULL;
	GString* str = NULL;
	GString* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	gchar* st_update = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	GString* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	GString* _tmp10_ = NULL;
	const gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	self = (RygelLastChangeObjMod*) base;
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp0_ = g_string_new ("");
#line 36 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	str = _tmp0_;
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp2_ = self->priv->sub_tree_update;
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	if (_tmp2_) {
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
		_tmp1_ = "1";
#line 154 "rygel-last-change-obj-mod.c"
	} else {
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
		_tmp1_ = "0";
#line 158 "rygel-last-change-obj-mod.c"
	}
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp3_ = _tmp1_;
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp4_ = g_strdup (_tmp3_);
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	st_update = _tmp4_;
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp5_ = str;
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp6_ = g_strconcat ("stUpdate=\"", st_update, NULL);
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp7_ = _tmp6_;
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp8_ = g_strconcat (_tmp7_, "\"", NULL);
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp9_ = _tmp8_;
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	g_string_append (_tmp5_, _tmp9_);
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_g_free0 (_tmp9_);
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_g_free0 (_tmp7_);
#line 41 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp10_ = str;
#line 41 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp11_ = _tmp10_->str;
#line 41 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_tmp12_ = g_strdup (_tmp11_);
#line 41 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	result = _tmp12_;
#line 41 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_g_free0 (st_update);
#line 41 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	_g_string_free0 (str);
#line 41 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	return result;
#line 196 "rygel-last-change-obj-mod.c"
}


static void rygel_last_change_obj_mod_class_init (RygelLastChangeObjModClass * klass) {
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	rygel_last_change_obj_mod_parent_class = g_type_class_peek_parent (klass);
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	g_type_class_add_private (klass, sizeof (RygelLastChangeObjModPrivate));
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	RYGEL_LAST_CHANGE_ENTRY_CLASS (klass)->additional_info = rygel_last_change_obj_mod_real_additional_info;
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_last_change_obj_mod_finalize;
#line 209 "rygel-last-change-obj-mod.c"
}


static void rygel_last_change_obj_mod_instance_init (RygelLastChangeObjMod * self) {
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	self->priv = RYGEL_LAST_CHANGE_OBJ_MOD_GET_PRIVATE (self);
#line 216 "rygel-last-change-obj-mod.c"
}


static void rygel_last_change_obj_mod_finalize (GObject* obj) {
	RygelLastChangeObjMod * self;
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_LAST_CHANGE_OBJ_MOD, RygelLastChangeObjMod);
#line 24 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-last-change-obj-mod.vala"
	G_OBJECT_CLASS (rygel_last_change_obj_mod_parent_class)->finalize (obj);
#line 226 "rygel-last-change-obj-mod.c"
}


GType rygel_last_change_obj_mod_get_type (void) {
	static volatile gsize rygel_last_change_obj_mod_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_last_change_obj_mod_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelLastChangeObjModClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_last_change_obj_mod_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelLastChangeObjMod), 0, (GInstanceInitFunc) rygel_last_change_obj_mod_instance_init, NULL };
		GType rygel_last_change_obj_mod_type_id;
		rygel_last_change_obj_mod_type_id = g_type_register_static (RYGEL_TYPE_LAST_CHANGE_ENTRY, "RygelLastChangeObjMod", &g_define_type_info, 0);
		g_once_init_leave (&rygel_last_change_obj_mod_type_id__volatile, rygel_last_change_obj_mod_type_id);
	}
	return rygel_last_change_obj_mod_type_id__volatile;
}



