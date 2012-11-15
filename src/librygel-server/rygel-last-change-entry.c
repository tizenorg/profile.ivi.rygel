/* rygel-last-change-entry.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-last-change-entry.vala, do not modify */

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

struct _RygelLastChangeEntryPrivate {
	gchar* tag;
	gchar* id;
	guint update_id;
};


static gpointer rygel_last_change_entry_parent_class = NULL;

GType rygel_last_change_entry_get_type (void) G_GNUC_CONST;
#define RYGEL_LAST_CHANGE_ENTRY_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_LAST_CHANGE_ENTRY, RygelLastChangeEntryPrivate))
enum  {
	RYGEL_LAST_CHANGE_ENTRY_DUMMY_PROPERTY
};
RygelLastChangeEntry* rygel_last_change_entry_construct (GType object_type, const gchar* tag, const gchar* id, guint update_id);
gchar* rygel_last_change_entry_additional_info (RygelLastChangeEntry* self);
static gchar* rygel_last_change_entry_real_additional_info (RygelLastChangeEntry* self);
gchar* rygel_last_change_entry_to_string (RygelLastChangeEntry* self);
static void rygel_last_change_entry_finalize (GObject* obj);


RygelLastChangeEntry* rygel_last_change_entry_construct (GType object_type, const gchar* tag, const gchar* id, guint update_id) {
	RygelLastChangeEntry * self = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	guint _tmp4_;
#line 30 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	g_return_val_if_fail (tag != NULL, NULL);
#line 30 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	g_return_val_if_fail (id != NULL, NULL);
#line 30 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	self = (RygelLastChangeEntry*) g_object_new (object_type, NULL);
#line 31 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp0_ = tag;
#line 31 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 31 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (self->priv->tag);
#line 31 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	self->priv->tag = _tmp1_;
#line 32 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp2_ = id;
#line 32 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp3_ = g_strdup (_tmp2_);
#line 32 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (self->priv->id);
#line 32 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	self->priv->id = _tmp3_;
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp4_ = update_id;
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	self->priv->update_id = _tmp4_;
#line 30 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	return self;
#line 110 "rygel-last-change-entry.c"
}


static gchar* rygel_last_change_entry_real_additional_info (RygelLastChangeEntry* self) {
#line 36 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	g_critical ("Type `%s' does not implement abstract method `rygel_last_change_entry_additional_info'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
#line 36 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	return NULL;
#line 119 "rygel-last-change-entry.c"
}


gchar* rygel_last_change_entry_additional_info (RygelLastChangeEntry* self) {
#line 36 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 36 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	return RYGEL_LAST_CHANGE_ENTRY_GET_CLASS (self)->additional_info (self);
#line 128 "rygel-last-change-entry.c"
}


gchar* rygel_last_change_entry_to_string (RygelLastChangeEntry* self) {
	gchar* result = NULL;
	GString* _tmp0_;
	GString* str;
	gchar* _tmp1_ = NULL;
	gchar* info;
	GString* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	const gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	guint _tmp17_;
	gchar* _tmp18_ = NULL;
	gchar* _tmp19_;
	gchar* _tmp20_;
	gchar* _tmp21_;
	gchar* _tmp22_;
	gchar* _tmp23_;
	const gchar* _tmp24_;
	gint _tmp25_;
	gint _tmp26_;
	GString* _tmp31_;
	GString* _tmp32_;
	const gchar* _tmp33_;
	gchar* _tmp34_;
#line 38 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 39 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp0_ = g_string_new ("");
#line 39 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	str = _tmp0_;
#line 40 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp1_ = rygel_last_change_entry_additional_info (self);
#line 40 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	info = _tmp1_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp2_ = str;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp3_ = self->priv->tag;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp4_ = g_strconcat ("<", _tmp3_, NULL);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp5_ = _tmp4_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp6_ = g_strconcat (_tmp5_, " ", NULL);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp7_ = _tmp6_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp8_ = g_strconcat (_tmp7_, "objID=\"", NULL);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp9_ = _tmp8_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp10_ = self->priv->id;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp11_ = g_strconcat (_tmp9_, _tmp10_, NULL);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp12_ = _tmp11_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp13_ = g_strconcat (_tmp12_, "\" ", NULL);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp14_ = _tmp13_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp15_ = g_strconcat (_tmp14_, "updateID=\"", NULL);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp16_ = _tmp15_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp17_ = self->priv->update_id;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp18_ = g_strdup_printf ("%u", _tmp17_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp19_ = _tmp18_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp20_ = g_strconcat (_tmp16_, _tmp19_, NULL);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp21_ = _tmp20_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp22_ = g_strconcat (_tmp21_, "\"", NULL);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp23_ = _tmp22_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	g_string_append (_tmp2_, _tmp23_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (_tmp23_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (_tmp21_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (_tmp19_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (_tmp16_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (_tmp14_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (_tmp12_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (_tmp9_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (_tmp7_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (_tmp5_);
#line 46 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp24_ = info;
#line 46 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp25_ = strlen (_tmp24_);
#line 46 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp26_ = _tmp25_;
#line 46 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	if (_tmp26_ > 0) {
#line 249 "rygel-last-change-entry.c"
		GString* _tmp27_;
		const gchar* _tmp28_;
		gchar* _tmp29_;
		gchar* _tmp30_;
#line 47 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
		_tmp27_ = str;
#line 47 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
		_tmp28_ = info;
#line 47 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
		_tmp29_ = g_strconcat (" ", _tmp28_, NULL);
#line 47 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
		_tmp30_ = _tmp29_;
#line 47 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
		g_string_append (_tmp27_, _tmp30_);
#line 47 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
		_g_free0 (_tmp30_);
#line 266 "rygel-last-change-entry.c"
	}
#line 49 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp31_ = str;
#line 49 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	g_string_append (_tmp31_, "/>");
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp32_ = str;
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp33_ = _tmp32_->str;
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_tmp34_ = g_strdup (_tmp33_);
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	result = _tmp34_;
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (info);
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_string_free0 (str);
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	return result;
#line 286 "rygel-last-change-entry.c"
}


static void rygel_last_change_entry_class_init (RygelLastChangeEntryClass * klass) {
#line 25 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	rygel_last_change_entry_parent_class = g_type_class_peek_parent (klass);
#line 25 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	g_type_class_add_private (klass, sizeof (RygelLastChangeEntryPrivate));
#line 25 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	RYGEL_LAST_CHANGE_ENTRY_CLASS (klass)->additional_info = rygel_last_change_entry_real_additional_info;
#line 25 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_last_change_entry_finalize;
#line 299 "rygel-last-change-entry.c"
}


static void rygel_last_change_entry_instance_init (RygelLastChangeEntry * self) {
#line 25 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	self->priv = RYGEL_LAST_CHANGE_ENTRY_GET_PRIVATE (self);
#line 306 "rygel-last-change-entry.c"
}


static void rygel_last_change_entry_finalize (GObject* obj) {
	RygelLastChangeEntry * self;
#line 25 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	self = RYGEL_LAST_CHANGE_ENTRY (obj);
#line 26 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (self->priv->tag);
#line 27 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	_g_free0 (self->priv->id);
#line 25 "/home/mryan/src/rygel/src/librygel-server/rygel-last-change-entry.vala"
	G_OBJECT_CLASS (rygel_last_change_entry_parent_class)->finalize (obj);
#line 320 "rygel-last-change-entry.c"
}


GType rygel_last_change_entry_get_type (void) {
	static volatile gsize rygel_last_change_entry_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_last_change_entry_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelLastChangeEntryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_last_change_entry_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelLastChangeEntry), 0, (GInstanceInitFunc) rygel_last_change_entry_instance_init, NULL };
		GType rygel_last_change_entry_type_id;
		rygel_last_change_entry_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelLastChangeEntry", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_last_change_entry_type_id__volatile, rygel_last_change_entry_type_id);
	}
	return rygel_last_change_entry_type_id__volatile;
}



