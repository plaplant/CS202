#include <iostream>

using namespace std;

// base class
class A {
public:
  int a;
  A() {
    cout << "Constructor of A" << endl;
  }
};

// base class
class B {
public:
  int b;
  B() {
    cout << "Constructor of B" << endl;
  }
};

// derived class that multiply inherits from A and B
class C: public A, public B {
public:
  int c;
  C() {
    cout << "Constructor of C" << endl;
  }
};

int main() {
  C myC;
  // our derived class has members from both base classes!
  myC.a = 7;
  myC.b = 2;
  myC.c = -1;

  cout << myC.a << " " << myC.b << " " << myC.c << endl;

  return 0;
}
