#include <iostream>
#include <string>
#include <locale>
using namespace std;
int main() {
	float num_subj, num_of_hour, total_num_of_hour=0, subject, total_subject=0, points, gpa;
	string grade;
	cout<<"NOTE: you should choose between (A+, A, B+, B, C+, C, D+, D, f) amd write grade a with capital letter without spacing (: \nEnter the number of the subjects: ";
	cin>> num_subj;		cout<< "\n";
	for (int i = 1; i <= num_subj; i++) {
		// Enter grade and hours number 
		cout<<"Enter the grade number " << i << " : ";
		cin>> grade;	cout<< "\n";
		cout<<"Enter the number of hours : ";
		cin>> num_of_hour;	cout<< "\n";
		// choose grade 
		if (grade == "A+") {points = 4;}
		else if (grade == "A") {points = 3.7;}
		else if (grade == "B+") {points = 3.3;}
		else if (grade == "B") {points = 3;}
		else if (grade == "C+") {points = 2.7;}
		else if (grade == "C") {points = 2.4;}
		else if (grade == "D+") {points = 2.2;}
		else if (grade == "D") {points = 2;}
		else if (grade == "F") {points = 0;}
		// total number of hour
		total_num_of_hour += num_of_hour;
		// calculate one subject
		subject = points * num_of_hour;
		// calculate total subjects;
		total_subject += subject;
	}
	// calculate G B A
	gpa = total_subject / total_num_of_hour;
	cout<< "your GPA = " << gpa << "\n";
	system("pause");
	return 0;
}


