AUTOMAKE_OPTIONS=foreign

bin_PROGRAMS=main
include_HEADERS=support.h
main_SOURCES=main.c support.c

AM_CFLAGS=-Wno-unused-result

clean-all: clean uninstall distclean
	rm -rf *.in *.m4 *.gz
	rm -f missing decomp configure compile install-sh depcomp
	rm -rf autom4te.cache .deps