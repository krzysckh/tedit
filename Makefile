PREFIX=/usr
CXXFLAGS=-Wall

tedit: tedit.cpp
clean:
	rm tedit
install: tedit
	cp tedit $(PREFIX)/bin/
	cp tedit.1 $(PREFIX)/share/man/man1/
uninstall:
	rm $(PREFIX)/bin/tedit
	rm $(PREFIX)/share/man/man1/tedit.1
