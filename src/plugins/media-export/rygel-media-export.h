/* rygel-media-export.h generated by valac 0.22.0.18-aa6c, the Vala compiler, do not modify */


#ifndef __RYGEL_MEDIA_EXPORT_H__
#define __RYGEL_MEDIA_EXPORT_H__

#include <glib.h>
#include <rygel-core.h>
#include <rygel-server.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <glib-object.h>
#include <gee.h>
#include <gst/pbutils/codec-utils.h>
#include <gst/pbutils/descriptions.h>
#include <gst/pbutils/encoding-profile.h>
#include <gst/pbutils/encoding-target.h>
#include <gst/pbutils/gstdiscoverer.h>
#include <gst/pbutils/gstpluginsbaseversion.h>
#include <gst/pbutils/install-plugins.h>
#include <gst/pbutils/missing-plugins.h>
#include <gst/pbutils/pbutils-enumtypes.h>
#include <gst/pbutils/pbutils.h>
#include <libgupnp-dlna/gupnp-dlna.h>

G_BEGIN_DECLS


#define RYGEL_MEDIA_EXPORT_TYPE_PLUGIN (rygel_media_export_plugin_get_type ())
#define RYGEL_MEDIA_EXPORT_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_PLUGIN, RygelMediaExportPlugin))
#define RYGEL_MEDIA_EXPORT_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_PLUGIN, RygelMediaExportPluginClass))
#define RYGEL_MEDIA_EXPORT_IS_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_PLUGIN))
#define RYGEL_MEDIA_EXPORT_IS_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_PLUGIN))
#define RYGEL_MEDIA_EXPORT_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_PLUGIN, RygelMediaExportPluginClass))

typedef struct _RygelMediaExportPlugin RygelMediaExportPlugin;
typedef struct _RygelMediaExportPluginClass RygelMediaExportPluginClass;
typedef struct _RygelMediaExportPluginPrivate RygelMediaExportPluginPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER (rygel_media_export_db_container_get_type ())
#define RYGEL_MEDIA_EXPORT_DB_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainer))
#define RYGEL_MEDIA_EXPORT_DB_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainerClass))
#define RYGEL_MEDIA_EXPORT_IS_DB_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER))
#define RYGEL_MEDIA_EXPORT_IS_DB_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER))
#define RYGEL_MEDIA_EXPORT_DB_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainerClass))

typedef struct _RygelMediaExportDBContainer RygelMediaExportDBContainer;
typedef struct _RygelMediaExportDBContainerClass RygelMediaExportDBContainerClass;
typedef struct _RygelMediaExportDBContainerPrivate RygelMediaExportDBContainerPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE (rygel_media_export_media_cache_get_type ())
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCache))
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCacheClass))
#define RYGEL_MEDIA_EXPORT_IS_MEDIA_CACHE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE))
#define RYGEL_MEDIA_EXPORT_IS_MEDIA_CACHE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE))
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCacheClass))

typedef struct _RygelMediaExportMediaCache RygelMediaExportMediaCache;
typedef struct _RygelMediaExportMediaCacheClass RygelMediaExportMediaCacheClass;
typedef struct _RygelMediaExportMediaCachePrivate RygelMediaExportMediaCachePrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR (rygel_media_export_metadata_extractor_get_type ())
#define RYGEL_MEDIA_EXPORT_METADATA_EXTRACTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR, RygelMediaExportMetadataExtractor))
#define RYGEL_MEDIA_EXPORT_METADATA_EXTRACTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR, RygelMediaExportMetadataExtractorClass))
#define RYGEL_MEDIA_EXPORT_IS_METADATA_EXTRACTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR))
#define RYGEL_MEDIA_EXPORT_IS_METADATA_EXTRACTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR))
#define RYGEL_MEDIA_EXPORT_METADATA_EXTRACTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR, RygelMediaExportMetadataExtractorClass))

typedef struct _RygelMediaExportMetadataExtractor RygelMediaExportMetadataExtractor;
typedef struct _RygelMediaExportMetadataExtractorClass RygelMediaExportMetadataExtractorClass;
typedef struct _RygelMediaExportMetadataExtractorPrivate RygelMediaExportMetadataExtractorPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER (rygel_media_export_trackable_db_container_get_type ())
#define RYGEL_MEDIA_EXPORT_TRACKABLE_DB_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER, RygelMediaExportTrackableDbContainer))
#define RYGEL_MEDIA_EXPORT_TRACKABLE_DB_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER, RygelMediaExportTrackableDbContainerClass))
#define RYGEL_MEDIA_EXPORT_IS_TRACKABLE_DB_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER))
#define RYGEL_MEDIA_EXPORT_IS_TRACKABLE_DB_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER))
#define RYGEL_MEDIA_EXPORT_TRACKABLE_DB_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER, RygelMediaExportTrackableDbContainerClass))

typedef struct _RygelMediaExportTrackableDbContainer RygelMediaExportTrackableDbContainer;
typedef struct _RygelMediaExportTrackableDbContainerClass RygelMediaExportTrackableDbContainerClass;
typedef struct _RygelMediaExportTrackableDbContainerPrivate RygelMediaExportTrackableDbContainerPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_ROOT_CONTAINER (rygel_media_export_root_container_get_type ())
#define RYGEL_MEDIA_EXPORT_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_ROOT_CONTAINER, RygelMediaExportRootContainer))
#define RYGEL_MEDIA_EXPORT_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_ROOT_CONTAINER, RygelMediaExportRootContainerClass))
#define RYGEL_MEDIA_EXPORT_IS_ROOT_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_ROOT_CONTAINER))
#define RYGEL_MEDIA_EXPORT_IS_ROOT_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_ROOT_CONTAINER))
#define RYGEL_MEDIA_EXPORT_ROOT_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_ROOT_CONTAINER, RygelMediaExportRootContainerClass))

typedef struct _RygelMediaExportRootContainer RygelMediaExportRootContainer;
typedef struct _RygelMediaExportRootContainerClass RygelMediaExportRootContainerClass;
typedef struct _RygelMediaExportRootContainerPrivate RygelMediaExportRootContainerPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_RECURSIVE_FILE_MONITOR (rygel_media_export_recursive_file_monitor_get_type ())
#define RYGEL_MEDIA_EXPORT_RECURSIVE_FILE_MONITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_RECURSIVE_FILE_MONITOR, RygelMediaExportRecursiveFileMonitor))
#define RYGEL_MEDIA_EXPORT_RECURSIVE_FILE_MONITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_RECURSIVE_FILE_MONITOR, RygelMediaExportRecursiveFileMonitorClass))
#define RYGEL_MEDIA_EXPORT_IS_RECURSIVE_FILE_MONITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_RECURSIVE_FILE_MONITOR))
#define RYGEL_MEDIA_EXPORT_IS_RECURSIVE_FILE_MONITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_RECURSIVE_FILE_MONITOR))
#define RYGEL_MEDIA_EXPORT_RECURSIVE_FILE_MONITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_RECURSIVE_FILE_MONITOR, RygelMediaExportRecursiveFileMonitorClass))

typedef struct _RygelMediaExportRecursiveFileMonitor RygelMediaExportRecursiveFileMonitor;
typedef struct _RygelMediaExportRecursiveFileMonitorClass RygelMediaExportRecursiveFileMonitorClass;
typedef struct _RygelMediaExportRecursiveFileMonitorPrivate RygelMediaExportRecursiveFileMonitorPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_HARVESTING_TASK (rygel_media_export_harvesting_task_get_type ())
#define RYGEL_MEDIA_EXPORT_HARVESTING_TASK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_HARVESTING_TASK, RygelMediaExportHarvestingTask))
#define RYGEL_MEDIA_EXPORT_HARVESTING_TASK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_HARVESTING_TASK, RygelMediaExportHarvestingTaskClass))
#define RYGEL_MEDIA_EXPORT_IS_HARVESTING_TASK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_HARVESTING_TASK))
#define RYGEL_MEDIA_EXPORT_IS_HARVESTING_TASK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_HARVESTING_TASK))
#define RYGEL_MEDIA_EXPORT_HARVESTING_TASK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_HARVESTING_TASK, RygelMediaExportHarvestingTaskClass))

typedef struct _RygelMediaExportHarvestingTask RygelMediaExportHarvestingTask;
typedef struct _RygelMediaExportHarvestingTaskClass RygelMediaExportHarvestingTaskClass;
typedef struct _RygelMediaExportHarvestingTaskPrivate RygelMediaExportHarvestingTaskPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_UPDATABLE_OBJECT (rygel_media_export_updatable_object_get_type ())
#define RYGEL_MEDIA_EXPORT_UPDATABLE_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_UPDATABLE_OBJECT, RygelMediaExportUpdatableObject))
#define RYGEL_MEDIA_EXPORT_IS_UPDATABLE_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_UPDATABLE_OBJECT))
#define RYGEL_MEDIA_EXPORT_UPDATABLE_OBJECT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_MEDIA_EXPORT_TYPE_UPDATABLE_OBJECT, RygelMediaExportUpdatableObjectIface))

typedef struct _RygelMediaExportUpdatableObject RygelMediaExportUpdatableObject;
typedef struct _RygelMediaExportUpdatableObjectIface RygelMediaExportUpdatableObjectIface;

struct _RygelMediaExportPlugin {
	RygelMediaServerPlugin parent_instance;
	RygelMediaExportPluginPrivate * priv;
};

struct _RygelMediaExportPluginClass {
	RygelMediaServerPluginClass parent_class;
};

typedef enum  {
	RYGEL_MEDIA_EXPORT_DATABASE_ERROR_IO_ERROR,
	RYGEL_MEDIA_EXPORT_DATABASE_ERROR_SQLITE_ERROR
} RygelMediaExportDatabaseError;
#define RYGEL_MEDIA_EXPORT_DATABASE_ERROR rygel_media_export_database_error_quark ()
struct _RygelMediaExportDBContainer {
	RygelMediaContainer parent_instance;
	RygelMediaExportDBContainerPrivate * priv;
	RygelMediaExportMediaCache* media_db;
};

struct _RygelMediaExportDBContainerClass {
	RygelMediaContainerClass parent_class;
	gint (*count_children) (RygelMediaExportDBContainer* self);
	void (*search) (RygelMediaExportDBContainer* self, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
	RygelMediaObjects* (*search_finish) (RygelMediaExportDBContainer* self, GAsyncResult* _res_, guint* total_matches, GError** error);
};

typedef enum  {
	RYGEL_MEDIA_EXPORT_MEDIA_CACHE_ERROR_SQLITE_ERROR,
	RYGEL_MEDIA_EXPORT_MEDIA_CACHE_ERROR_GENERAL_ERROR,
	RYGEL_MEDIA_EXPORT_MEDIA_CACHE_ERROR_INVALID_TYPE,
	RYGEL_MEDIA_EXPORT_MEDIA_CACHE_ERROR_UNSUPPORTED_SEARCH
} RygelMediaExportMediaCacheError;
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE_ERROR rygel_media_export_media_cache_error_quark ()
struct _RygelMediaExportMediaCache {
	GObject parent_instance;
	RygelMediaExportMediaCachePrivate * priv;
};

struct _RygelMediaExportMediaCacheClass {
	GObjectClass parent_class;
};

struct _RygelMediaExportMetadataExtractor {
	GObject parent_instance;
	RygelMediaExportMetadataExtractorPrivate * priv;
};

struct _RygelMediaExportMetadataExtractorClass {
	GObjectClass parent_class;
};

struct _RygelMediaExportTrackableDbContainer {
	RygelMediaExportDBContainer parent_instance;
	RygelMediaExportTrackableDbContainerPrivate * priv;
};

struct _RygelMediaExportTrackableDbContainerClass {
	RygelMediaExportDBContainerClass parent_class;
	void (*remove_child) (RygelMediaExportTrackableDbContainer* self, RygelMediaObject* object, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*remove_child_finish) (RygelMediaExportTrackableDbContainer* self, GAsyncResult* _res_);
	gchar* (*get_service_reset_token) (RygelMediaExportTrackableDbContainer* self);
	void (*set_service_reset_token) (RygelMediaExportTrackableDbContainer* self, const gchar* token);
	guint32 (*get_system_update_id) (RygelMediaExportTrackableDbContainer* self);
};

struct _RygelMediaExportRootContainer {
	RygelMediaExportTrackableDbContainer parent_instance;
	RygelMediaExportRootContainerPrivate * priv;
};

struct _RygelMediaExportRootContainerClass {
	RygelMediaExportTrackableDbContainerClass parent_class;
};

struct _RygelMediaExportRecursiveFileMonitor {
	GObject parent_instance;
	RygelMediaExportRecursiveFileMonitorPrivate * priv;
};

struct _RygelMediaExportRecursiveFileMonitorClass {
	GObjectClass parent_class;
};

struct _RygelMediaExportHarvestingTask {
	GObject parent_instance;
	RygelMediaExportHarvestingTaskPrivate * priv;
	GFile* origin;
};

struct _RygelMediaExportHarvestingTaskClass {
	GObjectClass parent_class;
};

struct _RygelMediaExportUpdatableObjectIface {
	GTypeInterface parent_iface;
	void (*commit_custom) (RygelMediaExportUpdatableObject* self, gboolean override_guarded, GAsyncReadyCallback _callback_, gpointer _user_data_);
	void (*commit_custom_finish) (RygelMediaExportUpdatableObject* self, GAsyncResult* _res_, GError** error);
};


void module_init (RygelPluginLoader* loader);
void on_plugin_available (RygelPlugin* plugin, RygelPlugin* our_plugin);
GType rygel_media_export_plugin_get_type (void) G_GNUC_CONST;
#define RYGEL_MEDIA_EXPORT_PLUGIN_NAME "MediaExport"
RygelMediaExportPlugin* rygel_media_export_plugin_new (GError** error);
RygelMediaExportPlugin* rygel_media_export_plugin_construct (GType object_type, GError** error);
GQuark rygel_media_export_database_error_quark (void);
GType rygel_media_export_db_container_get_type (void) G_GNUC_CONST;
GType rygel_media_export_media_cache_get_type (void) G_GNUC_CONST;
RygelMediaExportDBContainer* rygel_media_export_db_container_new (const gchar* id, const gchar* title);
RygelMediaExportDBContainer* rygel_media_export_db_container_construct (GType object_type, const gchar* id, const gchar* title);
gint rygel_media_export_db_container_count_children (RygelMediaExportDBContainer* self);
void rygel_media_export_db_container_search (RygelMediaExportDBContainer* self, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
RygelMediaObjects* rygel_media_export_db_container_search_finish (RygelMediaExportDBContainer* self, GAsyncResult* _res_, guint* total_matches, GError** error);
GQuark rygel_media_export_media_cache_error_quark (void);
gchar* rygel_media_export_media_cache_get_id (GFile* file);
void rygel_media_export_media_cache_ensure_exists (GError** error);
RygelMediaExportMediaCache* rygel_media_export_media_cache_get_default (void);
void rygel_media_export_media_cache_remove_by_id (RygelMediaExportMediaCache* self, const gchar* id, GError** error);
void rygel_media_export_media_cache_remove_object (RygelMediaExportMediaCache* self, RygelMediaObject* object, GError** error);
void rygel_media_export_media_cache_save_container (RygelMediaExportMediaCache* self, RygelMediaContainer* container, GError** error);
void rygel_media_export_media_cache_save_item (RygelMediaExportMediaCache* self, RygelMediaItem* item, gboolean override_guarded, GError** error);
RygelMediaObject* rygel_media_export_media_cache_get_object (RygelMediaExportMediaCache* self, const gchar* object_id, GError** error);
RygelMediaContainer* rygel_media_export_media_cache_get_container (RygelMediaExportMediaCache* self, const gchar* container_id, GError** error);
gint rygel_media_export_media_cache_get_child_count (RygelMediaExportMediaCache* self, const gchar* container_id, GError** error);
guint32 rygel_media_export_media_cache_get_update_id (RygelMediaExportMediaCache* self);
void rygel_media_export_media_cache_get_track_properties (RygelMediaExportMediaCache* self, const gchar* id, guint32* object_update_id, guint32* container_update_id, guint32* total_deleted_child_count);
gboolean rygel_media_export_media_cache_exists (RygelMediaExportMediaCache* self, GFile* file, gint64* timestamp, gint64* size, GError** error);
RygelMediaObjects* rygel_media_export_media_cache_get_children (RygelMediaExportMediaCache* self, RygelMediaContainer* container, const gchar* sort_criteria, glong offset, glong max_count, GError** error);
RygelMediaObjects* rygel_media_export_media_cache_get_objects_by_search_expression (RygelMediaExportMediaCache* self, RygelSearchExpression* expression, const gchar* container_id, const gchar* sort_criteria, guint offset, guint max_count, guint* total_matches, GError** error);
glong rygel_media_export_media_cache_get_object_count_by_search_expression (RygelMediaExportMediaCache* self, RygelSearchExpression* expression, const gchar* container_id, GError** error);
glong rygel_media_export_media_cache_get_object_count_by_filter (RygelMediaExportMediaCache* self, const gchar* filter, GValueArray* args, const gchar* container_id, GError** error);
RygelMediaObjects* rygel_media_export_media_cache_get_objects_by_filter (RygelMediaExportMediaCache* self, const gchar* filter, GValueArray* args, const gchar* container_id, const gchar* sort_criteria, glong offset, glong max_count, GError** error);
void rygel_media_export_media_cache_debug_statistics (RygelMediaExportMediaCache* self);
GeeArrayList* rygel_media_export_media_cache_get_child_ids (RygelMediaExportMediaCache* self, const gchar* container_id, GError** error);
GeeList* rygel_media_export_media_cache_get_meta_data_column_by_filter (RygelMediaExportMediaCache* self, const gchar* column, const gchar* filter, GValueArray* args, glong offset, const gchar* sort_criteria, glong max_count, gboolean add_all_container, GError** error);
GeeList* rygel_media_export_media_cache_get_object_attribute_by_search_expression (RygelMediaExportMediaCache* self, const gchar* attribute, RygelSearchExpression* expression, const gchar* sort_criteria, glong offset, guint max_count, gboolean add_all_container, GError** error);
gchar* rygel_media_export_media_cache_get_reset_token (RygelMediaExportMediaCache* self);
void rygel_media_export_media_cache_save_reset_token (RygelMediaExportMediaCache* self, const gchar* token);
void rygel_media_export_media_cache_drop_virtual_folders (RygelMediaExportMediaCache* self);
void rygel_media_export_media_cache_make_object_guarded (RygelMediaExportMediaCache* self, RygelMediaObject* object, gboolean guarded);
gchar* rygel_media_export_media_cache_create_reference (RygelMediaExportMediaCache* self, RygelMediaObject* object, RygelMediaContainer* parent, GError** error);
void rygel_media_export_media_cache_rebuild_exists_cache (RygelMediaExportMediaCache* self, GError** error);
GType rygel_media_export_metadata_extractor_get_type (void) G_GNUC_CONST;
RygelMediaExportMetadataExtractor* rygel_media_export_metadata_extractor_new (void);
RygelMediaExportMetadataExtractor* rygel_media_export_metadata_extractor_construct (GType object_type);
void rygel_media_export_metadata_extractor_extract (RygelMediaExportMetadataExtractor* self, GFile* file, const gchar* content_type);
GType rygel_media_export_trackable_db_container_get_type (void) G_GNUC_CONST;
GType rygel_media_export_root_container_get_type (void) G_GNUC_CONST;
void rygel_media_export_root_container_ensure_exists (GError** error);
RygelMediaExportRootContainer* rygel_media_export_root_container_get_instance (void);
RygelMediaExportDBContainer* rygel_media_export_root_container_get_filesystem_container (RygelMediaExportRootContainer* self);
void rygel_media_export_root_container_shutdown (RygelMediaExportRootContainer* self);
GType rygel_media_export_recursive_file_monitor_get_type (void) G_GNUC_CONST;
RygelMediaExportRecursiveFileMonitor* rygel_media_export_recursive_file_monitor_new (GCancellable* cancellable);
RygelMediaExportRecursiveFileMonitor* rygel_media_export_recursive_file_monitor_construct (GType object_type, GCancellable* cancellable);
void rygel_media_export_recursive_file_monitor_on_monitor_changed (RygelMediaExportRecursiveFileMonitor* self, GFile* file, GFile* other_file, GFileMonitorEvent event_type);
void rygel_media_export_recursive_file_monitor_add (RygelMediaExportRecursiveFileMonitor* self, GFile* file, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_media_export_recursive_file_monitor_add_finish (RygelMediaExportRecursiveFileMonitor* self, GAsyncResult* _res_);
void rygel_media_export_recursive_file_monitor_cancel (RygelMediaExportRecursiveFileMonitor* self);
GType rygel_media_export_harvesting_task_get_type (void) G_GNUC_CONST;
RygelMediaExportHarvestingTask* rygel_media_export_harvesting_task_new (RygelMediaExportRecursiveFileMonitor* monitor, GFile* file, RygelMediaContainer* parent);
RygelMediaExportHarvestingTask* rygel_media_export_harvesting_task_construct (GType object_type, RygelMediaExportRecursiveFileMonitor* monitor, GFile* file, RygelMediaContainer* parent);
void rygel_media_export_harvesting_task_cancel (RygelMediaExportHarvestingTask* self);
RygelMediaItem* rygel_media_export_item_factory_create_simple (RygelMediaContainer* parent, GFile* file, GFileInfo* info);
RygelMediaItem* rygel_media_export_item_factory_create_from_info (RygelMediaContainer* parent, GFile* file, GstDiscovererInfo* info, GUPnPDLNAProfile* profile, GFileInfo* file_info);
RygelMediaExportTrackableDbContainer* rygel_media_export_trackable_db_container_new (const gchar* id, const gchar* title);
RygelMediaExportTrackableDbContainer* rygel_media_export_trackable_db_container_construct (GType object_type, const gchar* id, const gchar* title);
void rygel_media_export_trackable_db_container_remove_child (RygelMediaExportTrackableDbContainer* self, RygelMediaObject* object, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_media_export_trackable_db_container_remove_child_finish (RygelMediaExportTrackableDbContainer* self, GAsyncResult* _res_);
gchar* rygel_media_export_trackable_db_container_get_service_reset_token (RygelMediaExportTrackableDbContainer* self);
void rygel_media_export_trackable_db_container_set_service_reset_token (RygelMediaExportTrackableDbContainer* self, const gchar* token);
guint32 rygel_media_export_trackable_db_container_get_system_update_id (RygelMediaExportTrackableDbContainer* self);
GType rygel_media_export_updatable_object_get_type (void) G_GNUC_CONST;
void rygel_media_export_updatable_object_non_overriding_commit (RygelMediaExportUpdatableObject* self, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_media_export_updatable_object_non_overriding_commit_finish (RygelMediaExportUpdatableObject* self, GAsyncResult* _res_, GError** error);
void rygel_media_export_updatable_object_commit_custom (RygelMediaExportUpdatableObject* self, gboolean override_guarded, GAsyncReadyCallback _callback_, gpointer _user_data_);
void rygel_media_export_updatable_object_commit_custom_finish (RygelMediaExportUpdatableObject* self, GAsyncResult* _res_, GError** error);


G_END_DECLS

#endif
