#include <iostream>

using namespace std;

int main() {
  // create pointer variables
  int *p, *q;

  // initialize values -- these are all equivalent!
  p = 0;
  p = NULL;
  p = nullptr;  // only in C++11 and later

  // assign to memory locations
  p = new int;
  q = new int[10];

  // delete when we're done
  delete p;
  delete [] q;

  return 0;
}
