#include "BankBranch.h"
// constructor
BankBranch::BankBranch() {
	top = NULL;
}
// check if the holer list is empty
bool BankBranch::isEmpty() {
	if (top == NULL)
		return true;
	else
		return false;
}
// add Branch account in Branch's list
void BankBranch::addBranch() {
	int id;
	string name, manager, address;
	Branch* newBranch = new Branch();
	cout << " Enter branch id : ";
	if (isEmpty()) {
		cin >> id;
		newBranch->next = NULL;
		top = newBranch;
		newBranch->branchId = id;
	} else {
		do {
			cin >> id;
			if (id != top->branchId) {
				newBranch->branchId = id;
				break;
			} else { cout << " Please enter a valid id. "; }
		} while (true);
		newBranch->next = top;
		top = newBranch;
	}
	cout << " Enter branch name : "; 
	cin >> name; newBranch->name = name;
	cout << " Enter branch manager name : ";
	cin >> manager; newBranch->manager = manager;
	cout << " Enter branch address : "; 
	cin >> address; newBranch->adress = address;
	cout << "\n Added new branch that id is : " << top->branchId << endl;
	cout << " ================================ \n" << endl;
}
// remove Branch
void BankBranch::removeBranch() {
	if (isEmpty())
		cout << " the holders list is empty. \n";
	else {
		int id;
		bool found = false;
		cout << " Enter id of branch to delete it : "; cin >> id;
		Branch *tra, *back, *del = NULL; tra = back = top;
		bool first = true;
		while (tra != NULL) {
			if (first) {
				first = false;
				if (id == tra->branchId) {
					del = tra;
					if (tra->next == NULL) { top = NULL; }
					else { top = top->next; }
					cout << " branch : " << tra->name << " & it's id : "
						<< tra->branchId << " -->> deleted \n";
					delete del, back;
					found = true;
					break;
				}
				tra = tra->next;
			}
			if (id == tra->branchId) {
				del = tra;
				back->next = tra->next;
				found = true;
				cout << " branch : " << del->name << " id : "
					<< del->branchId << " deleted \n";
				delete del;
				break;
			}
			back = back->next;
			tra = tra->next;			
		}
		if (found == false)
			cout << " not found. \n";
	}
}
// search in Branch's list by Branch id
void BankBranch::search() {
	if (isEmpty())
		cout << " the branches list is empty \n";
	else {
		Branch* tra;
		tra = top;
		int id;
		bool found = false;
		cout << " Enter id for branch : "; cin >> id;
		while (tra != NULL)
		{
			if (id == tra->branchId)
			{
				cout << " id : " << tra->branchId << endl;
				cout << " branch name : " << tra->name << endl;
				cout << " branch manager name : " << tra->manager << endl;
				cout << " branch address : " << tra->adress << endl;
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
// display Branch in list
void BankBranch::display() {
	if (isEmpty())
		cout << " the Branch list is empty \n";
	else {
		Branch *tra;
		tra = top;
		while (tra != NULL)
		{
			cout << " branch id is : " << tra->branchId << endl;
			cout << " branch name : " << tra->name << endl;
			cout << " branch manager name : " << tra->manager << endl;
			cout << " branch address : " << tra->adress << endl;
			cout << " ================================ " << endl;
			tra = tra->next;
			cout << endl;
		}
		cout << endl;
	}
}
// display holder in Branch 
void BankBranch::displayInBranch()
{
	if (isEmpty())
		cout << " the branches list is empty \n";
	else {
		Branch* tra;
		tra = top;
		int id;
		bool found = false;
		cout << " Enter id for branch : "; cin >> id;
		while (tra != NULL) {
			if (id == tra->branchId) {
				cout << endl;
				tra->holders.display();
				found = true;
				break;
			}
			tra = tra->next;
		}
		if (found == false)
			cout << "\n not found. \n";
	}
}
// choose branch to control holders
void BankBranch::chooseBranch()
{
	if (isEmpty())
		cout << "\n the branches list is empty \n";
	else {
		Branch* tra;
		tra = top;
		int id;
		bool found = false;
		cout << " Enter id for branch : "; cin >> id;
		while (tra != NULL) {
			if (id == tra->branchId) {
				system("CLS");
				int ch;
				cout << "\n 1) Add new holder. \n";
				cout << " 2) Search for holder by name.\n";
				cout << " 3) Remove holder.\n";
				cout << " 4) Display holder.\n";
				cout << " 5) Update holder.\n";
				cout << " 6) Exit \n";
				do {
					cout << "\n Enter choice : " << endl;
					cin >> ch;
					switch (ch) {
						case 1: {
							tra->holders.addAcountHolder();
							break;
						} case 2: {
							tra->holders.search();
							break;
						} case 3: {
							tra->holders.removeHolder();
							break;
						} case 4: {
							tra->holders.display();
							break;
						} case 5: {
							tra->holders.update();
							break;
						} case 6: {
							cout << "\n Exit" << endl;
							break;
						} default: {
							cout << "\n Invalid Choice" << endl;
						}
					}
				} while (ch != 6);
				found = true;
				break;
			}
			tra = tra->next;
		}
		if (found == false)
			cout << "\n not found. \n";
	}
}
