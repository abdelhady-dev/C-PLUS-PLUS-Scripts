#include<iostream>
#include "circle.h"
using namespace std;
int main() {
	double x, y;
	cout << "Enter the radius of circle 1 : "; cin >> x;
	cout << "Enter the radius of circle 2 : "; cin >> y;
	
	Circle c1(x); Circle c2(y);
	cout << "Circle 1 :- \n";
	c1.area(); c1.circumference(); c1.result();
	cout << "\n";
	cout << "Circle 2 :- \n";
	c2.area(); c2.circumference(); c2.result();
	cout << "\n";

	system("pause");
	return 0;
}