#pragma once
#include<iostream>
using namespace std;
// create node data type
struct node {
	int val;
	node *next;
};
class linkedList
{
private:
	node *head, *tail;
	int size1;
public:
	linkedList();
	void buildListAndAdd();
	void appendBackward();
	void appendAt(int, int);
	void deleteAt(int);
	void searchValue(int);
	void display();
};