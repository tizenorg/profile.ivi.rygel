/* rygel-thumbnailer.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-thumbnailer.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 * Copyright (C) 2010-2011 Nokia Corporation.
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Zeeshan Ali <zeenix@gmail.com>
 *         Jens Georg <jensg@openismus.com>
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
#include <glib/gi18n-lib.h>
#include <gio/gio.h>
#include <libgupnp-av/gupnp-av.h>


#define RYGEL_TYPE_THUMBNAILER (rygel_thumbnailer_get_type ())
#define RYGEL_THUMBNAILER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_THUMBNAILER, RygelThumbnailer))
#define RYGEL_THUMBNAILER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_THUMBNAILER, RygelThumbnailerClass))
#define RYGEL_IS_THUMBNAILER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_THUMBNAILER))
#define RYGEL_IS_THUMBNAILER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_THUMBNAILER))
#define RYGEL_THUMBNAILER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_THUMBNAILER, RygelThumbnailerClass))

typedef struct _RygelThumbnailer RygelThumbnailer;
typedef struct _RygelThumbnailerClass RygelThumbnailerClass;
typedef struct _RygelThumbnailerPrivate RygelThumbnailerPrivate;

#define RYGEL_TYPE_THUMBNAIL (rygel_thumbnail_get_type ())
#define RYGEL_THUMBNAIL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_THUMBNAIL, RygelThumbnail))
#define RYGEL_THUMBNAIL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_THUMBNAIL, RygelThumbnailClass))
#define RYGEL_IS_THUMBNAIL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_THUMBNAIL))
#define RYGEL_IS_THUMBNAIL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_THUMBNAIL))
#define RYGEL_THUMBNAIL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_THUMBNAIL, RygelThumbnailClass))

typedef struct _RygelThumbnail RygelThumbnail;
typedef struct _RygelThumbnailClass RygelThumbnailClass;

#define RYGEL_TYPE_DBUS_THUMBNAILER (rygel_dbus_thumbnailer_get_type ())
#define RYGEL_DBUS_THUMBNAILER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DBUS_THUMBNAILER, RygelDbusThumbnailer))
#define RYGEL_DBUS_THUMBNAILER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_DBUS_THUMBNAILER, RygelDbusThumbnailerClass))
#define RYGEL_IS_DBUS_THUMBNAILER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DBUS_THUMBNAILER))
#define RYGEL_IS_DBUS_THUMBNAILER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_DBUS_THUMBNAILER))
#define RYGEL_DBUS_THUMBNAILER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_DBUS_THUMBNAILER, RygelDbusThumbnailerClass))

typedef struct _RygelDbusThumbnailer RygelDbusThumbnailer;
typedef struct _RygelDbusThumbnailerClass RygelDbusThumbnailerClass;
#define _rygel_icon_info_unref0(var) ((var == NULL) ? NULL : (var = (rygel_icon_info_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
typedef struct _RygelThumbnailPrivate RygelThumbnailPrivate;

typedef enum  {
	THUMBNAILER_ERROR_NO_DIR,
	THUMBNAILER_ERROR_NO_THUMBNAIL
} ThumbnailerError;
#define THUMBNAILER_ERROR thumbnailer_error_quark ()
struct _RygelThumbnailer {
	GObject parent_instance;
	RygelThumbnailerPrivate * priv;
};

struct _RygelThumbnailerClass {
	GObjectClass parent_class;
};

struct _RygelThumbnailerPrivate {
	RygelThumbnail* template;
	gchar* extension;
	RygelDbusThumbnailer* thumbler;
};

struct _RygelThumbnail {
	RygelIconInfo parent_instance;
	RygelThumbnailPrivate * priv;
	gchar* dlna_profile;
};

struct _RygelThumbnailClass {
	RygelIconInfoClass parent_class;
	GUPnPDIDLLiteResource* (*add_resource) (RygelThumbnail* self, GUPnPDIDLLiteItem* didl_item, const gchar* protocol);
};


static gpointer rygel_thumbnailer_parent_class = NULL;
static RygelThumbnailer* rygel_thumbnailer_thumbnailer;
static RygelThumbnailer* rygel_thumbnailer_thumbnailer = NULL;
static gboolean rygel_thumbnailer_first_time;
static gboolean rygel_thumbnailer_first_time = TRUE;

GQuark thumbnailer_error_quark (void);
GType rygel_thumbnailer_get_type (void) G_GNUC_CONST;
GType rygel_thumbnail_get_type (void) G_GNUC_CONST;
GType rygel_dbus_thumbnailer_get_type (void) G_GNUC_CONST;
#define RYGEL_THUMBNAILER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_THUMBNAILER, RygelThumbnailerPrivate))
enum  {
	RYGEL_THUMBNAILER_DUMMY_PROPERTY
};
static RygelThumbnailer* rygel_thumbnailer_new (GError** error);
static RygelThumbnailer* rygel_thumbnailer_construct (GType object_type, GError** error);
RygelThumbnail* rygel_thumbnail_new (const gchar* mime_type, const gchar* dlna_profile, const gchar* file_extension);
RygelThumbnail* rygel_thumbnail_construct (GType object_type, const gchar* mime_type, const gchar* dlna_profile, const gchar* file_extension);
RygelDbusThumbnailer* rygel_dbus_thumbnailer_new (const gchar* flavor, GError** error);
RygelDbusThumbnailer* rygel_dbus_thumbnailer_construct (GType object_type, const gchar* flavor, GError** error);
static void rygel_thumbnailer_on_dbus_thumbnailer_ready (RygelThumbnailer* self, gboolean available);
static void _rygel_thumbnailer_on_dbus_thumbnailer_ready_rygel_dbus_thumbnailer_ready (RygelDbusThumbnailer* _sender, gboolean available, gpointer self);
RygelThumbnailer* rygel_thumbnailer_get_default (void);
RygelThumbnail* rygel_thumbnailer_get_thumbnail (RygelThumbnailer* self, const gchar* uri, const gchar* mime_type, GError** error);
void rygel_dbus_thumbnailer_queue_thumbnail_task (RygelDbusThumbnailer* self, const gchar* uri, const gchar* mime);
static void rygel_thumbnailer_finalize (GObject* obj);


GQuark thumbnailer_error_quark (void) {
	return g_quark_from_static_string ("thumbnailer_error-quark");
}


static void _rygel_thumbnailer_on_dbus_thumbnailer_ready_rygel_dbus_thumbnailer_ready (RygelDbusThumbnailer* _sender, gboolean available, gpointer self) {
	rygel_thumbnailer_on_dbus_thumbnailer_ready (self, available);
}


static RygelThumbnailer* rygel_thumbnailer_construct (GType object_type, GError** error) {
	RygelThumbnailer * self = NULL;
	RygelThumbnail* _tmp0_ = NULL;
	RygelThumbnail* _tmp1_ = NULL;
	RygelThumbnail* _tmp2_ = NULL;
	RygelThumbnail* _tmp3_ = NULL;
	RygelThumbnail* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	GError * _inner_error_ = NULL;
	self = (RygelThumbnailer*) g_object_new (object_type, NULL);
	_tmp0_ = rygel_thumbnail_new ("image/png", "PNG_TN", "png");
	_rygel_icon_info_unref0 (self->priv->template);
	self->priv->template = _tmp0_;
	_tmp1_ = self->priv->template;
	((RygelIconInfo*) _tmp1_)->width = 128;
	_tmp2_ = self->priv->template;
	((RygelIconInfo*) _tmp2_)->height = 128;
	_tmp3_ = self->priv->template;
	((RygelIconInfo*) _tmp3_)->depth = 32;
	_tmp4_ = self->priv->template;
	_tmp5_ = ((RygelIconInfo*) _tmp4_)->file_extension;
	_tmp6_ = g_strconcat (".", _tmp5_, NULL);
	_g_free0 (self->priv->extension);
	self->priv->extension = _tmp6_;
	{
		RygelDbusThumbnailer* _tmp7_ = NULL;
		RygelDbusThumbnailer* _tmp8_ = NULL;
		RygelDbusThumbnailer* _tmp9_ = NULL;
		_tmp8_ = rygel_dbus_thumbnailer_new ("normal", &_inner_error_);
		_tmp7_ = _tmp8_;
		if (_inner_error_ != NULL) {
			goto __catch71_g_error;
		}
		_g_object_unref0 (self->priv->thumbler);
		self->priv->thumbler = _tmp7_;
		_tmp9_ = self->priv->thumbler;
		g_signal_connect_object (_tmp9_, "ready", (GCallback) _rygel_thumbnailer_on_dbus_thumbnailer_ready_rygel_dbus_thumbnailer_ready, self, 0);
	}
	goto __finally71;
	__catch71_g_error:
	{
		GError* _error_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_g_error_free0 (_error_);
	}
	__finally71:
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == THUMBNAILER_ERROR) {
			g_propagate_error (error, _inner_error_);
			_g_object_unref0 (self);
			return NULL;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	return self;
}


static RygelThumbnailer* rygel_thumbnailer_new (GError** error) {
	return rygel_thumbnailer_construct (RYGEL_TYPE_THUMBNAILER, error);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


RygelThumbnailer* rygel_thumbnailer_get_default (void) {
	RygelThumbnailer* result = NULL;
	gboolean _tmp0_ = FALSE;
	RygelThumbnailer* _tmp6_ = NULL;
	RygelThumbnailer* _tmp7_ = NULL;
	GError * _inner_error_ = NULL;
	_tmp0_ = rygel_thumbnailer_first_time;
	if (_tmp0_) {
		{
			RygelThumbnailer* _tmp1_ = NULL;
			RygelThumbnailer* _tmp2_ = NULL;
			_tmp2_ = rygel_thumbnailer_new (&_inner_error_);
			_tmp1_ = _tmp2_;
			if (_inner_error_ != NULL) {
				if (_inner_error_->domain == THUMBNAILER_ERROR) {
					goto __catch72_thumbnailer_error;
				}
				g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return NULL;
			}
			_g_object_unref0 (rygel_thumbnailer_thumbnailer);
			rygel_thumbnailer_thumbnailer = _tmp1_;
		}
		goto __finally72;
		__catch72_thumbnailer_error:
		{
			GError* err = NULL;
			const gchar* _tmp3_ = NULL;
			GError* _tmp4_ = NULL;
			const gchar* _tmp5_ = NULL;
			err = _inner_error_;
			_inner_error_ = NULL;
			_tmp3_ = _ ("No thumbnailer available: %s");
			_tmp4_ = err;
			_tmp5_ = _tmp4_->message;
			g_warning (_tmp3_, _tmp5_);
			_g_error_free0 (err);
		}
		__finally72:
		if (_inner_error_ != NULL) {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		rygel_thumbnailer_first_time = FALSE;
	}
	_tmp6_ = rygel_thumbnailer_thumbnailer;
	_tmp7_ = _g_object_ref0 (_tmp6_);
	result = _tmp7_;
	return result;
}


RygelThumbnail* rygel_thumbnailer_get_thumbnail (RygelThumbnailer* self, const gchar* uri, const gchar* mime_type, GError** error) {
	RygelThumbnail* result = NULL;
	GFile* file = NULL;
	const gchar* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
	GFile* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	GFileInfo* info = NULL;
	GFile* _tmp6_ = NULL;
	GFileInfo* _tmp7_ = NULL;
	gchar* path = NULL;
	GFileInfo* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	gboolean failed = FALSE;
	GFileInfo* _tmp10_ = NULL;
	gboolean _tmp11_ = FALSE;
	gboolean _tmp12_ = FALSE;
	gboolean _tmp15_ = FALSE;
	RygelDbusThumbnailer* _tmp16_ = NULL;
	gboolean _tmp18_ = FALSE;
	const gchar* _tmp24_ = NULL;
	const gchar* _tmp27_ = NULL;
	GFile* _tmp28_ = NULL;
	GFileInfo* _tmp29_ = NULL;
	GFile* _tmp30_ = NULL;
	GFileInfo* _tmp31_ = NULL;
	GFileInfo* _tmp32_ = NULL;
	gboolean _tmp33_ = FALSE;
	RygelThumbnail* thumbnail = NULL;
	RygelThumbnail* _tmp36_ = NULL;
	const gchar* _tmp37_ = NULL;
	RygelThumbnail* _tmp38_ = NULL;
	const gchar* _tmp39_ = NULL;
	RygelThumbnail* _tmp40_ = NULL;
	const gchar* _tmp41_ = NULL;
	RygelThumbnail* _tmp42_ = NULL;
	RygelThumbnail* _tmp43_ = NULL;
	RygelThumbnail* _tmp44_ = NULL;
	gint _tmp45_ = 0;
	RygelThumbnail* _tmp46_ = NULL;
	RygelThumbnail* _tmp47_ = NULL;
	gint _tmp48_ = 0;
	RygelThumbnail* _tmp49_ = NULL;
	RygelThumbnail* _tmp50_ = NULL;
	gint _tmp51_ = 0;
	gchar* _tmp52_ = NULL;
	const gchar* _tmp53_ = NULL;
	gchar* _tmp54_ = NULL;
	RygelThumbnail* _tmp55_ = NULL;
	RygelThumbnail* _tmp56_ = NULL;
	GFileInfo* _tmp57_ = NULL;
	guint64 _tmp58_ = 0ULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (uri != NULL, NULL);
	g_return_val_if_fail (mime_type != NULL, NULL);
	_tmp0_ = uri;
	_tmp1_ = g_file_new_for_uri (_tmp0_);
	file = _tmp1_;
	_tmp2_ = file;
	_tmp3_ = g_file_is_native (_tmp2_);
	if (!_tmp3_) {
		const gchar* _tmp4_ = NULL;
		GError* _tmp5_ = NULL;
		_tmp4_ = _ ("Thumbnailing not supported");
		_tmp5_ = g_error_new_literal (THUMBNAILER_ERROR, THUMBNAILER_ERROR_NO_THUMBNAIL, _tmp4_);
		_inner_error_ = _tmp5_;
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (file);
		return NULL;
	}
	_tmp6_ = file;
	_tmp7_ = g_file_query_info (_tmp6_, G_FILE_ATTRIBUTE_THUMBNAIL_PATH "," G_FILE_ATTRIBUTE_THUMBNAILING_FAILED, G_FILE_QUERY_INFO_NONE, NULL, &_inner_error_);
	info = _tmp7_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (file);
		return NULL;
	}
	_tmp8_ = info;
	_tmp9_ = g_file_info_get_attribute_as_string (_tmp8_, G_FILE_ATTRIBUTE_THUMBNAIL_PATH);
	path = _tmp9_;
	_tmp10_ = info;
	_tmp11_ = g_file_info_get_attribute_boolean (_tmp10_, G_FILE_ATTRIBUTE_THUMBNAILING_FAILED);
	failed = _tmp11_;
	_tmp12_ = failed;
	if (_tmp12_) {
		const gchar* _tmp13_ = NULL;
		GError* _tmp14_ = NULL;
		_tmp13_ = _ ("No thumbnail available");
		_tmp14_ = g_error_new_literal (THUMBNAILER_ERROR, THUMBNAILER_ERROR_NO_THUMBNAIL, _tmp13_);
		_inner_error_ = _tmp14_;
		g_propagate_error (error, _inner_error_);
		_g_free0 (path);
		_g_object_unref0 (info);
		_g_object_unref0 (file);
		return NULL;
	}
	_tmp16_ = self->priv->thumbler;
	if (_tmp16_ != NULL) {
		const gchar* _tmp17_ = NULL;
		_tmp17_ = path;
		_tmp15_ = _tmp17_ == NULL;
	} else {
		_tmp15_ = FALSE;
	}
	_tmp18_ = _tmp15_;
	if (_tmp18_) {
		RygelDbusThumbnailer* _tmp19_ = NULL;
		const gchar* _tmp20_ = NULL;
		const gchar* _tmp21_ = NULL;
		const gchar* _tmp22_ = NULL;
		GError* _tmp23_ = NULL;
		_tmp19_ = self->priv->thumbler;
		_tmp20_ = uri;
		_tmp21_ = mime_type;
		rygel_dbus_thumbnailer_queue_thumbnail_task (_tmp19_, _tmp20_, _tmp21_);
		_tmp22_ = _ ("No thumbnail available");
		_tmp23_ = g_error_new_literal (THUMBNAILER_ERROR, THUMBNAILER_ERROR_NO_THUMBNAIL, _tmp22_);
		_inner_error_ = _tmp23_;
		g_propagate_error (error, _inner_error_);
		_g_free0 (path);
		_g_object_unref0 (info);
		_g_object_unref0 (file);
		return NULL;
	}
	_tmp24_ = path;
	if (_tmp24_ == NULL) {
		const gchar* _tmp25_ = NULL;
		GError* _tmp26_ = NULL;
		_tmp25_ = _ ("No thumbnail available");
		_tmp26_ = g_error_new_literal (THUMBNAILER_ERROR, THUMBNAILER_ERROR_NO_THUMBNAIL, _tmp25_);
		_inner_error_ = _tmp26_;
		g_propagate_error (error, _inner_error_);
		_g_free0 (path);
		_g_object_unref0 (info);
		_g_object_unref0 (file);
		return NULL;
	}
	_tmp27_ = path;
	_tmp28_ = g_file_new_for_path (_tmp27_);
	_g_object_unref0 (file);
	file = _tmp28_;
	_tmp30_ = file;
	_tmp31_ = g_file_query_info (_tmp30_, G_FILE_ATTRIBUTE_ACCESS_CAN_READ "," G_FILE_ATTRIBUTE_STANDARD_SIZE, G_FILE_QUERY_INFO_NONE, NULL, &_inner_error_);
	_tmp29_ = _tmp31_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_free0 (path);
		_g_object_unref0 (info);
		_g_object_unref0 (file);
		return NULL;
	}
	_g_object_unref0 (info);
	info = _tmp29_;
	_tmp32_ = info;
	_tmp33_ = g_file_info_get_attribute_boolean (_tmp32_, G_FILE_ATTRIBUTE_ACCESS_CAN_READ);
	if (!_tmp33_) {
		const gchar* _tmp34_ = NULL;
		GError* _tmp35_ = NULL;
		_tmp34_ = _ ("No thumbnail available");
		_tmp35_ = g_error_new_literal (THUMBNAILER_ERROR, THUMBNAILER_ERROR_NO_THUMBNAIL, _tmp34_);
		_inner_error_ = _tmp35_;
		g_propagate_error (error, _inner_error_);
		_g_free0 (path);
		_g_object_unref0 (info);
		_g_object_unref0 (file);
		return NULL;
	}
	_tmp36_ = self->priv->template;
	_tmp37_ = ((RygelIconInfo*) _tmp36_)->mime_type;
	_tmp38_ = self->priv->template;
	_tmp39_ = _tmp38_->dlna_profile;
	_tmp40_ = self->priv->template;
	_tmp41_ = ((RygelIconInfo*) _tmp40_)->file_extension;
	_tmp42_ = rygel_thumbnail_new (_tmp37_, _tmp39_, _tmp41_);
	thumbnail = _tmp42_;
	_tmp43_ = thumbnail;
	_tmp44_ = self->priv->template;
	_tmp45_ = ((RygelIconInfo*) _tmp44_)->width;
	((RygelIconInfo*) _tmp43_)->width = _tmp45_;
	_tmp46_ = thumbnail;
	_tmp47_ = self->priv->template;
	_tmp48_ = ((RygelIconInfo*) _tmp47_)->height;
	((RygelIconInfo*) _tmp46_)->height = _tmp48_;
	_tmp49_ = thumbnail;
	_tmp50_ = self->priv->template;
	_tmp51_ = ((RygelIconInfo*) _tmp50_)->depth;
	((RygelIconInfo*) _tmp49_)->depth = _tmp51_;
	_tmp53_ = path;
	_tmp54_ = g_filename_to_uri (_tmp53_, NULL, &_inner_error_);
	_tmp52_ = _tmp54_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_rygel_icon_info_unref0 (thumbnail);
		_g_free0 (path);
		_g_object_unref0 (info);
		_g_object_unref0 (file);
		return NULL;
	}
	_tmp55_ = thumbnail;
	_g_free0 (((RygelIconInfo*) _tmp55_)->uri);
	((RygelIconInfo*) _tmp55_)->uri = _tmp52_;
	_tmp56_ = thumbnail;
	_tmp57_ = info;
	_tmp58_ = g_file_info_get_attribute_uint64 (_tmp57_, G_FILE_ATTRIBUTE_STANDARD_SIZE);
	((RygelIconInfo*) _tmp56_)->size = (gint64) _tmp58_;
	result = thumbnail;
	_g_free0 (path);
	_g_object_unref0 (info);
	_g_object_unref0 (file);
	return result;
}


static void rygel_thumbnailer_on_dbus_thumbnailer_ready (RygelThumbnailer* self, gboolean available) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = available;
	if (!_tmp0_) {
		const gchar* _tmp1_ = NULL;
		_g_object_unref0 (self->priv->thumbler);
		self->priv->thumbler = NULL;
		_tmp1_ = _ ("No D-Bus thumbnailer available");
		g_message ("rygel-thumbnailer.vala:132: %s", _tmp1_);
	}
}


static void rygel_thumbnailer_class_init (RygelThumbnailerClass * klass) {
	rygel_thumbnailer_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelThumbnailerPrivate));
	G_OBJECT_CLASS (klass)->finalize = rygel_thumbnailer_finalize;
}


static void rygel_thumbnailer_instance_init (RygelThumbnailer * self) {
	self->priv = RYGEL_THUMBNAILER_GET_PRIVATE (self);
	self->priv->thumbler = NULL;
}


static void rygel_thumbnailer_finalize (GObject* obj) {
	RygelThumbnailer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_THUMBNAILER, RygelThumbnailer);
	_rygel_icon_info_unref0 (self->priv->template);
	_g_free0 (self->priv->extension);
	_g_object_unref0 (self->priv->thumbler);
	G_OBJECT_CLASS (rygel_thumbnailer_parent_class)->finalize (obj);
}


/**
 * Provides thumbnails for images and videos.
 */
GType rygel_thumbnailer_get_type (void) {
	static volatile gsize rygel_thumbnailer_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_thumbnailer_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelThumbnailerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_thumbnailer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelThumbnailer), 0, (GInstanceInitFunc) rygel_thumbnailer_instance_init, NULL };
		GType rygel_thumbnailer_type_id;
		rygel_thumbnailer_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelThumbnailer", &g_define_type_info, 0);
		g_once_init_leave (&rygel_thumbnailer_type_id__volatile, rygel_thumbnailer_type_id);
	}
	return rygel_thumbnailer_type_id__volatile;
}



