/* rygel-renderer-gst-2.0.vapi generated by valac 0.18.0, do not modify. */

namespace Rygel {
	namespace Playbin {
		[CCode (cheader_filename = "rygel-renderer-gst.h")]
		public class Player : GLib.Object, Rygel.MediaPlayer {
			public static Rygel.Playbin.Player get_default ();
			public Player.wrap (Gst.Element playbin);
			public Gst.Element playbin { get; private set; }
		}
		[CCode (cheader_filename = "rygel-renderer-gst.h")]
		public class Renderer : Rygel.MediaRenderer {
			public Renderer (string title);
			public Gst.Element? get_playbin ();
			public Renderer.wrap (Gst.Element pipeline, string title);
		}
	}
}
