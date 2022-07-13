#include "circle.h"


Circle::Circle()
{
	rad = 0;
}
Circle::Circle(double raduis)
{
	rad = raduis;
}
/*
double Circle::getRadius() {
	return rad;
}*/
double Circle::circumference() {
	circumfResult = 2 * pay * rad;
	return circumfResult;
}
double Circle::area() {
	areaResult = pay * rad * rad;
	return areaResult;
}

void Circle::result() {
	cout << "the area of the circle is : " << areaResult << "\n";
	cout << "the circumference of the circle is : " << circumfResult << "\n";
}
