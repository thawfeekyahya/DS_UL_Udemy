#include "Arrays.h"
#include <iostream>

Arrays::Arrays() 
{
  twoDArrayOnStack[0][0] = 0;
  twoDArrayOnStack[0][1] = 1;
  twoDArrayOnStack[1][0] = 2;
  twoDArrayOnStack[1][1] = 3;

  heapArrayPartial[0] = new int[2];
  heapArrayPartial[1] = new int[2];

  heapArrayPartial[0][0] = 4;
  heapArrayPartial[0][1] = 5;
  heapArrayPartial[1][0] = 6;
  heapArrayPartial[1][1] = 7;


  heapArray = new int* [2]; //Note the astrix after type int // this is a double pointer
  heapArray[0] = new int[2];
  heapArray[1] = new int[2];

  heapArray[0][0] = 8;
  heapArray[0][1] = 9;
  heapArray[1][0] = 10;
  heapArray[1][1] = 11;



}

void Arrays::print2dArray(int** array,int i, int j) {
//  for(int k=0;k<i;k++){
//      for(int l=0;i<j;l++){
//          std::cout<<"i of -> "<<i<<" j of -> "<<j<<array[k][l] <<std::endl;
//      }
//  }
}

void Arrays::printStackArray() {
    std::cout<<"Printing array on stack"<<std::endl;
    int a=2,b=2;
    for(int i=0; i < a; i++){
        for(int j=0; j < b; j++){
            std::cout << "i of -> " << i << " j of -> " << j << "->"<< twoDArrayOnStack[i][j] << std::endl;
        }
    }
}

void Arrays::printHeapArrayPartial() {
    std::cout<<"Printing heap partial"<<std::endl;
    int a=2,b=2;
    for(int i=0; i < a; i++){
        for(int j=0; j < b; j++){
            std::cout << "i of -> " << i << " j of -> " << j << "->"<< heapArrayPartial[i][j] << std::endl;
        }
    }
}

void Arrays::printHeapArray() {
    std::cout<<"Printing heap "<<std::endl;
    int a=2,b=2;
    for(int i=0; i < a; i++){
        for(int j=0; j < b; j++){
            std::cout << "i of -> " << i << " j of -> " << j << "->"<< heapArray[i][j] << std::endl;
        }
    }
}
