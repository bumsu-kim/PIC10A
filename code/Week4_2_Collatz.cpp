/*
* PIC10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Collatz Conjecture
*
* Write a function that computes how many steps it takes 
*    to reach 1 from a positive integer (given by User)
* 
* The input and output should be:
* ---------------------------------
* Starting from X
* Step 1: X
* Step 2: X
* ...
* Step X: X
* Starting from X, it took X steps.
* ---------------------------------
*
* FYI: This is a famous open problem in math.
*      As of 2020, the conjecture has been checked up to 2^68 ~= 2.95 * 10^20.
*      Terry Tao, a professor in UCLA math dept, made a great theoretical improvement
*      in 2019, and Quanta Magazine wrote that he "came away with one of the most
*      significant results on the Collatz conjecture in decades."
*/

#include <iostream>
using namespace std;

void collatz(int n);

int main() {
	cout << "Starting from ";
	int num;
	cin >> num;
	collatz(num);
	return 0;
}

void collatz(int n) {
	/*
	Complete the function definition here
	*/
}