#include <iostream>

using namespace std;

template<class T>
class A {
private:
  T x;
public:
  T getX() {
    return x;
  }
  void setX(T&&par) {
    x = par;
  }
};

int main() {
  // create a pointer to this type
  A<int> myA;
  A<int> *Aptr;
  A<double> *Aptr2;

  Aptr = &myA;
  myA.setX(3);
  cout << Aptr->getX() << endl;
  Aptr2 = new A<double>();
  Aptr2->setX(2.2);
  cout << Aptr2->getX() << endl;

  return 0;
}
