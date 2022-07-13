#pragma once
#include<iostream>
using namespace std;
class StackArray
{
private:
	int *stack, size1, top;
public:
	StackArray();
	bool isFull();
	bool isEmpty();
	void push(int);
	void pop();
	void display();
};

