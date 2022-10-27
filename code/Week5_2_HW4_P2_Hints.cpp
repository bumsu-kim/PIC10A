#include <iostream>
#include <cstdlib> // rand() and srand()
#include <ctime>   // time()
#include <iomanip> // setw() and std::left

using namespace std;

/**
* Simulates a random walk
*/
void randomWalk();

/**
* moves towards a given direction
* 
* @param xpos, ypos : the current position (why reference?)
* @param direction  : direction to move (0, 1, 2, or 3)
*/
void move(int& xpos, int& ypos, int direction);

/**
* Checks if the random walk is over
* 
* There are threepossibilities: it hit the boundary, went back to the Origin, or NONE of them (i.e. random walk is not over)
* According to the current state, it returns the values either 0, 1, or 2
* 
* @param xpos, ypos : the current position (why non-reference?)
* @param xlb, xub, ylb, yub : upper/lower bounds for x- and y- direction
* @return 0 if not over, 1 if hits the boundary, 2 if back to origin
*/
int isOver(int xpos, int ypos, int xlb, int xub, int ylb, int yub);

int main() {
	randomWalk();
	return 0;
}

void randomWalk() {
	// set the upper/lower bounds for x- and y- directions
	// initialize the position
	int currentState = 0; // NOTE: 0 is not over. 1 or 2 means it's over
	do {
		// find a random direction (0, 1, 2, or 3)
		// call the move function here
		//		move( ... )
		// and find the current state
		//		currentState = isOver( ... )
	} while (currentState == /* which value? */);

	// think about the reason why we used the "Do-while" instead of "while"

	// Now, depending on the current state, output the message
	if (currentState == /* ? */) {
		cout << "Back to ... " << endl;
	}
	else {
		cout << "Hit the ... " << endl;
	}
}