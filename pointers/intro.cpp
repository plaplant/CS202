#include <iostream>

using namespace std;

int main() {
  int x;
  int *p;

  x = 7;
  p = &x;

  cout << "x: " << x << endl;
  cout << "p: " << p << endl;
  cout << "*p: " << *p << endl;

  return 0;
}
