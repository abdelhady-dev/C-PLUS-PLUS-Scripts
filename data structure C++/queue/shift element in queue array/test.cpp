#include "QueueADT.h"
int main() {
	QueueADT q;
	int ch;
	cout << "1) Insert element to queue" << endl;
	cout << "2) Delete element from queue" << endl;
	cout << "3) Display all the elements of queue" << endl;
	cout << "4) Exit" << endl;
	do {
		cout << "Enter your choice : " << endl;
		cin >> ch;
		switch (ch) {
		case 1:q.enqueue();
			break;
		case 2: q.dequeue();
			break;
		case 3: q.display();
			break;
		case 4: cout << "Exit" << endl;
			break;
		default: cout << "Invalid choice" << endl;
		}
	} while (ch != 4);
	return 0;
}