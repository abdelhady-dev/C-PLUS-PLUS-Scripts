#pragma once
#include<iostream>
using namespace std;

struct node {
	int val;
	node *next;
};

class QueueList
{
private:
	node *front, *rear;
public:
	QueueList();
	bool isEmpty();
	void inqueue(int);
	void dequeue();
	void display();
	void sum();
};

