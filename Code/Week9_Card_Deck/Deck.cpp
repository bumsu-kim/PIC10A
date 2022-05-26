#include "Deck.h"

Deck::Deck() : order(number_of_cards), pos_in_deck(0) {
	std::vector<char> suits{ 'C', 'D', 'H', 'S' };
	std::vector<std::string> ranks{ "A", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	for (char suit : suits) {
		for (const std::string& rank : ranks) {
			cards.push_back(Card{ suit, rank });
		}
	}
	for (int i = 0; i < number_of_cards; ++i) {
		order[i] = i;
	}
}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void Deck::shuffle() {
	for (int i = number_of_cards - 1; i > 0; --i) {
		swap(order[std::rand() % i], order[i]);
	}
	pos_in_deck = 0; // reset pos
}

Card Deck::Deal_Card() {
	return cards[order[pos_in_deck++]];
}