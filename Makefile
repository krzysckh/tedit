bind=/usr/bin/
mand=/usr/share/man/man1/

tedit:
	c++ tedit.cpp -o tedit

clean:
	rm tedit

install: tedit
	cp tedit $(bind)
	cp tedit.1 $(mand)

uninstall:
	rm $(bind)tedit
	rm $(mand)tedit.1


