#include "linkedList.h"

linkedList::linkedList()
{
	node *head = NULL, *tail = NULL;
	int size1 = 0;
}

// build and add forword
void linkedList::buildListAndAdd() {
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
// build and add backword
void linkedList::appendBackward() {
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
			newNode->next = head;
			head = newNode;
		}
		cin >> number;
		size1++;
	}
}
// append in particular postion
void linkedList::appendAt(int value, int pos) {
	if (pos > size1)
		cout << " the list is smaller than position you entered \n";
	else if (pos < 0)
		cout << " you enter a negative number \n";
	else {
		node *tra = NULL;
		tra = head;
		for (int i = 0; i < pos-1; i++)
			tra = tra->next;
		node *newNode = new node();
		newNode->val = value;
		newNode->next = tra->next;
		tra->next = newNode;
		size1++;
	}
}
// delete a position in the list
void linkedList::deleteAt(int pos) {
	node *tra = NULL;
	tra = head;
	if (pos > 0 && pos <= size1) {
		if (pos == 1) {
			head = head->next;
			delete tra; tra = NULL;
		} else {
			for (int i = 1; i < pos - 1; i++)
				tra = tra->next;
			node *delNode = NULL;
			delNode = tra->next;
			if (pos == size1) 
				tail = tra;
			else 
				tra->next = delNode->next;
			delete delNode; delNode = NULL;
		}
		size1--;
	} else {
		cout << "the postion not found \n";
	}
}
// search value
void linkedList::searchValue(int value) {
	node *temp = NULL;
	temp = head;
	for (int i = 0; i < size1; i++) {
		if (temp->val == value) {
			cout << " the value : " << value << " is in the list \n";
			break;
		} else if (i == size1 - 1)
			cout << " value not found \n";
		temp = temp->next;
	}
}
// display list
void linkedList::display() {
	node *temp = NULL;
	temp = head;
	for (int i = 0; i < size1; i++) {
		cout << " ( " << temp->val << " ) ";
		temp = temp->next;
	}
	cout << "\n";
}
