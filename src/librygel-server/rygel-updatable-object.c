/* rygel-updatable-object.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-updatable-object.vala, do not modify */

/*
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Krzesimir Nowak <krnowak@openismus.com>
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
#include <gio/gio.h>


#define RYGEL_TYPE_MEDIA_OBJECT (rygel_media_object_get_type ())
#define RYGEL_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObject))
#define RYGEL_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))
#define RYGEL_IS_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_IS_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_MEDIA_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))

typedef struct _RygelMediaObject RygelMediaObject;
typedef struct _RygelMediaObjectClass RygelMediaObjectClass;

#define RYGEL_TYPE_UPDATABLE_OBJECT (rygel_updatable_object_get_type ())
#define RYGEL_UPDATABLE_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_UPDATABLE_OBJECT, RygelUpdatableObject))
#define RYGEL_IS_UPDATABLE_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_UPDATABLE_OBJECT))
#define RYGEL_UPDATABLE_OBJECT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_UPDATABLE_OBJECT, RygelUpdatableObjectIface))

typedef struct _RygelUpdatableObject RygelUpdatableObject;
typedef struct _RygelUpdatableObjectIface RygelUpdatableObjectIface;

struct _RygelUpdatableObjectIface {
	GTypeInterface parent_iface;
	void (*commit) (RygelUpdatableObject* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*commit_finish) (RygelUpdatableObject* self, GAsyncResult* _res_, GError** error);
};



GType rygel_media_object_get_type (void) G_GNUC_CONST;
GType rygel_updatable_object_get_type (void) G_GNUC_CONST;
void rygel_updatable_object_commit (RygelUpdatableObject* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_updatable_object_commit_finish (RygelUpdatableObject* self, GAsyncResult* _res_, GError** error);


void rygel_updatable_object_commit (RygelUpdatableObject* self, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RYGEL_UPDATABLE_OBJECT_GET_INTERFACE (self)->commit (self, _callback_, _user_data_);
}


void rygel_updatable_object_commit_finish (RygelUpdatableObject* self, GAsyncResult* _res_, GError** error) {
	RYGEL_UPDATABLE_OBJECT_GET_INTERFACE (self)->commit_finish (self, _res_, error);
}


static void rygel_updatable_object_base_init (RygelUpdatableObjectIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


/**
 * This interface should be implemented by 'updatable' objects - ones
 * that allow modifying their own metadata in some persistent storage.
 */
GType rygel_updatable_object_get_type (void) {
	static volatile gsize rygel_updatable_object_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_updatable_object_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelUpdatableObjectIface), (GBaseInitFunc) rygel_updatable_object_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType rygel_updatable_object_type_id;
		rygel_updatable_object_type_id = g_type_register_static (G_TYPE_INTERFACE, "RygelUpdatableObject", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (rygel_updatable_object_type_id, RYGEL_TYPE_MEDIA_OBJECT);
		g_once_init_leave (&rygel_updatable_object_type_id__volatile, rygel_updatable_object_type_id);
	}
	return rygel_updatable_object_type_id__volatile;
}



