/*
* PIC10A 1A, Spring 2022, UCLA
* TA: Bumsu Kim
*
* Challenge: Find Matches
*
* The provided program finds the *first* match of the input character from the input string.
* Modify the program so that
*  (1) it finds characters in case-insensitive manner
*		(i.e. 'h' can be found in "Hello, Worlds!", and so can 'E'.)
*
*  (2) it finds *all* matches in the string satisfying (1).
		Print out the position of every match
*
* Constraints:
*  (A) You should not modify the given string while searching
*  (B) The input string may contain white spaces, but no newline character ('\n').
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	char to_find = 'a';

	cout << "Enter a string: \n";
	getline(cin, str); // to get an input string that may contain white spaces
	cout << "You entered: " << str << endl;

	char sentinel = 0;
	while (sentinel != 'q' && sentinel != 'Q') { // while user input is not 'q' nor 'Q'
		cout << "Enter a character to search: ";
		cin >> to_find;
		// make it lower, if it is upper
		char to_find_lower = to_find; // new char to save
		if (to_find_lower >= 'A' && to_find_lower <= 'Z') { // if upper case
			to_find_lower = to_find_lower - 'A' + 'a'; // how does this work?
		}

		int pos = 0, n = str.size();

		// Version 1. typical for loop implementation (easy to read)
		int count = 0;
		for ( /* empty. why? */; pos < n; ++pos) {
			char curr = str[pos]; // we don't want to directly modify str[pos]
			if (curr >= 'A' && curr <= 'Z') { // if upper case
				curr = curr - 'A' + 'a'; // convert
			}
			if (curr == to_find_lower) { // if lower-case-versions are the same
				++count; // count the matches
				// and output
				cout << "pos = " << pos << ", and str[pos] = " << str[pos] << "." << endl;
			}
		}

		//// Version 2. one-liner (harder to read) but looks cool anyway :)
		//pos = -1; // why?
		//while (++pos < n && str[pos] != to_find);
		//// "short-circuit evaluation" or "lazy evaluation" of Boolean values in C++
		//// prevent accessing str[n] (important)

		if(count == 0) { // if not found at all,
			cout << to_find << " is not found in " << str << endl;
		}
		cout << "Do you want to find another character? [Q/q to quit]";
		cin >> sentinel;
	}


	return 0;
}