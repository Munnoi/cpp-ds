#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;
  
  Node(int item) {
      data = item;
      next = nullptr;
  }
};

class SLL {
  Node* head;
public:
  SLL() {
    head = nullptr;
  }
  void insertAtBeginning(int);
  void insertAtEnd(int);
  void deleteFromBeginning();
  void deleteFromEnd();
  void traverselist();
};

void SLL::traverselist() {
    Node* curr = head;
    while (curr) {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

void SLL::insertAtBeginning(int value) {
  Node* newNode = new Node(value);
  if (!head) {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

void SLL::insertAtEnd(int value) {
  Node* newNode = new Node(value);
  if (!head) {
    head = newNode;
    return;
  }
  Node* temp = head;
  while (temp->next) {
    temp = temp->next;
  }
  temp->next = newNode;
}

void SLL::deleteFromBeginning() {
  if (!head) return;
  if (!head->next) {
    delete head;
    head = nullptr;
    return;
  }
  Node* temp = head;
  head = head->next;
  delete temp;
}

void SLL::deleteFromEnd() {
  if (!head) return;
  if (!head->next) {
    delete head;
    head = nullptr;
    return;
  }
  Node* temp = head;
  while (temp->next->next) {
    temp = temp->next;
  }
  delete temp->next;
  temp->next = nullptr;
}


int main() {
    SLL sll;
    // sll.insertAtBeginning(1);
    // sll.insertAtBeginning(2);
    // sll.insertAtBeginning(3);
    sll.insertAtEnd(1);
    sll.insertAtEnd(2);
    sll.insertAtEnd(3);

    sll.traverselist();

    sll.deleteFromEnd();

    sll.traverselist();
    
    return 0;
}
