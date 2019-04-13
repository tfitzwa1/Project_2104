#include "player.h"
#include <string>
using namespace std;

//Intialize Player
Player::Player() {
	hand= {};
	score = 0;
}

//Initilize player with a Name
Player::Player(string nam){
	name = nam;
	hand = new Deck();
}

//If player Values are known
Player::Player(Deck* currentHand, int currentScore) {
	hand = currentHand;
	score = currentScore;
}

//How many cards each player draw each new game
void Player::firstHand(Deck *target) {
	for (int i = 0; i < 7; i++) {
		hand->addCard(target->drawCard());
	}
}

//Show Players cards
void Player::showHand() {
	hand->displayStack();
}

//Get player's hand
Deck* Player::getHand(){
	return hand;
}

//Print players name
void Player::printName(){
	cout << name << endl;
}

//Checks players hand
bool Player::checkHand() {
	if (hand->deckSize() == 0) {
		return true;
	}
	else {
		return false;
	}
}

//Subtracts Score at end of round
void Player::subtractCards() {
	int sum = 0;
	for (int i = 0; i < hand->deckSize(); i++) {
			if (hand->getCards().at(i).getNum() <= 10) {
				sum += hand->getCards()[i].getNum();
			}else if(hand->getCards().at(i).getNum() == 1){
				sum += 15;
			}
			else {
				sum += 10;
			}
	}
	score = score - sum;
}