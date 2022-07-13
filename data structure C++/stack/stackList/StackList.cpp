#include "StackList.h"



StackList::StackList()
{
	top = NULL;
}

bool StackList::isEmpty()
{
	if (top == NULL)
		return true;
	else
		return false;
}

void StackList::push(int value)
{
	node *newNode = new node();
	newNode->val = value;
	if (isEmpty()) {
		newNode->next = NULL;
		top = newNode;
	} else {
		newNode->next = top;
		top = newNode;
	}
	cout << " the value pushed in stack is : " << top->val << endl;
}

void StackList::pop()
{
	if (isEmpty())
		cout << " the stack is empty \n";
	else {
		cout << " the value poped in stack is : " << top->val << endl;
		node *delNode = new node();
		delNode = top;
		if (top->next == NULL)
			top = NULL;
		else 
			top = top->next;
		delete delNode; delNode = NULL;
	}
}

void StackList::display()
{
	if (isEmpty())
		cout << " the stack is empty \n";
	else {
		node *tra;
		tra = top;
		while (tra != NULL)
		{
			cout << " ( " << tra->val << " ) ";
			tra = tra->next;
		} cout << endl;
	}
}
