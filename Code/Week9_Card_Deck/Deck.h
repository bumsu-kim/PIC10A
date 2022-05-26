#ifndef __DECK__
#define __DECK__

#include <vector>
#include <iostream>
#include <cstdlib>
#include "Card.h"

class Deck {
	const int number_of_cards = 52; // 4 suits * 13 ranks for each
	std::vector<Card> cards; // stores all cards
	std::vector<int> order; // order of the cards: cards will be accessed by cards[order[i]]
	int pos_in_deck; // when a card is dealt, move this forward
public:
	/**
	* Default Constructor
	* Generate all 52 Cards and save them in cards
	* Also sets order[i] = i (default, unshuffled order)
	*/
	Deck();

	/**
	* shuffles the Deck, effectively by shuffling the "order" vector
	*/
	void shuffle();

	/**
	* Deals a card, and move "pos_in_deck" forward
	* @return Card to be dealt
	*/
	Card Deal_Card();
};

void swap(int& a, int& b); // helper function for shuffle
#endif // !__DECK__
