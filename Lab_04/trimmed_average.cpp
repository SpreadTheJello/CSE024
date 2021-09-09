#include <igloo/igloo.h>
#include "lab4.h"

using namespace igloo;

Context(TrimmedAverageTest){
	Spec(test1){
        float arr[] = {1,2,3,4,5};
		Assert::That(trimmed_average(arr,5), Equals(3));
	}

	Spec(test2){
        float arr[] = {5,5,5,5,5,5};
		Assert::That(trimmed_average(arr,6), Equals(5));
	}

	Spec(test3){
        float arr[] = {4000,3000,1000,2000,1000};
		Assert::That(trimmed_average(arr,5), Equals(2000));
	}

    Spec(test4){
        float arr[] = {-5,-4,-3,-2,-1};
		Assert::That(trimmed_average(arr,5), Equals(-3));
	}

    Spec(test5){
        float arr[5] = {-1,-1,-1,-1};
		Assert::That(trimmed_average(arr,5), Equals(-1));
	}

};


int main(){
	return TestRunner::RunAllTests();
}