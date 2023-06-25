#include <iostream>

using namespace std;

// define a custom class with overloaded addition operator
class A {
  friend ostream& operator<<(ostream& out, const A& otherA);
public:
  // empty default constructor
  A() {};
  // overload addition operator
  A operator+(const A& otherA) {
    A newA;
    newA.a = a + otherA.a;
    return newA;
  }
  // public member variable
  int a;
};

// define friend function
ostream& operator<<(ostream &out, const A& otherA) {
  out << otherA.a;
  return out;
}

// define templated function
template <class T>
T add_two_numbers(T x, T y) {
  return x + y;
}

int main() {
  // declare variables
  A myA1, myA2, myA3;
  double d1, d2, d3;
  int i1, i2, i3;

  // initialize values
  d1 = 1.5;
  d2 = 2.2;

  i1 = 3;
  i2 = 4;

  myA1.a = -1;
  myA2.a = -2;

  // call templated function!
  d3 = add_two_numbers(d1, d2);
  i3 = add_two_numbers(i1, i2);
  myA3 = add_two_numbers(myA1, myA2);

  // what did we get?
  cout << d3 << endl;
  cout << i3 << endl;
  cout << myA3 << endl;

  return 0;
}
