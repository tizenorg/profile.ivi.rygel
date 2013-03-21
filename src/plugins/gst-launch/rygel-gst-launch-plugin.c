/* rygel-gst-launch-plugin.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-gst-launch-plugin.vala, do not modify */

/*
 * Copyright (C) 2009 Thijs Vermeir <thijsvermeir@gmail.com>
 *
 * Author: Thijs Vermeir <thijsvermeir@gmail.com>
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
#include <rygel-core.h>
#include <stdlib.h>
#include <string.h>
#include <rygel-server.h>


#define RYGEL_GST_LAUNCH_TYPE_PLUGIN (rygel_gst_launch_plugin_get_type ())
#define RYGEL_GST_LAUNCH_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_GST_LAUNCH_TYPE_PLUGIN, RygelGstLaunchPlugin))
#define RYGEL_GST_LAUNCH_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_GST_LAUNCH_TYPE_PLUGIN, RygelGstLaunchPluginClass))
#define RYGEL_GST_LAUNCH_IS_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_GST_LAUNCH_TYPE_PLUGIN))
#define RYGEL_GST_LAUNCH_IS_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_GST_LAUNCH_TYPE_PLUGIN))
#define RYGEL_GST_LAUNCH_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_GST_LAUNCH_TYPE_PLUGIN, RygelGstLaunchPluginClass))

typedef struct _RygelGstLaunchPlugin RygelGstLaunchPlugin;
typedef struct _RygelGstLaunchPluginClass RygelGstLaunchPluginClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _RygelGstLaunchPluginPrivate RygelGstLaunchPluginPrivate;

#define RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER (rygel_gst_launch_root_container_get_type ())
#define RYGEL_GST_LAUNCH_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER, RygelGstLaunchRootContainer))
#define RYGEL_GST_LAUNCH_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER, RygelGstLaunchRootContainerClass))
#define RYGEL_GST_LAUNCH_IS_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER))
#define RYGEL_GST_LAUNCH_IS_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER))
#define RYGEL_GST_LAUNCH_ROOT_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER, RygelGstLaunchRootContainerClass))

typedef struct _RygelGstLaunchRootContainer RygelGstLaunchRootContainer;
typedef struct _RygelGstLaunchRootContainerClass RygelGstLaunchRootContainerClass;

struct _RygelGstLaunchPlugin {
	RygelMediaServerPlugin parent_instance;
	RygelGstLaunchPluginPrivate * priv;
};

struct _RygelGstLaunchPluginClass {
	RygelMediaServerPluginClass parent_class;
};


static gpointer rygel_gst_launch_plugin_parent_class = NULL;

void module_init (RygelPluginLoader* loader);
#define RYGEL_GST_LAUNCH_PLUGIN_NAME "GstLaunch"
RygelGstLaunchPlugin* rygel_gst_launch_plugin_new (void);
RygelGstLaunchPlugin* rygel_gst_launch_plugin_construct (GType object_type);
GType rygel_gst_launch_plugin_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_GST_LAUNCH_PLUGIN_DUMMY_PROPERTY
};
RygelGstLaunchRootContainer* rygel_gst_launch_root_container_new (const gchar* title);
RygelGstLaunchRootContainer* rygel_gst_launch_root_container_construct (GType object_type, const gchar* title);
GType rygel_gst_launch_root_container_get_type (void) G_GNUC_CONST;


void module_init (RygelPluginLoader* loader) {
	RygelPluginLoader* _tmp0_;
	gboolean _tmp1_ = FALSE;
	RygelGstLaunchPlugin* _tmp2_;
	RygelGstLaunchPlugin* plugin;
	RygelPluginLoader* _tmp3_;
	RygelGstLaunchPlugin* _tmp4_;
	g_return_if_fail (loader != NULL);
	_tmp0_ = loader;
	_tmp1_ = rygel_plugin_loader_plugin_disabled (_tmp0_, RYGEL_GST_LAUNCH_PLUGIN_NAME);
	if (_tmp1_) {
		g_message ("rygel-gst-launch-plugin.vala:28: Plugin '%s' disabled by user, ignorin" \
"g..", RYGEL_GST_LAUNCH_PLUGIN_NAME);
		return;
	}
	_tmp2_ = rygel_gst_launch_plugin_new ();
	plugin = _tmp2_;
	_tmp3_ = loader;
	_tmp4_ = plugin;
	rygel_plugin_loader_add_plugin (_tmp3_, (RygelPlugin*) _tmp4_);
	_g_object_unref0 (plugin);
}


RygelGstLaunchPlugin* rygel_gst_launch_plugin_construct (GType object_type) {
	RygelGstLaunchPlugin * self = NULL;
	RygelGstLaunchRootContainer* _tmp0_;
	RygelGstLaunchRootContainer* root_container;
	_tmp0_ = rygel_gst_launch_root_container_new ("Gst Launch");
	root_container = _tmp0_;
	self = (RygelGstLaunchPlugin*) rygel_media_server_plugin_construct (object_type, (RygelMediaContainer*) root_container, RYGEL_GST_LAUNCH_PLUGIN_NAME, NULL, RYGEL_PLUGIN_CAPABILITIES_NONE);
	_g_object_unref0 (root_container);
	return self;
}


RygelGstLaunchPlugin* rygel_gst_launch_plugin_new (void) {
	return rygel_gst_launch_plugin_construct (RYGEL_GST_LAUNCH_TYPE_PLUGIN);
}


static void rygel_gst_launch_plugin_class_init (RygelGstLaunchPluginClass * klass) {
	rygel_gst_launch_plugin_parent_class = g_type_class_peek_parent (klass);
}


static void rygel_gst_launch_plugin_instance_init (RygelGstLaunchPlugin * self) {
}


GType rygel_gst_launch_plugin_get_type (void) {
	static volatile gsize rygel_gst_launch_plugin_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_gst_launch_plugin_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelGstLaunchPluginClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_gst_launch_plugin_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelGstLaunchPlugin), 0, (GInstanceInitFunc) rygel_gst_launch_plugin_instance_init, NULL };
		GType rygel_gst_launch_plugin_type_id;
		rygel_gst_launch_plugin_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_SERVER_PLUGIN, "RygelGstLaunchPlugin", &g_define_type_info, 0);
		g_once_init_leave (&rygel_gst_launch_plugin_type_id__volatile, rygel_gst_launch_plugin_type_id);
	}
	return rygel_gst_launch_plugin_type_id__volatile;
}



