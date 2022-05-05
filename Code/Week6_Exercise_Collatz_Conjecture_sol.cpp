/*
* PIC10A 1A, Spring 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Collatz Conjecture
*
* Collatz conjecture:
*	 - Given a positive integer, perform the following operation each step:
*	* if the number is even, divide it by two (x --> x/2)
*   * if the number is odd, triple it and add one (x --> 3x+1)
*	 - The Collatz conjecture states that you will always reach 1
*	 (and it is still an OPEN PROBLEM !!)
*
* Write a function that computes how many steps it takes
*	to reach 1 starting from a positive integer.
*	- See the slides for the output formats
*
* Note: Do NOT modify the main routine!
*		You only need to write the function.
*/

#include <iostream>

using namespace std;

///**
//* Complete this function:
//* 1. Set a proper "Return_Type"
//* 2. Set a proper set of "Input_Parameters"
//* 3. Complete the function definition 
//*/
///*Return_Type*/ Collatz(/*Input_Parameters*/) {
//	/* Function_Definition */
//	// output format:
//	cout << "Step " << /*step_counter*/ << ": " << /*current_number*/ << endl;
//	cout << "Starting from " << /* ? */ << ", it took " << /* ? */ << " Steps." << endl;
//}



/** SOLUTION:
* Complete this function:
* 1. Set a proper "Return_Type"
* 2. Set a proper set of "Input_Parameters"
* 3. Complete the function definition
*/
void Collatz(int n) {
	int n_init = n;
	int cnt = 0;
	while (n > 1) {
		++cnt;
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n = 3 * n + 1;
		}
		cout << "Step " << cnt << ": " << n << endl;
	}
	cout << "Starting from " << n_init << ", it took " << cnt << " Steps." << endl;
}

int main() {
	// Do NOT modify the main routine!
	cout << "Enter a positive integer: ";
	int n;
	cin >> n;
	cout << "Starting from " << n << endl;
	Collatz(n);

	return 0;
}