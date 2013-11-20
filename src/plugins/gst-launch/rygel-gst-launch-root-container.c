/* rygel-gst-launch-root-container.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-gst-launch-root-container.vala, do not modify */

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
#include <rygel-server.h>
#include <rygel-core.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER (rygel_gst_launch_root_container_get_type ())
#define RYGEL_GST_LAUNCH_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER, RygelGstLaunchRootContainer))
#define RYGEL_GST_LAUNCH_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER, RygelGstLaunchRootContainerClass))
#define RYGEL_GST_LAUNCH_IS_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER))
#define RYGEL_GST_LAUNCH_IS_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER))
#define RYGEL_GST_LAUNCH_ROOT_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER, RygelGstLaunchRootContainerClass))

typedef struct _RygelGstLaunchRootContainer RygelGstLaunchRootContainer;
typedef struct _RygelGstLaunchRootContainerClass RygelGstLaunchRootContainerClass;
typedef struct _RygelGstLaunchRootContainerPrivate RygelGstLaunchRootContainerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

#define RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM (rygel_gst_launch_audio_item_get_type ())
#define RYGEL_GST_LAUNCH_AUDIO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, RygelGstLaunchAudioItem))
#define RYGEL_GST_LAUNCH_AUDIO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, RygelGstLaunchAudioItemClass))
#define RYGEL_GST_LAUNCH_IS_AUDIO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM))
#define RYGEL_GST_LAUNCH_IS_AUDIO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM))
#define RYGEL_GST_LAUNCH_AUDIO_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, RygelGstLaunchAudioItemClass))

typedef struct _RygelGstLaunchAudioItem RygelGstLaunchAudioItem;
typedef struct _RygelGstLaunchAudioItemClass RygelGstLaunchAudioItemClass;

#define RYGEL_GST_LAUNCH_TYPE_VIDEO_ITEM (rygel_gst_launch_video_item_get_type ())
#define RYGEL_GST_LAUNCH_VIDEO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_GST_LAUNCH_TYPE_VIDEO_ITEM, RygelGstLaunchVideoItem))
#define RYGEL_GST_LAUNCH_VIDEO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_GST_LAUNCH_TYPE_VIDEO_ITEM, RygelGstLaunchVideoItemClass))
#define RYGEL_GST_LAUNCH_IS_VIDEO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_GST_LAUNCH_TYPE_VIDEO_ITEM))
#define RYGEL_GST_LAUNCH_IS_VIDEO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_GST_LAUNCH_TYPE_VIDEO_ITEM))
#define RYGEL_GST_LAUNCH_VIDEO_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_GST_LAUNCH_TYPE_VIDEO_ITEM, RygelGstLaunchVideoItemClass))

typedef struct _RygelGstLaunchVideoItem RygelGstLaunchVideoItem;
typedef struct _RygelGstLaunchVideoItemClass RygelGstLaunchVideoItemClass;

struct _RygelGstLaunchRootContainer {
	RygelSimpleContainer parent_instance;
	RygelGstLaunchRootContainerPrivate * priv;
};

struct _RygelGstLaunchRootContainerClass {
	RygelSimpleContainerClass parent_class;
};

struct _RygelGstLaunchRootContainerPrivate {
	RygelMetaConfig* config;
};


static gpointer rygel_gst_launch_root_container_parent_class = NULL;

GType rygel_gst_launch_root_container_get_type (void) G_GNUC_CONST;
#define RYGEL_GST_LAUNCH_ROOT_CONTAINER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER, RygelGstLaunchRootContainerPrivate))
enum  {
	RYGEL_GST_LAUNCH_ROOT_CONTAINER_DUMMY_PROPERTY
};
#define RYGEL_GST_LAUNCH_ROOT_CONTAINER_CONFIG_GROUP "GstLaunch"
#define RYGEL_GST_LAUNCH_ROOT_CONTAINER_ITEM_NAMES "launch-items"
RygelGstLaunchRootContainer* rygel_gst_launch_root_container_new (const gchar* title);
RygelGstLaunchRootContainer* rygel_gst_launch_root_container_construct (GType object_type, const gchar* title);
static void rygel_gst_launch_root_container_add_launch_item (RygelGstLaunchRootContainer* self, const gchar* name);
RygelGstLaunchAudioItem* rygel_gst_launch_audio_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* mime_type, const gchar* launch_line);
RygelGstLaunchAudioItem* rygel_gst_launch_audio_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* mime_type, const gchar* launch_line);
GType rygel_gst_launch_audio_item_get_type (void) G_GNUC_CONST;
RygelGstLaunchVideoItem* rygel_gst_launch_video_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* mime_type, const gchar* launch_line);
RygelGstLaunchVideoItem* rygel_gst_launch_video_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* mime_type, const gchar* launch_line);
GType rygel_gst_launch_video_item_get_type (void) G_GNUC_CONST;
static void rygel_gst_launch_root_container_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	return self ? g_object_ref (self) : NULL;
#line 108 "rygel-gst-launch-root-container.c"
}


RygelGstLaunchRootContainer* rygel_gst_launch_root_container_construct (GType object_type, const gchar* title) {
	RygelGstLaunchRootContainer * self = NULL;
	const gchar* _tmp0_ = NULL;
	GError * _inner_error_ = NULL;
#line 32 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	g_return_val_if_fail (title != NULL, NULL);
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	_tmp0_ = title;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	self = (RygelGstLaunchRootContainer*) rygel_simple_container_construct_root (object_type, _tmp0_);
#line 122 "rygel-gst-launch-root-container.c"
	{
		RygelMetaConfig* _tmp1_ = NULL;
		GeeArrayList* item_names = NULL;
		RygelMetaConfig* _tmp2_ = NULL;
		GeeArrayList* _tmp3_ = NULL;
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp1_ = rygel_meta_config_get_default ();
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_object_unref0 (self->priv->config);
#line 36 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		self->priv->config = _tmp1_;
#line 38 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp2_ = self->priv->config;
#line 38 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp3_ = rygel_configuration_get_string_list ((RygelConfiguration*) _tmp2_, RYGEL_GST_LAUNCH_ROOT_CONTAINER_CONFIG_GROUP, RYGEL_GST_LAUNCH_ROOT_CONTAINER_ITEM_NAMES, &_inner_error_);
#line 38 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		item_names = _tmp3_;
#line 38 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		if (_inner_error_ != NULL) {
#line 142 "rygel-gst-launch-root-container.c"
			goto __catch0_g_error;
		}
		{
			GeeArrayList* _name_list = NULL;
			GeeArrayList* _tmp4_ = NULL;
			GeeArrayList* _tmp5_ = NULL;
			gint _name_size = 0;
			GeeArrayList* _tmp6_ = NULL;
			gint _tmp7_ = 0;
			gint _tmp8_ = 0;
			gint _name_index = 0;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp4_ = item_names;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp5_ = _g_object_ref0 (_tmp4_);
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_name_list = _tmp5_;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp6_ = _name_list;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp7_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp6_);
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp8_ = _tmp7_;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_name_size = _tmp8_;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_name_index = -1;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			while (TRUE) {
#line 172 "rygel-gst-launch-root-container.c"
				gint _tmp9_ = 0;
				gint _tmp10_ = 0;
				gint _tmp11_ = 0;
				gchar* name = NULL;
				GeeArrayList* _tmp12_ = NULL;
				gint _tmp13_ = 0;
				gpointer _tmp14_ = NULL;
				const gchar* _tmp15_ = NULL;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_tmp9_ = _name_index;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_name_index = _tmp9_ + 1;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_tmp10_ = _name_index;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_tmp11_ = _name_size;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				if (!(_tmp10_ < _tmp11_)) {
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
					break;
#line 193 "rygel-gst-launch-root-container.c"
				}
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_tmp12_ = _name_list;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_tmp13_ = _name_index;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_tmp14_ = gee_abstract_list_get ((GeeAbstractList*) _tmp12_, _tmp13_);
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				name = (gchar*) _tmp14_;
#line 40 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_tmp15_ = name;
#line 40 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				rygel_gst_launch_root_container_add_launch_item (self, _tmp15_);
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_g_free0 (name);
#line 209 "rygel-gst-launch-root-container.c"
			}
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_object_unref0 (_name_list);
#line 213 "rygel-gst-launch-root-container.c"
		}
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_object_unref0 (item_names);
#line 217 "rygel-gst-launch-root-container.c"
	}
	goto __finally0;
	__catch0_g_error:
	{
		GError* err = NULL;
		GError* _tmp16_ = NULL;
		const gchar* _tmp17_ = NULL;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		err = _inner_error_;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_inner_error_ = NULL;
#line 43 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp16_ = err;
#line 43 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp17_ = _tmp16_->message;
#line 43 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		g_debug ("rygel-gst-launch-root-container.vala:43: GstLaunch init failed: %s", _tmp17_);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_error_free0 (err);
#line 237 "rygel-gst-launch-root-container.c"
	}
	__finally0:
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	if (_inner_error_ != NULL) {
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		g_clear_error (&_inner_error_);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		return NULL;
#line 248 "rygel-gst-launch-root-container.c"
	}
#line 32 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	return self;
#line 252 "rygel-gst-launch-root-container.c"
}


RygelGstLaunchRootContainer* rygel_gst_launch_root_container_new (const gchar* title) {
#line 32 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	return rygel_gst_launch_root_container_construct (RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER, title);
#line 259 "rygel-gst-launch-root-container.c"
}


static void rygel_gst_launch_root_container_add_launch_item (RygelGstLaunchRootContainer* self, const gchar* name) {
	GError * _inner_error_ = NULL;
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	g_return_if_fail (self != NULL);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	g_return_if_fail (name != NULL);
#line 269 "rygel-gst-launch-root-container.c"
	{
		gchar* title = NULL;
		RygelMetaConfig* _tmp0_ = NULL;
		const gchar* _tmp1_ = NULL;
		gchar* _tmp2_ = NULL;
		gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		gchar* mime_type = NULL;
		RygelMetaConfig* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		gchar* _tmp9_ = NULL;
		gchar* _tmp10_ = NULL;
		gchar* _tmp11_ = NULL;
		gchar* launch_line = NULL;
		RygelMetaConfig* _tmp12_ = NULL;
		const gchar* _tmp13_ = NULL;
		gchar* _tmp14_ = NULL;
		gchar* _tmp15_ = NULL;
		gchar* _tmp16_ = NULL;
		gchar* _tmp17_ = NULL;
		gchar* dlna_profile = NULL;
		RygelMediaItem* item = NULL;
		const gchar* _tmp25_ = NULL;
		gboolean _tmp26_ = FALSE;
		RygelMediaItem* _tmp37_ = NULL;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp0_ = self->priv->config;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp1_ = name;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp2_ = g_strdup_printf ("%s-title", _tmp1_);
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp3_ = _tmp2_;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp4_ = rygel_configuration_get_string ((RygelConfiguration*) _tmp0_, RYGEL_GST_LAUNCH_ROOT_CONTAINER_CONFIG_GROUP, _tmp3_, &_inner_error_);
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp5_ = _tmp4_;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_free0 (_tmp3_);
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		title = _tmp5_;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		if (_inner_error_ != NULL) {
#line 315 "rygel-gst-launch-root-container.c"
			goto __catch1_g_error;
		}
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp6_ = self->priv->config;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp7_ = name;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp8_ = g_strdup_printf ("%s-mime", _tmp7_);
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp9_ = _tmp8_;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp10_ = rygel_configuration_get_string ((RygelConfiguration*) _tmp6_, RYGEL_GST_LAUNCH_ROOT_CONTAINER_CONFIG_GROUP, _tmp9_, &_inner_error_);
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp11_ = _tmp10_;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_free0 (_tmp9_);
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		mime_type = _tmp11_;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		if (_inner_error_ != NULL) {
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_free0 (title);
#line 338 "rygel-gst-launch-root-container.c"
			goto __catch1_g_error;
		}
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp12_ = self->priv->config;
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp13_ = name;
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp14_ = g_strdup_printf ("%s-launch", _tmp13_);
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp15_ = _tmp14_;
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp16_ = rygel_configuration_get_string ((RygelConfiguration*) _tmp12_, RYGEL_GST_LAUNCH_ROOT_CONTAINER_CONFIG_GROUP, _tmp15_, &_inner_error_);
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp17_ = _tmp16_;
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_free0 (_tmp15_);
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		launch_line = _tmp17_;
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		if (_inner_error_ != NULL) {
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_free0 (mime_type);
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_free0 (title);
#line 363 "rygel-gst-launch-root-container.c"
			goto __catch1_g_error;
		}
#line 55 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		dlna_profile = NULL;
#line 368 "rygel-gst-launch-root-container.c"
		{
			gchar* _tmp18_ = NULL;
			RygelMetaConfig* _tmp19_ = NULL;
			const gchar* _tmp20_ = NULL;
			gchar* _tmp21_ = NULL;
			gchar* _tmp22_ = NULL;
			gchar* _tmp23_ = NULL;
			gchar* _tmp24_ = NULL;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp19_ = self->priv->config;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp20_ = name;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp21_ = g_strdup_printf ("%s-dlnaprofile", _tmp20_);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp22_ = _tmp21_;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp23_ = rygel_configuration_get_string ((RygelConfiguration*) _tmp19_, RYGEL_GST_LAUNCH_ROOT_CONTAINER_CONFIG_GROUP, _tmp22_, &_inner_error_);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp24_ = _tmp23_;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_free0 (_tmp22_);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp18_ = _tmp24_;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			if (_inner_error_ != NULL) {
#line 395 "rygel-gst-launch-root-container.c"
				goto __catch2_g_error;
			}
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_free0 (dlna_profile);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			dlna_profile = _tmp18_;
#line 402 "rygel-gst-launch-root-container.c"
		}
		goto __finally2;
		__catch2_g_error:
		{
			GError* _error_ = NULL;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_error_ = _inner_error_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_inner_error_ = NULL;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_error_free0 (_error_);
#line 414 "rygel-gst-launch-root-container.c"
		}
		__finally2:
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		if (_inner_error_ != NULL) {
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_object_unref0 (item);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_free0 (dlna_profile);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_free0 (launch_line);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_free0 (mime_type);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_free0 (title);
#line 429 "rygel-gst-launch-root-container.c"
			goto __catch1_g_error;
		}
#line 63 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp25_ = mime_type;
#line 63 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp26_ = g_str_has_prefix (_tmp25_, "audio");
#line 63 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		if (_tmp26_) {
#line 438 "rygel-gst-launch-root-container.c"
			const gchar* _tmp27_ = NULL;
			const gchar* _tmp28_ = NULL;
			const gchar* _tmp29_ = NULL;
			const gchar* _tmp30_ = NULL;
			RygelGstLaunchAudioItem* _tmp31_ = NULL;
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp27_ = name;
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp28_ = title;
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp29_ = mime_type;
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp30_ = launch_line;
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp31_ = rygel_gst_launch_audio_item_new (_tmp27_, (RygelMediaContainer*) self, _tmp28_, _tmp29_, _tmp30_);
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_object_unref0 (item);
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			item = (RygelMediaItem*) _tmp31_;
#line 458 "rygel-gst-launch-root-container.c"
		} else {
			const gchar* _tmp32_ = NULL;
			const gchar* _tmp33_ = NULL;
			const gchar* _tmp34_ = NULL;
			const gchar* _tmp35_ = NULL;
			RygelGstLaunchVideoItem* _tmp36_ = NULL;
#line 70 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp32_ = name;
#line 70 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp33_ = title;
#line 70 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp34_ = mime_type;
#line 70 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp35_ = launch_line;
#line 70 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp36_ = rygel_gst_launch_video_item_new (_tmp32_, (RygelMediaContainer*) self, _tmp33_, _tmp34_, _tmp35_);
#line 70 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_g_object_unref0 (item);
#line 70 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			item = (RygelMediaItem*) _tmp36_;
#line 479 "rygel-gst-launch-root-container.c"
		}
#line 77 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp37_ = item;
#line 77 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		if (_tmp37_ != NULL) {
#line 485 "rygel-gst-launch-root-container.c"
			const gchar* _tmp38_ = NULL;
			RygelMediaItem* _tmp41_ = NULL;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp38_ = dlna_profile;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			if (_tmp38_ != NULL) {
#line 492 "rygel-gst-launch-root-container.c"
				RygelMediaItem* _tmp39_ = NULL;
				const gchar* _tmp40_ = NULL;
#line 79 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_tmp39_ = item;
#line 79 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				_tmp40_ = dlna_profile;
#line 79 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
				rygel_media_item_set_dlna_profile (_tmp39_, _tmp40_);
#line 501 "rygel-gst-launch-root-container.c"
			}
#line 81 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			_tmp41_ = item;
#line 81 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
			rygel_simple_container_add_child_item ((RygelSimpleContainer*) self, _tmp41_);
#line 507 "rygel-gst-launch-root-container.c"
		}
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_object_unref0 (item);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_free0 (dlna_profile);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_free0 (launch_line);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_free0 (mime_type);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_free0 (title);
#line 519 "rygel-gst-launch-root-container.c"
	}
	goto __finally1;
	__catch1_g_error:
	{
		GError* err = NULL;
		const gchar* _tmp42_ = NULL;
		GError* _tmp43_ = NULL;
		const gchar* _tmp44_ = NULL;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		err = _inner_error_;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_inner_error_ = NULL;
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp42_ = name;
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp43_ = err;
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_tmp44_ = _tmp43_->message;
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		g_debug ("rygel-gst-launch-root-container.vala:84: GstLaunch failed item '%s': %" \
"s", _tmp42_, _tmp44_);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		_g_error_free0 (err);
#line 542 "rygel-gst-launch-root-container.c"
	}
	__finally1:
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	if (_inner_error_ != NULL) {
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		g_clear_error (&_inner_error_);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
		return;
#line 553 "rygel-gst-launch-root-container.c"
	}
}


static void rygel_gst_launch_root_container_class_init (RygelGstLaunchRootContainerClass * klass) {
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	rygel_gst_launch_root_container_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	g_type_class_add_private (klass, sizeof (RygelGstLaunchRootContainerPrivate));
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_gst_launch_root_container_finalize;
#line 565 "rygel-gst-launch-root-container.c"
}


static void rygel_gst_launch_root_container_instance_init (RygelGstLaunchRootContainer * self) {
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	self->priv = RYGEL_GST_LAUNCH_ROOT_CONTAINER_GET_PRIVATE (self);
#line 572 "rygel-gst-launch-root-container.c"
}


static void rygel_gst_launch_root_container_finalize (GObject* obj) {
	RygelGstLaunchRootContainer * self;
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_GST_LAUNCH_TYPE_ROOT_CONTAINER, RygelGstLaunchRootContainer);
#line 30 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	_g_object_unref0 (self->priv->config);
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/plugins/gst-launch/rygel-gst-launch-root-container.vala"
	G_OBJECT_CLASS (rygel_gst_launch_root_container_parent_class)->finalize (obj);
#line 584 "rygel-gst-launch-root-container.c"
}


/**
 * Represents the root container for GstLaunch content hierarchy.
 */
GType rygel_gst_launch_root_container_get_type (void) {
	static volatile gsize rygel_gst_launch_root_container_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_gst_launch_root_container_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelGstLaunchRootContainerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_gst_launch_root_container_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelGstLaunchRootContainer), 0, (GInstanceInitFunc) rygel_gst_launch_root_container_instance_init, NULL };
		GType rygel_gst_launch_root_container_type_id;
		rygel_gst_launch_root_container_type_id = g_type_register_static (RYGEL_TYPE_SIMPLE_CONTAINER, "RygelGstLaunchRootContainer", &g_define_type_info, 0);
		g_once_init_leave (&rygel_gst_launch_root_container_type_id__volatile, rygel_gst_launch_root_container_type_id);
	}
	return rygel_gst_launch_root_container_type_id__volatile;
}



