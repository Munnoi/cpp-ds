#include <iostream>
using namespace std;

const int MAX = 10;

class Stack {
	int stack[MAX];
	int top;
public:
	void push();
	void pop();
	void display();
	Stack() { top = -1; }
};

void Stack::push() {
	int item;
	if (top == MAX - 1) {
		cout << "Stack is full." << endl;
		// exit(0);
	} else {
		cout << "Enter the item: ";
		cin >> item;
		stack[++top] = item;
	}
}

void Stack::pop() {
	int item;
	if (top == -1) {
		cout << "Stack is empty." << endl;
		// exit(0);
	} else {
		item = stack[top--];
		cout << "Removed item: " << item << " from stack." << endl;
	}
}

void Stack::display() {
	if (top == -1) {
		cout << "Stack is empty." << endl;
		// exit(0);
	} else {
		cout << "Stack:" << endl;
		for (int i = top; i >= 0; i--)
			cout << stack[i] << endl;
	}
	
}

int main() {
	Stack s;
	int choice;
	char ch;

	do {
		cout << "1.PUSH\n2.POP\n3.DISPLAY" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
			case 1: s.push(); break;
			case 2: s.pop(); break;
			case 3: s.display(); break;
			default: cout << "Entered wrong choice!";
		}
		cout << "Do you want to continue, if type 'y': ";
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');

	return 0;
}
