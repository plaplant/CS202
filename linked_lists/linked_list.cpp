#include <iostream>

using namespace std;

class NodeType {
public:
  int info;
  NodeType *link;
};

int main() {
  // create a "head" that points to first link
  NodeType *head;

  // create a "current"  pointer
  NodeType *current;

  // create a few elements of my chain and link them together
  NodeType *newNode = new NodeType;
  newNode->info = 7;
  newNode->link = nullptr;
  head = newNode;

  // insert an element at the end
  current = head;
  newNode = new NodeType;
  newNode->info = -1;
  newNode->link = nullptr;
  current->link = newNode;

  // insert again
  current = current->link;
  newNode = new NodeType;
  newNode->info = 3;
  newNode->link = nullptr;
  current->link = newNode;

  // traverse the list
  current = head;
  while (current != nullptr) {
    cout << current->info << endl;
    cout << current->link << endl;
    current = current->link;
  }

  return 0;
}
