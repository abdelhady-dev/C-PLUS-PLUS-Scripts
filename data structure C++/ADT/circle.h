#pragma once
#include<iostream>
using namespace std;
class Circle
{
private:
	double rad, areaResult = 0, circumfResult = 0, pay = 3.14;
public:
	// defult constructor 
	Circle();
	// constructor with parameter
	Circle(double radius);
	// calculate circumference
	double circumference();
	// calculate area
	double area();
	// show result
	void result();
};
