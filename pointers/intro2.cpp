#include <iostream>

using namespace std;

int main() {
  int *p;
  int num;

  cout << "address of p: " << &p << endl;
  cout << "address of num: " << &num << endl;

  num = 78;

  cout << "num: " << num << endl;

  p = &num;

  cout << "p: " << p << endl;

  *p = 24;

  cout << "num: " << num << endl;
  cout << "p: " << p << endl;

  return 0;
}
