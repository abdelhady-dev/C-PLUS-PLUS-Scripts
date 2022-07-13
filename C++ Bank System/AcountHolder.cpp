#include "AcountHolder.h"
// constructor
AcountHolder::AcountHolder() {
	top = NULL; // initialize top pointer 
}
// check if the holer list is empty
bool AcountHolder::isEmpty() {
	if (top == NULL)
		return true;
	else
		return false;
}
// add holder account in holder's list
void AcountHolder::addAcountHolder() {
	// declare variables that the user entered
	int holderId, acountId; double balance = 0;
	string name, address;
	// create a new holder struct
	Holder* newHolder = new Holder();
	// give information from user and put it in struct
	cout << " Enter holder's name : ";
	cin >> name; newHolder->name = name;
	cout << " Enter holder id : ";
	cin >> holderId;newHolder->holderId = holderId;
	cout << " Enter acount id : ";
	// control to make acount id to be unique
	if (isEmpty()) { 
		cin >> acountId; newHolder->acountId = acountId;
		// put new holder in holder's list
		newHolder->next = NULL;
		top = newHolder;
	} else {
		do {
			cin >> acountId;
			if (acountId != top->acountId)
			{ newHolder->acountId = acountId; break; }
			else { cout << " Please enter a valid acount id. "; }
		} while (true);
		// put new holder in holder's list
		newHolder->next = top;
		top = newHolder;
	}
	cout << " Enter holder's balance : "; 
	cin >> balance; newHolder->balance = balance;
	cout << " Enter holder's  address : "; 
	cin >> address; newHolder->adress = address;
	cout << "\n Added new holder acount that name is : " << top->name << endl;
	cout << " ================================ \n" << endl;
}
// search in holder's list by holder name
void AcountHolder::search() {
	if (isEmpty())
		cout << "\n the holder list is empty \n";
	else {		
		string name;
		bool found = false;
		cout << " Enter name of holder : "; cin >> name;
		Holder* tra; tra = top;
		while (tra != NULL) {
			if (name == tra->name) {
				cout << "\n Holder id : " << tra->holderId << endl;
				cout << " Holder name : " << tra->name << endl;
				cout << " Holder account id : " << tra->acountId << endl;
				cout << " Holder balance : " << tra->balance << endl;
				cout << " Holder address : " << tra->adress << endl;
				cout << " ================================ \n" << endl;
				found = true;
			}
			tra = tra->next;
		}
		if (found == false)
			cout << "\n not found. \n";
	}
}
// update account info
void AcountHolder::update()
{
	if (isEmpty())
		cout << "\n the holders list is empty \n";
	else {
		int hid, bala; string name, address;
		Holder* tra;
		tra = top;
		int id;
		bool found = false;
		cout << "\n Enter id of account holder: "; cin >> id;
		while (tra != NULL) {
			if (id == tra->acountId) {
				cout << "\n Holder account id : " << tra->acountId << endl;
				cout << " Holder id : " << tra->holderId << endl;
				cout << " Holder name : " << tra->name << endl;
				cout << " Holder balance : " << tra->balance << endl;
				cout << " Holder address : " << tra->adress << endl;
				cout << " ================================ \n" << endl;
				cout << "\n Holder account id : " << tra->acountId << endl;
				cout << " Enter new holder id : ";
				cin >> hid; tra->holderId = hid;
				cout << " Enter new holder name : ";
				cin >> name; tra->name = name;
				cout << " Enter new holder balance : ";
				cin >> bala; tra->balance = bala;
				cout << " Enter new holder address : ";
				cin >> address; tra->adress = address;
				cout << " ================================ \n" << endl;
				found = true;
				break;
			}
			tra = tra->next;
		}
		if (found == false)
			cout << " not found. \n";
	}
}
// remove one account of holder
void AcountHolder::removeOneAccoountHolder(int id) {
	if (isEmpty())
		cout << " the holders list is empty. \n";
	else {
		// found --> control if acount found to break loop
		// first --> control if account in the first list
		bool found = false; bool first = true;
		Holder* tra, * back, * del = NULL; tra = back = top;
		while (tra != NULL) {
			if (first) {
				first = false;
				if (id == tra->holderId) {
					del = tra;
					top = top->next;
					cout << " ( Acount holder : " << del->name << " & it's id is : "
						<< del->holderId << " ) --> deleted \n";
					delete del, back;
					found = true;
					break;
				}
				tra = tra->next;
			}
			if (id == tra->holderId) {
				del = tra;
				back->next = tra->next;
				cout << " ( Acount holder : " << del->name << " & it's id : "
					<< del->holderId << " ) --> deleted \n";
				delete del;
				found = true;
				break;
			}
			back = back->next;
			tra = tra->next;
		}

		if (found == false)
			cout << " not found. \n";
	}
}
// remove all account of holder
void AcountHolder::removeHolder() {
	int id, count = 0;
	cout << " Enter the holder's id : "; cin >> id;
	Holder* tra = top;
	// get number of account holder
	while (tra != NULL) {
		if (id == tra->holderId)
			count++;
		tra = tra->next;
	}
	for (int i = count; i > 0; i--) {
		removeOneAccoountHolder(id);
	}
}
// display acounts in list
void AcountHolder::display() {
	if (isEmpty())
		cout << " the holder list is empty \n";
	else {
		Holder* tra; tra = top;
		while (tra != NULL) {
			cout << " Holder id : " << tra->holderId << endl;
			cout << " Holder account id : " << tra->acountId << endl;
			cout << " Holder name : " << tra->name << endl;
			cout << " Holder balance : " << tra->balance << endl;
			cout << " Holder address : " << tra->adress << endl;
			cout << " ================================ \n" << endl;
			tra = tra->next;
		}
		cout << endl;
	}
}