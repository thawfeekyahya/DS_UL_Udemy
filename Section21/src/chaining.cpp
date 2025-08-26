#include "chaining.h"
#include <iostream>

Chaining::Chaining() {
    std::cout<<"Hash Chaining Example"<<std::endl;
}


HashNode::HashNode() {

}


int HashNode::getValue() {
   return value;
}

void HashNode::setValue(const int value) {
    this->value = value;
}



