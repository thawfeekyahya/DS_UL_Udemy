#include "stack.h"
#include <iostream>

Stack::Stack() 
{
	std::cout<<"Enter the stack size";
    int tempSize;
    std::cin>>tempSize;
    data = new int[tempSize];
    size = tempSize;
}
bool Stack::isEmpty() 
{
	return (top == -1) ;
}

bool Stack::isFull() 
{
	return (top == size-1);
}

void Stack::push(int value) 
{
	if(isFull()) {
        std::cout<<"Stack OverFlow"<<std::endl;
        return;
    } else {
        top++;
        data[top] = value;
    }
}


int Stack::pop() 
{
    int popValue= -1;
	if(isEmpty()) {
        std::cout<<"Stack UnderFlow"<<std::endl;
    } else {
        popValue = data[top];
        top--;
    }

    return popValue;
}

int Stack::peek(int pIndex) 
{
    int index = top - pIndex + 1;
    int peekValue = -1;

    if(index < 0){
        std::cout<<"Invalid position"<<std::endl;
    } else {
        peekValue =  data[index];
    }
    
	return peekValue;
}

void Stack::dispaly() 
{

	for(int i=top;i>=0;i--){
        std::cout<<"Pos -> "<<i<<" value -> "<<data[i]<<std::endl;
    }
}
