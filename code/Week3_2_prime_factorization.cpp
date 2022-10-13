/*
* PIC 10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Prime Factorization
*
* Write a program that performs a prime factorization of a given integer.
* The output should exactly be:
* --------------------------------------
* Enter an integer to factorize: [User Input]
* The prime factorization of [User Input] is:
* [Factorization of the number]
* --------------------------------------
* 
* An example run of the program may look like:
* --------------------------------------
* Enter an integer to factorize: 230
* The prime factorization of 230 is:
* 2 x 5 x 23
* --------------------------------------
* or,
* --------------------------------------
* Enter an integer to factorize: -720
* The prime factorization of 720 is:
* -2 x 2 x 2 x 2 x 3 x 3 x 5
* --------------------------------------
* or,
* --------------------------------------
* Enter an integer to factorize: 2
* The prime factorization of 230 is:
* 2
* --------------------------------------
* 
* If the user input is negative, factorize the absolute value,
* and put a "-" sign in the front.
* 
* If the user input is 0, 1, -1, or a prime number,
* just output the number itself.
*
*/

#include <iostream>
using namespace std;

int main() {
	int num = 0; // number to prime-factorize
	cout << "Enter an integer to factorize: ";
	cin >> num;
	cout << "The prime factorization of " << num << " is: " << endl;
	
	/*
		Do prime factorization here
	*/
	return 0;
}