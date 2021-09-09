#include <igloo/igloo.h>
#include "lab4.h"

using namespace igloo;

Context(AutologicalTest){
	Spec(test1){
        int arr[] = {7, 9, 1, 3, 0};
		Assert::That(autological(arr,5), Equals(1));
	}

	Spec(test2){
        int arr[] = {2, 7, 9, 1, 2, 3};
		Assert::That(autological(arr,6), Equals(2));
	}

	Spec(test3){
        int arr[] = {7, 9, 5, 2, 3};
		Assert::That(autological(arr,5), Equals(-1));
	}

    Spec(test4){
        int arr[] = {5,5,5,5,5,6};
		Assert::That(autological(arr,6), Equals(5));
	}

    Spec(test5){
        int arr[5] = {-1,-1,-1,1,0};
		Assert::That(autological(arr,5), Equals(1));
	}

	

};


int main(){
	return TestRunner::RunAllTests();
}