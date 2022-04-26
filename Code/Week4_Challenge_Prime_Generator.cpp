/*
* PIC10A 1A, Spring 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Prime number generator
*
* Write a program that outputs the n-th prime, where n is given by the user
* 
*/

#include <iostream>

using namespace std;

int main() {
	int count = 0, n = 0, p = 2;
	
	cout << "Please enter a positive integer.\n";
	cin >> n;

	while (count < n) {
		int div = 2;
		bool isPrime = true;
		// can you replace the following while loop by a for loop?
		while (div * div <= p && isPrime) {
			if (p % div == 0) {
				isPrime = false;
			}
			++div;
		}
		if (isPrime) {
			++count;
		}
		++p;
	}
	cout << "The " << n << "th prime number is " << p-1;
	return 0;
}
