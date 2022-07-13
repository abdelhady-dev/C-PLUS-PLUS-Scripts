#include "QueueADT.h"


QueueADT::QueueADT()
{
	size = 5, front = -1, rear = -1;
}

bool QueueADT::isFull() {
	if (rear == size - 1)
		return true;
	else
		return false;
}


bool QueueADT::isEmpty() {
	if (front == -1 || front > rear)
		return true;
	else
		return false;
}
// shift element
void QueueADT::shiftElement()
{
	int shift = rear - front;
	for (int i = 0; i <= shift; i++)
		queue[i] = queue[front + i];
	rear = shift;
	front = 0;
}

void QueueADT::enqueue() {
	int val;
	if (isFull())
		cout << "Queue overflow ";
	else {
		if (front == -1)
			front = 0;
		rear++;
		cout << "insert element to add" << endl;
		cin >> val;
		queue[rear] = val;
	}

}

void QueueADT::dequeue() {
	if (isEmpty()) cout << "Queue under flow - Empty";
	else {
		cout << "Element deleted from queue is : " << queue[front] << endl;
		front++;
		shiftElement();
	}
}

void QueueADT::display() {
	if (isEmpty())
		cout << "Queue is empty" << endl;
	else {
		cout << "Queue elements are : ";
		for (int i = front; i <= rear; i++)
			cout << " ( " << queue[i] << " ) ";
		cout << endl;
	}
}