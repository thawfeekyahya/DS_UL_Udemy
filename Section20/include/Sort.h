#ifndef SORT_H
#define SORT_H

class Sort {
	private:
		int len = 10;
		int array[10] = {8,7,6,1,4,5,3,0,9,2};
		void swap(int index1,int index2);
	public:
		Sort();
		void bubbleSort();
		void insertionSort();
		void selectionSort();
		void display();
};








#endif //SORT_H
