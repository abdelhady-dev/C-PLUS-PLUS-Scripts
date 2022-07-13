#include "StackList.h"

int main() {
	StackList s;
	int ch, val, total = 0;
	cout << "1) Push in stack" << endl;
	cout << "2) Pop from stack" << endl;
	cout << "3) Display stack" << endl;
	cout << "4) Exit" << endl;
	do {
		cout << "Enter choice: " << endl;
		cin >> ch;
		switch (ch) {
		case 1: {
			cout << "Enter value to be pushed:" << endl;
			cin >> val;
			s.push(val);
			total++;
			break;
		}
		case 2: {
			s.pop();
			total--;
			break;
		}
		case 3: {
			s.display();
			break;
		}
		case 4: {
			cout << "Exit" << endl;
			break;
		}
		default: {
			cout << "Invalid Choice" << endl;
		}
		}
	} while (ch != 4);

	

	cout << " the sum of elements is : " << s.popSumValue() << "\n";
	cout << " the average is : " << s.popSumValue() / total << "\n";
	system("pause");
	return 0;
}
