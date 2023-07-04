CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: stack_array.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.x *.dSYM
