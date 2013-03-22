# 
# Do NOT Edit the Auto-generated Part!
# Generated by: spectacle version 0.22
# 
# >> macros
# << macros

Name:       rygel
Summary:    GNOME UPnP/DLNA Media Server
Version:    0.17.9
Release:    0
Group:      Applications/Multimedia
License:    GPLv2
URL:        http://live.gnome.org/Rygel
Source0:    http://download.gnome.org/sources/rygel/0.17/%{name}-%{version}.tar.bz2
Requires(post): /bin/touch
BuildRequires:  pkgconfig(glib-2.0)
BuildRequires:  pkgconfig(gio-2.0)
BuildRequires:  pkgconfig(gupnp-1.0)
BuildRequires:  pkgconfig(gupnp-av-1.0)
BuildRequires:  pkgconfig(gupnp-dlna-2.0)
BuildRequires:  pkgconfig(dbus-glib-1)
BuildRequires:  pkgconfig(gstreamer-0.10)
BuildRequires:  pkgconfig(gstreamer-plugins-base-0.10)
BuildRequires:  pkgconfig(gee-0.8)
BuildRequires:  pkgconfig(libsoup-2.4)
BuildRequires:  pkgconfig(sqlite3)
BuildRequires:  pkgconfig(uuid)
BuildRequires:  intltool


%description
Rygel is a collection of DLNA (UPnP AV) devices, implemented through a plug-in mechanism.


%package devel
Summary:    Development files for Rygel
Group:      Development/Libraries
Requires:   %{name} = %{version}-%{release}

%description devel
This package contains the libraries and files necessary for 
developing software on top of Rygel.



%prep
%setup -q -n %{name}-%{version}

# >> setup
# << setup

%build
# >> build pre
# << build pre

%configure --disable-static \
    --disable-external-plugin \
    --disable-mpris-plugin \
    --disable-mediathek-plugin \
    --disable-tracker-plugin \
    --disable-gst-launch-plugin \
    --disable-example-plugins \
    --disable-vala \
    --disable-tests \
    --with-media-engine=simple \
    --enable-valadoc=no

# >> build post
# << build post
%install
rm -rf %{buildroot}
# >> install pre
# << install pre
%make_install

# >> install post
# << install post
%find_lang rygel

rm -rf  $RPM_BUILD_ROOT%{_datadir}/applications/*.desktop

%post
/bin/touch --no-create %{_datadir}/icons/hicolor || :
%{_bindir}/gtk-update-icon-cache \
  --quiet %{_datadir}/icons/hicolor 2> /dev/null|| :

%postun
/bin/touch --no-create %{_datadir}/icons/hicolor || :
%{_bindir}/gtk-update-icon-cache \
  --quiet %{_datadir}/icons/hicolor 2> /dev/null|| :


%files -f rygel.lang
%defattr(-,root,root,-)
# >> files
%config /etc/rygel.conf
%config /etc/rc.d/init.d/rygel
%{_bindir}/rygel
%{_datadir}/dbus-1/services/org.gnome.Rygel1.service
%{_datadir}/icons/hicolor/128x128/apps/rygel.png
%{_datadir}/icons/hicolor/48x48/apps/rygel.png
%{_datadir}/icons/hicolor/32x32/apps/rygel.png
%{_datadir}/icons/hicolor/scalable/apps/rygel-full.svg
%{_datadir}/icons/hicolor/scalable/apps/rygel.svg
%{_datadir}/rygel/icons/120x120/rygel.jpg
%{_datadir}/rygel/icons/120x120/rygel.png
%{_datadir}/rygel/icons/48x48/rygel.jpg
%{_datadir}/rygel/icons/48x48/rygel.png
%{_datadir}/rygel/presets/GstFaac.prs
%{_datadir}/rygel/presets/GstLameMP3Enc.prs
%{_datadir}/rygel/presets/GstMP4Mux.prs
%{_datadir}/rygel/presets/GstTwoLame.prs
%{_datadir}/rygel/presets/GstX264Enc.prs
%{_datadir}/rygel/presets/avenc_aac.prs
%{_datadir}/rygel/presets/avenc_mp2.prs
%{_datadir}/rygel/presets/avenc_mpeg2video.prs
%{_datadir}/rygel/presets/avenc_wmav1.prs
%{_datadir}/rygel/presets/avenc_wmv1.prs
%{_datadir}/rygel/xml/ContentDirectory-NoTrack.xml
%{_datadir}/rygel/xml/AVTransport2.xml
%{_datadir}/rygel/xml/ConnectionManager.xml
%{_datadir}/rygel/xml/ContentDirectory.xml
%{_datadir}/rygel/xml/MediaRenderer2.xml
%{_datadir}/rygel/xml/MediaServer3.xml
%{_datadir}/rygel/xml/RenderingControl2.xml
%{_datadir}/rygel/xml/X_MS_MediaReceiverRegistrar1.xml
%{_datadir}/man/man1/rygel.1.gz
%{_datadir}/man/man5/rygel.conf.5.gz
# Rygel core libs
%{_libdir}/librygel-*.so.*
# Rygel MediaEngines
%{_libdir}/rygel-2.0/engines/*.so
# << files


%files devel
%defattr(-,root,root,-)
# >> files devel
%doc %{_datadir}/gtk-doc/html/librygel-core
%doc %{_datadir}/gtk-doc/html/librygel-renderer
%doc %{_datadir}/gtk-doc/html/librygel-server
%{_includedir}/rygel-2.0/*
%{_libdir}/*.so
%{_libdir}/pkgconfig/rygel-*-2.0.pc
%{_datadir}/vala/vapi/rygel-*-2.0.deps
%{_datadir}/vala/vapi/rygel-*-2.0.vapi
# << files devel

