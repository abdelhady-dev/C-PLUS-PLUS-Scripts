#pragma once
#include<iostream>
using namespace std;

struct node {
	int val;
	node *next;
};

class StackList
{
private:
	node *top;
public:
	StackList();
	bool isEmpty();
	void push(int);
	void pop();
	void display();
};

