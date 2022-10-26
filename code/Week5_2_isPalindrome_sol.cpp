/*
* PIC10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: isPalindrome
*
* Write a function that checks if the input string is a palindrome or not
*	A palindrome is a word, number, phrase, or other sequence of symbols
*	that reads the same backwards as forwards, such as the words madam or racecar.
*
*/


#include <iostream>
#include <string> // don't forget to include this

using namespace std;

// The following is a documentation of a function in a standard (doxygen) style
/**
* Determines if the input string is a palindrome or not.
* 
* This function gets a string as a const ref, and reads characters from the beginning and the end at the same time, and check if they are equal or not.
* Whenever they are different, it immediately returns false.
* If we reach to the middle of the string, it is a palindrome and we return true.
* 
* @param	str		Input string
* @return	true	if str is a palindrome, false otherwise
*/
bool isPalindrome(const string& str) {
	int sz = str.size();
	for (int i = 0; i < sz / 2; ++i) {
		if (str[i] != str[sz - i - 1]) {
			return false;
		}
	}
	return true;
}
int main() {
	cout << "Enter a string: ";
	string str; cin >> str;
	cout << "Palindrome -- " << boolalpha << isPalindrome(str) << endl;
	return 0;
}