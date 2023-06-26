#include <iostream>
#include <string>

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
  int i;
  double d;
  string s;

  A<int> templateI;
  A<double> templateD;
  A<string> templateS;

  templateI.setX(3);
  templateD.setX(1.5);
  templateS.setX("Hello, world!");

  i = templateI.getX();
  d = templateD.getX();
  s = templateS.getX();

  cout << "i: " << i << endl;
  cout << "d: " << d << endl;
  cout << "s: " << s << endl;

  return 0;
}
