/*
* PIC10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Permutations
*
* Write a function that finds and prints all the permutations of characters in the input string (with distinct characters)
*  The order of permutations doesn't matter.
*
* e.g. If the input string was "abc", the function prints out
* ------------
* abc
* acb
* bac
* bca
* cab
* cba
* ------------
* 
* 
*/


#include <iostream>
#include <string>

using namespace std;

/**
* A recursive function that finds and prints all permutations of a given string
* 
* @param curr: temporary sequence of characters (incomplete permutation). When it is filled, it is printed out
* @param str: given set of distinct characters (const ref)
* @param marks: marks of used/unused characters. 'o' if available, and 'x' otherwise.
*/
void permute_recursively(string& curr, const string& str, string& marks) {
	if (curr.size() == str.size()) { // curr is a complete permutation
		cout << curr << endl;
		return;
	}
	else {
		for (int i = 0; i < str.size(); ++i) { // for each character in str
			if (marks[i] == 'o') { // if this character is available
				curr += str[i];; // add this character to the current permutation
				marks[i] = 'x'; // mark this character already used
				permute_recursively(curr, str, marks); // recursive call!
				curr.pop_back(); // remove this character from the current permutation
				// the above can also be
				// curr.erase(curr.length() - 1);
				marks[i] = 'o'; // make this character available again
			}
		}
	}
}

/**
* Prints out all permutations of a given string (a wrapper for a recursive function)
* 
* @param str: a const ref to a string to permute
*/
void print_permutations(const string& str) {
	string str_p; // temporary variable needed for permute()
	string marks(str.length(), 'o'); // "ooo...oo", length = str.legnth()
	permute_recursively(str_p, str, marks);
}
int main() {
	string str; // distinct characters to permute
	cout << "Enter a string with distinct characters: ";
	getline(cin, str);
	print_permutations(str);
	return 0;
}