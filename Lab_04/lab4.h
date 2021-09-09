#ifndef LAB_4_H
#define LAB_4_H

#include <random>
#include <cmath>
#include <cstdlib>
#include <ctime>

int find_max(int arr[], int size){
	int max = arr[0];
	for (int i = 1; i < size; i++){
		if (arr[i] >= max){
			max = arr[i];
		}
	}
	return max;
}

int find_max_pos(int arr[], int size){
	int pos = 0;
	int max = arr[0];
	for (int i = 1; i < size; i++){
		if (arr[i] >= max){
			max = arr[i];
			pos = i;
		}
	}
	return pos;
}

int search(int key, int arr[], int size){
	for (int i = 0; i < size; i++){
		if (arr[i] == key){
			return i;
		}
	}
	return -1;
}

void running_sum(int arr[], int size){
	for (int i = 1; i < size; i++){
		arr[i] = arr[i] + arr[i-1];
	}
}

float trimmed_average(float values[], int size){
	float max = values[0];
	float min = values[0];
	float total = 0;
	for (int i = 1; i < size; i++){
		if (values[i] >= max){
			max = values[i];
		}
	}
	for (int i = 1; i < size; i++){
		if (values[i] <= min){
			min = values[i];
		}
	}
	for (int i = 0; i < size; i++){
		total += values[i];
	}
	float excludeTotal = total - max - min;
	float average = excludeTotal / (size - 2);
	return average;
}

void random_fill(int arr[], int size, int min, int max){
	int x = 1 + (max - min);
	srand (time(0));
	for (int i = 0; i < size; i++){
		arr[i] = (rand() % x) + min;
	}
}

int sum_unique(int arr[], int size){	
	int sum = 0;
	for (int i = 0; i < size; i++){
		int j;
		for (j = 0; j < i; j++){
			if(arr[i] == arr[j]){
				break;
			}
		}
		if(i == j){
			sum += arr[i];
		}
	}
	return sum;
}

int autological(int arr[], int size){
	int num = -1;
	for (int i = 0; i < size; i++){
		int count = 0;
		if (arr[i] != num){
			for(int j = 0; j < size; j++){
				if (arr[i] == arr[j]){
					count++;
				}
			}
		}
		if (count == arr[i]){
			num = arr[i];
		}
	}
	return num;
}

#endif