#ifndef TREE_H
#define TREE_H

class Node {
    public:
        explicit Node(int value) {
            mValue = value;
        }
        int mValue;
        Node* leftChild = nullptr;
        Node* rightChild = nullptr;
};


class BinaryTreeOps {
	public:
	BinaryTreeOps() = default;
	Node* addValue(Node* node,int value);
	void inOrder(Node* node);
};


#endif // TREE_H
