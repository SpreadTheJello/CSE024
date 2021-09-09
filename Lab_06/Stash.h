#ifndef STASH_H
#define STASH_H

#include <iostream>
#include <ostream>
#include <string>

struct Stash{
	unsigned char** data;
	unsigned int* type;
	int count;
	int capacity;

	Stash(){
		data = new unsigned char*[1];
		type = new unsigned int[1];
		capacity = 1;
		count = 0;
	};

	void inflate(){
		if (capacity == count){
			capacity *= 2;
			unsigned char** chunkMem = new unsigned char*[capacity];
			unsigned int* typeMem = new unsigned int[capacity];

			for(int i = 0; i < (capacity/2); i++){
				chunkMem[i] = data[i];
				typeMem[i] = type[i];
			}
			
			unsigned char* oldData = (unsigned char*)data;
			data = chunkMem;
			delete[] oldData;

			unsigned int* oldType = (unsigned int*)type;
			type = typeMem;
			delete[] oldType;
		}
	};

	void append(int x){ //stores int in stash
		int* someInt = new int(x);
		
		data[count] = (unsigned char*) someInt;
		type[count] = 0;
		count++;

		inflate();
	};

	void append(char x){ //stores char in stash
		char* someChar = new char(x);
		
		data[count] = (unsigned char*) someChar;
		type[count] = 1;
		count++;

		inflate();
	};

	void append(std::string x){ //stores string in stash
		std::string* someString = new std::string(x);

		data[count] = (unsigned char*) someString;
		type[count] = 2;
		count++;

		inflate();
	};

	void append(const Stash& s){
		Stash* someStash = new Stash(s);

		data[count] = (unsigned char*) someStash;
		type[count] = 3;
		count++;

		inflate();
	};

	int length(){
		return count;
	};

	~Stash(){
		delete[] data;
		delete[] type;
	}

};

std::ostream& operator<<(std::ostream& os, const Stash& s){
	os << "[";
	for(int i = 0; i < s.count; i++){
		if(s.type[i] == 0){ // int
			int* temp = (int*)s.data[i];
			os << *temp;
		}
		else if (s.type[i] == 1){ // char
			char* temp = (char*)s.data[i];
			os << "'" << *temp << "'";
		}
		else if (s.type[i] == 2){ // string
			std::string* temp = (std::string*)s.data[i];
			os << "\"" << *temp << "\"";
		}
		else if (s.type[i] == 3){
			Stash* temp = (Stash*)s.data[i];
			os << *temp;
		}
		if(i < s.count-1){
			os << ", ";
		}
	}
	os << "]";

	return os;
};

#endif