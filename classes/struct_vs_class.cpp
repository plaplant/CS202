#include <iostream>

using namespace std;

// define a struct
struct courseType_struct {
  // add members of struct
  string course_name;
  string course_no;
  int course_credits;
  // but we can have functions too!
  int get_credits() {
    return course_credits;
  }
};

// define a class
class courseType_class {
  // add members
  string course_name;
  string course_no;
  int course_credits;
  int get_credits() {
    return course_credits;
  }
};

int main() {
  // initialize our struct
  courseType_struct cs202_s;
  courseType_class cs202_c;
  int cno;

  // we can do this because by default, struct members are public
  cs202_s.course_name = "Computer Science II";
  cs202_s.course_no = "CS 202";
  cs202_s.course_credits = 3;

  // and we can call the function too!
  cno = cs202_s.get_credits();
  cout << "cno: " << cno << endl;
  // direct assignment is fine as well!
  cno = cs202_s.course_credits;
  cout << "cno, take two: " << cno << endl;

  // this gives us errors!
  // cs202_c.course_name = "Computer Science II";
  // cs202_c.course_no = "CS 202";
  // cs202_c.course_credits = 4;
  // cno = cs202_c.get_credits();
  // cout << "cno again: " << cno << endl;

  return 0;
}
