/* rygel-media-engine-gst.vapi generated by valac 0.16.1, do not modify. */

namespace Rygel {
	[CCode (cheader_filename = "rygel-media-engine-gst.h")]
	public class GstMediaEngine : Rygel.MediaEngine {
		public GstMediaEngine ();
		public override Rygel.DataSource? create_data_source (string uri);
		public Rygel.DataSource create_data_source_from_element (Gst.Element element);
		public override unowned GLib.List<Rygel.DLNAProfile> get_dlna_profiles ();
		public override unowned GLib.List<Rygel.Transcoder>? get_transcoders ();
	}
}
[CCode (cheader_filename = "rygel-media-engine-gst.h")]
public static Rygel.MediaEngine module_get_instance ();
