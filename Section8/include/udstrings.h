#ifndef UD_STRINGS_H
#define UD_STRINGS_H

#define SIZE 10

class UDStrings {
public:
    UDStrings();
    void permutation(char tmpText[],int currentChar);
private:
    char text[SIZE];
    char result[SIZE];
    int test[SIZE]={0};
    int length;
};







#endif // UD_STRINGS_H
