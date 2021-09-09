#ifndef MEMORYSTUFF_H
#define MEMORYSTUFF_H

#include <iostream>

void memory_contents(int x){
	unsigned char* p = (unsigned char*)&x;
	for(int i = 0; i < sizeof(x); i++){
		std::cout << (int) p[i] << std::endl;
	}
}

int build_integer(unsigned char first, unsigned char second, unsigned char third, unsigned char fourth){
	int result = 0;

	unsigned char* p = (unsigned char*) &result;
	*p = first;
	*(p+1) = second;
	*(p+2) = third;
	*(p+3) = fourth;

	return result;
}

struct FixedArrayList{
	int size;
	int* data;

	FixedArrayList(){
		size = 10;
		data = new int[size];
	}

	FixedArrayList(int size){
		this->size = size;
		data = new int[size];
	}

	void put(int x, int pos){
		if(pos >= size){
			throw std::logic_error("Error: Index is out of bounds.");
		}
		data[pos] = x;
	}

	int get(int pos){
		if (pos >= size){
			throw "Error: Position is out of bounds.";
		}

		return data[pos];
	}

};

#endif