#include <iostream>

using namespace std;

int add_two_numbers(int a, int b) {
  cout << "int version" << endl;
  return a + b;
}

double add_two_numbers(double a, double b) {
  cout << "double version" << endl;
  return a + b;
}

int main() {
  int i1, i2, i3;
  float f1, f2, f3;
  double d1, d2, d3;

  i1 = 3;
  i2 = 4;

  f1 = 3.5;
  f2 = 4.5;

  d1 = 3.5;
  d2 = 4.5;

  // standard function calls work:
  i3 = add_two_numbers(i1, i2);
  cout << "i3: " << i3 << endl;

  d3 = add_two_numbers(d1, d2);
  cout << "d3: " << d3 << endl;

  // this works:
  f3 = add_two_numbers(f1, f2);
  cout << "f3: " << f3 << endl;

  // this works too:
  d3 = add_two_numbers(d1, f2);
  cout << "d3: " << d3 << endl;

  // even this works:
  f3 = add_two_numbers(i1, i2);
  cout << "f3: " << f3 << endl;

  // but this gives an error!
  // i3 = add_two_numbers(i1, d2);
  // cout << "i3: " << i3 << endl;

  return 0;
}
