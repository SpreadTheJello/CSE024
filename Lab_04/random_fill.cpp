#include <igloo/igloo.h>
#include "lab4.h"

using namespace igloo;


// This function checks that all elements of the given array are in the range [min..max]
bool inRange(int arr[], int size, int min, int max){
	for (int i = 0; i < size; i++){
		if (arr[i] > max || arr[i] < min){
			return false;
		}
	}

	return true;
}

// This function compares two arrays elementwise
bool compare(int one[], int two[], int sizeOne, int sizeTwo){ // Now we pass the size into the compare function

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

Context(RandomFillTest){
	Spec(NumbersInRange){
		int arr[5];
		random_fill(arr, 5, 100, 200);
		
		Assert::That(inRange(arr, 5, 100, 200), IsTrue());
	}

	Spec(NumbersInRangeAllNegatives){
		int arr[5];
		random_fill(arr, 5, -10, -5);
		
		Assert::That(inRange(arr, 5, -10, -5), IsTrue());
	}

	Spec(DifferentEachTime){
		const int size = 10;
		const int min = 1;
		const int max = 100;

		int arr1[10];
		int arr2[10];

		random_fill(arr1, size, min, max);
		random_fill(arr2, size, min, max);

		Assert::That(compare(arr1, arr2, size, size), IsFalse());
	}
};

int main(){
	return TestRunner::RunAllTests();
}