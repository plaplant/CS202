#include <iostream>

using namespace std;

// this class will have a friend function associated with it
class A {
  // I *must* declare a friend function inside of the class
  // definition (and it typically goes before any member access
  // specifiers)
  friend void friendOfA(A Aobject);
public:
  A() {
    a = 0;
  }
  A(int user_a){
    a = user_a;
  }
  int getA() {
    return a;
  }
private:
  int a;
};

// now I implement the friend function
// Note! There is no class reference or scope resolution operator
// Instead, I am declaring that an instance of the class will be
// provided as a parameter of the function.
void friendOfA(A Aobject) {
  cout << "calling public member function: "
       << Aobject.getA() << endl;
  cout << "accessing private member variable: "
       << Aobject.a << endl;
  Aobject.a++;
  cout << "we can even change the value! "
       << Aobject.a <<endl;
}

int main() {
  A myA(7);
  // here is my friend function in action!
  friendOfA(myA);

  return 0;
}
