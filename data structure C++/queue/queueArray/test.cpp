#include "QueueArray.h"
int main() {

	QueueArray q;
	int ch, val;
	cout << "1)Insert\n";
	cout << "2)Delete\n";
	cout << "3)Display\n";
	cout << "4)Exit\n";
	do {
		cout << "Enter choice : " << endl;
		cin >> ch;
		switch (ch) {
		case 1:
			cout << "Input for insertion: " << endl;
			cin >> val;
			q.inqueue(val);
			break;

		case 2:
			q.dequeue();
			break;

		case 3:
			q.display();
			break;

		case 4:
			cout << "Exit\n";
			break;
		default: cout << "Incorrect!\n";
		}
	} while (ch != 4);
	return 0;
}