#include<iostream>
#include<string>
using namespace std;
int main() {
	/*
	int x = 5, *p = &x;
	cout << &p << "\n" << &x << "\n" << p << "\n" << x << "\n" << *p << "\n";
	*p = 25;
	cout << x;
	*/

	string *str = new string;
	*str = "Haddy Saeed";

	cout << str << "\n" << *str << " ";
	cout << str << "\n" << *str << " ";
	cout << (*str).length() << "\n" << str->length() << " ";

	delete str;
	str = NULL;

	system("pause");
	return 0;
}