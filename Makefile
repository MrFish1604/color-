bin/libcolorspp.so: bin/colorspp.o
	g++ -shared bin/colorspp.o -Iinclude -o bin/libcolorspp.so

bin/colorspp.o: bin/
	g++ -fPIC -c src/colorspp.cpp -Iinclude -o bin/colorspp.o

bin/:
	mkdir bin

install:
	cp bin/libcolorspp.so /usr/lib/libcolorspp.so
	cp include/colorspp.h /usr/include/colorspp.h