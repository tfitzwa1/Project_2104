#ifndef COMPUTER_H
#define COMPUTER_H
#include "player.h"
class Table;

class Computer : public Player{
	public:	
		Table* gameTab;
		Computer();
		Computer(Table* table);
		bool checkRummy();
		void takeTurn();				
		bool checkSameNum(vector<Card> cards);
		int checkCombinations();
		int drawCard();
		bool makePile(Deck* checkDeck, bool place);
		void discardLowestCard();
		void mustPlace(Card hasToPlace);
		void mustPlace(Card place1, Card p2);
		int checkDiscard();
		vector<int>* checkToDiscard();
		bool find(vector<int>* target, int value);
		void displayComputer();
};

#endif