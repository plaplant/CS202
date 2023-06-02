#include <iostream>

using namespace std;

// example using default arguments
int add_two_numbers(int a, int b = 1) {
  return a + b;
}

// different default arguments for the two functions
double add_two_numbers(double a, double b = 1.5) {
  return a + b;
}

int main() {
  int i1, i2, i3;
  double d1, d2, d3;

  i1 = 3;
  i2 = 4;

  d1 = 3.2;
  d2 = 4.5;

  i3 = add_two_numbers(i1, i2);
  cout << "i3: " << i3 << endl;
  i3 = add_two_numbers(i1);
  cout << "i3 again: " << i3 << endl;

  d3 = add_two_numbers(d1, d2);
  cout << "d3: " << d3 << endl;
  d3 = add_two_numbers(d1);
  cout << "d3 again: " << d3 << endl;

  return 0;
}
