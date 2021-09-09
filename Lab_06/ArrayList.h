#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <iostream>

struct ArrayList{
	int* data;
	int capacity;
	int count;

	ArrayList(){ 
		data = new int;
		capacity = 1;
		count = 0;
	}
	
	void append(int x){
		data[count] = x;
		count++;

		// At this point, bytes are used up, we must expand capacity.
		if (capacity == count){
			capacity *= 2;
			int* chunkMem = new int[capacity];

			for(int i = 0; i < (capacity/2); i++){
				chunkMem[i] = data[i];
			}

			int* oldData = data;
			data = chunkMem;
			delete[] oldData;
		}
	}

	void memory_contents(int index){ // prints memory contents of the element according to the inputted index: ex: 5 = 5 0 0 0
		int x = data[index];
		unsigned char* p = (unsigned char*)&x;

		std::cout << "Memory contents at index " << index << ": ";
		for(int i = 0; i < sizeof(x); i++){
			std::cout << (int) p[i] << " ";
		}
		std::cout << std::endl;
	}

	int length(){ // return how much memory is used
		return count;
	}

	int cap(){ // return how much memory is allocated
		return capacity;
	}

	int& operator[](int i){ // return data
		return data[i];
	}

	~ArrayList(){
		delete[] data;
	}
	
};


std::ostream& operator<<(std::ostream& os, ArrayList& arr){
	os << "[";
	for (int i = 0; i < arr.count; i++){
		os << arr[i];
		if (i < arr.count-1){
			os << ", ";
		}
	}
 
	os << "]";
 
	return os;
}


#endif