#include "udstrings.h"
#include <iostream>

UDStrings::UDStrings() : text("ABCDEF"),
length(6)
{
    std::cout<<"This is permutation"<<std::endl;
    permutation(text,0);
}


void UDStrings::permutation(char tmpText[],int currentChar) 
{
    if(tmpText[currentChar] == '\0') {
        result[currentChar] = '\0';
        std::cout<<result<<std::endl;
    } else {
        for(int i=0;i<length;i++) {
            
            if(test[i] == 0) {
                result[currentChar] = text[i];
                test[i] = 1;
                permutation(tmpText,currentChar+1);
                test[i] = 0;
            }
        }
    }
}
