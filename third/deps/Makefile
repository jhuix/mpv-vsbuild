PREFIX = /usr/local
LIBDIR = lib
INSTALL = install
SED = sed

all:
	$(SED) 's#@@PREFIX@@#$(PREFIX)/$(DESTDIR)#' lib/pkgconfig/davs2.pc.in > lib/pkgconfig/davs2.pc
	$(SED) 's#@@PREFIX@@#$(PREFIX)/$(DESTDIR)#' lib/pkgconfig/libmfx.pc.in > lib/pkgconfig/libmfx.pc

install: all
	$(INSTALL) -m 0755 -d '$(PREFIX)/$(DESTDIR)/include/gl'
	$(INSTALL) -m 0755 -d '$(PREFIX)/$(DESTDIR)/include/ass'
	$(INSTALL) -m 0755 -d '$(PREFIX)/$(DESTDIR)/include/lzma'
	$(INSTALL) -m 0755 -d '$(PREFIX)/$(DESTDIR)/include/mfx'
	$(INSTALL) -m 0644 include/gl/*.h '$(PREFIX)/$(DESTDIR)/include/gl'
	$(INSTALL) -m 0644 include/ass/*.h '$(PREFIX)/$(DESTDIR)/include/ass'
	$(INSTALL) -m 0644 include/lzma/*.h '$(PREFIX)/$(DESTDIR)/include/lzma'
	$(INSTALL) -m 0644 include/mfx/*.h '$(PREFIX)/$(DESTDIR)/include/mfx'
	$(INSTALL) -m 0755 -d '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/pkgconfig'
	$(INSTALL) -m 0644 lib/pkgconfig/davs2.pc '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/pkgconfig'
	$(INSTALL) -m 0644 lib/pkgconfig/libmfx.pc '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/pkgconfig'
	$(INSTALL) -m 0644 lib/*.lib '$(PREFIX)/$(DESTDIR)/$(LIBDIR)'

uninstall:
	rm -rf '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/pkgconfig/davs2.pc' '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/pkgconfig/libmfx.pc'
	rm -rf '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/libdavs2.lib' '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/libmfx.lib' '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/libass.lib'
	rm -rf '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/libbz2.lib' '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/liblzma.lib' '$(PREFIX)/$(DESTDIR)/$(LIBDIR)/libzlib.lib'
	rm -rf '$(PREFIX)/$(DESTDIR)/include/gl' '$(PREFIX)/$(DESTDIR)/include/ass' '$(PREFIX)/$(DESTDIR)/include/lzma' '$(PREFIX)/$(DESTDIR)/include/mfx'

.PHONY: all install uninstall

