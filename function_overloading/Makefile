CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: example1.x example2.x example3.x example4.x

example1.x: example1.cpp
	$(CXX) $(CXXFLAGS) example1.cpp -o $@

example2.x: example2.cpp
	$(CXX) $(CXXFLAGS) example2.cpp -o $@

example3.x: example3.cpp
	$(CXX) $(CXXFLAGS) example3.cpp -o $@

example4.x: example4.cpp
	$(CXX) $(CXXFLAGS) example4.cpp -o $@

clean:
	rm -rf *.x *.dSYM
