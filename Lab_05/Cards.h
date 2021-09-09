#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <string>
#include <random>
#include <algorithm>
#include <time.h>
#include <stdlib.h>

struct Card {
	std::string suit;
	std::string index;

	Card(){
		suit = "";
		index = "";
	}

	Card(std::string index, std::string suit){
		this->index = index;
		this->suit = suit;
	}
};

struct Deck {
	Card cards[52];

	Deck(){
		cards[0] = Card("A", "Clubs");
		cards[1] = Card("2", "Clubs");
		cards[2] = Card("3", "Clubs");
		cards[3] = Card("4", "Clubs");
		cards[4] = Card("5", "Clubs");
		cards[5] = Card("6", "Clubs");
		cards[6] = Card("7", "Clubs");
		cards[7] = Card("8", "Clubs");
		cards[8] = Card("9", "Clubs");
		cards[9] = Card("10", "Clubs");
		cards[10] = Card("J", "Clubs");
		cards[11] = Card("Q", "Clubs");
		cards[12] = Card("K", "Clubs");
		cards[13] = Card("A", "Diamonds");
		cards[14] = Card("2", "Diamonds");
		cards[15] = Card("3", "Diamonds");
		cards[16] = Card("4", "Diamonds");
		cards[17] = Card("5", "Diamonds");
		cards[18] = Card("6", "Diamonds");
		cards[19] = Card("7", "Diamonds");
		cards[20] = Card("8", "Diamonds");
		cards[21] = Card("9", "Diamonds");
		cards[22] = Card("10", "Diamonds");
		cards[23] = Card("J", "Diamonds");
		cards[24] = Card("Q", "Diamonds");
		cards[25] = Card("K", "Diamonds");
		cards[26] = Card("A", "Hearts");
		cards[27] = Card("2", "Hearts");
		cards[28] = Card("3", "Hearts");
		cards[29] = Card("4", "Hearts");
		cards[30] = Card("5", "Hearts");
		cards[31] = Card("6", "Hearts");
		cards[32] = Card("7", "Hearts");
		cards[33] = Card("8", "Hearts");
		cards[34] = Card("9", "Hearts");
		cards[35] = Card("10", "Hearts");
		cards[36] = Card("J", "Hearts");
		cards[37] = Card("Q", "Hearts");
		cards[38] = Card("K", "Hearts");
		cards[39] = Card("A", "Spades");
		cards[40] = Card("2", "Spades");
		cards[41] = Card("3", "Spades");
		cards[42] = Card("4", "Spades");
		cards[43] = Card("5", "Spades");
		cards[44] = Card("6", "Spades");
		cards[45] = Card("7", "Spades");
		cards[46] = Card("8", "Spades");
		cards[47] = Card("9", "Spades");
		cards[48] = Card("10", "Spades");
		cards[49] = Card("J", "Spades");
		cards[50] = Card("Q", "Spades");
		cards[51] = Card("K", "Spades");
	}

	void revealTop(int n){
		if(n <= 52 && n >= 1){
			for(int i = 0; i < n; i++){
				std::cout << cards[i].index << " " << cards[i].suit << std::endl;
			}
		}
		else{
			std::cout << "Not a valid input, please do from 1-52" << std::endl;
		}
	}

	void revealTop(){
		std::cout << cards[0].index << " " << cards[0].suit << std::endl;
	}

	void shuffle(){
		std::random_device rd;
        std::mt19937 rng(rd());
        std::uniform_int_distribution<int> uni(0,51);
        int ranNum = uni(rng);

		for(int i = 0; i < ranNum; i++){
			std::random_shuffle(&cards[0], &cards[51]);
		}
	}

};

#endif