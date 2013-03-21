/* rygel-external-album-art-factory.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-external-album-art-factory.vala, do not modify */

/*
 * Copyright (C) 2009 Zeeshan Ali (Khattak) <zeeshanak@gnome.org>.
 * Copyright (C) 2009 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
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
#include <stdlib.h>
#include <string.h>
#include <rygel-server.h>
#include <rygel-core.h>
#include <gobject/gvaluecollector.h>


#define RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY (rygel_external_album_art_factory_get_type ())
#define RYGEL_EXTERNAL_ALBUM_ART_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY, RygelExternalAlbumArtFactory))
#define RYGEL_EXTERNAL_ALBUM_ART_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY, RygelExternalAlbumArtFactoryClass))
#define RYGEL_EXTERNAL_IS_ALBUM_ART_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY))
#define RYGEL_EXTERNAL_IS_ALBUM_ART_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY))
#define RYGEL_EXTERNAL_ALBUM_ART_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY, RygelExternalAlbumArtFactoryClass))

typedef struct _RygelExternalAlbumArtFactory RygelExternalAlbumArtFactory;
typedef struct _RygelExternalAlbumArtFactoryClass RygelExternalAlbumArtFactoryClass;
typedef struct _RygelExternalAlbumArtFactoryPrivate RygelExternalAlbumArtFactoryPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _rygel_icon_info_unref0(var) ((var == NULL) ? NULL : (var = (rygel_icon_info_unref (var), NULL)))
#define _rygel_external_album_art_factory_unref0(var) ((var == NULL) ? NULL : (var = (rygel_external_album_art_factory_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_hash_table_unref0(var) ((var == NULL) ? NULL : (var = (g_hash_table_unref (var), NULL)))
typedef struct _RygelExternalAlbumArtFactoryCreateData RygelExternalAlbumArtFactoryCreateData;
#define _g_variant_unref0(var) ((var == NULL) ? NULL : (var = (g_variant_unref (var), NULL)))
typedef struct _RygelExternalParamSpecAlbumArtFactory RygelExternalParamSpecAlbumArtFactory;

struct _RygelExternalAlbumArtFactory {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelExternalAlbumArtFactoryPrivate * priv;
};

struct _RygelExternalAlbumArtFactoryClass {
	GTypeClass parent_class;
	void (*finalize) (RygelExternalAlbumArtFactory *self);
};

struct _RygelExternalAlbumArtFactoryCreateData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelExternalAlbumArtFactory* self;
	gchar* service_name;
	gchar* object_path;
	RygelThumbnail* result;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	FreeDesktopProperties* _tmp2_;
	FreeDesktopProperties* props;
	FreeDesktopProperties* _tmp3_;
	GHashTable* _tmp4_;
	GHashTable* item_props;
	GHashTable* _tmp5_;
	RygelThumbnail* _tmp6_;
	GError * _inner_error_;
};

struct _RygelExternalParamSpecAlbumArtFactory {
	GParamSpec parent_instance;
};


static gpointer rygel_external_album_art_factory_parent_class = NULL;

gpointer rygel_external_album_art_factory_ref (gpointer instance);
void rygel_external_album_art_factory_unref (gpointer instance);
GParamSpec* rygel_external_param_spec_album_art_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_external_value_set_album_art_factory (GValue* value, gpointer v_object);
void rygel_external_value_take_album_art_factory (GValue* value, gpointer v_object);
gpointer rygel_external_value_get_album_art_factory (const GValue* value);
GType rygel_external_album_art_factory_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_EXTERNAL_ALBUM_ART_FACTORY_DUMMY_PROPERTY
};
static void rygel_external_album_art_factory_create_data_free (gpointer _data);
void rygel_external_album_art_factory_create (RygelExternalAlbumArtFactory* self, const gchar* service_name, const gchar* object_path, GAsyncReadyCallback _callback_, gpointer _user_data_);
RygelThumbnail* rygel_external_album_art_factory_create_finish (RygelExternalAlbumArtFactory* self, GAsyncResult* _res_, GError** error);
static gboolean rygel_external_album_art_factory_create_co (RygelExternalAlbumArtFactoryCreateData* _data_);
static void rygel_external_album_art_factory_create_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
#define RYGEL_EXTERNAL_MEDIA_ITEM_PROXY_IFACE "org.gnome.UPnP.MediaItem2"
static RygelThumbnail* rygel_external_album_art_factory_create_from_props (RygelExternalAlbumArtFactory* self, GHashTable* props);
static gchar* _variant_get18 (GVariant* value);
static gchar** _variant_get19 (GVariant* value, int* result_length1);
static gint64 _variant_get20 (GVariant* value);
RygelExternalAlbumArtFactory* rygel_external_album_art_factory_new (void);
RygelExternalAlbumArtFactory* rygel_external_album_art_factory_construct (GType object_type);
static void rygel_external_album_art_factory_finalize (RygelExternalAlbumArtFactory* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void rygel_external_album_art_factory_create_data_free (gpointer _data) {
	RygelExternalAlbumArtFactoryCreateData* _data_;
	_data_ = _data;
	_g_free0 (_data_->service_name);
	_g_free0 (_data_->object_path);
	_rygel_icon_info_unref0 (_data_->result);
	_rygel_external_album_art_factory_unref0 (_data_->self);
	g_slice_free (RygelExternalAlbumArtFactoryCreateData, _data_);
}


static gpointer _rygel_external_album_art_factory_ref0 (gpointer self) {
	return self ? rygel_external_album_art_factory_ref (self) : NULL;
}


void rygel_external_album_art_factory_create (RygelExternalAlbumArtFactory* self, const gchar* service_name, const gchar* object_path, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelExternalAlbumArtFactoryCreateData* _data_;
	RygelExternalAlbumArtFactory* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	_data_ = g_slice_new0 (RygelExternalAlbumArtFactoryCreateData);
	_data_->_async_result = g_simple_async_result_new (NULL, _callback_, _user_data_, rygel_external_album_art_factory_create);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_external_album_art_factory_create_data_free);
	_tmp0_ = _rygel_external_album_art_factory_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = service_name;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->service_name);
	_data_->service_name = _tmp2_;
	_tmp3_ = object_path;
	_tmp4_ = g_strdup (_tmp3_);
	_g_free0 (_data_->object_path);
	_data_->object_path = _tmp4_;
	rygel_external_album_art_factory_create_co (_data_);
}


RygelThumbnail* rygel_external_album_art_factory_create_finish (RygelExternalAlbumArtFactory* self, GAsyncResult* _res_, GError** error) {
	RygelThumbnail* result;
	RygelExternalAlbumArtFactoryCreateData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return NULL;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
	result = _data_->result;
	_data_->result = NULL;
	return result;
}


static void rygel_external_album_art_factory_create_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RygelExternalAlbumArtFactoryCreateData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	rygel_external_album_art_factory_create_co (_data_);
}


static gboolean rygel_external_album_art_factory_create_co (RygelExternalAlbumArtFactoryCreateData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		case 2:
		goto _state_2;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = _data_->service_name;
	_data_->_tmp1_ = _data_->object_path;
	_data_->_state_ = 1;
	g_async_initable_new_async (FREE_DESKTOP_TYPE_PROPERTIES_PROXY, 0, NULL, rygel_external_album_art_factory_create_ready, _data_, "g-flags", G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES, "g-name", _data_->_tmp0_, "g-bus-type", G_BUS_TYPE_SESSION, "g-object-path", _data_->_tmp1_, "g-interface-name", "org.freedesktop.DBus.Properties", NULL);
	return FALSE;
	_state_1:
	_data_->_tmp2_ = NULL;
	_data_->_tmp2_ = g_async_initable_new_finish (_data_->_source_object_, _data_->_res_, &_data_->_inner_error_);
	_data_->props = (FreeDesktopProperties*) _data_->_tmp2_;
	if (_data_->_inner_error_ != NULL) {
		if ((_data_->_inner_error_->domain == G_IO_ERROR) || (_data_->_inner_error_->domain == G_DBUS_ERROR)) {
			g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
			g_error_free (_data_->_inner_error_);
			if (_data_->_state_ == 0) {
				g_simple_async_result_complete_in_idle (_data_->_async_result);
			} else {
				g_simple_async_result_complete (_data_->_async_result);
			}
			g_object_unref (_data_->_async_result);
			return FALSE;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
			g_clear_error (&_data_->_inner_error_);
			return FALSE;
		}
	}
	_data_->_tmp3_ = _data_->props;
	_data_->_state_ = 2;
	free_desktop_properties_get_all (_data_->_tmp3_, RYGEL_EXTERNAL_MEDIA_ITEM_PROXY_IFACE, rygel_external_album_art_factory_create_ready, _data_);
	return FALSE;
	_state_2:
	_data_->_tmp4_ = NULL;
	_data_->_tmp4_ = free_desktop_properties_get_all_finish (_data_->_tmp3_, _data_->_res_, &_data_->_inner_error_);
	_data_->item_props = _data_->_tmp4_;
	if (_data_->_inner_error_ != NULL) {
		if ((_data_->_inner_error_->domain == G_IO_ERROR) || (_data_->_inner_error_->domain == G_DBUS_ERROR)) {
			g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
			g_error_free (_data_->_inner_error_);
			_g_object_unref0 (_data_->props);
			if (_data_->_state_ == 0) {
				g_simple_async_result_complete_in_idle (_data_->_async_result);
			} else {
				g_simple_async_result_complete (_data_->_async_result);
			}
			g_object_unref (_data_->_async_result);
			return FALSE;
		} else {
			_g_object_unref0 (_data_->props);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
			g_clear_error (&_data_->_inner_error_);
			return FALSE;
		}
	}
	_data_->_tmp5_ = _data_->item_props;
	_data_->_tmp6_ = NULL;
	_data_->_tmp6_ = rygel_external_album_art_factory_create_from_props (_data_->self, _data_->_tmp5_);
	_data_->result = _data_->_tmp6_;
	_g_hash_table_unref0 (_data_->item_props);
	_g_object_unref0 (_data_->props);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
	_g_hash_table_unref0 (_data_->item_props);
	_g_object_unref0 (_data_->props);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static gpointer _g_variant_ref0 (gpointer self) {
	return self ? g_variant_ref (self) : NULL;
}


static gchar* _variant_get18 (GVariant* value) {
	return g_variant_dup_string (value, NULL);
}


static gchar** _variant_get19 (GVariant* value, int* result_length1) {
	gchar** _tmp12_;
	int _tmp12__length;
	int _tmp12__size;
	int _tmp12__length1;
	GVariantIter _tmp13_;
	GVariant* _tmp14_;
	_tmp12_ = g_new (gchar*, 5);
	_tmp12__length = 0;
	_tmp12__size = 4;
	_tmp12__length1 = 0;
	g_variant_iter_init (&_tmp13_, value);
	for (; (_tmp14_ = g_variant_iter_next_value (&_tmp13_)) != NULL; _tmp12__length1++) {
		if (_tmp12__size == _tmp12__length) {
			_tmp12__size = 2 * _tmp12__size;
			_tmp12_ = g_renew (gchar*, _tmp12_, _tmp12__size + 1);
		}
		_tmp12_[_tmp12__length++] = g_variant_dup_string (_tmp14_, NULL);
		g_variant_unref (_tmp14_);
	}
	*result_length1 = _tmp12__length1;
	_tmp12_[_tmp12__length] = NULL;
	return _tmp12_;
}


static gint64 _variant_get20 (GVariant* value) {
	return g_variant_get_int64 (value);
}


static RygelThumbnail* rygel_external_album_art_factory_create_from_props (RygelExternalAlbumArtFactory* self, GHashTable* props) {
	RygelThumbnail* result = NULL;
	RygelThumbnail* _tmp0_;
	RygelThumbnail* thumbnail;
	GHashTable* _tmp1_;
	gconstpointer _tmp2_ = NULL;
	GVariant* _tmp3_;
	GVariant* value;
	RygelThumbnail* _tmp4_;
	GVariant* _tmp5_;
	gchar* _tmp6_;
	GHashTable* _tmp7_;
	gconstpointer _tmp8_ = NULL;
	GVariant* _tmp9_;
	GVariant* _tmp10_;
	gchar** _tmp11_;
	gint _tmp11__length1;
	gchar** uris;
	gint uris_length1;
	gint _uris_size_;
	gboolean _tmp15_ = FALSE;
	gchar** _tmp16_;
	gint _tmp16__length1;
	gboolean _tmp19_;
	GHashTable* _tmp24_;
	gconstpointer _tmp25_ = NULL;
	GVariant* _tmp26_;
	GVariant* _tmp27_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (props != NULL, NULL);
	_tmp0_ = rygel_thumbnail_new ("image/jpeg", "JPEG_TN", "jpg");
	thumbnail = _tmp0_;
	_tmp1_ = props;
	_tmp2_ = g_hash_table_lookup (_tmp1_, "MIMEType");
	_tmp3_ = _g_variant_ref0 ((GVariant*) _tmp2_);
	value = _tmp3_;
	_tmp4_ = thumbnail;
	_tmp5_ = value;
	_tmp6_ = _variant_get18 (_tmp5_);
	_g_free0 (((RygelIconInfo*) _tmp4_)->mime_type);
	((RygelIconInfo*) _tmp4_)->mime_type = _tmp6_;
	_tmp7_ = props;
	_tmp8_ = g_hash_table_lookup (_tmp7_, "URLs");
	_tmp9_ = _g_variant_ref0 ((GVariant*) _tmp8_);
	_g_variant_unref0 (value);
	value = _tmp9_;
	_tmp10_ = value;
	_tmp11_ = _variant_get19 (_tmp10_, &_tmp11__length1);
	uris = _tmp11_;
	uris_length1 = _tmp11__length1;
	_uris_size_ = uris_length1;
	_tmp16_ = uris;
	_tmp16__length1 = uris_length1;
	if (_tmp16_ != NULL) {
		gchar** _tmp17_;
		gint _tmp17__length1;
		const gchar* _tmp18_;
		_tmp17_ = uris;
		_tmp17__length1 = uris_length1;
		_tmp18_ = _tmp17_[0];
		_tmp15_ = _tmp18_ != NULL;
	} else {
		_tmp15_ = FALSE;
	}
	_tmp19_ = _tmp15_;
	if (_tmp19_) {
		RygelThumbnail* _tmp20_;
		gchar** _tmp21_;
		gint _tmp21__length1;
		const gchar* _tmp22_;
		gchar* _tmp23_;
		_tmp20_ = thumbnail;
		_tmp21_ = uris;
		_tmp21__length1 = uris_length1;
		_tmp22_ = _tmp21_[0];
		_tmp23_ = g_strdup (_tmp22_);
		_g_free0 (((RygelIconInfo*) _tmp20_)->uri);
		((RygelIconInfo*) _tmp20_)->uri = _tmp23_;
	}
	_tmp24_ = props;
	_tmp25_ = g_hash_table_lookup (_tmp24_, "Size");
	_tmp26_ = _g_variant_ref0 ((GVariant*) _tmp25_);
	_g_variant_unref0 (value);
	value = _tmp26_;
	_tmp27_ = value;
	if (_tmp27_ != NULL) {
		RygelThumbnail* _tmp28_;
		GVariant* _tmp29_;
		gint64 _tmp30_;
		_tmp28_ = thumbnail;
		_tmp29_ = value;
		_tmp30_ = _variant_get20 (_tmp29_);
		((RygelIconInfo*) _tmp28_)->size = _tmp30_;
	}
	result = thumbnail;
	uris = (_vala_array_free (uris, uris_length1, (GDestroyNotify) g_free), NULL);
	_g_variant_unref0 (value);
	return result;
}


RygelExternalAlbumArtFactory* rygel_external_album_art_factory_construct (GType object_type) {
	RygelExternalAlbumArtFactory* self = NULL;
	self = (RygelExternalAlbumArtFactory*) g_type_create_instance (object_type);
	return self;
}


RygelExternalAlbumArtFactory* rygel_external_album_art_factory_new (void) {
	return rygel_external_album_art_factory_construct (RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY);
}


static void rygel_external_value_album_art_factory_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void rygel_external_value_album_art_factory_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		rygel_external_album_art_factory_unref (value->data[0].v_pointer);
	}
}


static void rygel_external_value_album_art_factory_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = rygel_external_album_art_factory_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer rygel_external_value_album_art_factory_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* rygel_external_value_album_art_factory_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		RygelExternalAlbumArtFactory* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = rygel_external_album_art_factory_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* rygel_external_value_album_art_factory_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelExternalAlbumArtFactory** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = rygel_external_album_art_factory_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* rygel_external_param_spec_album_art_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelExternalParamSpecAlbumArtFactory* spec;
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer rygel_external_value_get_album_art_factory (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY), NULL);
	return value->data[0].v_pointer;
}


void rygel_external_value_set_album_art_factory (GValue* value, gpointer v_object) {
	RygelExternalAlbumArtFactory* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		rygel_external_album_art_factory_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		rygel_external_album_art_factory_unref (old);
	}
}


void rygel_external_value_take_album_art_factory (GValue* value, gpointer v_object) {
	RygelExternalAlbumArtFactory* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		rygel_external_album_art_factory_unref (old);
	}
}


static void rygel_external_album_art_factory_class_init (RygelExternalAlbumArtFactoryClass * klass) {
	rygel_external_album_art_factory_parent_class = g_type_class_peek_parent (klass);
	RYGEL_EXTERNAL_ALBUM_ART_FACTORY_CLASS (klass)->finalize = rygel_external_album_art_factory_finalize;
}


static void rygel_external_album_art_factory_instance_init (RygelExternalAlbumArtFactory * self) {
	self->ref_count = 1;
}


static void rygel_external_album_art_factory_finalize (RygelExternalAlbumArtFactory* obj) {
	RygelExternalAlbumArtFactory * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_EXTERNAL_TYPE_ALBUM_ART_FACTORY, RygelExternalAlbumArtFactory);
}


/**
 * Factory for thumbnail from external plugins.
 */
GType rygel_external_album_art_factory_get_type (void) {
	static volatile gsize rygel_external_album_art_factory_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_external_album_art_factory_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { rygel_external_value_album_art_factory_init, rygel_external_value_album_art_factory_free_value, rygel_external_value_album_art_factory_copy_value, rygel_external_value_album_art_factory_peek_pointer, "p", rygel_external_value_album_art_factory_collect_value, "p", rygel_external_value_album_art_factory_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (RygelExternalAlbumArtFactoryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_external_album_art_factory_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelExternalAlbumArtFactory), 0, (GInstanceInitFunc) rygel_external_album_art_factory_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType rygel_external_album_art_factory_type_id;
		rygel_external_album_art_factory_type_id = g_type_register_fundamental (g_type_fundamental_next (), "RygelExternalAlbumArtFactory", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&rygel_external_album_art_factory_type_id__volatile, rygel_external_album_art_factory_type_id);
	}
	return rygel_external_album_art_factory_type_id__volatile;
}


gpointer rygel_external_album_art_factory_ref (gpointer instance) {
	RygelExternalAlbumArtFactory* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void rygel_external_album_art_factory_unref (gpointer instance) {
	RygelExternalAlbumArtFactory* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		RYGEL_EXTERNAL_ALBUM_ART_FACTORY_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
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



