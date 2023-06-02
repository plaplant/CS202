#include <iostream>

using namespace std;

int add_two_numbers(int a, int b) {
  return a + b;
}

// same name and number of arguments, different types
double add_two_numbers(double a, double b) {
  return a + b;
}

// same name, different number of arguments
int add_two_numbers(int a, int b, int c) {
  return a + b + c;
}

/*
  The function below creates a problem!

  If we uncommented it, the compiler would complain because we have
  the same function signature with a different return type. This is
  because the calling context would not "know" which version of the
  function to call, so we get an error.
*/

// same name, number, and type of arguments; different return type
// double add_two_numbers(int a, int b) {
//   return a + b;
// }

int main() {
  int retval;

  retval = add_two_numbers(3, 4);
  cout << retval << endl;

  retval = add_two_numbers(3, 4, 5);
  cout << retval << endl;

  return 0;
}
