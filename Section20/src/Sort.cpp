#include "Sort.h"
#include <iostream>

Sort::Sort() 
{
}

void Sort::swap(int index1,int index2) 
{
   int temp = array[index1];
   array[index1] = array[index2];
   array[index2] = temp;
}

// BigO -> (n^2)
// Adaptive by introducing isSwapOccured bool flag
void Sort::bubbleSort() 
{
    bool isSwapOcurred = false;
	for(int i=0;i<len-1;i++) {
        for(int j=0;j<len-i-1;j++){
            if(array[j]>array[j+1]) {
                swap(j,j+1);
                isSwapOcurred = true;
            }
        }

        if(!isSwapOcurred) {
            return;
        }
    }
}

void Sort::display() {
    for(int i=0;i<10;i++) {
        std::cout<<array[i]<<std::endl;
    }
}

// BigO -> (n^2)
// Insertion Sort is Adaptive by nature // O(n) for already sorted list
// Inseration Sort is stable // position are preserved for elements with same value 
void Sort::insertionSort() 
{
    for(int i=1; i<len; i++) {
        int temp = array[i];
        int j = i-1;
        while(j >= 0 && array[j] > temp) {
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = temp;
    }
	
}


//BigO -> (n^2)
//Selection sort not stable // positions are changed for elements with same value
//Selection sort not adaptive // always in order of (n^2)
void Sort::selectionSort() 
{
    int i,j,k;
	for(i=0; i<len-1; i++ ) {
        for(j=k=i; j<len; j++) {
            if(array[j] < array[k]){
                k = j;
            }
        }
        swap(i,k);
    }
}

