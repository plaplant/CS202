#include <iostream>

using namespace std;

class A {
public:
  int publicInt;
private:
  int privateInt = 4; // C++11 extension
};

int main() {
  A myA, *ptrA;
  int *p;

  // save the address of my object to a pointer of that type
  ptrA = &myA;

  // the address of `myA` shares the same address as `publicInt`
  cout << &myA << endl;
  cout << ptrA << endl;
  cout << &myA.publicInt << endl;

  // I can't do this directly; the compiler complains
  // cout << &myA.privateInt << endl;

  // but! instead the compiler is very happy to let me do this
  p = &myA.publicInt;
  cout << *(p+1) << endl;
  *(p+1) = 5;
  cout << *(p+1) << endl;

  return 0;
}
