#include <iostream>

using namespace std;

// base class
class student {
private:
  string studentID;
  string firstName;
  string lastName;
public:
  // default constructor
  student() {
    cout << "base class default constructor" << endl;
    studentID = "";
    firstName = "";
    lastName = "";
  }

  // parametrized constructor
  student(string ID, string fName, string lName) {
    cout << "base class parametrized constructor" << endl;
    studentID = ID;
    firstName = fName;
    lastName = lName;
  }

  // print function
  void printInfo() const {
    cout << "Student ID: " << studentID << endl;
    cout << "First name: " << firstName << endl;
    cout << "Last name: " << lastName << endl;
  }
};

// derived class
class undergradStudent : public student {
private:
  string major;
public:
  // default constructor
  undergradStudent() {
    cout << "derived class default constructor" << endl;
    major = "";
  }

  // parametrized constructor
  undergradStudent(string maj) {
    cout << "derived class parametrized constructor" << endl;
    major = maj;
  }

  // parametrized constructor for base class
  undergradStudent(string ID, string fName, string lName)
    : student(ID, fName, lName) {
    cout << "derived class parametrized constructor v2" << endl;
  }

  // parametrized constructor with major
  undergradStudent(string ID, string fName, string lName, string maj)
    : student(ID, fName, lName) {
    cout << "derived class parametrized constructor v3" << endl;
    major = maj;
  }

  // printMajor function
  void printMajor() const {
    cout << "Major: " << major << endl;
  }
};

int main() {
  // student st1;
  // st1.printInfo();
  // student st2("id", "Joe", "Smith");
  // st2.printInfo();

  // undergradStudent ug1;
  // ug1.printInfo();
  // undergradStudent ug2("Computer Science");
  // ug2.printInfo();
  // ug2.printMajor();
  // undergradStudent ug3("id", "Sally", "Jones");
  // ug3.printInfo();
  undergradStudent ug4("id", "Sally", "Jones", "Comp Sci");
  ug4.printInfo();
  ug4.printMajor();
}
