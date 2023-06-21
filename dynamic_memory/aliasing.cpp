#include <iostream>

using namespace std;

int main() {
  // create "regular" and pointer variables
  int a, *p, *q;

  // initialize variable
  a = 7;
  cout << "a: " << a << endl;
  // associate a pointer
  p = &a;
  // dereference pointer
  *p = 8;
  cout << "a: " << a << endl;
  // copy memory address
  q = p;
  // access from new pointer!
  *q = 9;
  // what do we get?
  cout << "a: " << a << endl;

  return 0;
}
