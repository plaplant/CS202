#include <iostream>
#include <string>

using namespace std;

// define PetType prototype base class
class PetType {
public:
  // note! we're making PetType::print() *virtual* here
  virtual void print() const;
  PetType(string n);
private:
  string name;
};

// define DogType prototype derived class
class DogType: public PetType {
public:
  void print() const;
  DogType(string n, string b);
private:
  string breed;
};

// implement PetType member functions
void PetType::print() const {
  cout << "Name: " << name;
}

PetType::PetType(string n) {
  name = n;
}

// implement DogType member functions
void DogType::print() const {
  PetType::print();
  cout << ", Breed: " << breed << endl;
}

DogType::DogType(string n, string b) : PetType(n) {
  breed = b;
}

// global function that accepts a reference to PetType
void callPrint(PetType& p) {
  p.print();
}

int main() {
  PetType pet("Mittens");
  DogType dog("Fluffy", "Labradoodle");

  pet.print();
  cout << endl;
  dog.print();

  cout << "========== Calling callPrint! ============" << endl;
  callPrint(pet);
  cout << endl;
  callPrint(dog);
  cout << endl;

  return 0;
}
