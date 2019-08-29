
Debian
====================
This directory contains files used to package bitstatsd/bitstats-qt
for Debian-based Linux systems. If you compile bitstatsd/bitstats-qt yourself, there are some useful files here.

## bitstats: URI support ##


bitstats-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bitstats-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bitstats-qt binary to `/usr/bin`
and the `../../share/pixmaps/bitstats128.png` to `/usr/share/pixmaps`

bitstats-qt.protocol (KDE)

