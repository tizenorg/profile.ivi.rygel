/* rygel-lms-all-videos.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-lms-all-videos.vala, do not modify */

/*
 * Copyright (C) 2013 Intel Corporation.
 *
 * Author: Jussi Kukkonen <jussi.kukkonen@intel.com>
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
#include <sqlite3.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>


#define RYGEL_LMS_TYPE_CATEGORY_CONTAINER (rygel_lms_category_container_get_type ())
#define RYGEL_LMS_CATEGORY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_LMS_TYPE_CATEGORY_CONTAINER, RygelLMSCategoryContainer))
#define RYGEL_LMS_CATEGORY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_LMS_TYPE_CATEGORY_CONTAINER, RygelLMSCategoryContainerClass))
#define RYGEL_LMS_IS_CATEGORY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_LMS_TYPE_CATEGORY_CONTAINER))
#define RYGEL_LMS_IS_CATEGORY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_LMS_TYPE_CATEGORY_CONTAINER))
#define RYGEL_LMS_CATEGORY_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_LMS_TYPE_CATEGORY_CONTAINER, RygelLMSCategoryContainerClass))

typedef struct _RygelLMSCategoryContainer RygelLMSCategoryContainer;
typedef struct _RygelLMSCategoryContainerClass RygelLMSCategoryContainerClass;
typedef struct _RygelLMSCategoryContainerPrivate RygelLMSCategoryContainerPrivate;

#define RYGEL_LMS_TYPE_ALL_VIDEOS (rygel_lms_all_videos_get_type ())
#define RYGEL_LMS_ALL_VIDEOS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_LMS_TYPE_ALL_VIDEOS, RygelLMSAllVideos))
#define RYGEL_LMS_ALL_VIDEOS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_LMS_TYPE_ALL_VIDEOS, RygelLMSAllVideosClass))
#define RYGEL_LMS_IS_ALL_VIDEOS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_LMS_TYPE_ALL_VIDEOS))
#define RYGEL_LMS_IS_ALL_VIDEOS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_LMS_TYPE_ALL_VIDEOS))
#define RYGEL_LMS_ALL_VIDEOS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_LMS_TYPE_ALL_VIDEOS, RygelLMSAllVideosClass))

typedef struct _RygelLMSAllVideos RygelLMSAllVideos;
typedef struct _RygelLMSAllVideosClass RygelLMSAllVideosClass;
typedef struct _RygelLMSAllVideosPrivate RygelLMSAllVideosPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_LMS_TYPE_DATABASE (rygel_lms_database_get_type ())
#define RYGEL_LMS_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_LMS_TYPE_DATABASE, RygelLMSDatabase))
#define RYGEL_LMS_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_LMS_TYPE_DATABASE, RygelLMSDatabaseClass))
#define RYGEL_LMS_IS_DATABASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_LMS_TYPE_DATABASE))
#define RYGEL_LMS_IS_DATABASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_LMS_TYPE_DATABASE))
#define RYGEL_LMS_DATABASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_LMS_TYPE_DATABASE, RygelLMSDatabaseClass))

typedef struct _RygelLMSDatabase RygelLMSDatabase;
typedef struct _RygelLMSDatabaseClass RygelLMSDatabaseClass;

struct _RygelLMSCategoryContainer {
	RygelMediaContainer parent_instance;
	RygelLMSCategoryContainerPrivate * priv;
	sqlite3_stmt* stmt_all;
	sqlite3_stmt* stmt_find_object;
	gchar* child_prefix;
	gchar* ref_prefix;
};

struct _RygelLMSCategoryContainerClass {
	RygelMediaContainerClass parent_class;
	RygelMediaObject* (*object_from_statement) (RygelLMSCategoryContainer* self, sqlite3_stmt* statement);
	gchar* (*get_sql_all_with_filter) (RygelLMSCategoryContainer* self, const gchar* filter);
	gchar* (*get_sql_count_with_filter) (RygelLMSCategoryContainer* self, const gchar* filter);
	guint (*get_child_count_with_filter) (RygelLMSCategoryContainer* self, const gchar* where_filter, GValueArray* args);
	RygelMediaObjects* (*get_children_with_filter) (RygelLMSCategoryContainer* self, const gchar* where_filter, GValueArray* args, const gchar* sort_criteria, guint offset, guint max_count);
};

struct _RygelLMSAllVideos {
	RygelLMSCategoryContainer parent_instance;
	RygelLMSAllVideosPrivate * priv;
};

struct _RygelLMSAllVideosClass {
	RygelLMSCategoryContainerClass parent_class;
};


static gpointer rygel_lms_all_videos_parent_class = NULL;

GType rygel_lms_category_container_get_type (void) G_GNUC_CONST;
GType rygel_lms_all_videos_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_LMS_ALL_VIDEOS_DUMMY_PROPERTY
};
#define RYGEL_LMS_ALL_VIDEOS_SQL_ALL "SELECT videos.id, title, artist, length, path, dtime, size, dlna_profi" \
"le, dlna_mime " "FROM videos, files " "WHERE videos.id = files.id " "LIMIT ? OFFSET ?;"
#define RYGEL_LMS_ALL_VIDEOS_SQL_COUNT "SELECT count(videos.id) " "FROM videos, files " "WHERE videos.id = files.id;"
#define RYGEL_LMS_ALL_VIDEOS_SQL_FIND_OBJECT "SELECT videos.id, title, artist, length, path, dtime, size, dlna_profi" \
"le, dlna_mime " "FROM videos, files " "WHERE files.id = ? AND videos.id = files.id;"
static RygelMediaObject* rygel_lms_all_videos_real_object_from_statement (RygelLMSCategoryContainer* base, sqlite3_stmt* statement);
gchar* rygel_lms_category_container_build_child_id (RygelLMSCategoryContainer* self, gint db_id);
gpointer rygel_lms_database_ref (gpointer instance);
void rygel_lms_database_unref (gpointer instance);
GParamSpec* rygel_lms_param_spec_database (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_lms_value_set_database (GValue* value, gpointer v_object);
void rygel_lms_value_take_database (GValue* value, gpointer v_object);
gpointer rygel_lms_value_get_database (const GValue* value);
GType rygel_lms_database_get_type (void) G_GNUC_CONST;
RygelLMSAllVideos* rygel_lms_all_videos_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelLMSDatabase* lms_db);
RygelLMSAllVideos* rygel_lms_all_videos_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelLMSDatabase* lms_db);
RygelLMSCategoryContainer* rygel_lms_category_container_construct (GType object_type, const gchar* db_id, RygelMediaContainer* parent, const gchar* title, RygelLMSDatabase* lms_db, const gchar* sql_all, const gchar* sql_find_object, const gchar* sql_count);


static RygelMediaObject* rygel_lms_all_videos_real_object_from_statement (RygelLMSCategoryContainer* base, sqlite3_stmt* statement) {
	RygelLMSAllVideos * self;
	RygelMediaObject* result = NULL;
	gint id = 0;
	sqlite3_stmt* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	gchar* mime_type = NULL;
	sqlite3_stmt* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* path = NULL;
	sqlite3_stmt* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	GFile* file = NULL;
	const gchar* _tmp8_ = NULL;
	GFile* _tmp9_ = NULL;
	gboolean _tmp10_ = FALSE;
	const gchar* _tmp11_ = NULL;
	gboolean _tmp15_ = FALSE;
	gboolean _tmp21_ = FALSE;
	const gchar* _tmp22_ = NULL;
	gboolean _tmp26_ = FALSE;
	gchar* title = NULL;
	sqlite3_stmt* _tmp29_ = NULL;
	const gchar* _tmp30_ = NULL;
	gchar* _tmp31_ = NULL;
	RygelVideoItem* video = NULL;
	gint _tmp32_ = 0;
	gchar* _tmp33_ = NULL;
	gchar* _tmp34_ = NULL;
	const gchar* _tmp35_ = NULL;
	RygelVideoItem* _tmp36_ = NULL;
	RygelVideoItem* _tmp37_ = NULL;
	RygelVideoItem* _tmp38_ = NULL;
	sqlite3_stmt* _tmp39_ = NULL;
	const gchar* _tmp40_ = NULL;
	RygelVideoItem* _tmp41_ = NULL;
	sqlite3_stmt* _tmp42_ = NULL;
	gint _tmp43_ = 0;
	GTimeVal tv = {0};
	sqlite3_stmt* _tmp44_ = NULL;
	gint _tmp45_ = 0;
	GTimeVal _tmp46_ = {0};
	RygelVideoItem* _tmp47_ = NULL;
	gchar* _tmp48_ = NULL;
	gchar* _tmp49_ = NULL;
	RygelVideoItem* _tmp50_ = NULL;
	sqlite3_stmt* _tmp51_ = NULL;
	gint _tmp52_ = 0;
	RygelVideoItem* _tmp53_ = NULL;
	sqlite3_stmt* _tmp54_ = NULL;
	const gchar* _tmp55_ = NULL;
	RygelVideoItem* _tmp56_ = NULL;
	const gchar* _tmp57_ = NULL;
	RygelVideoItem* _tmp58_ = NULL;
	GFile* _tmp59_ = NULL;
	gchar* _tmp60_ = NULL;
	gchar* _tmp61_ = NULL;
	GError * _inner_error_ = NULL;
	self = (RygelLMSAllVideos*) base;
	g_return_val_if_fail (statement != NULL, NULL);
	_tmp0_ = statement;
	_tmp1_ = sqlite3_column_int (_tmp0_, 0);
	id = _tmp1_;
	_tmp2_ = statement;
	_tmp3_ = sqlite3_column_text (_tmp2_, 8);
	_tmp4_ = g_strdup (_tmp3_);
	mime_type = _tmp4_;
	_tmp5_ = statement;
	_tmp6_ = sqlite3_column_text (_tmp5_, 4);
	_tmp7_ = g_strdup (_tmp6_);
	path = _tmp7_;
	_tmp8_ = path;
	_tmp9_ = g_file_new_for_path (_tmp8_);
	file = _tmp9_;
	_tmp11_ = mime_type;
	if (_tmp11_ == NULL) {
		_tmp10_ = TRUE;
	} else {
		const gchar* _tmp12_ = NULL;
		gint _tmp13_ = 0;
		gint _tmp14_ = 0;
		_tmp12_ = mime_type;
		_tmp13_ = strlen (_tmp12_);
		_tmp14_ = _tmp13_;
		_tmp10_ = _tmp14_ == 0;
	}
	_tmp15_ = _tmp10_;
	if (_tmp15_) {
		{
			GFileInfo* info = NULL;
			GFile* _tmp16_ = NULL;
			GFileInfo* _tmp17_ = NULL;
			GFileInfo* _tmp18_ = NULL;
			const gchar* _tmp19_ = NULL;
			gchar* _tmp20_ = NULL;
			_tmp16_ = file;
			_tmp17_ = g_file_query_info (_tmp16_, G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE, G_FILE_QUERY_INFO_NONE, NULL, &_inner_error_);
			info = _tmp17_;
			if (_inner_error_ != NULL) {
				goto __catch10_g_error;
			}
			_tmp18_ = info;
			_tmp19_ = g_file_info_get_content_type (_tmp18_);
			_tmp20_ = g_strdup (_tmp19_);
			_g_free0 (mime_type);
			mime_type = _tmp20_;
			_g_object_unref0 (info);
		}
		goto __finally10;
		__catch10_g_error:
		{
			g_clear_error (&_inner_error_);
			_inner_error_ = NULL;
		}
		__finally10:
		if (_inner_error_ != NULL) {
			_g_object_unref0 (file);
			_g_free0 (path);
			_g_free0 (mime_type);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
	_tmp22_ = mime_type;
	if (_tmp22_ == NULL) {
		_tmp21_ = TRUE;
	} else {
		const gchar* _tmp23_ = NULL;
		gint _tmp24_ = 0;
		gint _tmp25_ = 0;
		_tmp23_ = mime_type;
		_tmp24_ = strlen (_tmp23_);
		_tmp25_ = _tmp24_;
		_tmp21_ = _tmp25_ == 0;
	}
	_tmp26_ = _tmp21_;
	if (_tmp26_) {
		gint _tmp27_ = 0;
		const gchar* _tmp28_ = NULL;
		_tmp27_ = id;
		_tmp28_ = path;
		g_debug ("rygel-lms-all-videos.vala:62: Skipping music item %d (%s) with no MIME" \
" type", _tmp27_, _tmp28_);
		result = NULL;
		_g_object_unref0 (file);
		_g_free0 (path);
		_g_free0 (mime_type);
		return result;
	}
	_tmp29_ = statement;
	_tmp30_ = sqlite3_column_text (_tmp29_, 1);
	_tmp31_ = g_strdup (_tmp30_);
	title = _tmp31_;
	_tmp32_ = id;
	_tmp33_ = rygel_lms_category_container_build_child_id ((RygelLMSCategoryContainer*) self, _tmp32_);
	_tmp34_ = _tmp33_;
	_tmp35_ = title;
	_tmp36_ = rygel_video_item_new (_tmp34_, (RygelMediaContainer*) self, _tmp35_, RYGEL_VIDEO_ITEM_UPNP_CLASS);
	_tmp37_ = _tmp36_;
	_g_free0 (_tmp34_);
	video = _tmp37_;
	_tmp38_ = video;
	_tmp39_ = statement;
	_tmp40_ = sqlite3_column_text (_tmp39_, 2);
	rygel_media_item_set_creator ((RygelMediaItem*) _tmp38_, _tmp40_);
	_tmp41_ = video;
	_tmp42_ = statement;
	_tmp43_ = sqlite3_column_int (_tmp42_, 3);
	rygel_audio_item_set_duration ((RygelAudioItem*) _tmp41_, (glong) _tmp43_);
	_tmp44_ = statement;
	_tmp45_ = sqlite3_column_int (_tmp44_, 5);
	_tmp46_.tv_sec = (glong) _tmp45_;
	_tmp46_.tv_usec = (glong) 0;
	tv = _tmp46_;
	_tmp47_ = video;
	_tmp48_ = g_time_val_to_iso8601 (&tv);
	_tmp49_ = _tmp48_;
	rygel_media_item_set_date ((RygelMediaItem*) _tmp47_, _tmp49_);
	_g_free0 (_tmp49_);
	_tmp50_ = video;
	_tmp51_ = statement;
	_tmp52_ = sqlite3_column_int (_tmp51_, 6);
	rygel_media_item_set_size ((RygelMediaItem*) _tmp50_, (gint64) _tmp52_);
	_tmp53_ = video;
	_tmp54_ = statement;
	_tmp55_ = sqlite3_column_text (_tmp54_, 7);
	rygel_media_item_set_dlna_profile ((RygelMediaItem*) _tmp53_, _tmp55_);
	_tmp56_ = video;
	_tmp57_ = mime_type;
	rygel_media_item_set_mime_type ((RygelMediaItem*) _tmp56_, _tmp57_);
	_tmp58_ = video;
	_tmp59_ = file;
	_tmp60_ = g_file_get_uri (_tmp59_);
	_tmp61_ = _tmp60_;
	rygel_media_item_add_uri ((RygelMediaItem*) _tmp58_, _tmp61_);
	_g_free0 (_tmp61_);
	result = (RygelMediaObject*) video;
	_g_free0 (title);
	_g_object_unref0 (file);
	_g_free0 (path);
	_g_free0 (mime_type);
	return result;
}


RygelLMSAllVideos* rygel_lms_all_videos_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelLMSDatabase* lms_db) {
	RygelLMSAllVideos * self = NULL;
	const gchar* _tmp0_ = NULL;
	RygelMediaContainer* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	RygelLMSDatabase* _tmp3_ = NULL;
	g_return_val_if_fail (id != NULL, NULL);
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (title != NULL, NULL);
	g_return_val_if_fail (lms_db != NULL, NULL);
	_tmp0_ = id;
	_tmp1_ = parent;
	_tmp2_ = title;
	_tmp3_ = lms_db;
	self = (RygelLMSAllVideos*) rygel_lms_category_container_construct (object_type, _tmp0_, _tmp1_, _tmp2_, _tmp3_, RYGEL_LMS_ALL_VIDEOS_SQL_ALL, RYGEL_LMS_ALL_VIDEOS_SQL_FIND_OBJECT, RYGEL_LMS_ALL_VIDEOS_SQL_COUNT);
	return self;
}


RygelLMSAllVideos* rygel_lms_all_videos_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelLMSDatabase* lms_db) {
	return rygel_lms_all_videos_construct (RYGEL_LMS_TYPE_ALL_VIDEOS, id, parent, title, lms_db);
}


static void rygel_lms_all_videos_class_init (RygelLMSAllVideosClass * klass) {
	rygel_lms_all_videos_parent_class = g_type_class_peek_parent (klass);
	RYGEL_LMS_CATEGORY_CONTAINER_CLASS (klass)->object_from_statement = rygel_lms_all_videos_real_object_from_statement;
}


static void rygel_lms_all_videos_instance_init (RygelLMSAllVideos * self) {
}


GType rygel_lms_all_videos_get_type (void) {
	static volatile gsize rygel_lms_all_videos_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_lms_all_videos_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelLMSAllVideosClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_lms_all_videos_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelLMSAllVideos), 0, (GInstanceInitFunc) rygel_lms_all_videos_instance_init, NULL };
		GType rygel_lms_all_videos_type_id;
		rygel_lms_all_videos_type_id = g_type_register_static (RYGEL_LMS_TYPE_CATEGORY_CONTAINER, "RygelLMSAllVideos", &g_define_type_info, 0);
		g_once_init_leave (&rygel_lms_all_videos_type_id__volatile, rygel_lms_all_videos_type_id);
	}
	return rygel_lms_all_videos_type_id__volatile;
}



