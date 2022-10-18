#include <iostream>
using namespace std;
int main() {
	bool valid = false;
	double input = 0.; // initialize!
	int cnt = 0;
	while (not valid) {
		cout << "Please enter a number between 0 and 100: ";
		cin >> input;
		if (0. < input && input < 100.) {
			valid = true;
		} else {
			cout << "Invalid input. (" << ++cnt << ")" << endl;
		}
		cin.clear();
		cin.ignore();
	}
	cout << "You validly entered: " << input << endl;

	return 0;
}