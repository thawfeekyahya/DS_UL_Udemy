#pragma once


#include <vector>


class HashNode;

class Chaining {
public:

    Chaining();

    Chaining(const Chaining* other) = delete;
    Chaining operator=(const Chaining* other) = delete;

private:
   static constexpr int hashSize = 10;
   std::vector<HashNode*> ivec{hashSize};

};


class HashNode {
public:
    HashNode();

    HashNode(const HashNode* other) = delete;
    HashNode operator=(const HashNode* other) = delete;

    void setValue(const int value);
    int getValue();
private:
    int value;
    HashNode* next;
};
