#include <iostream>

using namespace std;


class basicClass {
public:
  int class_int;
};

int main() {
  basicClass bc;
  bc.class_int = 7;

  cout << bc.class_int << endl;

  return 0;
}
