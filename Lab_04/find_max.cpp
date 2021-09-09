#include <igloo/igloo.h>
#include "lab4.h"

using namespace igloo;

Context(FindMaxTest){
	Spec(test1){
        int arr[] = {1,2,3,4,5};
		Assert::That(find_max(arr,5), Equals(5));
	}

	Spec(test2){
        int arr[] = {5,5,5,5,5,5};
		Assert::That(find_max(arr,6), Equals(5));
	}

	Spec(test3){
        int arr[] = {5,4,3,2,1};
		Assert::That(find_max(arr,5), Equals(5));
	}

    Spec(test4){
        int arr[] = {-5,-4,-3,-2,-1};
		Assert::That(find_max(arr,5), Equals(-1));
	}

    Spec(test5){
        int arr[5] = {-1,-1,-1};
		Assert::That(find_max(arr,5), Equals(0));
	}

};


int main(){
	return TestRunner::RunAllTests();
}