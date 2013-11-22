/* rygel-renderer-gst-2.0.vapi generated by valac 0.20.1.53-91609, do not modify. */

namespace Rygel {
	namespace Playbin {
		[CCode (cheader_filename = "rygel-renderer-gst.h")]
		public class Player : GLib.Object, Rygel.MediaPlayer {
			public static Rygel.Playbin.Player get_default ();
			public Player.wrap (Gst.Element playbin);
			public Gst.Element playbin { get; private set; }
			public GLib.List<Rygel.Renderer.DLNAProfile> supported_profiles { get; }
		}
		[CCode (cheader_filename = "rygel-renderer-gst.h")]
		public class Renderer : Rygel.MediaRenderer {
			public Renderer (string title);
			public Gst.Element? get_playbin ();
			public Renderer.wrap (Gst.Element pipeline, string title);
		}
	}
}
