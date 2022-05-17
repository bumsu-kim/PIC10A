#include <iostream>
#include <vector>
#include <string>

using namespace std;
/*
* 1. Write a function that prints all elements of a vector using a range-based for loop
*/
void print(vector<string> v) {
	for (auto s : v) {
		cout << s << ", ";
	}
	cout << endl;
}
/*
* 2. There are efficiency issues on the above function.
* How can you imporve the efficiency?
*/


/*
* 3. Write a function that accpets a string [str] of lower-case alphabet letters
*    and returns a vector of bool [v], where
*	    v[i] == true if and only if i-th alphabet appears in [str]
*				(of course, counting from 0-th == 'a')
* 
*	 e.g. str == "hello":
*		  v[4], v[7], v[11], v[14]   are true,
*		  but all other entries of v are false
* 
*/

vector<bool> indicator(const string& str) {
	const int Num_Possible_Chars = 26; // avoid magic numbers
	vector<bool> ind(Num_Possible_Chars);
	for (char c : str) { // for each character in str
		// c is [c-'a']-th alphabet letter... why?
		ind[c - 'a'] = true;
	}
	return ind;
}

/*
* 4. Given a word [str] of lower-case alphabet letters,
*	 Construct a new word [wo_rep] having the same
*	 alphabet letters with [str], but without repetition.
*    You should preserve the order of the letters in [str]
* 
*    e.g.
*     str == "hello"       --> return "helo"
*     str == "homework"    --> return "homewrk"
*     str == "programming" --> return "progamin"
*/

string remove_rep(const string& str) {
	vector<bool> ind = indicator(str);
	string answer;
	for (char c : str) {
		if (ind[c - 'a']) {
			answer += c;
			ind[c - 'a'] = false; // why?
		}
	}
	return answer;
}

int main() {
	vector<string> words = {
		"hello",
		"how",
		"are",
		"you",
		"homework",
		"programming"
	};

	print(words);
	
	for (auto& s : words) { // why &  here?
		s = remove_rep(s);
	}

	print(words);

	

	return 0;
}