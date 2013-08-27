/* rygel-renderer-2.0.vapi generated by valac 0.20.1.53-91609, do not modify. */

namespace Rygel {
	namespace Renderer {
		[CCode (cheader_filename = "rygel-renderer.h")]
		public class DLNAProfile {
			public string mime;
			public string name;
			public DLNAProfile (string name, string mime);
			public static int compare_by_name (Rygel.Renderer.DLNAProfile a, Rygel.Renderer.DLNAProfile b);
		}
	}
	[CCode (cheader_filename = "rygel-renderer.h")]
	public class MediaRenderer : Rygel.MediaDevice {
		public MediaRenderer (string title, Rygel.MediaPlayer player, Rygel.PluginCapabilities capabilities = PluginCapabilities.NONE);
		public override void constructed ();
		public Rygel.MediaPlayer player { private get; construct; }
	}
	[CCode (cheader_filename = "rygel-renderer.h")]
	public class MediaRendererPlugin : Rygel.Plugin {
		public MediaRendererPlugin (string name, string? title, string? description = null, Rygel.PluginCapabilities capabilities = PluginCapabilities.NONE);
		public override void apply_hacks (Rygel.RootDevice device, string description_path) throws GLib.Error;
		public override void constructed ();
		public virtual Rygel.MediaPlayer? get_player ();
		public string get_protocol_info ();
		public GLib.List<weak Rygel.Renderer.DLNAProfile> supported_profiles { get; set construct; }
	}
	[CCode (cheader_filename = "rygel-renderer.h")]
	public interface MediaPlayer : GLib.Object {
		public abstract string[] get_mime_types ();
		public abstract string[] get_protocols ();
		public abstract bool seek (int64 time);
		public abstract string[] allowed_playback_speeds { owned get; }
		public abstract bool can_seek { get; }
		public abstract string? content_features { owned get; set; }
		public abstract int64 duration { get; }
		public string duration_as_str { owned get; }
		public abstract string? metadata { owned get; set; }
		public abstract string? mime_type { owned get; set; }
		public abstract string playback_speed { owned get; set; }
		public abstract string playback_state { owned get; set; }
		public abstract int64 position { get; }
		public string position_as_str { owned get; }
		public abstract string? uri { owned get; set; }
		public abstract double volume { get; set; }
	}
}