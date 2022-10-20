/*
* PIC10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Random Walk Simulator
*
* Write a program that simulates 1-D random walk:
*  - An object can only move forward or backward at each step
*  - When the object hits the wall (upper/lower bounds), it stops walking
*
* FYI: The time that it hits the wall is called the "stopping time"
*    and it is an important object in mathematical finance.
*
*/

#include <iostream>
// include some libraries here

using namespace std;

/** This is a helper function. You can ignore this part */
inline void print_current_state(int upper, int lower, int pos);

int main() {
	// don't forget to set the seed

	int upper = 10, lower = -10, pos = 0, stopping_time = 0;
	cout << "Enter the upper bound: ";
	cin >> upper;
	cout << "Enter the lower bound: ";
	cin >> lower;

	// print the initial state
	print_current_state(upper, lower, pos);

	// loop starts here
		// simulate the random walk here
		
	// loop ends here


	// final output
	cout << "Stopping time: " << stopping_time << endl;

	return 0;
}


// Ignore this helper function implementation
inline void print_current_state(int upper, int lower, int pos) {
	constexpr char boundary = '|', inside = '-', robot = 'o';
	int curr = lower; // current position of the character to print out (not the robot)
	cout << ((pos == lower) ? robot : boundary); // on the boundary
	while (++curr < upper) { // inside 
		cout << ((pos == curr) ? robot : inside);
	}
	cout << ((pos == upper) ? robot : boundary); // on the boundary
	cout << endl;
}