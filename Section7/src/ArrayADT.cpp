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

    if(length > size) { //TODO: Change to Exception
        std::cout<<"length should not be more than allocated size"<<std::endl;
        return;
    }

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

int ArrayADT::append(int element) {
    arrayObj[length] = element;
    length++;
    return element;
}
/**
 *
 * @param index
 * @param element
 * @return
 *
 *  Best case scenario O(1)
 *  Worst case scenario O(n)
 */
int ArrayADT::insert(int index, int element) {
    if(index < 0 && index > length && index > size) {  //TODO: Change to Exception
        std::cout<<"Index out of bounds"<<std::endl;
        return -1;
    }
    for(int i=length;i>index;i--){
        arrayObj[i] = arrayObj[i-1];
    }
    arrayObj[index] = element;
    length++;

    return element;
}

/**
 *
 * @param index
 * @return
 *
 * Best case scenario O(1)
 * Wrost case scenario O(n)
 */
int ArrayADT::remove(int index) {
    if(index < 0 && index > length && index > size) { //TODO: Change to Exception
        std::cout<<"Index out of bounds"<<std::endl;
        return -1;
    }
    int element = arrayObj[index];
    for(int i=index;i<length-1;i++){
        arrayObj[i]=arrayObj[i+1];
    }
    arrayObj[length] = 0;
    length--;
    return  element;
}
/**
 *
 * @param element
 * @return
 *  Best case scenario O(1)
 *  Worst case scenario O(n)
 */

int ArrayADT::linearSearch(int element) {
    for(int i=0;i<length;i++){
        if(arrayObj[i] == element){
            return i;
        }
    }
    return -1;
}

/**
 *
 * @param element
 * @return
 *  Improved Linear search using Transposition
 */
int ArrayADT::linearSearch1(int element) {
    int index = linearSearch(element);
    if(index != -1){
        index = swap(index,index-1);
    }
    return index;
}

/**
 *
 * @param element
 * @return
 * Improved Linear search using Move to Head Method
 */
int ArrayADT::linearSearch2(int element) {
    int index = linearSearch(element);
    if(index != -1){
        swap(index,0);
    }
    return 0;
}

/**
 *
 * @param originIndex
 * @param destIndex
 * @return If swap is successful ,returns the destination index
 */
int ArrayADT::swap(int originIndex, int destIndex) {
    if( (originIndex > length || originIndex > size) && (destIndex > length || destIndex > size)){ //TODO: Change to Exception
        return -1;
    }
    int temp = arrayObj[originIndex];

    arrayObj[originIndex] = arrayObj[destIndex];
    arrayObj[destIndex] = temp;
    return destIndex;
}

/**
 *
 * @param element
 * @return
 *
 * For the binary search to work the elements has to be in SORTED order
 * Best case scenario O[1)
 * Worst case scenario O(logN)
 */
int ArrayADT::binarySearch(int element) {

    int index = -1;
    int lowerBound = 0;
    int upperBound = length;
    int mid = 0;

    while(lowerBound <= upperBound){
        mid = lowerBound + upperBound / 2;
        if(arrayObj[mid] == element) {
            index = mid;
            break;
        } else {
            if(arrayObj[mid] > element) {
                upperBound = mid -1;
            } else {
                lowerBound = mid + 1;
            }
        }
    }

    return index;
}

int ArrayADT::binarySearchRecursive(int element) {
    int lowerBound = 0;
    int upperBound = length;
    return recursiveBinarySearch(element,lowerBound,upperBound);
}

int ArrayADT::recursiveBinarySearch(int element, int lBound, int uBound) {
    int mid = lBound + uBound / 2;
    if(arrayObj[mid] == element){
        return mid;
    } else {
        if(arrayObj[mid] > element){
            uBound = mid - 1;
            return recursiveBinarySearch(element, lBound, uBound);
        } else {
            lBound = mid + 1;
            return recursiveBinarySearch(element, lBound, uBound);
        }
    }

}


