#include <iostream>
#include "student.h"

// implement member functions

// default constructor
student::student() {
  studentID = "";
  firstName = "";
  lastName = "";
}

// parametrized constructor
student::student(string ID, string fName, string lName) {
  studentID = ID;
  firstName = fName;
  lastName = lName;
}

// print object info
void student::printInfo() const {
  cout << "Student ID: " << studentID << endl;
  cout << "First name: " << firstName << endl;
  cout << "Last name: " << lastName << endl;
}
