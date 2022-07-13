#include<iostream>
#include<cmath>
using namespace std;
int main() {
	// solve quadratic equetion by quadratic rule 
	double a, b, c;
	cout << "Enter a, b, c to solve quadratic equetion \n";
	cin >> a >> b >> c;

	cout << "x1 = " << (-b + sqrt((b*b) - 4*a*c) ) / (2 * a);
	cout << "\nx2 = " << (-b - sqrt((b*b) - 4*a*c) ) / (2 * a)  << "\n";

	system("pause");
	return 0;
}