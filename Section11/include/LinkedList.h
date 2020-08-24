#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class Node;

class LinkedList {
	public:
		LinkedList();
		void display();
		int getCount();
		bool getValue(int value);
		bool getValueAndMoveToHead(int value);
		void recusriveDisplayMain();
		int recursiveCountMain();
	private:
		Node* head;
		void recursiveDisplay(Node* n);
		int recursiveCount(Node* n);
		
};












#endif //LINKED_LIST_H
