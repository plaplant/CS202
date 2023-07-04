#include <iostream>
#include <cassert>
#include "stack_adt.h"

using namespace std;

template <class T>
class StackArray: public StackADT<T> {
private:
  // helper variables
  int MAXVAL = 100;
  T **stack;
  int count;

public:
  // implement pure virtual functions

  // initialize stack
  void initializeStack() {
    stack = new T* [MAXVAL];
    count = 0;
  }

  // function to test if stack is empty
  bool isEmptyStack() const {
    if (count == 0) {
      return true;
    } else {
      return false;
    }
  }

  // funciton to test if stack is full
  bool isFullStack() const {
    if (count == MAXVAL) {
      return true;
    } else {
      return false;
    }
  }

  // function to add element to stack
  void push(const T& newItem) {
    stack[count] = new T;
    *stack[count] = newItem;
    count++;
  }

  // function to get top element of stack
  T top() const {
    assert(count > 0);
    return *stack[count-1];
  }

  // function to remove top element of stack
  void pop() {
    delete stack[--count];
  }

  // implement destructor to clean up after ourselves
  ~StackArray() {
    // delete individual array elements
    while (count > 0) {
      delete stack[--count];
    }

    // delete whole array
    delete [] stack;
  }
};

int main() {
  // create a new stack
  StackArray<double> myStack;

  // initialize
  myStack.initializeStack();

  // test functionality
  if (myStack.isEmptyStack()) {
    cout << "empty stack" << endl;
  } else {
    cout << "non-empty stack" << endl;
  }

  // play with the stack
  myStack.push(1.2);
  cout << myStack.top() << endl;
  myStack.push(2.2);
  cout << myStack.top() << endl;
  myStack.pop();
  cout << myStack.top() << endl;

  if (myStack.isEmptyStack()) {
    cout << "empty stack" << endl;
  } else {
    cout << "non-empty stack" << endl;
  }

  return 0;
}
