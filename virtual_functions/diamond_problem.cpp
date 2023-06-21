#include <iostream>
#include <string>

using namespace std;

// "grandparent" class
class Animal {
public:
  string name;
  Animal(string n) {
    cout << "Animal constructor" << endl;
    name = n;
  }
  virtual ~Animal() {
    cout << "Animal destructor, name: " << name << endl;
  }
};

// parent class with virtual inheritance of "grandparent" class
class Lion: virtual public Animal {
public:
  string mane_color;
  Lion(string n, string mc) : Animal(n) {
    cout << "Lion constructor" << endl;
    mane_color = mc;
  }
};

// same as `Lion`
class Tiger: virtual public Animal {
public:
  int number_of_stripes;
  Tiger(string n, int ns) : Animal(n) {
    cout << "Tiger constructor" << endl;
    number_of_stripes = ns;
  }
};

// child class with mulitple inheritance
class Liger: public Lion, public Tiger {
public:
  // our child constructor has to explicitly call the parametrized
  // constructor of the grandparent (or we'd need to define a
  // default constructor for the grandparent)
  Liger(string n, string mc, int ns)
    : Animal(n), Lion(n, mc), Tiger(n, ns) {
    cout << "Liger constructor" << endl;
    mane_color = mc;
    number_of_stripes = ns;
  }
};

int main() {
  cout << "Initializing a lion:" << endl;
  Lion simba("Simba", "red");
  cout << "simba.name: " << simba.name << endl;
  cout << endl << endl << "Initializing a tiger:" << endl;
  Tiger shere_khan("Shere Khan", 12);
  cout << "shere_khan.name: " << shere_khan.name << endl;
  cout << endl << endl << "Initializing a liger:" << endl;
  Liger shere_simba("Shere Simba", "brown", 7);

  // uncomment this to see if we can directly access the name or not
  // cout << "shere_simba.name: " << shere_simba.name << endl;

  return 0;
}
