CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: intro.x intro2.x new_keyword.x classes_and_memory.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.x *.dSYM
