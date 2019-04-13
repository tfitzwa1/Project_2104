#ifndef PILE_H
#define PILE_H

#include "deck.h"
#include "card.h"
#include "player.h"
#include <vector>


using namespace std;

class Pile : Deck {
	private:
		vector<Deck*> cardPile;
	public: 
		void clear();
		void removeRecent();
		Pile();
		Pile(vector<Deck*> cardPile);
		vector<Deck*> getPile();
		void addToPile(vector<Card> cards, char id, Player* currentPlayer);
		void setPile(vector<Deck*> newPile);
		void addCardToExist(Card card, int index, Player* currentPlayer);
		char getIdent();
		void setIdent(char identity);
		int addPoints(Deck* targetDeck);
		void displayPiles();
		
		
};

#endif