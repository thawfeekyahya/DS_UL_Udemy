//
// Created by osboxes on 7/19/20.
//

#ifndef DL_AS_UDEMY_ARRAYADT_H
#define DL_AS_UDEMY_ARRAYADT_H

class ArrayADT {
public:
    ArrayADT();
    void getArrayElements();
    void displayElements();

    int append(int element);
    int insert(int index,int element);
    int remove(int index);
    int linearSearch(int element);
    int linearSearch1(int element);
    int linearSearch2(int element);
    int binarySearch(int element);
    int binarySearchRecursive(int element);
    int swap(int originIndex, int destIndex);
private:

    int* arrayObj;
    int size=0;
    int length=0;

    int recursiveBinarySearch(int element,int lBound, int uBound);


};

#endif //DL_AS_UDEMY_ARRAYADT_H
