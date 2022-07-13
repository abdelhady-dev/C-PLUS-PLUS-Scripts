#include <iostream>
using namespace std;
int main() {
	int x;
	cout<< "Please enter a number => ";
	cin>> x;
	cout<<"\n";
    for(int j = 1; j <= 12; j++){
        cout<< x <<" * "<< j <<" = "<< x * j <<"\n";
    }
	system("pause");
	return 0;
}