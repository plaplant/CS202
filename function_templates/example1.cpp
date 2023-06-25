#include <iostream>
#include <string>

using namespace std;

template <class T>
T add_two_numbers(T x, T y) {
  return x + y;
}

int main() {
  double d1, d2, d3;
  int i1, i2, i3;
  float f1, f2, f3;
  string s1, s2, s3;

  d1 = 1.0;
  d2 = 2.2;

  i1 = 3;
  i2 = 4;

  f1 = 1.5;
  f2 = 2.0;

  s1 = "Hello, ";
  s2 = "world!";

  d3 = add_two_numbers(d1, d2);
  i3 = add_two_numbers(i1, i2);
  f3 = add_two_numbers(f1, f2);
  s3 = add_two_numbers(s1, s2);

  cout << "d3: " << d3 << endl;
  cout << "i3: " << i3 << endl;
  cout << "f3: " << f3 << endl;
  cout << "s3: " << s3 << endl;

  return 0;
}
