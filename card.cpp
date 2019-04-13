#include "card.h"
#include <string>
#include <iostream>

using namespace std;

// symbol char values  ASCII identifiers for the symbols corresponding to the name
const char heart[] = "\xe2\x99\xa5";
const char clubs[] = "\xe2\x99\xa3";
const char diamond[] = "\xe2\x99\xa6";
const char spade[] = "\xe2\x99\xa0";

//Initializes First Card
Card::Card() {
	number = 1;
	suit = "Spades";
}



//Sets Card equal to known card value
Card::Card(int cardNumber, string cardSuit) {
	number = cardNumber;
	suit = cardSuit;
}

//Display Card
void Card::displayCard() {
	//Display outline
    for (int i = 0; i < 9; i++) {
        cout << "|";
			if (number == 1) { cout << 'A';}
			else if (number == 10) {cout << '1' << '0';}					
			else if (number == 11) {cout << 'J';}
			else if (number == 12) {cout << 'Q';}
			else if (number == 13) {cout << 'K';}
            else cout << number;
	
		if(suit == "Spades") {cout << spade;}
        else if(suit == "Hearts") {cout << heart;}
        else if(suit == "Clubs") {cout << clubs;}
        else if(suit == "Diamonds") {cout << diamond;}
        cout << "| ";
    }
		//Seperate Cards	
}


//Get Number
int Card::getNum() {
	return number;
}

//Get Suit
string Card::getSuit() {
	return suit;
}

// used to sort (in c++ algorithim library) a vector of cards

//Overloads Equals Operator
bool Card::operator==(const Card c2){
	if(c2.number == number){
		if(suit == c2.suit){
			return true;
		}
	}
	return false;
}

//Overloads Less than Operator
bool Card::operator<(const Card c2){
	if(number < c2.number){
		return true;
	}
	return false;
}

//Overloads Greater than Operator
bool Card::operator>(const Card c2){
	if(number > c2.number){
		return true;
	}
	return false;
}

//Overloads Less than or Equal to Operator
bool Card::operator<=(const Card c2){
	if(number <= c2.number){
		return true;
	}
	return false;
}

//Overloads Greater than or Equal to Operator
bool Card::operator>=(const Card c2){
	if(number >= c2.number){
		return true;
	}
	return false;
}