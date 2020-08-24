#include "Node.h"

Node::Node(int pData,Node* pNext):
data(pData),
next(pNext)
{
   
}

void Node::setNext(Node* pNode) 
{
    next = pNode;
}

Node* Node::getNext() const
{
    return next;
}

int Node::getData() const
{
    return data;
}