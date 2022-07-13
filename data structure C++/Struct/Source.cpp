#include<iostream>
#include<string>
using namespace std;
int main() {
	int size;
	cout << "Enter the number of student : "; cin >> size;
	struct student {
		string name;
		float grade[6], sumGrade = 0;
		string id;
	};
	student *st= new student[size];
	// collect data
	for (int i = 0; i < size; i++)
	{
		cout << "enter name of student " << i + 1 << " : "; cin >> st[i].name;
		cout << "enter id of student " << i + 1 << " : "; cin >> st[i].id;
		for (int j = 0; j < 6; j++)
		{
			cout << "enter grade " << j + 1 << " of student " << i + 1 << " : "; 
			cin >> st[i].grade[j];
			st[i].sumGrade += st[i].grade[j];
		}
	}
	// show data
	for (int i = 0; i < size; i++)
	{
		cout << "name of student " << i + 1 << " is : " << st[i].name << "\n";
		cout << "id of student " << i + 1 << " is : " << st[i].id << "\n";
		cout << "the sum of grades of student " << i + 1 << " is : " << st[i].sumGrade << "\n";
	}
	// delete pointer and variable
	delete[] st;
	st = NULL;
	
	system("pause");
	return 0;
}