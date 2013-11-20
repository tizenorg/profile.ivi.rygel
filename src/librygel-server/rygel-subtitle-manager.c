/* rygel-subtitle-manager.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-subtitle-manager.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 * Copyright (C) 2010 Andreas Henriksson <andreas@fatal.se>.
 *
 * Authors: Andreas Henriksson <andreas@fatal.se>
 *          Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
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
#include <gee.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>


#define RYGEL_TYPE_SUBTITLE_MANAGER (rygel_subtitle_manager_get_type ())
#define RYGEL_SUBTITLE_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SUBTITLE_MANAGER, RygelSubtitleManager))
#define RYGEL_SUBTITLE_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SUBTITLE_MANAGER, RygelSubtitleManagerClass))
#define RYGEL_IS_SUBTITLE_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SUBTITLE_MANAGER))
#define RYGEL_IS_SUBTITLE_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SUBTITLE_MANAGER))
#define RYGEL_SUBTITLE_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SUBTITLE_MANAGER, RygelSubtitleManagerClass))

typedef struct _RygelSubtitleManager RygelSubtitleManager;
typedef struct _RygelSubtitleManagerClass RygelSubtitleManagerClass;
typedef struct _RygelSubtitleManagerPrivate RygelSubtitleManagerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_TYPE_SUBTITLE (rygel_subtitle_get_type ())
#define RYGEL_SUBTITLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SUBTITLE, RygelSubtitle))
#define RYGEL_SUBTITLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SUBTITLE, RygelSubtitleClass))
#define RYGEL_IS_SUBTITLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SUBTITLE))
#define RYGEL_IS_SUBTITLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SUBTITLE))
#define RYGEL_SUBTITLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SUBTITLE, RygelSubtitleClass))

typedef struct _RygelSubtitle RygelSubtitle;
typedef struct _RygelSubtitleClass RygelSubtitleClass;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _RygelSubtitlePrivate RygelSubtitlePrivate;
#define _rygel_subtitle_unref0(var) ((var == NULL) ? NULL : (var = (rygel_subtitle_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

typedef enum  {
	SUBTITLE_MANAGER_ERROR_NO_SUBTITLE
} SubtitleManagerError;
#define SUBTITLE_MANAGER_ERROR subtitle_manager_error_quark ()
struct _RygelSubtitleManager {
	GObject parent_instance;
	RygelSubtitleManagerPrivate * priv;
};

struct _RygelSubtitleManagerClass {
	GObjectClass parent_class;
};

struct _RygelSubtitle {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelSubtitlePrivate * priv;
	gchar* uri;
	gchar* mime_type;
	gchar* caption_type;
	gint64 size;
};

struct _RygelSubtitleClass {
	GTypeClass parent_class;
	void (*finalize) (RygelSubtitle *self);
};


static gpointer rygel_subtitle_manager_parent_class = NULL;
static RygelSubtitleManager* rygel_subtitle_manager_manager;
static RygelSubtitleManager* rygel_subtitle_manager_manager = NULL;

GQuark subtitle_manager_error_quark (void);
GType rygel_subtitle_manager_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_SUBTITLE_MANAGER_DUMMY_PROPERTY
};
RygelSubtitleManager* rygel_subtitle_manager_get_default (void);
RygelSubtitleManager* rygel_subtitle_manager_new (void);
RygelSubtitleManager* rygel_subtitle_manager_construct (GType object_type);
gpointer rygel_subtitle_ref (gpointer instance);
void rygel_subtitle_unref (gpointer instance);
GParamSpec* rygel_param_spec_subtitle (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_subtitle (GValue* value, gpointer v_object);
void rygel_value_take_subtitle (GValue* value, gpointer v_object);
gpointer rygel_value_get_subtitle (const GValue* value);
GType rygel_subtitle_get_type (void) G_GNUC_CONST;
GeeArrayList* rygel_subtitle_manager_get_subtitles (RygelSubtitleManager* self, const gchar* uri, GError** error);
RygelSubtitle* rygel_subtitle_new (const gchar* mime_type, const gchar* caption_type);
RygelSubtitle* rygel_subtitle_construct (GType object_type, const gchar* mime_type, const gchar* caption_type);
static void rygel_subtitle_manager_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


GQuark subtitle_manager_error_quark (void) {
	return g_quark_from_static_string ("subtitle_manager_error-quark");
}


static gpointer _g_object_ref0 (gpointer self) {
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	return self ? g_object_ref (self) : NULL;
#line 128 "rygel-subtitle-manager.c"
}


RygelSubtitleManager* rygel_subtitle_manager_get_default (void) {
	RygelSubtitleManager* result = NULL;
	RygelSubtitleManager* _tmp0_ = NULL;
	RygelSubtitleManager* _tmp2_ = NULL;
	RygelSubtitleManager* _tmp3_ = NULL;
#line 38 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp0_ = rygel_subtitle_manager_manager;
#line 38 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	if (_tmp0_ == NULL) {
#line 141 "rygel-subtitle-manager.c"
		RygelSubtitleManager* _tmp1_ = NULL;
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_tmp1_ = rygel_subtitle_manager_new ();
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_g_object_unref0 (rygel_subtitle_manager_manager);
#line 39 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		rygel_subtitle_manager_manager = _tmp1_;
#line 149 "rygel-subtitle-manager.c"
	}
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp2_ = rygel_subtitle_manager_manager;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	result = _tmp3_;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	return result;
#line 159 "rygel-subtitle-manager.c"
}


static gint string_last_index_of_char (const gchar* self, gunichar c, gint start_index) {
	gint result = 0;
	gchar* _result_ = NULL;
	gint _tmp0_ = 0;
	gunichar _tmp1_ = 0U;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
#line 928 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, 0);
#line 929 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp0_ = start_index;
#line 929 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp1_ = c;
#line 929 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp2_ = g_utf8_strrchr (((gchar*) self) + _tmp0_, (gssize) (-1), _tmp1_);
#line 929 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_result_ = _tmp2_;
#line 931 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp3_ = _result_;
#line 931 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	if (_tmp3_ != NULL) {
#line 184 "rygel-subtitle-manager.c"
		gchar* _tmp4_ = NULL;
#line 932 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp4_ = _result_;
#line 932 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		result = (gint) (_tmp4_ - ((gchar*) self));
#line 932 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		return result;
#line 192 "rygel-subtitle-manager.c"
	} else {
#line 934 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		result = -1;
#line 934 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		return result;
#line 198 "rygel-subtitle-manager.c"
	}
}


static gchar* string_slice (const gchar* self, glong start, glong end) {
	gchar* result = NULL;
	glong string_length = 0L;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	glong _tmp2_ = 0L;
	glong _tmp5_ = 0L;
	gboolean _tmp8_ = FALSE;
	glong _tmp9_ = 0L;
	gboolean _tmp12_ = FALSE;
	gboolean _tmp13_ = FALSE;
	glong _tmp14_ = 0L;
	gboolean _tmp17_ = FALSE;
	glong _tmp18_ = 0L;
	glong _tmp19_ = 0L;
	glong _tmp20_ = 0L;
	glong _tmp21_ = 0L;
	glong _tmp22_ = 0L;
	gchar* _tmp23_ = NULL;
#line 1189 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, NULL);
#line 1190 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp0_ = strlen (self);
#line 1190 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp1_ = _tmp0_;
#line 1190 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	string_length = (glong) _tmp1_;
#line 1191 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp2_ = start;
#line 1191 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	if (_tmp2_ < ((glong) 0)) {
#line 234 "rygel-subtitle-manager.c"
		glong _tmp3_ = 0L;
		glong _tmp4_ = 0L;
#line 1192 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp3_ = string_length;
#line 1192 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp4_ = start;
#line 1192 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		start = _tmp3_ + _tmp4_;
#line 243 "rygel-subtitle-manager.c"
	}
#line 1194 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp5_ = end;
#line 1194 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	if (_tmp5_ < ((glong) 0)) {
#line 249 "rygel-subtitle-manager.c"
		glong _tmp6_ = 0L;
		glong _tmp7_ = 0L;
#line 1195 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp6_ = string_length;
#line 1195 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp7_ = end;
#line 1195 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		end = _tmp6_ + _tmp7_;
#line 258 "rygel-subtitle-manager.c"
	}
#line 1197 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp9_ = start;
#line 1197 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	if (_tmp9_ >= ((glong) 0)) {
#line 264 "rygel-subtitle-manager.c"
		glong _tmp10_ = 0L;
		glong _tmp11_ = 0L;
#line 1197 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp10_ = start;
#line 1197 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp11_ = string_length;
#line 1197 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp8_ = _tmp10_ <= _tmp11_;
#line 273 "rygel-subtitle-manager.c"
	} else {
#line 1197 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp8_ = FALSE;
#line 277 "rygel-subtitle-manager.c"
	}
#line 1197 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp12_ = _tmp8_;
#line 1197 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	g_return_val_if_fail (_tmp12_, NULL);
#line 1198 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp14_ = end;
#line 1198 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	if (_tmp14_ >= ((glong) 0)) {
#line 287 "rygel-subtitle-manager.c"
		glong _tmp15_ = 0L;
		glong _tmp16_ = 0L;
#line 1198 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp15_ = end;
#line 1198 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp16_ = string_length;
#line 1198 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp13_ = _tmp15_ <= _tmp16_;
#line 296 "rygel-subtitle-manager.c"
	} else {
#line 1198 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
		_tmp13_ = FALSE;
#line 300 "rygel-subtitle-manager.c"
	}
#line 1198 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp17_ = _tmp13_;
#line 1198 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	g_return_val_if_fail (_tmp17_, NULL);
#line 1199 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp18_ = start;
#line 1199 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp19_ = end;
#line 1199 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	g_return_val_if_fail (_tmp18_ <= _tmp19_, NULL);
#line 1200 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp20_ = start;
#line 1200 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp21_ = end;
#line 1200 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp22_ = start;
#line 1200 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	_tmp23_ = g_strndup (((gchar*) self) + _tmp20_, (gsize) (_tmp21_ - _tmp22_));
#line 1200 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	result = _tmp23_;
#line 1200 "/home/jku/src/jhbuild/root/share/vala-0.22/vapi/glib-2.0.vapi"
	return result;
#line 324 "rygel-subtitle-manager.c"
}


GeeArrayList* rygel_subtitle_manager_get_subtitles (RygelSubtitleManager* self, const gchar* uri, GError** error) {
	GeeArrayList* result = NULL;
	GFile* video_file = NULL;
	const gchar* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
	GFile* directory = NULL;
	GFile* _tmp2_ = NULL;
	GFile* _tmp3_ = NULL;
	gchar* basename = NULL;
	GFile* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	gint ext_index = 0;
	const gchar* _tmp6_ = NULL;
	gint _tmp7_ = 0;
	gint _tmp8_ = 0;
	gchar** exts = NULL;
	gchar* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	gchar** _tmp14_ = NULL;
	gint exts_length1 = 0;
	gint _exts_size_ = 0;
	GeeArrayList* subtitles = NULL;
	GeeArrayList* _tmp15_ = NULL;
	gchar** _tmp16_ = NULL;
	gint _tmp16__length1 = 0;
	GeeArrayList* _tmp45_ = NULL;
	gint _tmp46_ = 0;
	gint _tmp47_ = 0;
	GError * _inner_error_ = NULL;
#line 45 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 45 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	g_return_val_if_fail (uri != NULL, NULL);
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp0_ = uri;
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp1_ = g_file_new_for_uri (_tmp0_);
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	video_file = _tmp1_;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp2_ = video_file;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp3_ = g_file_get_parent (_tmp2_);
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	directory = _tmp3_;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp4_ = video_file;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp5_ = g_file_get_basename (_tmp4_);
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	basename = _tmp5_;
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp6_ = basename;
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp7_ = string_last_index_of_char (_tmp6_, (gunichar) '.', 0);
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	ext_index = _tmp7_;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp8_ = ext_index;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	if (_tmp8_ >= 0) {
#line 389 "rygel-subtitle-manager.c"
		const gchar* _tmp9_ = NULL;
		gint _tmp10_ = 0;
		gchar* _tmp11_ = NULL;
#line 52 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_tmp9_ = basename;
#line 52 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_tmp10_ = ext_index;
#line 52 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_tmp11_ = string_slice (_tmp9_, (glong) 0, (glong) _tmp10_);
#line 52 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_g_free0 (basename);
#line 52 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		basename = _tmp11_;
#line 403 "rygel-subtitle-manager.c"
	}
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp12_ = g_strdup ("srt");
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp13_ = g_strdup ("smi");
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp14_ = g_new0 (gchar*, 2 + 1);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp14_[0] = _tmp12_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp14_[1] = _tmp13_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	exts = _tmp14_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	exts_length1 = 2;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_exts_size_ = exts_length1;
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp15_ = gee_array_list_new (RYGEL_TYPE_SUBTITLE, (GBoxedCopyFunc) rygel_subtitle_ref, rygel_subtitle_unref, NULL, NULL, NULL);
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	subtitles = _tmp15_;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp16_ = exts;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp16__length1 = exts_length1;
#line 429 "rygel-subtitle-manager.c"
	{
		gchar** ext_collection = NULL;
		gint ext_collection_length1 = 0;
		gint _ext_collection_size_ = 0;
		gint ext_it = 0;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		ext_collection = _tmp16_;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		ext_collection_length1 = _tmp16__length1;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		for (ext_it = 0; ext_it < _tmp16__length1; ext_it = ext_it + 1) {
#line 441 "rygel-subtitle-manager.c"
			gchar* _tmp17_ = NULL;
			gchar* ext = NULL;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
			_tmp17_ = g_strdup (ext_collection[ext_it]);
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
			ext = _tmp17_;
#line 448 "rygel-subtitle-manager.c"
			{
				gchar* filename = NULL;
				const gchar* _tmp18_ = NULL;
				gchar* _tmp19_ = NULL;
				gchar* _tmp20_ = NULL;
				const gchar* _tmp21_ = NULL;
				gchar* _tmp22_ = NULL;
				gchar* _tmp23_ = NULL;
				GFile* subtitle_file = NULL;
				GFile* _tmp24_ = NULL;
				const gchar* _tmp25_ = NULL;
				GFile* _tmp26_ = NULL;
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_tmp18_ = basename;
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_tmp19_ = g_strconcat (_tmp18_, ".", NULL);
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_tmp20_ = _tmp19_;
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_tmp21_ = ext;
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_tmp22_ = g_strconcat (_tmp20_, _tmp21_, NULL);
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_tmp23_ = _tmp22_;
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_g_free0 (_tmp20_);
#line 61 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				filename = _tmp23_;
#line 63 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_tmp24_ = directory;
#line 63 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_tmp25_ = filename;
#line 63 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_tmp26_ = g_file_get_child (_tmp24_, _tmp25_);
#line 63 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				subtitle_file = _tmp26_;
#line 485 "rygel-subtitle-manager.c"
				{
					GFileInfo* info = NULL;
					GFile* _tmp27_ = NULL;
					GFileInfo* _tmp28_ = NULL;
					GFileInfo* _tmp29_ = NULL;
					gboolean _tmp30_ = FALSE;
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_tmp27_ = subtitle_file;
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_tmp28_ = g_file_query_info (_tmp27_, G_FILE_ATTRIBUTE_ACCESS_CAN_READ "," G_FILE_ATTRIBUTE_STANDARD_SIZE "," G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE, G_FILE_QUERY_INFO_NONE, NULL, &_inner_error_);
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					info = _tmp28_;
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					if (_inner_error_ != NULL) {
#line 500 "rygel-subtitle-manager.c"
						goto __catch70_g_error;
					}
#line 72 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_tmp29_ = info;
#line 72 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_tmp30_ = g_file_info_get_attribute_boolean (_tmp29_, G_FILE_ATTRIBUTE_ACCESS_CAN_READ);
#line 72 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					if (_tmp30_) {
#line 509 "rygel-subtitle-manager.c"
						gchar* content_type = NULL;
						GFileInfo* _tmp31_ = NULL;
						const gchar* _tmp32_ = NULL;
						gchar* _tmp33_ = NULL;
						RygelSubtitle* subtitle = NULL;
						const gchar* _tmp34_ = NULL;
						const gchar* _tmp35_ = NULL;
						RygelSubtitle* _tmp36_ = NULL;
						RygelSubtitle* _tmp37_ = NULL;
						GFile* _tmp38_ = NULL;
						gchar* _tmp39_ = NULL;
						RygelSubtitle* _tmp40_ = NULL;
						GFileInfo* _tmp41_ = NULL;
						guint64 _tmp42_ = 0ULL;
						GeeArrayList* _tmp43_ = NULL;
						RygelSubtitle* _tmp44_ = NULL;
#line 73 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp31_ = info;
#line 73 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp32_ = g_file_info_get_attribute_string (_tmp31_, G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE);
#line 73 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp33_ = g_strdup (_tmp32_);
#line 73 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						content_type = _tmp33_;
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp34_ = content_type;
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp35_ = ext;
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp36_ = rygel_subtitle_new (_tmp34_, _tmp35_);
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						subtitle = _tmp36_;
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp37_ = subtitle;
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp38_ = subtitle_file;
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp39_ = g_file_get_uri (_tmp38_);
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_g_free0 (_tmp37_->uri);
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp37_->uri = _tmp39_;
#line 76 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp40_ = subtitle;
#line 76 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp41_ = info;
#line 76 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp42_ = g_file_info_get_attribute_uint64 (_tmp41_, G_FILE_ATTRIBUTE_STANDARD_SIZE);
#line 76 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp40_->size = (gint64) _tmp42_;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp43_ = subtitles;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_tmp44_ = subtitle;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						gee_abstract_collection_add ((GeeAbstractCollection*) _tmp43_, _tmp44_);
#line 72 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_rygel_subtitle_unref0 (subtitle);
#line 72 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
						_g_free0 (content_type);
#line 570 "rygel-subtitle-manager.c"
					}
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_g_object_unref0 (info);
#line 574 "rygel-subtitle-manager.c"
				}
				goto __finally70;
				__catch70_g_error:
				{
					GError* err = NULL;
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					err = _inner_error_;
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_inner_error_ = NULL;
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_g_error_free0 (err);
#line 586 "rygel-subtitle-manager.c"
				}
				__finally70:
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				if (_inner_error_ != NULL) {
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					g_propagate_error (error, _inner_error_);
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_g_object_unref0 (subtitle_file);
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_g_free0 (filename);
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_g_free0 (ext);
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_g_object_unref0 (subtitles);
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					exts = (_vala_array_free (exts, exts_length1, (GDestroyNotify) g_free), NULL);
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_g_free0 (basename);
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_g_object_unref0 (directory);
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					_g_object_unref0 (video_file);
#line 65 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
					return NULL;
#line 611 "rygel-subtitle-manager.c"
				}
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_g_object_unref0 (subtitle_file);
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_g_free0 (filename);
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
				_g_free0 (ext);
#line 619 "rygel-subtitle-manager.c"
			}
		}
	}
#line 83 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp45_ = subtitles;
#line 83 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp46_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp45_);
#line 83 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_tmp47_ = _tmp46_;
#line 83 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	if (_tmp47_ == 0) {
#line 631 "rygel-subtitle-manager.c"
		const gchar* _tmp48_ = NULL;
		GError* _tmp49_ = NULL;
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_tmp48_ = _ ("No subtitle available");
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_tmp49_ = g_error_new_literal (SUBTITLE_MANAGER_ERROR, SUBTITLE_MANAGER_ERROR_NO_SUBTITLE, _tmp48_);
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_inner_error_ = _tmp49_;
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		g_propagate_error (error, _inner_error_);
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_g_object_unref0 (subtitles);
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		exts = (_vala_array_free (exts, exts_length1, (GDestroyNotify) g_free), NULL);
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_g_free0 (basename);
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_g_object_unref0 (directory);
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		_g_object_unref0 (video_file);
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
		return NULL;
#line 654 "rygel-subtitle-manager.c"
	}
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	result = subtitles;
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	exts = (_vala_array_free (exts, exts_length1, (GDestroyNotify) g_free), NULL);
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_g_free0 (basename);
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_g_object_unref0 (directory);
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	_g_object_unref0 (video_file);
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	return result;
#line 668 "rygel-subtitle-manager.c"
}


RygelSubtitleManager* rygel_subtitle_manager_construct (GType object_type) {
	RygelSubtitleManager * self = NULL;
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	self = (RygelSubtitleManager*) g_object_new (object_type, NULL);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	return self;
#line 678 "rygel-subtitle-manager.c"
}


RygelSubtitleManager* rygel_subtitle_manager_new (void) {
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	return rygel_subtitle_manager_construct (RYGEL_TYPE_SUBTITLE_MANAGER);
#line 685 "rygel-subtitle-manager.c"
}


static void rygel_subtitle_manager_class_init (RygelSubtitleManagerClass * klass) {
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	rygel_subtitle_manager_parent_class = g_type_class_peek_parent (klass);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_subtitle_manager_finalize;
#line 694 "rygel-subtitle-manager.c"
}


static void rygel_subtitle_manager_instance_init (RygelSubtitleManager * self) {
}


static void rygel_subtitle_manager_finalize (GObject* obj) {
	RygelSubtitleManager * self;
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_SUBTITLE_MANAGER, RygelSubtitleManager);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-subtitle-manager.vala"
	G_OBJECT_CLASS (rygel_subtitle_manager_parent_class)->finalize (obj);
#line 708 "rygel-subtitle-manager.c"
}


/**
 * Provides subtitles for videos.
 */
GType rygel_subtitle_manager_get_type (void) {
	static volatile gsize rygel_subtitle_manager_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_subtitle_manager_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelSubtitleManagerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_subtitle_manager_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelSubtitleManager), 0, (GInstanceInitFunc) rygel_subtitle_manager_instance_init, NULL };
		GType rygel_subtitle_manager_type_id;
		rygel_subtitle_manager_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelSubtitleManager", &g_define_type_info, 0);
		g_once_init_leave (&rygel_subtitle_manager_type_id__volatile, rygel_subtitle_manager_type_id);
	}
	return rygel_subtitle_manager_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



