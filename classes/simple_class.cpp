#include <iostream>

using namespace std;

// class prototype definitions
class courseType {
public:
  // these methods can be called from any scope
  void set_course_info(string c_name, string c_no, int credits);
  void print() const;
  int get_credits();
  string get_course_number();
  string get_course_name();
private:
  // these variables can only be accessed from class methods
  string course_name;
  string course_no;
  int course_credits;
};


// actually implement object methods
void courseType::set_course_info(
    string c_name, string c_no, int credits) {
  course_name = c_name;
  course_no = c_no;
  course_credits = credits;
}

void courseType::print() const {
  cout << "Name: " << course_name << endl;
  cout << "Number: " << course_no << endl;
  cout << "Credits: " << course_credits << endl;
}

int courseType::get_credits() {
  return course_credits;
}

string courseType::get_course_number() {
  return course_no;
}

string courseType::get_course_name() {
  return course_name;
}


// main function!
int main() {
  courseType cs202;
  int cno;

  // set information for object
  cs202.set_course_info("Computer Science II", "CS 202", 3);

  // call object method
  cs202.print();

  // can access information through object methods
  cout << "Course name: " << cs202.get_course_name() << endl;
  cno = cs202.get_credits();
  cout << "Number of credits: " << cno << endl;

  // but! this will give us an error because the variable is
  // `private`
  // cno = cs202.course_credits;

  return 0;
}
