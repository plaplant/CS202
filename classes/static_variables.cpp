#include <iostream>

using namespace std;

int get_static_value(){
  static int foo = 0;
  return foo++;
}

class counterClass {
public:
  static int public_val;
  // default constructor
  counterClass() {
    public_val++;
    private_val--;
  };
  int get_private_val() {
    return private_val;
  };
private:
  static int private_val;
};

int counterClass::public_val = 0;
int counterClass::private_val = -1;

int main() {
  int a;
  for (int i=0; i<10; i++){
    a = get_static_value();
    cout << "a: " << a << endl;
  }

  counterClass cc1;
  cout << "cc1.public_val: " << cc1.public_val << endl;
  counterClass cc2;
  cout << "cc2.public_val: " << cc2.public_val << endl;
  cout << "cc1.public_val: " << cc1.public_val << endl;
  cout << cc2.get_private_val() << endl;

  return 0;
}
