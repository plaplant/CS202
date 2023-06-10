#include <iostream>
#include "student.h"

int main() {
  student st1;
  st1.printInfo();

  student st2("id", "Joe", "Schmoe");
  st2.printInfo();

  return 0;
}
