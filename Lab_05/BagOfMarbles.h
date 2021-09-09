#ifndef MARBLES_H
#define MARBLES_H

#include <iostream>
#include <random>
#include <random>

struct BagOfMarbles{
	int colors[5];
	int count;

	BagOfMarbles(int initialArr[], int size){
		for(int i = 0; i < 5; i++){
			colors[i] = 0;
		}

		count = size;
		for(int i = 0; i < size; i++){
			colors[initialArr[i]]++;
		}
	}

	int pick(){
		if (count <= 0){
			std::cout << "You can't pick from an empty marble bag." << std::endl;
			return -1;
		}

		std::random_device rd;
		std::mt19937 rng(rd());
		std::uniform_int_distribution<> uni(1,count);
		int ranNum = uni(rng);

		int marble = 0;
		int range = colors[0];
		
		while(ranNum > range){
			marble++;
			range += colors[marble];
		}

		colors[marble]--;
		count--;
		return marble;
	}

};

#endif