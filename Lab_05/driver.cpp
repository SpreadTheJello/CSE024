#include <iostream>
#include "BagOfMarbles.h"
#include "Cards.h"

using namespace std;

int main(){

	Deck myCards;
	const int count = 15;
	int marbles[count] = {0,0,0,1,1,2,2,2,3,4,4,4,4,4,4};
	BagOfMarbles myBag = BagOfMarbles(marbles, count);
	
	cout << "This is a pick from the Marble bag: " << endl;
	cout << myBag.pick() << endl;
	cout << "\n";

	cout << "This is the first card: " << endl;
	myCards.revealTop();
	cout << "\n";

	cout << "This is the top 5 cards: " << endl;
	myCards.revealTop(5);
	cout << "\n";

	cout << "This is the top 5 cards SHUFFLED: " << endl;
	myCards.shuffle();
	myCards.revealTop(5);

	return 0;
}