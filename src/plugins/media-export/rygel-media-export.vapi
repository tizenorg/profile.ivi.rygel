/* rygel-media-export.vapi generated by valac 0.20.1.53-91609, do not modify. */

namespace Rygel {
	namespace MediaExport {
		namespace ItemFactory {
			[CCode (cheader_filename = "rygel-media-export-internal.h")]
			public static Rygel.MediaItem? create_simple (Rygel.MediaContainer parent, GLib.File file, GLib.FileInfo info);
			[CCode (cheader_filename = "rygel-media-export-internal.h")]
			internal static Rygel.MediaItem? create_playlist_item (GLib.File file, Rygel.MediaContainer parent, string fallback_title);
			[CCode (cheader_filename = "rygel-media-export-internal.h")]
			public static Rygel.MediaItem? create_from_info (Rygel.MediaContainer parent, GLib.File file, Gst.PbUtils.DiscovererInfo info, GUPnPDLNA.Profile? profile, GLib.FileInfo file_info);
			[CCode (cheader_filename = "rygel-media-export-internal.h")]
			internal static void fill_audio_item (Rygel.AudioItem item, Gst.PbUtils.DiscovererInfo info, Gst.PbUtils.DiscovererAudioInfo? audio_info);
			[CCode (cheader_filename = "rygel-media-export-internal.h")]
			internal static Rygel.MediaItem fill_video_item (Rygel.MediaExport.VideoItem item, GLib.File file, Gst.PbUtils.DiscovererInfo info, GUPnPDLNA.Profile? profile, Gst.PbUtils.DiscovererVideoInfo video_info, Gst.PbUtils.DiscovererAudioInfo? audio_info, GLib.FileInfo file_info);
			[CCode (cheader_filename = "rygel-media-export-internal.h")]
			internal static Rygel.MediaItem fill_photo_item (Rygel.MediaExport.PhotoItem item, GLib.File file, Gst.PbUtils.DiscovererInfo info, GUPnPDLNA.Profile? profile, Gst.PbUtils.DiscovererVideoInfo video_info, GLib.FileInfo file_info);
			[CCode (cheader_filename = "rygel-media-export-internal.h")]
			internal static Rygel.MediaItem fill_music_item (Rygel.MediaExport.MusicItem item, GLib.File file, Gst.PbUtils.DiscovererInfo info, GUPnPDLNA.Profile? profile, Gst.PbUtils.DiscovererAudioInfo? audio_info, GLib.FileInfo file_info);
			[CCode (cheader_filename = "rygel-media-export-internal.h")]
			internal static void fill_media_item (Rygel.MediaItem item, GLib.File file, Gst.PbUtils.DiscovererInfo info, GUPnPDLNA.Profile? profile, GLib.FileInfo file_info);
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public class Plugin : Rygel.MediaServerPlugin {
			public const string NAME;
			public Plugin () throws GLib.Error;
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class Database : Rygel.MediaExport.SqliteWrapper {
			public Database (string name) throws Rygel.MediaExport.DatabaseError;
			public Rygel.MediaExport.DatabaseCursor exec_cursor (string sql, GLib.Value[]? arguments = null) throws Rygel.MediaExport.DatabaseError;
			public void exec (string sql, GLib.Value[]? arguments = null) throws Rygel.MediaExport.DatabaseError;
			public int query_value (string sql, GLib.Value[]? args = null) throws Rygel.MediaExport.DatabaseError;
			public void analyze ();
			public static GLib.Value @null ();
			public void begin () throws Rygel.MediaExport.DatabaseError;
			public void commit () throws Rygel.MediaExport.DatabaseError;
			public void rollback ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class DatabaseCursor : Rygel.MediaExport.SqliteWrapper {
			public class Iterator {
				public Rygel.MediaExport.DatabaseCursor cursor;
				public Iterator (Rygel.MediaExport.DatabaseCursor cursor);
				public bool next () throws Rygel.MediaExport.DatabaseError;
				public unowned Sqlite.Statement @get () throws Rygel.MediaExport.DatabaseError;
			}
			public DatabaseCursor (Sqlite.Database db, string sql, GLib.Value[]? arguments) throws Rygel.MediaExport.DatabaseError;
			public bool has_next () throws Rygel.MediaExport.DatabaseError;
			public Sqlite.Statement* next () throws Rygel.MediaExport.DatabaseError;
			public Rygel.MediaExport.DatabaseCursor.Iterator iterator ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class SqliteWrapper : GLib.Object {
			public SqliteWrapper.wrap (Sqlite.Database db);
			public SqliteWrapper (string path) throws Rygel.MediaExport.DatabaseError;
			protected void throw_if_code_is_error (int sqlite_error) throws Rygel.MediaExport.DatabaseError;
			protected void throw_if_db_has_error () throws Rygel.MediaExport.DatabaseError;
			protected Sqlite.Database db { get; }
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public class DBContainer : Rygel.MediaContainer, Rygel.SearchableContainer {
			protected Rygel.MediaExport.MediaCache media_db;
			public DBContainer (string id, string title);
			public override void constructed ();
			public virtual int count_children ();
			public override async Rygel.MediaObjects? get_children (uint offset, uint max_count, string sort_criteria, GLib.Cancellable? cancellable) throws GLib.Error;
			public virtual async Rygel.MediaObjects? search (Rygel.SearchExpression? expression, uint offset, uint max_count, out uint total_matches, string sort_criteria, GLib.Cancellable? cancellable) throws GLib.Error;
			public override async Rygel.MediaObject? find_object (string id, GLib.Cancellable? cancellable) throws GLib.Error;
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class SQLFactory : GLib.Object {
			internal const string SCHEMA_VERSION;
			internal const string CREATE_META_DATA_TABLE_STRING;
			public unowned string make (Rygel.MediaExport.SQLString query);
			public SQLFactory ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public class MediaCache : GLib.Object {
			public static string get_id (GLib.File file);
			public static void ensure_exists () throws GLib.Error;
			public static Rygel.MediaExport.MediaCache get_default ();
			public void remove_by_id (string id) throws Rygel.MediaExport.DatabaseError;
			public void remove_object (Rygel.MediaObject object) throws Rygel.MediaExport.DatabaseError, Rygel.MediaExport.MediaCacheError;
			public void save_container (Rygel.MediaContainer container) throws GLib.Error;
			public void save_item (Rygel.MediaItem item, bool override_guarded = false) throws GLib.Error;
			public Rygel.MediaObject? get_object (string object_id) throws Rygel.MediaExport.DatabaseError;
			public Rygel.MediaContainer? get_container (string container_id) throws Rygel.MediaExport.DatabaseError, Rygel.MediaExport.MediaCacheError;
			public int get_child_count (string container_id) throws Rygel.MediaExport.DatabaseError;
			public uint32 get_update_id ();
			public void get_track_properties (string id, out uint32 object_update_id, out uint32 container_update_id, out uint32 total_deleted_child_count);
			public bool exists (GLib.File file, out int64 timestamp, out int64 size) throws Rygel.MediaExport.DatabaseError;
			public Rygel.MediaObjects get_children (Rygel.MediaContainer container, string sort_criteria, long offset, long max_count) throws GLib.Error;
			public Rygel.MediaObjects get_objects_by_search_expression (Rygel.SearchExpression? expression, string? container_id, string sort_criteria, uint offset, uint max_count, out uint total_matches) throws GLib.Error;
			public long get_object_count_by_search_expression (Rygel.SearchExpression? expression, string? container_id) throws GLib.Error;
			public long get_object_count_by_filter (string filter, GLib.ValueArray args, string? container_id) throws GLib.Error;
			public Rygel.MediaObjects get_objects_by_filter (string filter, GLib.ValueArray args, string? container_id, string sort_criteria, long offset, long max_count) throws GLib.Error;
			public void debug_statistics ();
			public Gee.ArrayList<string> get_child_ids (string container_id) throws Rygel.MediaExport.DatabaseError;
			public Gee.List<string> get_meta_data_column_by_filter (string column, string filter, GLib.ValueArray args, long offset, long max_count) throws GLib.Error;
			public Gee.List<string> get_object_attribute_by_search_expression (string attribute, Rygel.SearchExpression? expression, long offset, uint max_count) throws GLib.Error;
			public string get_reset_token ();
			public void save_reset_token (string token);
			public void drop_virtual_folders ();
			public void make_object_guarded (Rygel.MediaObject object, bool guarded = true);
			public string create_reference (Rygel.MediaObject object, Rygel.MediaContainer parent) throws GLib.Error;
			public void rebuild_exists_cache () throws Rygel.MediaExport.DatabaseError;
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class SqlOperator : GLib.Object {
			protected string name;
			protected string arg;
			protected string collate;
			public SqlOperator (string name, string arg, string collate = "");
			public SqlOperator.from_search_criteria_op (GUPnP.SearchCriteriaOp op, string arg, string collate);
			public virtual string to_string ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class SqlFunction : Rygel.MediaExport.SqlOperator {
			public SqlFunction (string name, string arg);
			public override string to_string ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class MediaCacheUpgrader {
			public MediaCacheUpgrader (Rygel.MediaExport.Database database, Rygel.MediaExport.SQLFactory sql);
			public bool needs_upgrade (out int current_version) throws GLib.Error;
			public void fix_schema () throws GLib.Error;
			public void ensure_indices ();
			public void upgrade (int old_version);
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public class MetadataExtractor : GLib.Object {
			public MetadataExtractor ();
			public void extract (GLib.File file, string content_type);
			public signal void extraction_done (GLib.File file, Gst.PbUtils.DiscovererInfo? info, GUPnPDLNA.Profile? profile, GLib.FileInfo file_info);
			public signal void error (GLib.File file, GLib.Error err);
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class DummyContainer : Rygel.MediaExport.TrackableDbContainer {
			public GLib.File file;
			public Gee.List<string> children;
			public DummyContainer (GLib.File file, Rygel.MediaContainer parent);
			public void seen (GLib.File file);
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public class RootContainer : Rygel.MediaExport.TrackableDbContainer {
			internal const string FILESYSTEM_FOLDER_NAME;
			internal const string FILESYSTEM_FOLDER_ID;
			public static void ensure_exists () throws GLib.Error;
			public static Rygel.MediaExport.RootContainer get_instance ();
			public Rygel.MediaExport.DBContainer get_filesystem_container ();
			public void shutdown ();
			public override async Rygel.MediaObject? find_object (string id, GLib.Cancellable? cancellable) throws GLib.Error;
			public override async Rygel.MediaObjects? search (Rygel.SearchExpression? expression, uint offset, uint max_count, out uint total_matches, string sort_criteria, GLib.Cancellable? cancellable) throws GLib.Error;
			public override uint32 get_system_update_id ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal abstract class QueryContainer : Rygel.MediaExport.DBContainer {
			public const string PREFIX;
			public const string ITEM_PREFIX;
			public QueryContainer (Rygel.SearchExpression expression, string id, string name);
			public override async Rygel.MediaObjects? search (Rygel.SearchExpression? expression, uint offset, uint max_count, out uint total_matches, string sort_criteria, GLib.Cancellable? cancellable) throws GLib.Error;
			public Rygel.SearchExpression expression { get; set construct; }
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class QueryContainerFactory : GLib.Object {
			public static Rygel.MediaExport.QueryContainerFactory get_default ();
			public void register_id (ref string id);
			public string? get_virtual_container_definition (string hash);
			public Rygel.MediaExport.QueryContainer? create_from_hashed_id (string id, string name = "");
			public Rygel.MediaExport.QueryContainer create_from_description_id (string definition_id, string name = "");
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class NodeQueryContainer : Rygel.MediaExport.QueryContainer {
			public NodeQueryContainer (Rygel.SearchExpression expression, string id, string name, string template, string attribute);
			public override async Rygel.MediaObjects? get_children (uint offset, uint max_count, string sort_criteria, GLib.Cancellable? cancellable) throws GLib.Error;
			public override int count_children ();
			public string template { private get; construct; }
			public string attribute { private get; construct; }
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class LeafQueryContainer : Rygel.MediaExport.QueryContainer {
			public LeafQueryContainer (Rygel.SearchExpression expression, string id, string name);
			public override async Rygel.MediaObjects? get_children (uint offset, uint max_count, string sort_criteria, GLib.Cancellable? cancellable) throws GLib.Error;
			public override int count_children ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public class RecursiveFileMonitor : GLib.Object {
			public RecursiveFileMonitor (GLib.Cancellable? cancellable);
			public void on_monitor_changed (GLib.File file, GLib.File? other_file, GLib.FileMonitorEvent event_type);
			public async void add (GLib.File file);
			public void cancel ();
			public signal void changed (GLib.File file, GLib.File? other_file, GLib.FileMonitorEvent event_type);
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class Harvester : GLib.Object {
			public Harvester (GLib.Cancellable cancellable, Gee.ArrayList<GLib.File> locations);
			public static bool is_eligible (GLib.FileInfo info);
			public void schedule_locations (Rygel.MediaContainer parent);
			public void schedule (GLib.File file, Rygel.MediaContainer parent);
			public void cancel (GLib.File file);
			public Gee.ArrayList<GLib.File> locations { get; private set; }
			public signal void done ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public class HarvestingTask : Rygel.StateMachine, GLib.Object {
			public GLib.File origin;
			public HarvestingTask (Rygel.MediaExport.RecursiveFileMonitor monitor, GLib.File file, Rygel.MediaContainer parent);
			public void cancel ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class JPEGWriter : GLib.Object {
			public JPEGWriter () throws GLib.Error;
			public void write (Gst.Buffer buffer, GLib.File file);
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class ObjectFactory : GLib.Object {
			public virtual Rygel.MediaExport.DBContainer get_container (string id, string title, uint child_count, string? uri);
			public virtual Rygel.MediaItem get_item (Rygel.MediaContainer parent, string id, string title, string upnp_class);
			public ObjectFactory ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class WritableDbContainer : Rygel.MediaExport.TrackableDbContainer, Rygel.WritableContainer {
			public WritableDbContainer (string id, string title);
			public override void constructed ();
			public virtual async void add_item (Rygel.MediaItem item, GLib.Cancellable? cancellable) throws GLib.Error;
			public virtual async string add_reference (Rygel.MediaObject object, GLib.Cancellable? cancellable) throws GLib.Error;
			public virtual async void add_container (Rygel.MediaContainer container, GLib.Cancellable? cancellable) throws GLib.Error;
			public virtual async void remove_item (string id, GLib.Cancellable? cancellable) throws GLib.Error;
			public virtual async void remove_container (string id, GLib.Cancellable? cancellable) throws GLib.Error;
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class PlaylistRootContainer : Rygel.WritableContainer, Rygel.MediaExport.DBContainer {
			internal const string ID;
			internal const string URI;
			public PlaylistRootContainer ();
			public override void constructed ();
			public override GUPnP.OCMFlags ocm_flags { get; }
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class PlaylistContainer : Rygel.MediaExport.DBContainer, Rygel.WritableContainer {
			internal const string URI;
			public PlaylistContainer (string id, string title);
			public override void constructed ();
			public virtual async string add_reference (Rygel.MediaObject object, GLib.Cancellable? cancellable) throws GLib.Error;
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class MusicItem : Rygel.MusicItem, Rygel.UpdatableObject, Rygel.MediaExport.UpdatableObject, Rygel.TrackableItem {
			public int disc;
			public MusicItem (string id, Rygel.MediaContainer parent, string title, string upnp_class = Rygel.MusicItem.UPNP_CLASS);
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class VideoItem : Rygel.VideoItem, Rygel.UpdatableObject, Rygel.MediaExport.UpdatableObject, Rygel.TrackableItem {
			public VideoItem (string id, Rygel.MediaContainer parent, string title, string upnp_class = Rygel.VideoItem.UPNP_CLASS);
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class PhotoItem : Rygel.PhotoItem, Rygel.UpdatableObject, Rygel.MediaExport.UpdatableObject, Rygel.TrackableItem {
			public PhotoItem (string id, Rygel.MediaContainer parent, string title, string upnp_class = Rygel.PhotoItem.UPNP_CLASS);
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal class PlaylistItem : Rygel.PlaylistItem, Rygel.UpdatableObject, Rygel.MediaExport.UpdatableObject, Rygel.TrackableItem {
			public PlaylistItem (string id, Rygel.MediaContainer parent, string title, string upnp_class = Rygel.PlaylistItem.UPNP_CLASS);
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public class TrackableDbContainer : Rygel.MediaExport.DBContainer, Rygel.TrackableContainer {
			public TrackableDbContainer (string id, string title);
			public override void constructed ();
			public virtual string get_service_reset_token ();
			public virtual void set_service_reset_token (string token);
			public virtual uint32 get_system_update_id ();
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public interface UpdatableObject : Rygel.MediaObject {
			public async void non_overriding_commit () throws GLib.Error;
			public abstract async void commit_custom (bool override_guarded) throws GLib.Error;
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal struct ExistsCacheEntry {
			public int64 mtime;
			public int64 size;
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal struct FolderDefinition {
			public string title;
			public string definition;
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal enum DetailColumn {
			TYPE,
			TITLE,
			SIZE,
			MIME_TYPE,
			WIDTH,
			HEIGHT,
			CLASS,
			CREATOR,
			AUTHOR,
			ALBUM,
			DATE,
			BITRATE,
			SAMPLE_FREQ,
			BITS_PER_SAMPLE,
			CHANNELS,
			TRACK,
			COLOR_DEPTH,
			DURATION,
			ID,
			PARENT,
			TIMESTAMP,
			URI,
			DLNA_PROFILE,
			GENRE,
			DISC,
			OBJECT_UPDATE_ID,
			DELETED_CHILD_COUNT,
			CONTAINER_UPDATE_ID,
			REFERENCE_ID
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal enum SQLString {
			SAVE_METADATA,
			INSERT,
			DELETE,
			GET_OBJECT,
			GET_CHILDREN,
			GET_OBJECTS_BY_FILTER,
			GET_OBJECTS_BY_FILTER_WITH_ANCESTOR,
			GET_OBJECT_COUNT_BY_FILTER,
			GET_OBJECT_COUNT_BY_FILTER_WITH_ANCESTOR,
			GET_META_DATA_COLUMN,
			CHILD_COUNT,
			EXISTS,
			CHILD_IDS,
			TABLE_METADATA,
			TABLE_CLOSURE,
			TRIGGER_CLOSURE,
			TRIGGER_COMMON,
			INDEX_COMMON,
			SCHEMA,
			EXISTS_CACHE,
			STATISTICS,
			RESET_TOKEN,
			MAX_UPDATE_ID,
			MAKE_GUARDED,
			IS_GUARDED,
			UPDATE_GUARDED_OBJECT,
			TRIGGER_REFERENCE
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal enum ObjectType {
			CONTAINER,
			ITEM
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public errordomain DatabaseError {
			IO_ERROR,
			SQLITE_ERROR
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		public errordomain MediaCacheError {
			SQLITE_ERROR,
			GENERAL_ERROR,
			INVALID_TYPE,
			UNSUPPORTED_SEARCH
		}
		[CCode (cheader_filename = "rygel-media-export-internal.h")]
		internal extern static int utf8_collate_str (string a, string b);
	}
	[CCode (cheader_filename = "rygel-media-export-internal.h")]
	internal class NullContainer : Rygel.MediaContainer {
		public NullContainer (string id, Rygel.MediaContainer? parent, string title);
		public NullContainer.root ();
		public override async Rygel.MediaObjects? get_children (uint offset, uint max_count, string sort_criteria, GLib.Cancellable? cancellable) throws GLib.Error;
		public override async Rygel.MediaObject? find_object (string id, GLib.Cancellable? cancellable) throws GLib.Error;
	}
}
[CCode (cheader_filename = "rygel-media-export-internal.h")]
internal class FileQueueEntry {
	public GLib.File file;
	public bool known;
	public string content_type;
	public FileQueueEntry (GLib.File file, bool known, string content_type);
}
[CCode (cheader_filename = "rygel-media-export-internal.h")]
internal const string TRACKER_PLUGIN;
[CCode (cheader_filename = "rygel-media-export-internal.h")]
internal const Rygel.MediaExport.FolderDefinition[] VIRTUAL_FOLDERS_DEFAULT;
[CCode (cheader_filename = "rygel-media-export-internal.h")]
internal const Rygel.MediaExport.FolderDefinition[] VIRTUAL_FOLDERS_MUSIC;
[CCode (cheader_filename = "rygel-media-export-internal.h")]
public static void module_init (Rygel.PluginLoader loader);
[CCode (cheader_filename = "rygel-media-export-internal.h")]
public static void on_plugin_available (Rygel.Plugin plugin, Rygel.Plugin our_plugin);
[CCode (cheader_filename = "rygel-media-export-internal.h")]
internal static void shutdown_media_export ();
