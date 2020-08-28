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






#endif // STACK_H
