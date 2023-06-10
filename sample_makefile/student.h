#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class student {
private:
  string studentID;
  string firstName;
  string lastName;
public:
  // default constructor
  student();

  // parametrized constructor
  student(string ID, string fName, string lName);

  // print object info
  void printInfo() const;
};


#endif
