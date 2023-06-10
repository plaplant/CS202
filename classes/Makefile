CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: simplest_class.x simple_class.x struct_vs_class.x constructors_and_destructors.x static_variables.x

simplest_class.x: simplest_class.cpp
	$(CXX) $(CXXFLAGS) simplest_class.cpp -o $@

simple_class.x: simple_class.cpp
	$(CXX) $(CXXFLAGS) simple_class.cpp -o $@

struct_vs_class.x: struct_vs_class.cpp
	$(CXX) $(CXXFLAGS) struct_vs_class.cpp -o $@

constructors_and_destructors.x: constructors_and_destructors.cpp
	$(CXX) $(CXXFLAGS) constructors_and_destructors.cpp -o $@

static_variables.x: static_variables.cpp
	$(CXX) $(CXXFLAGS) static_variables.cpp -o $@

clean:
	rm -rf *.x *.dSYM
