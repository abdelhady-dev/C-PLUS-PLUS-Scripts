#pragma once
#include "AcountHolder.h"
struct Branch {
	int branchId;
	string manager;
	string name;
	string adress;
	AcountHolder holders; // create object to holders list
	struct Branch *next;
};

class BankBranch
{
private:
	Branch* top;
public:
	// constructor
	BankBranch();
	// check if the holer list is empty
	bool isEmpty();
	// add Branch account in Branch's list
	void addBranch();
	// remove Branch
	void removeBranch();
	// search in Branch's list by Branch id
	void search();
	// display Branch in list
	void display();
	// display holder in Branch 
	void displayInBranch();
	// choose branch to control holders
	void chooseBranch();
};