#ifndef __CARD__
#define __CARD__

#include <string>

class Card {
	char suit; // 'C' (Clubs), 'D' (Diamonds), 'H' (Hearts), 'S' (Spades)
	std::string rank; // 'A', '2', ..., '10', 'J', 'Q', 'K'
public:
	/**
	* Default Constructor: accpets two params suit and rank 
	*/
	Card(char _suit = 'C', std::string _rank = "A");

	/**
	* card_string
	* @return the card description as a string
	*/
	std::string card_string() const;

	/**
	* card_simple_string
	* @return the simpler (shorter) description of the card,
	*		such as "A (S)" for "Ace of Spades", "9 (H)" for "9 of Hearts"
	*/
	std::string card_simple_string() const;

	/**
	* show_card: just cout the card string
	*/
	void show_card() const;

};


#endif
