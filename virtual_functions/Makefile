CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: virtual_functions.x multiple_inheritance.x diamond_problem.x pure_virtual_functions.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.x *.dSYM
