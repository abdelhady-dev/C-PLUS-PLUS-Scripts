#include "StackArray.h"



StackArray::StackArray()
{
	cout << " Enter a size of stack : "; cin >> size1;
	cout << endl;
	stack = new int[size1];
	top = -1;
}

bool StackArray::isFull()
{
	if (top == size1 - 1)
		return true;
	else
		return false;
}

bool StackArray::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}

void StackArray::push(int value)
{
	if (isFull())
		cout << " the stack is full !! \n";
	else {
		top++;
		stack[top] = value;
		cout << " the pushed element is : " << stack[top] << endl;
	}
}

void StackArray::pop()
{
	if (isEmpty())
		cout << " the stack is Empty !! \n";
	else {
		cout << " the poped element is : " << stack[top] << endl;
		top--;
	}
}

void StackArray::display()
{
	if (isEmpty())
		cout << " the stack is Empty !! \n";
	else {
		for (int i = top; i >= 0; i--)
			cout << " ( " << stack[i] << " ) ";
		cout << endl;
	}
}
