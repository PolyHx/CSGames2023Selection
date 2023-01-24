SOURCES = main.c dct.c
HEADERS = dct.h matrix.h

all: dct

dct: $(SOURCE) $(HEADERS)
	gcc -g -Wall -pedantic $(SOURCES) -I. -lm -o $@

test: dct
	./dct

clean:
	rm -fv dct
