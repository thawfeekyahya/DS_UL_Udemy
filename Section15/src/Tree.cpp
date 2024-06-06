#include "Tree.h"
#include <iostream>

using namespace std;

Node* BinaryTreeOps::addValue(Node* node,int value) {
    
    if( node == nullptr) {
        return new Node(value);
    }
  
    if (value > node->mValue) {
        node->rightChild = addValue(node->rightChild,value);
    } else {
        node->leftChild = addValue(node->leftChild,value);
    }
    
    
    return node;
}

void BinaryTreeOps::inOrder(Node* node) {
    if (node != nullptr) {
        inOrder(node->leftChild);
        cout<<node->mValue<<endl;
        inOrder(node->rightChild);
    }
}
