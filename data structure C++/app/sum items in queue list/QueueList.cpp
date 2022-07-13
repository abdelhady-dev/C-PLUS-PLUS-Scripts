#include "QueueList.h"



QueueList::QueueList()
{
	front = rear = NULL;
}

bool QueueList::isEmpty()
{
	if (front == NULL)
		return true;
	else
		return false;
}

void QueueList::inqueue(int value)
{
	node *newNode = new node();
	newNode->val = value;
	newNode->next = NULL;
	if (isEmpty())
		front = rear = newNode;
	else {
		rear->next = newNode;
		rear = newNode;
	}
	cout << "inqueue : " << newNode->val << endl;
}

void QueueList::dequeue()
{
	if (isEmpty())
		cout << " the queue is empty. \n";
	else {
		node *delNode = new node();
		delNode = front;
		if (front->next == NULL)
			front = rear = NULL;
		else
			front = front->next;
		cout << " dequeue : " << delNode->val << endl;
		delete delNode; delNode = NULL;
	}
}

void QueueList::display()
{
	node *tra;
	tra = front;
	while (tra != NULL) {
		cout << " ( " << tra->val << " ) ";
		tra = tra->next;
	}  cout << "\n"; sum();
}

void QueueList::sum()
{
	int sum = 0;
	node* tra;
	tra = front;
	while (tra != NULL) {
		sum += tra->val;
		tra = tra->next;
	}
	cout << "( the sum of items in queue is : " << sum << " ) \n";
}
