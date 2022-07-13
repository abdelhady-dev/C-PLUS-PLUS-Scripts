#include <iostream>
#include <array>
using namespace std;

class QueueADT
{
private:
	int queue[5], size, front, rear;
public:
	QueueADT(void);
	void enqueue();
	void dequeue();
	bool isFull();
	bool isEmpty();
	void shiftElement();
	void display();

};