#include <iostream>

using namespace std;

class courseType {
public:
  // default constructor
  courseType(){
    cout << "in default constructor" << endl;
    course_name = "Computer Science II";
    course_no = "CS 202";
    course_credits = 3;
  };
  // overloaded constructor
  courseType(string c_name, string c_no, int credits);
  // destructor
  ~courseType(){
    cout << "in destructor for " << course_name << endl;
  };
  // previous member functions
  void set_course_info(string c_name, string c_no, int credits);
  void print() const;
  int get_credits();
  string get_course_number();
  string get_course_name();
private:
  string course_name;
  string course_no;
  int course_credits;
};

courseType::courseType(string c_name, string c_no, int credits){
  cout << "in overloaded constructor" << endl;
  course_name = c_name;
  course_no = c_no;
  course_credits = credits;
}

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

int main() {
  courseType cs202;
  courseType cs135("Computer Science I", "CS 135", 3);

  //cs202.set_course_info("Computer Science II", "CS 202", 3);

  cs202.print();
  cs135.print();

  return 0;
}
