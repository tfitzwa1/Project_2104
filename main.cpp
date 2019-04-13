#include "card.h"
#include <string>
#include <iostream>
#include "card.cpp"

using namespace std;
int main(){
    int number = 8;

string suit = "Hearts";
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
