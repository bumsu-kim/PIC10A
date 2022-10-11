/*
* PIC 10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Number to month names
*
* Write a program that transforms numbers 1, 2, ..., 12 into
* the corresponding month names January, ..., December.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
	string AllMonths =
		"January  "   // 0th~8th    0 - 9      1
		"February "   // 9th~17th   9 - 18     2
		"March    "   // 18th-26th  18 - 27    3
		"April    "   // 27th-35th             4
		"May      "
		"June     "
		"July     "
		"August   "
		"September"
		"October  "
		"November "
		"December ";
	//   123456789
	int len_Mname = 9;
	int number = 1; // from 1 to 12
	cout << "Enter a month number: ";
	cin >> number;
	cout << "Corresponding month name : " 
		<< AllMonths.substr(len_Mname * (number - 1), len_Mname);
	return 0;
}