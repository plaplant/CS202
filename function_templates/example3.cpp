#include <iostream>

using namespace std;

// define templated function with single type
template <class T>
T add_two_numbers(T x, T y) {
  cout << "one templated type" << endl;
  return x + y;
}

// define templated function with two types
template <class T, class U>
T add_two_numbers(T x, U y) {
  cout << "two templated types" << endl;
  return x + y;
}

int main() {
  int i1, i2, i3;
  double d1, d2, d3;

  i1 = 1;
  i2 = 2;

  d1 = 1.1;
  d2 = 2.2;

  // let's test!
  i3 = add_two_numbers(i1, i2);
  d3 = add_two_numbers(d1, d2);
  cout << "i3: " << i3 << endl;
  cout << "d3: " << d3 << endl;

  i3 = add_two_numbers(i1, d2);
  d3 = add_two_numbers(i1, d2);
  cout << "i3: " << i3 << endl;
  cout << "d3: " << d3 << endl;

  i3 = add_two_numbers(d1, i2);
  d3 = add_two_numbers(d1, i2);
  cout << "i3: " << i3 << endl;
  cout << "d3: " << d3 << endl;

  return 0;
}
