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

float add_two_numbers(float a, float b) {
  cout << "crazy float version" << endl;
  return a - b;
}

int main() {
  int int_ret;
  double double_ret;
  float float_ret;

  int_ret = add_two_numbers(3, 4);
  cout << int_ret << endl;

  double_ret = add_two_numbers(3.0, 4.0);
  cout << double_ret << endl;

  float_ret = add_two_numbers(1.0f, 2.0f);
  cout << float_ret << endl;

  return 0;
}
