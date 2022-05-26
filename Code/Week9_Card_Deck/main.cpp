#include "Deck.h"
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(nullptr));

	Deck myDeck;
	const int N = 52; // number of cards in the deck

	for (int i = 0; i < N; ++i) {
		Card c = myDeck.Deal_Card();
		c.show_card();
	}

	cout << "\nShuffle the deck...\n" << endl;
	myDeck.shuffle();
	
	for (int i = 0; i < N; ++i) {
		Card c = myDeck.Deal_Card();
		c.show_card();
	}


	// Play a poker game
	cout << "\nLet's play a poker game\n" << endl;

	cout << "\nRe-Shuffle the deck...\n" << endl;
	myDeck.shuffle();
	int num_players = 3;
	vector<vector<Card>> Players(num_players);
	
	for (int card_count_in_hand = 0; card_count_in_hand < 2; ++card_count_in_hand) {
		// deal cards to each player
		for (auto& player : Players) {
			// player is a vector of Cards
			player.push_back(myDeck.Deal_Card());
		}
	}

	int player_count = 0;
	for (auto& player : Players) {
		cout << "Player " << player_count++ << "'s hands before flop: "
			<< player[0].card_simple_string() << " and " << player[1].card_simple_string() << endl;
	}

	// Shared cards
	cout << "\nDeal Community cards:" << endl;
	vector<Card> shared(5);
	for (Card& c : shared) {
		c = myDeck.Deal_Card();
		cout << c.card_string() << " is dealt." << endl;
		for (auto& player : Players) {
			player.push_back(c); // add common cards
		}
	}
	cout << endl;
	player_count = 0;
	for (auto& player : Players) {
		cout << "Player " << player_count++ << "'s hands at the end of the game: ";
		cout << player[0].card_simple_string() << ", " << player[1].card_simple_string() << " in the pocket\n\t and [";
		for (int i = 2; i < player.size(); ++i){
			cout << player[i].card_simple_string();
			if (i != player.size() - 1) {
				cout << ", ";
			}
			else {
				cout << "] as community cards" << endl;
			}
		}
	}



	return 0;
}