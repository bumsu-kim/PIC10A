/*
* PIC10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Roman Digits
*
* Write the following functions:
*   1. converts a number between 0 and 9 to a roman numeral,
		with given roman characters for one/five/ten
		e.g. roman_digit(7, 'I', 'V', 'X') == "VII" // 7
		     roman_digit(9, 'I', 'V', 'X') == "IX"  // 9
			 roman_digit(7, 'X', 'L', 'C') == "LXX" // 70
			 roman_digit(9, 'C', 'D', 'M') == "CM"  // 900

	2. converts a number between 0 and 999 to a roman numeral
		e.g.	num2roman(999) == "CMXCIX"
				num2roman(765) == "DCCLXV"
*/

#include <iostream>
#include <string>
using namespace std;

string roman_digit(int n, char one, char five, char ten);
string num2roman(int n);
int main() {
	cout << "Enter an integer between 0 and 1000: ";
	int num;
	cin >> num;
	cout << "Roman numeral for " << num << ": " << num2roman(num) << endl;
	return 0;
}

string roman_digit(int n, char one, char five, char ten) {
	// complete the implementation here
}
string num2roman(int n) {
	// complete the implementation here
}