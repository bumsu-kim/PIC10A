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
* The prime factorization of -720 is:
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
	int num = 0;
	cout << "Enter an integer to factorize: ";
	cin >> num;
	cout << "The prime factorization of " << num << " is: " << endl;
	if (num < 0) { // if negative, put a - sign first
		cout << "-";
		num *= -1; // and flip the sign
	}
	if (num == 1 || num == 0) { // edge cases ( +1, -1 and 0)
		cout << num << endl; // unit
	}
	else { // all other cases -- (positive integer greater than 1)
		int factor = 2; // begin with the smallest prime
		while (num > 1) {
			if (num % factor == 0) { // if factor divides num
				num /= factor; // divide by factor
				cout << factor; // and print it out
				if (num == 1) { // if num has no more prime factors
					cout << endl; // end printing. will exit the loop (because num == 1)
				}
				else { // num has more prime factors, so print an "x" sign
					cout << " x ";
				}
			}
			else { // factor does not divide num. Find another prime factor
				++factor;
			}
		}
	}
	/*
	* Let me know if you have more questions on this exercise
	* Please use the following google form:
	* https://forms.gle/ydWc3FL6jc3EDWb2A
	* to give a feedback! Thanks!
	*/

	return 0;
}