#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// declare a function that draw arrow
void printMoveArrow(int, int, int);
// declare a function that move arrow
void move(int);

int main() {

	int height, width, move;
	cout << "Please Enter the height and width of the arrow and the space you want it move \n";
	cin >> height >> width >> move;
	cout << "\n";
	printMoveArrow(height, width, move);

	system("pause");
	return 0;
}

// function that draw arrow
void printMoveArrow(int height, int width, int spaceMoving) {
	// get a half of hight
	int x = height / 2,
		// get a tail of arrow
		y = width - x;

	// move the arrow
	for (int j = 0; j < spaceMoving; j++) {
		system("CLS");
		// draw upper part of arrow
		for (int i = 1; i <= x; i++) {
			move(j);
			if (i <= 5) {
				cout << string(5, '*');
				cout << string(y - 5, ' ');
			}
			else {
				cout << string(y, '*');
			}
			cout << string(i, '*');
			cout << "\n";
		}
		// draw lower part of arrow
		for (int i = x; i > 0; i--) {
			move(j);
			if (i > 5) {
				cout << string(y, '*');
			}
			else {
				cout << string(5, '*');
				cout << string(y - 5, ' ');
			}
			cout << string(i, '*');
			cout << "\n";
		}
		Sleep(1);
	}
}
// function to move
void move(int num) {
	for (int i = 0; i < num; i++)
		cout << " ";
}