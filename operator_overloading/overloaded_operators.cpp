#include <iostream>

using namespace std;

// define a class that we'll apply operator overloading to
class A {
  // we need to define a "friend function" to do overloading
  // outside of the class definition, which is what we'll do
  // for the `+` operator
  friend int operator+(const A& firstA, const A& secondA);
public:
  int a;
  // for `==`, we're implementing it as a class member function
  bool operator==(const A& otherA);
};

// actual definition of overload class member function
bool A::operator==(const A& otherA) {
  return a == otherA.a;
}

// actual definition of friend function
// Note! b/c it's a friend function, there is no object reference
// or scope resolution operator
int operator+(const A& firstA, const A& secondA) {
  return firstA.a + secondA.a;
}

// the main event
int main() {
  A myA1, myA2;
  int b;

  // initialize values
  myA1.a = 3;
  myA2.a = 3;

  // make use of `==` operator
  if (myA1 == myA2) {
    cout << "equal" << endl;
  } else {
    cout << "not equal" << endl;
  }

  // make use of `+` operator
  b = myA1 + myA2;
  cout << "b: " << b << endl;

  return 0;
}
