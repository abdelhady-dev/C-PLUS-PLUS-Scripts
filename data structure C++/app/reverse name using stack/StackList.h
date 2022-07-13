#pragma once
#include<iostream>
using namespace std;

struct node {
	char val;
	node *next;
};

class StackList
{
private:
	node *top;
public:
	StackList();
	bool isEmpty();
	void push(char);
	void pop();
	void display();
};

