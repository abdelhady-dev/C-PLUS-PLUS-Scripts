#include "linkedList.h"

int main() {
	linkedList list1;

	list1.buildListAndAdd();
	//list1.appendBackward();
	list1.appendAt(4, 3);
	list1.deleteAt(5);
	list1.searchValue(6);
	list1.display();
	

	system("pause");
	return 0;
}