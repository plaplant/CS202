CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: overloaded_operators.x this_pointer.x friend_functions.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.x *.dSYM
