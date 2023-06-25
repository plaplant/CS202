#include <iostream>

using namespace std;

// let's create a class that has a pointer as a member variable
class A {
public:
  int *p;
  A();
  ~A();
};

// default constructor
A::A() {
  p = new int;
}

// destructor
A::~A() {
  delete p;
}

// the following program gives us a segfault!
// why? because we're `delete`-ing the same memory location twice!
int main() {
  A myA1, myA2;
  *myA1.p = 5;
  // this does a shallow copy of pointers
  myA2 = myA1;
  cout << "After assignment, before change:" << endl;
  cout << *myA1.p << endl;
  cout << *myA2.p << endl;
  *myA2.p = 12;
  cout << "After change:" << endl;
  cout << *myA1.p << endl;
  cout << *myA2.p << endl;

  return 0;
}
