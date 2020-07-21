//
// Created by osboxes on 7/19/20.
//

#ifndef DL_AS_UDEMY_ARRAYADT_H
#define DL_AS_UDEMY_ARRAYADT_H

class ArrayADT {
public:
    ArrayADT();
    void getArrayElements();
private:

    int* arrayObj;
    int size=0;
    int length=0;

    void displayElements();

};

#endif //DL_AS_UDEMY_ARRAYADT_H
