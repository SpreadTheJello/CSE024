#include <iostream>
#include "memory_stuff.h"
#include "ArrayList.h"
#include "Stash.h"

using namespace std;

int main(){
	
	/*
	cout << "Exercise 1: " << endl;
	int x = 67305985;
	memory_contents(x);
	cout << endl;

	cout << "Exercise 2: " << endl;
	unsigned char first = 1;
	unsigned char second = 2;
	unsigned char third = 3;
	unsigned char fourth = 4;
	cout << build_integer(first, second, third, fourth) << endl;
	cout << endl;

	cout << "Exercise 3: " << endl;
	FixedArrayList arr;
	for(int i = 1; i < 11; i++){
		arr.put(i+1,i);
		cout << "Put " << i+1 << " in heap array." << endl;
	}
	for(int i = 0; i < 11; i++){
		cout << "Loop " << i << ": " << arr.get(i) << endl;
	}
	*/
	
	
	/*
	cout << "Exercise 4: " << endl;
	ArrayList myArray = ArrayList();
 
	cout << myArray << endl;
	cout << "Capacity: " << myArray.cap() << endl;
	cout << "Length:   " << myArray.length() << endl;
	myArray.memory_contents(0);

	myArray.append(5);
 
	cout << endl << myArray << endl; 
	cout << "Capacity: " << myArray.cap() << endl;
	cout << "Length:   " << myArray.length() << endl;
	myArray.memory_contents(0);

	myArray.append(7);
 
	cout << endl << myArray << endl; 
	cout << "Capacity: " << myArray.cap() << endl;
	cout << "Length:   " << myArray.length() << endl;
	myArray.memory_contents(1);

	myArray.append(4);
 
	cout << endl << myArray << endl; 
	cout << "Capacity: " << myArray.cap() << endl;
	cout << "Length:   " << myArray.length() << endl;
	myArray.memory_contents(2);
	*/

	
	Stash t;
 
	t.append(99);
	t.append('X');
	t.append(73);
	t.append("Hello");
	
	cout << t << endl;
 
	Stash s;
 
	s.append(5);
	s.append(7);
	s.append('A');
	s.append(1);
	s.append(t);
	s.append(9);
	s.append("World");
 
	cout << s << endl;
	
	
	return 0;
}