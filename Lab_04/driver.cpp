#include <iostream>
#include "lab4.h"

using namespace std;

int main(){
	// Find the maximum
	int arr[] = {10, 5, 3, 102, 55, 103};
	int size = 6;
	int result = find_max(arr, size);
	cout << result << endl; // return 103

	// Find the maximum position
	int arr2[] = {10, 5, 3, 102, 55, 103};
	size = 6;
	result = find_max_pos(arr2, size);
	cout << result << endl; // return 5

	// Linear seach in the array
	int arr3[] = {10, 5, 3, 102, 55, 103};
	int key = 102;
	size = 6;
	result = search(key, arr3, size);
	cout << result << endl; // return 3

	// Running sum of arrays
	int arr4[] = {1, 2, 3, 4};
	size = 4;
	running_sum(arr4, size);
	for(int i = 0; i < size; i++){
		cout << arr4[i] << ", "; // return 1, 3, 6, 10
	}
	cout << '\n';

	// Average excluding max and min
	float arr5[] = {7.4, 2.6, 3.9, 4.4, 5.2, 6.6};
	size = 6;
	float result2 = trimmed_average(arr5, size);
	cout << result2 << endl; // return 5.025

	// Random Integer Generation
	int arr6[] = {1, 2, 3, 4};
	size = 4;
	int min = 5;
	int max = 10;
	random_fill(arr6, size, min, max);
	for(int i = 0; i < size; i++){
		cout << arr6[i] << ", "; // return random array from 5 to 10, not equal to {1, 2, 3, 4}
	}
	cout << '\n';

	// Sum up the unique elements
	int arr7[] = {1, 2, 3, 3};
	size = 4;
	int result3 = sum_unique(arr7, size);
	cout << result3 << endl; // return 6

	// Autological Elements
	int arr8[] = {7, 9, 1, 3};
	size = 4;
	int result4 = autological(arr7, size);
	cout << result4 << endl; // return 1
	
	return 0;
}