CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: linked_list.x linked_list_class.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.x *.dSYM
