#include <iostream>
#include "Recursion.h"
#include "Arrays.h"
#include "ArrayADT.h"
#include "udstrings.h"
#include "LinkedList.h"
#include "stack.h"
#include "Queue.h"

int main() {

    int array[5] = {1,2,3,4,5};

    //sum = 7;

   // QPair<int,int> matched;

   int k =0;

    for(int i=0;i<5;i++) {
        std::cout<<k++<<std::endl;
        for(int j=0;j<5;j++) {
            std::cout<<k++<<std::endl;
            int sum = array[i] + array[j];
            if (sum == 7) {
                std::cout<<"Match found on indexes "<<i<<","<<j<<std::endl;
            }
        }
    }

    return 0;


}