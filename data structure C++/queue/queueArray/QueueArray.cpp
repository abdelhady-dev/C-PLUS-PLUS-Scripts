#include "QueueArray.h"
QueueArray::QueueArray()
{
	cout << " Enter a size of Queue : "; cin >> size1;
	front = rear = -1;
	queue = new int[size1];
}

bool QueueArray::isFull()
{
	/* or we can wirte*/
	//if ((front == 0 && rear == n-1) || (front == rear+1)) 
	if ((rear + 1) % size1 == front)
		return true;
	else
		return false;
}

bool QueueArray::isEmpty()
{
	if (front == -1)
		return true;
	else
		return false;
}

void QueueArray::inqueue(int val)
{
	if (isFull())
		cout << " Queue is full. \n";
	else {
		if (front == -1)
			front++;
		rear = ( (rear + 1) % size1 );
		queue[rear] = val;
		cout << " inqueue : " << queue[rear] << " \n";
		cout << "front " << front << "\n";
		cout << "rear " << rear << "\n";
	}
}

void QueueArray::dequeue()
{
	if (isEmpty())
		cout << " queue is empty. \n";
	else {
		cout << "the element deleted is : " << queue[front] << "\n";
		if (front == rear)
			front = rear = -1;
		else
			front = ( (front + 1) % size1 );
		cout << "front " << front << "\n";
		cout << "rear " << rear << "\n";
	}
}

void QueueArray::display()
{
	if (isEmpty())
		cout << "Queue is Empty \n";
	else {
		int i = front;
		do {
			if (i == size1) { i = (i % size1); continue; } // size1 is a size of array
			cout << " ( " << queue[i] << " ) "; i++;
		} while (i != rear + 1);
	}
	cout << endl;
}