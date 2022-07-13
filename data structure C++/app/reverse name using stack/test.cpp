#include "StackList.h"
int main() {
	int size1;
	StackList reverse;
	cout << " Enter the length of the word to reverse it : "; cin >> size1;
	char *word = new char[size1];
	cout << " Enter the word : ";
	for (int i = 0; i < size1; i++) {
		cin >> word[i];
		reverse.push(word[i]);
	}
	cout << " the reversed word is :";
	for (int i = 0; i < size1; i++)
		reverse.pop();
	cout << endl;
	system("pause");
	return 0;
}