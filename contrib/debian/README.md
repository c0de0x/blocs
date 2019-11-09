
Debian
====================
This directory contains files used to package blocsd/blocs-qt
for Debian-based Linux systems. If you compile blocsd/blocs-qt yourself, there are some useful files here.

## blocs: URI support ##


blocs-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install blocs-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your blocs-qt binary to `/usr/bin`
and the `../../share/pixmaps/blocs128.png` to `/usr/share/pixmaps`

blocs-qt.protocol (KDE)

