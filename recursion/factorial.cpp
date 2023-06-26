#include <iostream>

using namespace std;

int iterative_factorial(int num) {
  int prod;

  if (num == 0) {
    return 1;
  } else {
    prod = 1;
    for (int i=num; i>0; i--) {
      prod *= i;
    }
    return prod;
  }
}

int recursive_factorial(int num) {
  if (num == 0) {
    return 1;
  } else {
    return num * recursive_factorial(num - 1);
  }
}

int main() {
  int f1, f2;

  f1 = iterative_factorial(7);
  f2 = recursive_factorial(7);
  cout << "f1: " << f1 << endl;
  cout << "f2: " << f2 << endl;

  return 0;
}
