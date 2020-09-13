#ifndef STACK_H
#define STACK_H

class Stack {
public:
	Stack();
	bool isEmpty();
	bool isFull();
	void push(int value);
	int  pop();
	int  peek(int index);
	void dispaly();
private:
	int size;
	int top=-1;
	int* data;
};

/*
* Not doing , only concept
class StackLinkedList {
public:
	StackLinkedList();
private:
	int data;
	StackLinkedList* next;
};*/



#endif // STACK_H
