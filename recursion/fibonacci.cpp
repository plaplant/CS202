#include <iostream>

using namespace std;

int fibonacci(int a, int b, int n) {
  if (n == 1) {
    return a;
  } else if (n == 2) {
    return b;
  } else {
    return fibonacci(a, b, n - 1) + fibonacci(a, b, n - 2);
  }
}

int main() {
  int i0, i1;

  i0 = 1;
  i1 = 1;
  for (int i=1; i<10; i++) {
    cout << fibonacci(i0, i1, i) << endl;
  }

  return 0;
}
