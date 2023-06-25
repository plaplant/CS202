#include <iostream>
#include <string>

using namespace std;

// declare a class that has friend functions with stream operators
class A {
  friend ostream& operator<<(ostream &out, const A &a);
  friend istream& operator>>(istream &in, A &a);
private:
  int a;
public:
  A() {
    a = 0;
  }
  A(int aa) {
    a = aa;
  }
};

// define body of friend functions
ostream& operator<<(ostream &out, const A &otherA) {
  out << "A.a: " << otherA.a;
  return out;
}

istream& operator>>(istream &in, A &otherA) {
  in >> otherA.a;
  return in;
}

// main function
int main() {
  A myA1, myA2(3);
  // print an object to std::cout
  cout << myA2 << endl;

  // read a value into an object using std::cin
  cin >> myA1;
  cout << myA1 << endl;
};
