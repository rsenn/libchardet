#!/bin/sh

export LIBTOOL=/usr/bin/libtool
export AUTOMAKE=/usr/bin/automake
export ACLOCAL=/usr/bin/aclocal
rm -f configure tools/*
autoreconf --install
rm -rf autom4te* aclocal.m4 *~

exit 0
