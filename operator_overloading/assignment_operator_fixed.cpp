#include <iostream>

using namespace std;

class A{
public:
  int *p;
  // default constructor
  A();
  // copy constructor
  A(const A& otherA);
  // destructor
  ~A();
  // overloaded assignment operator
  const A& operator=(const A& otherA);
};

// implementation of member functions
// default constructor
A::A() {
  p = new int;
}

// copy constructor
A::A(const A& otherA) {
  if (this != &otherA) {
    p = new int;
    *p = *otherA.p;
  }
}

// destructor
A::~A() {
  delete p;
}

// overloaded assignment operator
const A& A::operator=(const A& otherA) {
  if (this != &otherA) {
    *p = *otherA.p;
  }

  return *this;
}

int main() {
  A myA1, myA2;
  *myA1.p = 5;
  // this does the right thing!
  myA2 = myA1;
  cout << "After assignment, before change: " << endl;
  cout << *myA1.p << endl;
  cout << *myA2.p << endl;
  *myA2.p = 12;
  cout << "After change: " << endl;
  cout << *myA1.p << endl;
  cout << *myA2.p << endl;

  return 0;
}
