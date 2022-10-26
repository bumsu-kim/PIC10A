/*
* PIC10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Reverse
*
* Write a function that reverses an input string
*
*/

#include <iostream>
#include <string> // don't forget to include this

using namespace std;

/**
* swaps two characters
* 
* @param two characters of type ref_to_char
*/
// Declaration of swap

// The following is a documentation of a function in a standard (doxygen) style
/**
* Reverses the input string
*
* @param	str		Input string to be reversed
*/
// Declaration of reverse

int main() {
	cout << "Enter a string: ";
	string str; cin >> str;
	reverse(str);
	cout << "Reversed: " << str << endl;
	return 0;
}