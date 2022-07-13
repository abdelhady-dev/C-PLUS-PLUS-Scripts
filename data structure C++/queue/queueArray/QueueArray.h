#pragma once
#include<iostream>
using namespace std;
class QueueArray
{
private:
	int front, rear, size1, *queue;
public:
	QueueArray();
	bool isFull();
	bool isEmpty();
	void inqueue(int);
	void dequeue();
	void display();
};

