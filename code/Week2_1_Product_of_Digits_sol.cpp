/*
* PIC 10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Product of Digits
* 
* Write a program to input a positive integer from user
* and calculate the product of digits
* Your code should work for all integers ranging from 100 to 999.
* 
* Input and output should be exactly:
* --------------------
* Input an integer (100 - 999):
* [User enters an integer from 100 to 999]
* The product of digits is X
* --------------------
* 
* For example,
* --------------------
* Input an integer (100 - 999):
* [User enters 132]
* The product of digits is 6
* --------------------
*/
#include <iostream>
using namespace std;

int main() {
	int num = 0; // initialize
	cout << "Input an integer (100 - 999):" << endl;
	cin >> num;
	int ones = num % 10,		// %10 gives you the last digit
		tens = (num / 10) % 10, // /10 discards the last digit
		hundreds = num / 100;   // /100 discards the last two digits
	cout << "The product of digits is "
		<< ones * tens * hundreds << endl;
	return 0;
}