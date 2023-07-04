#include <iostream>

using namespace std;

class NodeType {
public:
  int info;
  NodeType *link;
};

class LinkedList {
public:
  // member variables
  NodeType *head, *tail;
  int count;
  // member functions
  LinkedList();
  bool isEmpty();
  void printList();
  int listLength();
  void destroyList();
  int firstNodeInfo();
  int lastNodeInfo();
  NodeType* searchList();
  void insertNode(int info, int position);
  void deleteItem(int info);
  LinkedList makeCopy();
};

// implement a few member functions

// default constructor
LinkedList::LinkedList() {
  // initialize values
  head = nullptr;
  tail = nullptr;
  count = 0;
}

// function to test if list is empty
bool LinkedList::isEmpty() {
  if (count == 0) {
    return true;
  } else {
    return false;
  }
}

// print elements in list
void LinkedList::printList() {
  NodeType *current;
  current = head;

  while (current != nullptr) {
    cout << current->info << endl;
    current = current->link;
  }
}

// insert elements to the list
void LinkedList::insertNode(int info, int position=-1) {
  NodeType *current;
  int index = 0;
  int pos;

  // make a new node
  NodeType *newNode = new NodeType;
  newNode->info = info;

  if (count == 0) {
    // empty list! just create a new node and associate head with it
    newNode->link = nullptr;
    head = newNode;
    tail = newNode;
    count++;
  } else {
    if (position == -1) {
      // add to the end
      pos = count;
    } else {
      pos = min(position, count);
    }

    // find the right place to insert the node
    current = head;
    while (index != pos - 1) {
      current = current->link;
      index++;
    }

    // insert the node into the linked list
    newNode->link = current->link;
    current->link = newNode;
    count++;

    // handle beginning/end of list
    if (pos == 0) {
      head = newNode;
    }
    if (pos == count) {
      tail = newNode;
    }
  }
}

// main function
int main() {
  LinkedList ll;

  // test to see if list is empty
  if (ll.isEmpty()) {
    cout << "empty list" << endl;
  } else {
    cout << "non-empty list" << endl;
  }

  // add elements to the list
  ll.insertNode(1);
  ll.insertNode(2);
  ll.insertNode(3);
  ll.insertNode(4);
  ll.insertNode(20, 2);

  // test to see if still empty
  if (ll.isEmpty()) {
    cout << "empty list" << endl;
  } else {
    cout << "non-empty list" << endl;
  }

  // print the list!
  ll.printList();

  return 0;
}
