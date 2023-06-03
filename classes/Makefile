CC = g++

CFLAGS = -Wall -g -std=c++11

all: simplest_class.x simple_class.x struct_vs_class.x constructors_and_destructors.x static_variables.x

simplest_class.x: simplest_class.cpp
	$(CC) $(CFLAGS) simplest_class.cpp -o $@

simple_class.x: simple_class.cpp
	$(CC) $(CFLAGS) simple_class.cpp -o $@

struct_vs_class.x: struct_vs_class.cpp
	$(CC) $(CFLAGS) struct_vs_class.cpp -o $@

constructors_and_destructors.x: constructors_and_destructors.cpp
	$(CC) $(CFLAGS) constructors_and_destructors.cpp -o $@

static_variables.x: static_variables.cpp
	$(CC) $(CFLAGS) static_variables.cpp -o $@

clean:
	rm -rf *.x *.dSYM
