#include <iostream>
#include "array_queue.h"
using namespace std;

void Queue::qinsert() {
	int item;
	if (rear == MAX - 1) {
		cout << "Queue is full." << endl;
	} else {
		cout << "Enter the number: ";
		cin >> item;
		queue[++rear] = item;
		if (front == -1) front++;
	}
}

void Queue::qdelete() {
	int deletedItem;
	if (front == -1) {
		cout << "Queue is empty." << endl;
	} else {
		deletedItem = queue[front];
		if (front == rear) front = rear = -1;
		else front++;
		cout << "Deleted item: " << deletedItem << endl;
	}
}

void Queue::qdisplay() const {
	if (front == -1) cout << "Queue is empty." << endl;
	else {
		cout << "Queue:" << endl;
		for (int i = front; i <= rear; i++)
			cout << queue[i] << " ";
		cout << endl;
	}
}

void Queue::execute() {
	Queue s;
	int choice;
	char ch;

	do {
		cout << "1.INSERT\n2.DELETE\n3.DISPLAY" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice) {
			case 1: s.qinsert(); break;
			case 2: s.qdelete(); break;
			case 3: s.qdisplay(); break;
			default: cout << "Entered wrong choice!";
		}
		cout << "Do you want to continue, if type 'y': ";
		cin >> ch;
	} while (ch == 'Y' || ch == 'y');
}
