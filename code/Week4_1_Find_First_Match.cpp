#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main() {
	string str = "Hello everyone, my name is Bumsu Kim.";
	bool found = false;
	int pos = 0;
	char to_find = 'x';
	string to_find_str = "ever";
	int sz_tofind = to_find_str.size();

	while (not found && pos < str.length()) {
		if (str[pos] == to_find) {
			found = true;
		}
		else {
			++pos;
		}
	}
	pos = 0;
	while (pos < str.length() && str[pos] != to_find && ++pos) {}
	pos = 0;
	while (pos + sz_tofind <= str.length()
		&& str.substr(pos, sz_tofind) != to_find_str
		&& ++pos) {}
	if (pos == str.length()) {
		cout << "Not found." << endl;
	}
	else {
		cout << "Found at position = " << pos << endl;
	}
	return 0;
}