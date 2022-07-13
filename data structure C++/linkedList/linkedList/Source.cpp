#include<iostream>
using namespace std;

void buildListAndAdd();
void display();
// create node data type
struct node {
	int val;
	node *next;
};

node *head = NULL, *tail = NULL;
int size1 = 0;



int main() {
	
	buildListAndAdd();
	buildListAndAdd();
	display();

	system("pause");
	return 0;
}


void buildListAndAdd() {
	int number;
	cout << " Enter a list of number end with -999 \n";
	cin >> number;
	while (number != -999) {
		node *newNode = new node();
		newNode->val = number;
		newNode->next = NULL;
		if (head == NULL) 
			head = tail = newNode;
		else {
			tail->next = newNode;
			tail = newNode;
		}
		cin >> number;
		size1++;
	}
}
void display() {
	node *tra = NULL;
	tra = head;
	for (int i = 0; i < size1; i++) {
		cout << tra->val << "\n";
		tra = tra->next;
	}
	delete tra;
	tra = NULL;
}