#include <iostream>

using namespace std;

void head_print(int num) {
  if (num == 0) {
    return;
  } else {
    head_print(num - 1);
  }

  cout << num << endl;
}

void tail_print(int num) {
  if (num == 0) {
    return;
  } else {
    cout << num << endl;
  }

  tail_print(num - 1);
}

int main() {
  head_print(4);

  cout << endl << endl;

  tail_print(4);

  return 0;
}
