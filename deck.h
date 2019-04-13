#ifndef DECK_H
#define DECK_H

#include <vector>
#include "card.h"

using namespace std;

class Deck {
	private:
		
	public:
		char identity;
		void popCard();
		void init();
		void clear();
		vector<Card> cardsInDeck;
		Deck();
		void inBegin(Card c1);
		Deck(vector<Card> cardsInDeck);
		void shuffleDeck();
		void newDeck();
		Card drawCard();
		void addCard(Card addedCard);
		void displayCards();
		void removeCard(Card c1);
		void displayStack();
		int deckSize();
		void removeIndex(int index);
		vector<Card> getCards();

};

#endif