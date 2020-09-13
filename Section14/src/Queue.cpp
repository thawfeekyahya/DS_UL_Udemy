#include "Queue.h"
#include <iostream>

Queue::Queue() 
{
    size = 10;
	data = new int[size];
}

bool Queue::isFull() 
{
    return rear == size-1;
}

bool Queue::isEmpty() 
{
	return front == rear;
}
void Queue::enqueue(int value) 
{
	if(isFull()) {
        std::cout<<"Queue is full"<<std::endl;
    } else {
        rear++;
        data[rear] = value;
    }
}

int Queue::dequeue() 
{
    if(isEmpty()) {
        std::cout<<"Queue is Empty"<<std::endl;
    } else {
        front++;
        return data[front];
    }

    return -1;
}

void Queue::display() 
{
    for(int i=front+1;i<=rear;i++) {
        std::cout<<"Queue item at "<<i<<" -> "<<data[i]<<std::endl;
    }
}
