#include <iostream>

using namespace std;

class A {
public:
  int a;
  A(int user_a) {
    a = user_a;
  }
  // in this function, we'll use the `this` pointer to access
  // member values
  void printThis() const {
    cout << "this: " << this << endl;
    cout << "(*this).a: " << (*this).a << endl;
    cout << "this->a: " << this->a << endl;
  }
};

int main() {
  A myA1(3);
  A myA2(-1);

  myA1.printThis();
  myA2.printThis();

  return 0;
}
