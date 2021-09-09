#include <igloo/igloo.h>
#include "lab4.h"

using namespace igloo;

bool compare(int arr1[], int arr2[], int size, int size2)
{ 
	if(size != size2){
		return false;
	}
	for (int i = 0; i < size; i++) {
		if (arr1[i] != arr2[i]) {
			return false;
		}
	}
	return true;
}

bool compare(float x, float y){

	const float epsilon = 0.00001;
	return std::abs(x - y) < epsilon;
}

Context(FindMax){
	Spec(OneElementInArray){
		int arr[] = {10};
		int size = 1;
		Assert::That(find_max(arr, size), Equals(10));
	}
	Spec(LastElementInArray){
		int arr[] = {10,105,23,1,2,3,4,205};
		int size = 8;
		Assert::That(find_max(arr, size), Equals(205));
	}
	Spec(FirstElementInArray){
		int arr[] = {205,105,23,1,2,3,4,10};
		int size = 8;
		Assert::That(find_max(arr, size), Equals(205));
	}
	Spec(AnyElementInArray){
		int arr[] = {10,105,23,67,2,3,4,10};
		int size = 8;
		Assert::That(find_max(arr, size), Equals(105));
	}
};

Context(FindMaxPos){
	Spec(OneElementInArray){
		int arr[] = {10};
		int size = 1;
		Assert::That(find_max_pos(arr, size), Equals(0));
	}
	Spec(LastElementInArray){
		int arr[] = {10,105,23,1,2,3,4,205};
		int size = 8;
		Assert::That(find_max_pos(arr, size), Equals(7));
	}
	Spec(FirstElementInArray){
		int arr[] = {205,105,23,1,2,3,4,10};
		int size = 8;
		Assert::That(find_max_pos(arr, size), Equals(0));
	}
	Spec(AnyElementInArray){
		int arr[] = {10,105,23,67,2,3,4,10};
		int size = 8;
		Assert::That(find_max_pos(arr, size), Equals(1));
	}
};

Context(LinearSearch){
	Spec(OneElementInArray){
		int arr[] = {10};
		int size = 1;
		int key = 10;
		Assert::That(search(key, arr, size), Equals(0));
	}
	Spec(LastElementInArray){
		int arr[] = {10,105,23,1,2,3,4,205};
		int size = 8;
		int key = 205;
		Assert::That(search(key, arr, size), Equals(7));
	}
	Spec(FirstElementInArray){
		int arr[] = {205,105,23,1,2,3,4,10};
		int size = 8;
		int key = 205;
		Assert::That(search(key, arr, size), Equals(0));
	}
	Spec(AnyElementInArray){
		int arr[] = {10,105,23,67,2,3,4,10};
		int size = 8;
		int key = 67;
		Assert::That(search(key, arr, size), Equals(3));
	}
	Spec(NoElementInArray){
		int arr[] = {10,105,23,67,2,3,4,10};
		int size = 8;
		int key = 1000;
		Assert::That(search(key, arr, size), Equals(-1));
	}
};

Context(RunningSum){
	Spec(LeastToGreatest){
		int size = 6;
		int arr[size] = {1, 3, 4, 5, 7, 11};
		running_sum(arr, size);
		int arrCorrect[size] = {1, 4, 8, 13, 20, 31};
		Assert::That(compare(arr, arrCorrect, size, 6), IsTrue());
	}
	Spec(GreatestToLeast){
		int size = 6;
		int arr[size] = {11, 7, 5, 4, 3, 1};
		running_sum(arr, size);
		int arrCorrect[size] = {11, 18, 23, 27, 30, 31};
		Assert::That(compare(arr, arrCorrect, size, 6), IsTrue());
	}
	Spec(TextbookExample){
		int size = 4;
		int arr[size] = {1, 2, 3, 4};
		running_sum(arr, size);
		int arrCorrect[size] = {1, 3, 6, 10};
		Assert::That(compare(arr, arrCorrect, size, 4), IsTrue());
	}
	Spec(OneElement){
		int size = 1;
		int arr[size] = {1};
		running_sum(arr, size);
		int arrCorrect[size] = {1};
		Assert::That(compare(arr, arrCorrect, size, 1), IsTrue());
	}
	Spec(TwoElements){
		int size = 2;
		int arr[size] = {1, 2};
		running_sum(arr, size);
		int arrCorrect[size] = {1, 3};
		Assert::That(compare(arr, arrCorrect, size, 2), IsTrue());
	}
	Spec(NegativeNumbers){
		int size = 4;
		int arr[size] = {1, -2, 3, -4};
		running_sum(arr, size);
		int arrCorrect[size] = {1, -1, 2, -2};
		Assert::That(compare(arr, arrCorrect, size, 4), IsTrue());
	}
};

Context(ExcludingAverage){
	Spec(TextbookExample){
		int size = 4;
		float arr[size] = {4000, 3000, 1000, 2000};
		Assert::That(compare(trimmed_average(arr, size), 2500), IsTrue());
	}
	Spec(FloatInput){
		int size = 6;
		float arr[size] = {7.4, 2.6, 3.9, 4.4, 5.2, 6.6};
		Assert::That(compare(trimmed_average(arr, size), 5.025), IsTrue());
	}
	Spec(ThreeInputs){
		int size = 3;
		float arr[size] = {1.1, 2.2, 3.3};
		Assert::That(compare(trimmed_average(arr, size), 2.2), IsTrue());
	}
	Spec(LeastToGreatest){
		int size = 5;
		float arr[size] = {5, 5.8, 10, 10.5, 16};
		Assert::That(compare(trimmed_average(arr, size), 8.76666), IsTrue());
	}
	Spec(GreatestToLeast){
		int size = 5;
		float arr[size] = {16, 10.5, 10, 5.8, 5};
		Assert::That(compare(trimmed_average(arr, size), 8.76666), IsTrue());
	}
};

Context(RandomIntGenerator){
	Spec(Basic){
		int size = 4;
		int max = 10;
		int min = 1;
		int arr[size] = {1, 2, 3, 4};
		random_fill(arr, size, min, max);
		int arrCorrect[size] = {1, 2, 3, 4};
		Assert::That(compare(arr, arrCorrect, size, 4), IsFalse());
	}
	Spec(SameMinAndMax){
		int size = 4;
		int max = 5;
		int min = 5;
		int arr[size] = {1, 2, 3, 4};
		random_fill(arr, size, min, max);
		int arrCorrect[size] = {5, 5, 5, 5};
		Assert::That(compare(arr, arrCorrect, size, 4), IsTrue());
	}
};

Context(UniqueSum){
	Spec(TextbookExample){
		int size = 4;
		int arr[size] = {1, 2, 3, 3};
		Assert::That(sum_unique(arr, size), Equals(6));
	}
	Spec(OneElement){
		int size = 1;
		int arr[size] = {1};
		Assert::That(sum_unique(arr, size), Equals(1));
	}
	Spec(Pairs){
		int size = 4;
		int arr[size] = {1, 1, 2, 2};
		Assert::That(sum_unique(arr, size), Equals(3));
	}
	Spec(Mixed){
		int size = 10;
		int arr[size] = {1, 1, 2, 2, 3, 5, 6, 3, 3, 3};
		Assert::That(sum_unique(arr, size), Equals(17));
	}
};

Context(Autological){
	Spec(TextbookExample){
		int size = 4;
		int arr[size] = {7, 9, 1, 3};
		Assert::That(autological(arr, size), Equals(1));
	}
	Spec(TextbookExample2){
		int size = 6;
		int arr[size] = {2, 7, 9, 1, 2, 3};
		Assert::That(autological(arr, size), Equals(2));
	}
	Spec(NoneFound){
		int size = 6;
		int arr[size] = {2, 3, 4, 5};
		Assert::That(autological(arr, size), Equals(-1));
	}
	Spec(SameButGreater){
		int size = 6;
		int arr[size] = {2, 3, 2, 3, 3};
		Assert::That(autological(arr, size), Equals(3));
	}
	Spec(SameButLesser){
		int size = 6;
		int arr[size] = {4, 3, 4, 3, 3};
		Assert::That(autological(arr, size), Equals(3));
	}
};

int main(){
	return TestRunner::RunAllTests();
}