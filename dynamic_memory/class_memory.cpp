#include <iostream>

using namespace std;

class A {
private:
  int *p;
public:
  // default constructor
  A() {
    p = new int;
  }

  // getter
  int getP() {
    return *p;
  }

  // setter
  void setP(int q) {
    *p = q;
  }

  // destructor
  ~A() {
    delete p;
  }
};

int main() {
  A myA;

  myA.setP(7);
  cout << myA.getP() << endl;
}
