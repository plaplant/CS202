CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11 -g

OBJ = student.o

all: main.x

main.x: main.cpp $(OBJ)
	$(CXX) $(CXXFLAGS) main.cpp -o $@ $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf *.o main.x
