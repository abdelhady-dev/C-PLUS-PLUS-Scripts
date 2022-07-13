#include "BankBranch.h"
void home();
void controlBranch();
void controlHolder();
string userName = "data";
string password = "123";
BankBranch bank;
int main() {
	
	home();
	
	system("pause");
	return 0;
}
void home() {
	string user, pass;
	cout << "=====================================================\n"
		<< "=====================================================\n"
		<< "               Data Structure Project\n"
		<< "                     Dr: safi\n"
		<< "                    Bank System\n"
		<< "=====================================================\n"
		<< "=====================================================\n\n\n\n";
	do {
		cout << "               Enter user name : "; cin >> user;
		cout << "               Enter password :  "; cin >> pass;
		if (user == userName && pass == password)
			break;
		else
			cout << "               the user or password in valid \n";
	} while (true);
	int ch;
	do {
		system("CLS");
		cout << " 1) Branch. \n";
		cout << " 2) Holder. \n";
		cout << " 3) Exit \n";
		cout << "Enter choice :"; cin >> ch;
		switch (ch)
		{
		case 1:
			controlBranch();
			break;
		case 2:
			controlHolder();
			break;
		case 3:
			cout << "Exit \n";
			break;
		default:
			cout << "Invalid Choice \n";
			break;
		}

	} while (ch != 3);
}
// control branches
void controlBranch() {
	system("CLS");
	int ch;
	cout << " 1) Add new Branch. \n";
	cout << " 2) Display Branches.\n";
	cout << " 3) Search for Branch by Id.\n";
	cout << " 4) Remove Branch.\n";
	cout << " 5) display holders by Branch Id.\n";
	cout << " 6) Exit \n";
	do {
		cout << "Enter choice: " << endl;
		cin >> ch;
		switch (ch) {
		case 1: {
			bank.addBranch();
			break;
		} case 2: {
			bank.display();
			break;
		} case 3: {
			bank.search();
			break;
		} case 4: {
			bank.removeBranch();
			break;
		} case 5: {
			bank.displayInBranch();
			break;
		} case 6: {
			cout << "Exit" << endl;
			break;
		} default: {
			cout << "Invalid Choice" << endl;
		}
		}
	} while (ch != 6);
}
void controlHolder() {
	bank.chooseBranch();
}