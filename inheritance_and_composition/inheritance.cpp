#include <iostream>

using namespace std;

// define base class
class student {
private:
  string studentID;
  string firstName;
  string lastName;

public:
  // default constructor
  student();

  // parametrized constructor
  student(string ID, string fname, string lName);

  // getters
  string getStudentID();
  string getFirstName();
  string getLastName();

  // setters
  void setStudentID(string ID);
  void setFirstName(string fName);
  void setLastName(string lName);

  // print function
  void printInfo() const;
};

// define derived class
class undergraduateStudent : public student {
private:
  string major;

public:
  // getters
  string getMajor();

  // setters
  void setMajor(string maj);

  // override a public member function!
  void printInfo() const;
};

// define methods
// default constructor
student::student() {
  // initialize values
  studentID = "";
  firstName = "";
  lastName = "";
}

// parametrized constructor
student::student(string ID, string fName, string lName) {
  // set member values to passed-in ones
  studentID = ID;
  firstName = fName;
  lastName = lName;
}

// getters
string student::getStudentID() {
  return studentID;
}

string student::getFirstName() {
  return firstName;
}

string student::getLastName() {
  return lastName;
}

// setters
void student::setStudentID(string ID) {
  studentID = ID;
}

void student::setFirstName(string fName) {
  firstName = fName;
}

void student::setLastName(string lName) {
  lastName = lName;
}

// print function
void student::printInfo() const {
  cout << "Student ID: " << studentID << endl;
  cout << "First Name: " << firstName << endl;
  cout << "Last Name: " << lastName << endl;
}

// undergraduateStudent functions
string undergraduateStudent::getMajor() {
  return major;
}

void undergraduateStudent::setMajor(string maj) {
  major = maj;
}

// overridden function!
void undergraduateStudent::printInfo() const {
  cout << "Undergrad student!" << endl;
  cout << "Major: " << major << endl;
}

int main() {
  // make a new `student` with default constructor
  student st1;
  st1.setStudentID("student1");
  st1.setFirstName("Joe");
  st1.setLastName("Schmoe");
  st1.printInfo();
  cout << endl;

  /*
    Reminder! Member values for student were declared `private`,
    so we can't access them directly. If we uncomment the next
    line, we get a compiler error.
  */
  // st1.studentID = "newID";

  // now let's make a new `undergraduateStudent`
  undergraduateStudent ug1;
  // we can use the public methods of `student`!
  ug1.setStudentID("ug1");
  ug1.setFirstName("Sally");
  ug1.setLastName("Smith");

  // we can also call our new (public) methods:
  ug1.setMajor("Computer Science");
  cout << ug1.getMajor() << endl;

  // overridden function call
  ug1.printInfo();
  cout << endl;

  // but the base class function is still there!
  // note: following may be compiler-dependent
  ug1.student::printInfo();
  cout << endl;
}
