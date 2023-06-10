CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11

all: inheritance.x public_v_private.x derived_constructor.x composition.x

%.x: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -rf *.x *.dSYM
