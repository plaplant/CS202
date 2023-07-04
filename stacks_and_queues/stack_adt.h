#ifndef STACKADT_H
#define STACKADT_H

template <class T>
class StackADT {
public:
  virtual void initializeStack() = 0;
  // function to initialize a stack object
  // postcondition: stack is empty

  virtual bool isEmptyStack() const = 0;
  // function to determine whether the stack is empty
  // postcondition: return `true` if stack is empty, otherwise `false`

  virtual bool isFullStack() const = 0;
  // function to determine whether the stack is full
  // postcondition: return `true` if stack is full, otherwise `false`

  virtual void push(const T& newItem) = 0;
  // function to add newItem to the stack
  // precondition: the stack exists and is not full
  // postcondition: the stack is changed and newItem is added to the top

  virtual T top() const = 0;
  // function to return the top element of the stack
  // precondition: the stack exists and is not empty
  // postcondition: if the stack is empty, the program terminates.
  //    Otherwise, the top element of the stack is returned.

  virtual void pop() = 0;
  // function to remove the top element of the stack
  // precondition: the stack exists and is not empty
  // postcondition: the stack is changed and the top element is removed
};

#endif
