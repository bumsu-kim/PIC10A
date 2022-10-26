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
// 1. do we need another library to include?

using namespace std;

// 2. write the signiture of the function here
// What should be the return type, and the type of input parameter(s)?

/*Return_type*/ isPalindrome( /* parameter(s) type and name */)


int main() {
	cout << "Enter a string: ";
	string str; cin >> str;
	cout << "Palindrome -- " << boolalpha << isPalindrome(str) << endl;
	return 0;
}

// 3. Define the function here
