#include <iostream>

using namespace std;

int main() {
  int *p;
  int x;

  cout << "Address of p: " << &p << endl;
  cout << "Address of x: " << &x << endl;

  p = &x;

  cout << "Value of p: " << p << endl;

  p = new int;

  cout << "Value of p: " << p << endl;
  *p = 72;
  x = *p;

  cout << "Value of x: " << x << endl;

  return 0;
}
