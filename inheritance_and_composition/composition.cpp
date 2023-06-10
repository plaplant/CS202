#include <iostream>

using namespace std;

class student {
public:
  string studentID;
};

class cs202 {
public:
  student myStudent;
};

int main() {
  cs202 myClass;
  myClass.myStudent.studentID = "ug1";
  cout << myClass.myStudent.studentID << endl;

  return 0;
}
