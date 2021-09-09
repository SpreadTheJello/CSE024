#include <igloo/igloo.h>
#include "lab4.h"

using namespace igloo;

// This function compares two arrays elementwise
bool compare(int one[], int two[]){ // Now we pass the size into the compare function

    int sizeOne=sizeof(one)/sizeof(int);
	int sizeTwo=sizeof(two)/sizeof(int);

	// If sizes don't match, the arrays can't be equal
	if (sizeOne != sizeTwo){
		return false;
	}

	// Here, we know sizes are the same, so compare each element
	for (int i = 0; i < sizeOne; i++){
		if (one[i] != two[i]){
			// If we see an element that does not match it both arrays
			// They are not equal
			return false;
		}
	}

	// If the code gets here and we have not been able to find a non-matching pair
	// The arrays are the same.
	return true;
}

Context(RunningSumTest){
	Spec(test1){
        int arr[] = {1,2,3,4,5};
		int res[] = {1,3,6,10,15};
		running_sum(arr,5);
		Assert::That(compare(arr,res), IsTrue());
	}

	Spec(test2){
        int arr[] = {5,5,5,5,5,5};
		int res[] = {5,10,15,20,25,30};
		running_sum(arr,6);
		Assert::That(compare(arr,res), IsTrue());
	}

	Spec(test3){
        int arr[] = {5,4,3,2,1};
		int res[] = {5,9,12,14,15};
		running_sum(arr,5);
		Assert::That(compare(arr,res), IsTrue());
	}

    Spec(test4){
        int arr[] = {-5,-4,-3,-2,-1};
		int res[] = {-5,-9,-12,-14,-15};
		running_sum(arr,5);
		Assert::That(compare(arr,res), IsTrue());
	}

    Spec(test5){
        int arr[5] = {-1,-1,-1};
		int res[] = {-1,-2,-3,-3,-3};
		running_sum(arr,5);
		Assert::That(compare(arr,res), IsTrue());
	}

};


int main(){
	return TestRunner::RunAllTests();
}