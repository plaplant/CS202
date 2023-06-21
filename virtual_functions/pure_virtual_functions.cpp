#include <iostream>
#include <math.h>

using namespace std;

// Abstract Class!
class Shape {
public:
  virtual double area() = 0; // pure virtual function
};

// derived class based on abstract (base) class
class Circle: public Shape {
public:
  double radius;
  double area() {
    return M_PI * pow(radius, 2.0);
  }
};

// same as `Circle`
class Square: public Shape {
public:
  double side;
  double area() {
    return pow(side, 2.0);
  }
};

int main() {
  Circle circ;
  Square squ;

  circ.radius = 2.0;
  squ.side = 3.0;

  // print out area calculations
  cout << circ.area() << endl;
  cout << squ.area() << endl;

  // this gives us a compiler error!
  // cout << circ.Shape::area() << endl;

  return 0;
}
