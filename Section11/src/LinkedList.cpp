#include "LinkedList.h"
#include "Node.h"
#include <iostream>


LinkedList::LinkedList() 
{
    head = new Node(0);
    Node* one  = new Node(1);
    Node* two  = new Node(2);
    Node* three = new Node(3);

    head->setNext(one);
    one->setNext(two);
    two->setNext(three);
   
}
void LinkedList::display() 
{
	Node* p = head;
    while(p){
        std::cout<<p->getData()<<std::endl;;
        p = p->getNext();
    }
}

void LinkedList::recursiveDisplay(Node* n) 
{
    if(n) {
        std::cout<<"Node data is -> "<<n->getData()<<std::endl;
        recursiveDisplay(n->getNext());
    }
}

void LinkedList::recusriveDisplayMain() 
{
	recursiveDisplay(head);
}

int LinkedList::getCount() 
{
    Node* p = head;
    int count;
    while(p){
        count++;
        p = p->getNext();
    }
    std::cout<<"Total node count is "<<count<<std::endl;

    return count;
}

int LinkedList::recursiveCount(Node* n) 
{
     if(n) {
        return 1+recursiveCount(n->getNext());
    } 
    return 0;
}

int LinkedList::recursiveCountMain() 
{
   	int total = recursiveCount(head);
    std::cout<<"Total count "<<total<<std::endl;
}

//This can return Node as well
bool LinkedList::getValue(int value) 
{
	Node* p = head;
    while(p){
        if(p->getData() == value){
            return true;
        }
        p = p->getNext();
    }
    return false;
}

//Improved linear search using move to head 
//Instead of bool node can be also returend
bool LinkedList::getValueAndMoveToHead(int value) 
{
	Node* p = head;
    Node* previous = nullptr;
    while(p){
        if(p->getData() == value){
            if(previous) previous->setNext(p->getNext());
            p->setNext(head);
            head = p;
            return true;
        }
        previous = p;
        p = p->getNext();
    }
    return false;
}

//TODO: Remove this line //Next insert in linked list