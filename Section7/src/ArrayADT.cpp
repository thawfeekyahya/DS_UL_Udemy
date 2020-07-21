//
// Created by osboxes on 7/19/20.
//

#include "ArrayADT.h"
#include <iostream>

ArrayADT::ArrayADT() {

}

void ArrayADT::getArrayElements() {
    std::cout<<"Enter the array size"<<std::endl;
    std::cin>>size;
    arrayObj = new int[size];

    std::cout<<"Enter number of elements you want to insert"<<std::endl;
    std::cin>>length;

    std::cout<<"Enter the elements of Array"<<std::endl;
    for(int i=0;i<length;i++){
        std::cin>>arrayObj[i];
    }

    displayElements();
}

void ArrayADT::displayElements() {
    std::cout<<"The number of elements in a array are"<<std::endl;
    for(int i=0;i<length;i++){
        std::cout << arrayObj[i] << std::endl;
    }
}


