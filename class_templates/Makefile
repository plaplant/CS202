CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: example1.x example2.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.x *.dSYM
