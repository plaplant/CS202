#include <iostream>

using namespace std;

int main() {
  int arr[10];
  int *p, *q;

  // initialize array
  for (int i=0; i<10; i++) {
    arr[i] = i;
  }

  // get address of first element
  p = &arr[0];

  // use pointer arithmetic to increment address and update value
  *(p+1) = 22;

  // see new array values
  for (int i=0; i<10; i++) {
    cout << "i, arr[i]: " << i << "  " << arr[i] << endl;
  }

  // demonstrate array arithmetic with other pointer
  q = &arr[7];
  if (q != (p+7)) {
    cout << "Inequal addresses!" << endl;
  }

  return 0;
}
