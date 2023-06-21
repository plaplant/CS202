#include <iostream>

using namespace std;

int main() {
  // define number of columns and rows
  int LEN_X = 3;
  int LEN_Y = 4;

  // create a "pointer to a pointer", int**
  int **arr2d;

  // create new array of pointers
  arr2d = new int* [LEN_Y];

  // create new array of integers
  for (int i=0; i<LEN_Y; i++) {
    arr2d[i] = new int [LEN_X];
  }

  // initialize array
  for (int i=0; i<LEN_Y; i++) {
    for (int j=0; j<LEN_X; j++) {
      arr2d[i][j] = 10*i + j;
    }
  }

  // write it out
  for (int i=0; i<LEN_Y; i++) {
    for (int j=0; j<LEN_X; j++) {
      cout << arr2d[i][j] << "  ";
    }
    cout << endl;
  }

  // clean up!
  // first delete each row
  for (int i=0; i<LEN_Y; i++) {
    delete [] arr2d[i];
  }

  // now delete pointers to the rows
  delete [] arr2d;

  return 0;
}
