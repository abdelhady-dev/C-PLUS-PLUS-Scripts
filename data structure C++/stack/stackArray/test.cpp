#include"StackArray.h"
int main()
{
	StackArray s;
	int ch, val;
	cout << "1) Push in stack \n" << endl;
	cout << "2) Pop from stack \n" << endl;
	cout << "3) Display stack \n" << endl;
	cout << "4) Exit" << endl;
	do {
		cout << "Enter choice: " << endl;
		cin >> ch;
		switch (ch) {
		case 1: {
			cout << "Enter value to be pushed:" << endl;
			cin >> val;
			s.push(val);
			break;
		}
		case 2: {
			s.pop();
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
	system("pause");
	return 0;
}