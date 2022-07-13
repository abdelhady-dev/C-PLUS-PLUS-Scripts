#pragma once
#include<iostream>
#include<string>
using namespace std;
struct Holder {
	int holderId;
	string name;
	int acountId;
	double balance;
	string adress;
	Holder* next;
};
class AcountHolder
{
private:
	Holder* top;
public:
	// constructor
	AcountHolder();
	// check if the holer list is empty
	bool isEmpty();
	// add holder account in holder's list
	void addAcountHolder();
	// search in holder's list by holder name
	void search();
	// update account info
	void update();
	// remove one account of holder
	void removeOneAccoountHolder(int);
	// remove all account of holder
	void removeHolder();
	// display acounts in list
	void display();
};