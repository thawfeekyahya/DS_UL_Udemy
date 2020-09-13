#ifndef QUEUE_H
#define QUEUE_H

class Queue {
public:
	Queue();
	bool isFull();
	bool isEmpty();
	void enqueue(int value);
	int  dequeue();
	void display();
private:
	int size=0;
	int front=-1;
	int rear=-1;
	int* data;
};








#endif // QUEUE_H
