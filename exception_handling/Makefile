CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: exception_handling.x user_defined_exception.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.x *.dSYM
