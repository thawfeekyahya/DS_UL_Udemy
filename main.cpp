#include <iostream>
#include "Recursion.h"
#include "Arrays.h"
#include "ArrayADT.h"
#include "udstrings.h"
#include "LinkedList.h"
#include "stack.h"

int main() {
    std::cout<<"Data Structures and Alogorithms By Abdul - Udemy"<<std::endl;

    //Intro<int> i(5,3);
    //i.add(5,3);

   Recursion r;
//    r.recursiveLoop(3);
//    std::cout<< "Final Result "<< r.recurse(5)<<std::endl;
//
//    std::cout<<" Value 2 to the power 5 is -> "<<r.pow(5,2)<<std::endl;
//
//    std::cout<<" Factorial of 5 is ->  -> "<<r.factorial(5)<<std::endl;

//    std::cout<<"Fibonacci series -> "<<r.fibbo(8)<<std::endl;


    // r.headRecursion(5);
    // std::cout<<std::endl;
    // r.tailRecursion(5);
    // std::cout<<std::endl;
    // r.treeRecursion(5);

    // long tailSeriestResult = r.tailerSeries(10,1);

//    Arrays ar;
//    ar.printHeapArrayPartial();
//    ar.printHeapArray();
//    ar.printStackArray();

    // ArrayADT arrADT;
    // arrADT.getArrayElements();

//    int index = arrADT.binarySearchRecursive(20);
//    std::cout<<"The search element is at "<<index<<std::endl;
//
//
//    arrADT.set(1,100);
//    std::cout<<"The element at 1"<<arrADT.get(1)<<std::endl;

    // arrADT.displayElements();

    // arrADT.rightRotate();
    // arrADT.rightRotate();
    // arrADT.rightRotate();

    // arrADT.displayElements();
    // UDStrings str;

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.dispaly();
    std::cout<<"Peeked elemennt"<<s.peek(3)<<std::endl;
    s.dispaly();
    s.pop();
    s.dispaly();


  
    return 0;


}