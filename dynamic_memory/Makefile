CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: class_memory.x memory_leak.x aliasing.x array2d.x object_pointers.x pointer_arithmetic.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.x *.dSYM
