CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: class_memory.x memory_leak.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.x *.dSYM
