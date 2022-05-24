#include "Week9_Wordle.h"
#include <ctime> // time() for srand()

using namespace std;

int main() {
	srand(time(nullptr));
	WordList WL;
	string answer = WL.pick_random_word();
	Wordle Game(answer); // generate a word from WL, and construct Game with that word
	
	cout << answer << endl; // for debugging

	string guess;
	int count = 0;
	do {
		count++;
		cout << "[" << count << "] Enter a 5-letter word : \t";
		cin >> guess;
		cout << "\t\t\t\t" << Game.giveHint(guess) << endl << endl;
	} while (!Game.isCorrect(guess));
	cout << "Congratulations! You won the game in " << count << " rounds! " << endl;
	return 0;
}