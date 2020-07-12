#include "Recursion.h"
#include <iostream>

Recursion::Recursion() 
{
    int a = 5;
    int&& rvalue= a+ 10;
}

int Recursion::recurse(int n) 
{
    if(n > 0){
        int result;
        //Ascending Phase
        std::cout<<" Ascending n is -> "<<n<<std::endl;;
        result = recurse(n-1)+n;
        //Descending Phase
        std::cout<<" Descending n is -> "<<n<<std::endl;;
        return result;
    }

    return 0;
}
//Tail Recursion
int Recursion::pow(int n,int m) 
{
    if(n == 0){
        return 1;
    }  else {
        return pow(n-1,m)*m;
    }
}

int Recursion::factorial(int n) 
{
  if(n == 0) {
      return 1;
  }  else {
      return factorial(n-1)*n;
  }
}


//Head Recursion // First call in the function
void Recursion::headRecursion(int n) 
{
    if(n > 0 ) headRecursion(n-1);
    
    std::cout<<"Head -> "<<n<<std::endl;
}


//Tail Recursion // Last call the function
void Recursion::tailRecursion(int n) 
{
    std::cout<<"Tail -> "<<n<<std::endl;
    
    if(n > 0 ) tailRecursion(n-1);
}



void Recursion::treeRecursion(int n) 
{
    if(n > 0) {
        std::cout<<"N is -> "<<n<<std::endl;
        treeRecursion(n-1);
        treeRecursion(n-1);
    }
}


//Recursive function to find the sum of natural numbers //Fibanaci
int Recursion::fibbo(int n) 
{
    if( n <= 1) {
        return n;
    } else {
        return fibbo(n-2) + fibbo(n-1);
    }
  
}

//Tyler tailerSeries recursive function
// 1 + x^1 / 1! + x^2/ 2! + x^3/3! .... x^n/n ! 
long power=1;
long fact=1;
/**
 * @param n to n variable
 * @param x ineger
 **/
long Recursion::tailerSeries(int n, int x) 
{
    long result = 0;
    if(n == 0){
        return 1;
    } else {
        result = tailerSeries(n-1,x);
        power *= x;
        fact *= n;
        return result + power /fact;
    }
}





