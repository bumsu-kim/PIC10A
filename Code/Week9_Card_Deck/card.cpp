#include "Card.h"
#include <iostream>

Card::Card(char _suit, std::string _rank) : suit(_suit), rank(_rank) {}
std::string Card::card_string() const {
	std::string s;
	std::string rank_string = rank;
	if (rank == "A") {
		rank_string = "Ace";
	}
	else if (rank == "J") {
		rank_string = "Jack";
	}
	else if (rank == "Q") {
		rank_string = "Queen";
	}
	else if (rank == "K") {
		rank_string = "King";
	}

	s += rank_string;
	s += " of ";
	if (suit == 'C') {
		s += "Clubs";
	}
	else if (suit == 'D') {
		s += "Diamonds";
	}
	else if (suit == 'H') {
		s += "Hearts";
	}
	else if (suit == 'S') {
		s += "Spades";
	}
	return s;
}

std::string Card::card_simple_string() const {
	return rank + " (" + suit + ")";
}
void Card::show_card() const {
	std::cout << card_string() << std::endl;
}
