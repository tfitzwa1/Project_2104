#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>
#include "deck.h"
#include "card.h"
#include <string>

using namespace std;

class Player {
	public:
		Deck* hand;
		string name;
		int score;
		Player();
		Player(string name);
		Player(Deck* hand, int score);
		Deck* getHand();
		void knock();
		void printName();
		void firstHand(Deck *deck);
		void showHand();
		bool checkHand();
		void subtractCards();	
};

#endif