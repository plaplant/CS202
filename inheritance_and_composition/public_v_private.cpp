#include <iostream>

using namespace std;

class student {
private:
  string privateString;
public:
  string publicString;
  string getPrivateString() {
    return privateString;
  }
  void setPrivateString(string str) {
    privateString = str;
  }
};

class publicStudent : public student {
private:
  string privateString2;
public:
  string publicString2;
  string getPrivateString2() {
    return privateString2;
  }
  void setPrivateString2(string str) {
    privateString2 = str;
  }
};

class privateStudent : private student {
private:
  string privateString3;
public:
  string publicString3;
  string getPrivateString3() {
    return privateString3;
  }
  void setPrivateString3(string str) {
    privateString3 = str;
  }
};

int main() {
  student st1;
  /*
    case 1: directly accessing private member
  */
  // st1.privateString = "foo";
  // cout << st1.privateString << endl;

  /*
    case 2: accessing private member via public functions
  */
  // st1.setPrivateString("bar");
  // cout << st1.getPrivateString() << endl;

  /*
    case 3: directly accessing public member
  */
  // st1.publicString = "baz";
  // cout << st1.publicString << endl;

  publicStudent pubSt1;
  /*
    case 1: directly accessing private member of base class
  */
  // pubSt1.privateString = "foo";
  // cout << pubSt1.privateString << endl;

  /*
    case 2: directly accessing private member of derived class
  */
  // pubSt1.privateString2 = "foo";
  // cout << pubSt1.privateString2 << endl;

  /*
    case 3: directly accessing public member of base class
  */
  // pubSt1.publicString = "bar";
  // cout << pubSt1.publicString << endl;

  /*
    case 4: directly accessing public member of derived class
  */
  // pubSt1.publicString2 = "baz";
  // cout << pubSt1.publicString2 << endl;

  /*
    case 5: accessing private member of base class via public
    functions on base class
  */
  // pubSt1.setPrivateString("foo");
  // cout << pubSt1.getPrivateString() << endl;

  /*
    case 6: accessing private member of derived class based on
    public functions on derived class
  */
  // pubSt1.setPrivateString2("foot");
  // cout << pubSt1.getPrivateString2() << endl;

  privateStudent privateSt1;
  /*
    case 1: directly accessing private member of base class
  */
  // privateSt1.privateString = "foo";
  // cout << privateSt1.privateString << endl;

  /*
    case 2: directly accessing private member of derived class
  */
  // privateSt1.privateString3 = "foo";
  // cout << privateSt1.privateString3 << endl;

  /*
    case 3: directly accessing public member of base class
  */
  // privateSt1.publicString = "bar";
  // cout << privateSt1.publicString << endl;

  /*
    case 4: directly accessing public member of derived class
  */
  // privateSt1.publicString3 = "bar";
  // cout << privateSt1.publicString3 << endl;

  /*
    case 5: accessing private member of base class via public
    functions on base class
  */
  // privateSt1.setPrivateString("foo");
  // cout << privateSt1.getPrivateString() << endl;

  /*
    case 6: accessing private member of derived class via
    public functions on derived class
  */
  // privateSt1.setPrivateString3("foo");
  // cout << privateSt1.getPrivateString3() << endl;

  return 0;
}
