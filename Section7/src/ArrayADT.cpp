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
    if(lBound < uBound) {
        if (arrayObj[mid] == element) {
            return mid;
        } else {
            if (arrayObj[mid] > element) {
                uBound = mid - 1;
                return recursiveBinarySearch(element, lBound, uBound);
            } else {
                lBound = mid + 1;
                return recursiveBinarySearch(element, lBound, uBound);
            }
        }
    }

}

int ArrayADT::get(int index) {
    if(index < 0 || index > length) {
        std::cout<<"index out of bounds";
        return -1;
    }
    return arrayObj[index];
}

void ArrayADT::set(int index, int element) {
    if(index < 0 || index > length) {
        std::cout<<"index out of bounds";
        return;
    }
    arrayObj[index] = element;
}

int ArrayADT::min() {
    int minVal = arrayObj[0];
    for (int i = 1; i < length; ++i) {
        if(arrayObj[i] < minVal){
            minVal = arrayObj[i];
        }
    }
    return minVal;
}

int ArrayADT::max() {
    int maxVal = arrayObj[0];
    for (int i = 1; i < length; ++i) {
        if(arrayObj[i] > maxVal){
            maxVal = arrayObj[i];
        }
    }
    return maxVal;
}

int ArrayADT::total() {
    int sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += arrayObj[i];
    }
    return sum;
}

int ArrayADT::totalRecursive() {
    return recursiveSum(length);
}

int ArrayADT::recursiveSum(int index) {
    if(index < 0) {
        return 0;
    } else {
        return recursiveSum(index-1) + arrayObj[index];
    }
}

void ArrayADT::reverse(bool useAuxiliary) {
    if(useAuxiliary) {  int temp[length];
        for(int i=0,j=length-1;i >=0;i++,j--){
            temp[i] = arrayObj[j];
        }
        for(int i=0;i<length;i++){
            arrayObj[i] = temp[i];
        }
    } else {
        for(int i=0,j=length-1;i<j;i++,j--){
            int temp = arrayObj[i];
            arrayObj[i] = arrayObj[j];
            arrayObj[j] = temp;
        }
    }

}

void ArrayADT::leftShift() {
    for(int i=0;i<length-1;i++){
        arrayObj[i] = arrayObj[i+1];
    }
    arrayObj[length-1]=0;
    //length--; //Actual left shift has to delete the first element
}

void ArrayADT::rightShift() {
    for(int i=length-1;i>0;i--){
        arrayObj[i] = arrayObj[i-1];
    }
    leftShift(); //FIXME: workaround to make last element to 0
    //length--;  //Actual right shift has to delete the last element
}

void ArrayADT::leftRotate() {
    int temp =arrayObj[0];
    for(int i=1;i<length-1;i++){
        arrayObj[i] = arrayObj[i+1];
    }
    arrayObj[length-1] = temp;
}

void ArrayADT::rightRotate() {

    int temp = arrayObj[length-1];
    for(int i=length-1;i>0;i--){
        arrayObj[i] = arrayObj[i-1];
    }
    arrayObj[0] = temp;
}


