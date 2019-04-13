#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

using namespace std;

class Card {
	private:
		
	public:
		Card();
		Card(int number, string suit);
		int getNum();
		string getSuit();
		void displayCard();
		bool operator==(const Card c2);
		bool operator>(const Card c2);
		bool operator>=(const Card c2);
		bool operator<(const Card c2);
		bool operator<=(const Card c2);
		int number;
		string suit;
};

#endif