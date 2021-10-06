#include <iostream>
#include "Recursion.h"
#include "Arrays.h"
#include "ArrayADT.h"
#include "udstrings.h"
#include "LinkedList.h"
#include "stack.h"
#include "Queue.h"
#include "Sort.h"

int main() {

   Sort s;

   s.display();
   std::cout<<std::endl;
   s.selectionSort();
   s.display();

    return 0;


}