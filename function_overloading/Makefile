CC = g++

CFLAGS = -Wall -g -std=c++11

all: example1.x example2.x example3.x example4.x

example1.x: example1.cpp
	$(CC) $(CFLAGS) example1.cpp -o $@

example2.x: example2.cpp
	$(CC) $(CFLAGS) example2.cpp -o $@

example3.x: example3.cpp
	$(CC) $(CFLAGS) example3.cpp -o $@

example4.x: example4.cpp
	$(CC) $(CFLAGS) example4.cpp -o $@

clean:
	rm -rf *.x *.dSYM
