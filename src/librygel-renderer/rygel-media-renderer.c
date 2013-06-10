/* rygel-media-renderer.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-media-renderer.vala, do not modify */

/*
 * Copyright (C) 2012 Openismus GmbH.
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Jens Georg <jensg@openismus.com>
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
#include <float.h>
#include <math.h>


#define RYGEL_TYPE_MEDIA_RENDERER_PLUGIN (rygel_media_renderer_plugin_get_type ())
#define RYGEL_MEDIA_RENDERER_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_RENDERER_PLUGIN, RygelMediaRendererPlugin))
#define RYGEL_MEDIA_RENDERER_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_RENDERER_PLUGIN, RygelMediaRendererPluginClass))
#define RYGEL_IS_MEDIA_RENDERER_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_RENDERER_PLUGIN))
#define RYGEL_IS_MEDIA_RENDERER_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_RENDERER_PLUGIN))
#define RYGEL_MEDIA_RENDERER_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_RENDERER_PLUGIN, RygelMediaRendererPluginClass))

typedef struct _RygelMediaRendererPlugin RygelMediaRendererPlugin;
typedef struct _RygelMediaRendererPluginClass RygelMediaRendererPluginClass;
typedef struct _RygelMediaRendererPluginPrivate RygelMediaRendererPluginPrivate;

#define RYGEL_TYPE_MEDIA_PLAYER (rygel_media_player_get_type ())
#define RYGEL_MEDIA_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_PLAYER, RygelMediaPlayer))
#define RYGEL_IS_MEDIA_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_PLAYER))
#define RYGEL_MEDIA_PLAYER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_MEDIA_PLAYER, RygelMediaPlayerIface))

typedef struct _RygelMediaPlayer RygelMediaPlayer;
typedef struct _RygelMediaPlayerIface RygelMediaPlayerIface;

#define TYPE_PLUGIN (plugin_get_type ())
#define PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PLUGIN, Plugin))
#define PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PLUGIN, PluginClass))
#define IS_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PLUGIN))
#define IS_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PLUGIN))
#define PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PLUGIN, PluginClass))

typedef struct _Plugin Plugin;
typedef struct _PluginClass PluginClass;
typedef struct _PluginPrivate PluginPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_TYPE_MEDIA_RENDERER (rygel_media_renderer_get_type ())
#define RYGEL_MEDIA_RENDERER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_RENDERER, RygelMediaRenderer))
#define RYGEL_MEDIA_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_RENDERER, RygelMediaRendererClass))
#define RYGEL_IS_MEDIA_RENDERER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_RENDERER))
#define RYGEL_IS_MEDIA_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_RENDERER))
#define RYGEL_MEDIA_RENDERER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_RENDERER, RygelMediaRendererClass))

typedef struct _RygelMediaRenderer RygelMediaRenderer;
typedef struct _RygelMediaRendererClass RygelMediaRendererClass;
typedef struct _RygelMediaRendererPrivate RygelMediaRendererPrivate;

struct _RygelMediaPlayerIface {
	GTypeInterface parent_iface;
	gboolean (*seek) (RygelMediaPlayer* self, gint64 time);
	gchar** (*get_protocols) (RygelMediaPlayer* self, int* result_length1);
	gchar** (*get_mime_types) (RygelMediaPlayer* self, int* result_length1);
	gchar* (*get_playback_state) (RygelMediaPlayer* self);
	void (*set_playback_state) (RygelMediaPlayer* self, const gchar* value);
	gchar** (*get_allowed_playback_speeds) (RygelMediaPlayer* self, int* result_length1);
	gchar* (*get_playback_speed) (RygelMediaPlayer* self);
	void (*set_playback_speed) (RygelMediaPlayer* self, const gchar* value);
	gchar* (*get_uri) (RygelMediaPlayer* self);
	void (*set_uri) (RygelMediaPlayer* self, const gchar* value);
	gdouble (*get_volume) (RygelMediaPlayer* self);
	void (*set_volume) (RygelMediaPlayer* self, gdouble value);
	gint64 (*get_duration) (RygelMediaPlayer* self);
	gchar* (*get_metadata) (RygelMediaPlayer* self);
	void (*set_metadata) (RygelMediaPlayer* self, const gchar* value);
	gchar* (*get_mime_type) (RygelMediaPlayer* self);
	void (*set_mime_type) (RygelMediaPlayer* self, const gchar* value);
	gboolean (*get_can_seek) (RygelMediaPlayer* self);
	gchar* (*get_content_features) (RygelMediaPlayer* self);
	void (*set_content_features) (RygelMediaPlayer* self, const gchar* value);
	gint64 (*get_position) (RygelMediaPlayer* self);
};

struct _RygelMediaRendererPlugin {
	RygelPlugin parent_instance;
	RygelMediaRendererPluginPrivate * priv;
};

struct _RygelMediaRendererPluginClass {
	RygelPluginClass parent_class;
	RygelMediaPlayer* (*get_player) (RygelMediaRendererPlugin* self);
};

struct _Plugin {
	RygelMediaRendererPlugin parent_instance;
	PluginPrivate * priv;
};

struct _PluginClass {
	RygelMediaRendererPluginClass parent_class;
};

struct _PluginPrivate {
	RygelMediaPlayer* player;
};

struct _RygelMediaRenderer {
	RygelMediaDevice parent_instance;
	RygelMediaRendererPrivate * priv;
};

struct _RygelMediaRendererClass {
	RygelMediaDeviceClass parent_class;
};

struct _RygelMediaRendererPrivate {
	RygelMediaPlayer* _player;
};


static gpointer plugin_parent_class = NULL;
static gpointer rygel_media_renderer_parent_class = NULL;

GType rygel_media_renderer_plugin_get_type (void) G_GNUC_CONST;
GType rygel_media_player_get_type (void) G_GNUC_CONST;
GType plugin_get_type (void) G_GNUC_CONST;
#define PLUGIN_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_PLUGIN, PluginPrivate))
enum  {
	PLUGIN_DUMMY_PROPERTY
};
Plugin* plugin_new (RygelMediaPlayer* player, RygelPluginCapabilities capabilities);
Plugin* plugin_construct (GType object_type, RygelMediaPlayer* player, RygelPluginCapabilities capabilities);
RygelMediaRendererPlugin* rygel_media_renderer_plugin_new (const gchar* name, const gchar* title, const gchar* description, RygelPluginCapabilities capabilities);
RygelMediaRendererPlugin* rygel_media_renderer_plugin_construct (GType object_type, const gchar* name, const gchar* title, const gchar* description, RygelPluginCapabilities capabilities);
static RygelMediaPlayer* plugin_real_get_player (RygelMediaRendererPlugin* base);
static void plugin_finalize (GObject* obj);
GType rygel_media_renderer_get_type (void) G_GNUC_CONST;
#define RYGEL_MEDIA_RENDERER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_MEDIA_RENDERER, RygelMediaRendererPrivate))
enum  {
	RYGEL_MEDIA_RENDERER_DUMMY_PROPERTY,
	RYGEL_MEDIA_RENDERER_PLAYER
};
RygelMediaRenderer* rygel_media_renderer_new (const gchar* title, RygelMediaPlayer* player, RygelPluginCapabilities capabilities);
RygelMediaRenderer* rygel_media_renderer_construct (GType object_type, const gchar* title, RygelMediaPlayer* player, RygelPluginCapabilities capabilities);
static void rygel_media_renderer_real_constructed (GObject* base);
static RygelMediaPlayer* rygel_media_renderer_get_player (RygelMediaRenderer* self);
static void rygel_media_renderer_set_player (RygelMediaRenderer* self, RygelMediaPlayer* value);
static void rygel_media_renderer_finalize (GObject* obj);
static void _vala_rygel_media_renderer_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_media_renderer_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


Plugin* plugin_construct (GType object_type, RygelMediaPlayer* player, RygelPluginCapabilities capabilities) {
	Plugin * self = NULL;
	RygelPluginCapabilities _tmp0_;
	RygelMediaPlayer* _tmp1_;
	RygelMediaPlayer* _tmp2_;
	g_return_val_if_fail (player != NULL, NULL);
	_tmp0_ = capabilities;
	self = (Plugin*) rygel_media_renderer_plugin_construct (object_type, "LibRygelRenderer", "LibRygelRenderer", NULL, _tmp0_);
	_tmp1_ = player;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (self->priv->player);
	self->priv->player = _tmp2_;
	return self;
}


Plugin* plugin_new (RygelMediaPlayer* player, RygelPluginCapabilities capabilities) {
	return plugin_construct (TYPE_PLUGIN, player, capabilities);
}


static RygelMediaPlayer* plugin_real_get_player (RygelMediaRendererPlugin* base) {
	Plugin * self;
	RygelMediaPlayer* result = NULL;
	RygelMediaPlayer* _tmp0_;
	RygelMediaPlayer* _tmp1_;
	self = (Plugin*) base;
	_tmp0_ = self->priv->player;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static void plugin_class_init (PluginClass * klass) {
	plugin_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (PluginPrivate));
	RYGEL_MEDIA_RENDERER_PLUGIN_CLASS (klass)->get_player = plugin_real_get_player;
	G_OBJECT_CLASS (klass)->finalize = plugin_finalize;
}


static void plugin_instance_init (Plugin * self) {
	self->priv = PLUGIN_GET_PRIVATE (self);
}


static void plugin_finalize (GObject* obj) {
	Plugin * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_PLUGIN, Plugin);
	_g_object_unref0 (self->priv->player);
	G_OBJECT_CLASS (plugin_parent_class)->finalize (obj);
}


GType plugin_get_type (void) {
	static volatile gsize plugin_type_id__volatile = 0;
	if (g_once_init_enter (&plugin_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PluginClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) plugin_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Plugin), 0, (GInstanceInitFunc) plugin_instance_init, NULL };
		GType plugin_type_id;
		plugin_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_RENDERER_PLUGIN, "Plugin", &g_define_type_info, 0);
		g_once_init_leave (&plugin_type_id__volatile, plugin_type_id);
	}
	return plugin_type_id__volatile;
}


/**
     * Create a RygelMediaRenderer to render content via a RygelMediaPlayer.
     */
RygelMediaRenderer* rygel_media_renderer_construct (GType object_type, const gchar* title, RygelMediaPlayer* player, RygelPluginCapabilities capabilities) {
	RygelMediaRenderer * self = NULL;
	const gchar* _tmp0_;
	RygelMediaPlayer* _tmp1_;
	RygelPluginCapabilities _tmp2_;
	g_return_val_if_fail (title != NULL, NULL);
	g_return_val_if_fail (player != NULL, NULL);
	_tmp0_ = title;
	_tmp1_ = player;
	_tmp2_ = capabilities;
	self = (RygelMediaRenderer*) g_object_new (object_type, "title", _tmp0_, "player", _tmp1_, "capabilities", _tmp2_, NULL);
	return self;
}


RygelMediaRenderer* rygel_media_renderer_new (const gchar* title, RygelMediaPlayer* player, RygelPluginCapabilities capabilities) {
	return rygel_media_renderer_construct (RYGEL_TYPE_MEDIA_RENDERER, title, player, capabilities);
}


static void rygel_media_renderer_real_constructed (GObject* base) {
	RygelMediaRenderer * self;
	RygelPlugin* _tmp0_;
	RygelPlugin* _tmp1_;
	RygelPlugin* _tmp7_;
	RygelPlugin* _tmp8_;
	const gchar* _tmp9_;
	const gchar* _tmp10_;
	self = (RygelMediaRenderer*) base;
	G_OBJECT_CLASS (rygel_media_renderer_parent_class)->constructed ((GObject*) G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_MEDIA_DEVICE, RygelMediaDevice));
	_tmp0_ = rygel_media_device_get_plugin ((RygelMediaDevice*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == NULL) {
		RygelMediaPlayer* _tmp2_;
		RygelPluginCapabilities _tmp3_;
		RygelPluginCapabilities _tmp4_;
		Plugin* _tmp5_;
		Plugin* _tmp6_;
		_tmp2_ = self->priv->_player;
		_tmp3_ = rygel_media_device_get_capabilities ((RygelMediaDevice*) self);
		_tmp4_ = _tmp3_;
		_tmp5_ = plugin_new (_tmp2_, _tmp4_);
		_tmp6_ = _tmp5_;
		rygel_media_device_set_plugin ((RygelMediaDevice*) self, (RygelPlugin*) _tmp6_);
		_g_object_unref0 (_tmp6_);
	}
	_tmp7_ = rygel_media_device_get_plugin ((RygelMediaDevice*) self);
	_tmp8_ = _tmp7_;
	_tmp9_ = rygel_media_device_get_title ((RygelMediaDevice*) self);
	_tmp10_ = _tmp9_;
	rygel_plugin_set_title (_tmp8_, _tmp10_);
}


static RygelMediaPlayer* rygel_media_renderer_get_player (RygelMediaRenderer* self) {
	RygelMediaPlayer* result;
	RygelMediaPlayer* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_player;
	result = _tmp0_;
	return result;
}


static void rygel_media_renderer_set_player (RygelMediaRenderer* self, RygelMediaPlayer* value) {
	RygelMediaPlayer* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_player = _tmp0_;
	g_object_notify ((GObject *) self, "player");
}


static void rygel_media_renderer_class_init (RygelMediaRendererClass * klass) {
	rygel_media_renderer_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelMediaRendererPrivate));
	G_OBJECT_CLASS (klass)->constructed = rygel_media_renderer_real_constructed;
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_media_renderer_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_media_renderer_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_media_renderer_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_MEDIA_RENDERER_PLAYER, g_param_spec_object ("player", "player", "player", RYGEL_TYPE_MEDIA_PLAYER, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}


static void rygel_media_renderer_instance_init (RygelMediaRenderer * self) {
	self->priv = RYGEL_MEDIA_RENDERER_GET_PRIVATE (self);
}


static void rygel_media_renderer_finalize (GObject* obj) {
	RygelMediaRenderer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_MEDIA_RENDERER, RygelMediaRenderer);
	G_OBJECT_CLASS (rygel_media_renderer_parent_class)->finalize (obj);
}


/**
 * This class may be used to implement in-process UPnP-AV media renderers.
 *
 * Call rygel_media_device_add_interface() on the RygelMediaRenderer to allow it
 * to render media from that network interface.
 *
 * See the
 * <link linkend="implementing-renderers">Implementing Renderers</link> section.
 */
GType rygel_media_renderer_get_type (void) {
	static volatile gsize rygel_media_renderer_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_renderer_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaRendererClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_renderer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaRenderer), 0, (GInstanceInitFunc) rygel_media_renderer_instance_init, NULL };
		GType rygel_media_renderer_type_id;
		rygel_media_renderer_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_DEVICE, "RygelMediaRenderer", &g_define_type_info, 0);
		g_once_init_leave (&rygel_media_renderer_type_id__volatile, rygel_media_renderer_type_id);
	}
	return rygel_media_renderer_type_id__volatile;
}


static void _vala_rygel_media_renderer_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelMediaRenderer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_MEDIA_RENDERER, RygelMediaRenderer);
	switch (property_id) {
		case RYGEL_MEDIA_RENDERER_PLAYER:
		g_value_set_object (value, rygel_media_renderer_get_player (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_media_renderer_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelMediaRenderer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_MEDIA_RENDERER, RygelMediaRenderer);
	switch (property_id) {
		case RYGEL_MEDIA_RENDERER_PLAYER:
		rygel_media_renderer_set_player (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



