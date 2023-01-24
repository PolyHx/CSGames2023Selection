SOURCES = main.c lattice.c parallel.c
HEADERS = lattice.h parallel.h

all: laplace

laplace: $(SOURCE) $(HEADERS)
	gcc -g -Wall -pedantic $(SOURCES) -I. -lm -o $@ -Wno-unused-variable -pthread

test: laplace
	./laplace

clean:
	rm -fv laplace
