/* rygel-renderer.h generated by valac 0.20.1.53-91609, the Vala compiler, do not modify */


#ifndef __RYGEL_RENDERER_H__
#define __RYGEL_RENDERER_H__

#include <glib.h>
#include <rygel-core.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>

G_BEGIN_DECLS


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

#define RYGEL_RENDERER_TYPE_DLNA_PROFILE (rygel_renderer_dlna_profile_get_type ())
#define RYGEL_RENDERER_DLNA_PROFILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_RENDERER_TYPE_DLNA_PROFILE, RygelRendererDLNAProfile))
#define RYGEL_RENDERER_DLNA_PROFILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_RENDERER_TYPE_DLNA_PROFILE, RygelRendererDLNAProfileClass))
#define RYGEL_RENDERER_IS_DLNA_PROFILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_RENDERER_TYPE_DLNA_PROFILE))
#define RYGEL_RENDERER_IS_DLNA_PROFILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_RENDERER_TYPE_DLNA_PROFILE))
#define RYGEL_RENDERER_DLNA_PROFILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_RENDERER_TYPE_DLNA_PROFILE, RygelRendererDLNAProfileClass))

typedef struct _RygelRendererDLNAProfile RygelRendererDLNAProfile;
typedef struct _RygelRendererDLNAProfileClass RygelRendererDLNAProfileClass;
typedef struct _RygelRendererDLNAProfilePrivate RygelRendererDLNAProfilePrivate;

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

struct _RygelRendererDLNAProfile {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelRendererDLNAProfilePrivate * priv;
	gchar* mime;
	gchar* name;
};

struct _RygelRendererDLNAProfileClass {
	GTypeClass parent_class;
	void (*finalize) (RygelRendererDLNAProfile *self);
};

struct _RygelMediaRenderer {
	RygelMediaDevice parent_instance;
	RygelMediaRendererPrivate * priv;
};

struct _RygelMediaRendererClass {
	RygelMediaDeviceClass parent_class;
};


GType rygel_media_renderer_plugin_get_type (void) G_GNUC_CONST;
GType rygel_media_player_get_type (void) G_GNUC_CONST;
RygelMediaRendererPlugin* rygel_media_renderer_plugin_new (const gchar* name, const gchar* title, const gchar* description, RygelPluginCapabilities capabilities);
RygelMediaRendererPlugin* rygel_media_renderer_plugin_construct (GType object_type, const gchar* name, const gchar* title, const gchar* description, RygelPluginCapabilities capabilities);
RygelMediaPlayer* rygel_media_renderer_plugin_get_player (RygelMediaRendererPlugin* self);
gchar* rygel_media_renderer_plugin_get_protocol_info (RygelMediaRendererPlugin* self);
gpointer rygel_renderer_dlna_profile_ref (gpointer instance);
void rygel_renderer_dlna_profile_unref (gpointer instance);
GParamSpec* rygel_renderer_param_spec_dlna_profile (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_renderer_value_set_dlna_profile (GValue* value, gpointer v_object);
void rygel_renderer_value_take_dlna_profile (GValue* value, gpointer v_object);
gpointer rygel_renderer_value_get_dlna_profile (const GValue* value);
GType rygel_renderer_dlna_profile_get_type (void) G_GNUC_CONST;
GList* rygel_media_renderer_plugin_get_supported_profiles (RygelMediaRendererPlugin* self);
void rygel_media_renderer_plugin_set_supported_profiles (RygelMediaRendererPlugin* self, GList* value);
gboolean rygel_media_player_seek (RygelMediaPlayer* self, gint64 time);
gchar** rygel_media_player_get_protocols (RygelMediaPlayer* self, int* result_length1);
gchar** rygel_media_player_get_mime_types (RygelMediaPlayer* self, int* result_length1);
gchar* rygel_media_player_get_playback_state (RygelMediaPlayer* self);
void rygel_media_player_set_playback_state (RygelMediaPlayer* self, const gchar* value);
gchar** rygel_media_player_get_allowed_playback_speeds (RygelMediaPlayer* self, int* result_length1);
gchar* rygel_media_player_get_playback_speed (RygelMediaPlayer* self);
void rygel_media_player_set_playback_speed (RygelMediaPlayer* self, const gchar* value);
gchar* rygel_media_player_get_uri (RygelMediaPlayer* self);
void rygel_media_player_set_uri (RygelMediaPlayer* self, const gchar* value);
gdouble rygel_media_player_get_volume (RygelMediaPlayer* self);
void rygel_media_player_set_volume (RygelMediaPlayer* self, gdouble value);
gint64 rygel_media_player_get_duration (RygelMediaPlayer* self);
gchar* rygel_media_player_get_metadata (RygelMediaPlayer* self);
void rygel_media_player_set_metadata (RygelMediaPlayer* self, const gchar* value);
gchar* rygel_media_player_get_mime_type (RygelMediaPlayer* self);
void rygel_media_player_set_mime_type (RygelMediaPlayer* self, const gchar* value);
gboolean rygel_media_player_get_can_seek (RygelMediaPlayer* self);
gchar* rygel_media_player_get_content_features (RygelMediaPlayer* self);
void rygel_media_player_set_content_features (RygelMediaPlayer* self, const gchar* value);
gchar* rygel_media_player_get_duration_as_str (RygelMediaPlayer* self);
gint64 rygel_media_player_get_position (RygelMediaPlayer* self);
gchar* rygel_media_player_get_position_as_str (RygelMediaPlayer* self);
RygelRendererDLNAProfile* rygel_renderer_dlna_profile_new (const gchar* name, const gchar* mime);
RygelRendererDLNAProfile* rygel_renderer_dlna_profile_construct (GType object_type, const gchar* name, const gchar* mime);
gint rygel_renderer_dlna_profile_compare_by_name (RygelRendererDLNAProfile* a, RygelRendererDLNAProfile* b);
GType rygel_media_renderer_get_type (void) G_GNUC_CONST;
RygelMediaRenderer* rygel_media_renderer_new (const gchar* title, RygelMediaPlayer* player, RygelPluginCapabilities capabilities);
RygelMediaRenderer* rygel_media_renderer_construct (GType object_type, const gchar* title, RygelMediaPlayer* player, RygelPluginCapabilities capabilities);


G_END_DECLS

#endif
