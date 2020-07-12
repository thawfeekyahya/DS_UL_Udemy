#ifndef ARRAYS_H
#define ARRAYS_H

class Arrays{
    public:
        Arrays();
        void print2dArray(int** array,int i,int j);

        void printStackArray();
        void printHeapArrayPartial();
        void printHeapArray();
    private:
        int twoDArrayOnStack[2][2];
        int* heapArrayPartial[2];
        int** heapArray;
};



#endif //ARRAYS_H