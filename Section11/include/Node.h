#ifndef NODE_H
#define NODE_H

class Node {
    public:
    Node(int pData,Node* pNext=nullptr);
    void setNext(Node* pNode);
    Node* getNext() const;
    int getData() const;
    private:
        Node* next;
        int   data;
};







#endif //NODE_H