#include <igloo/igloo.h>
#include "lab4.h"

using namespace igloo;

Context(SumUniqueTest){
	Spec(test1){
        int arr[] = {1,2,3,4,5};
		Assert::That(sum_unique(arr,5), Equals(15));
	}

	Spec(test2){
        int arr[] = {5,5,5,5,5,5};
		Assert::That(sum_unique(arr,6), Equals(5));
	}

	Spec(test3){
        int arr[5] = {1, 2, 3, 3};
		Assert::That(sum_unique(arr,5), Equals(6));
	}

    Spec(test4){
        int arr[] = {1,2,3,2,1};
		Assert::That(sum_unique(arr,5), Equals(6));
	}

    Spec(test5){
        int arr[5] = {1,1,1};
		Assert::That(sum_unique(arr,5), Equals(1));
	}

};


int main(){
	return TestRunner::RunAllTests();
}