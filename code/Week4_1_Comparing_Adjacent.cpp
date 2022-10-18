#include <iostream>
using namespace std;
int main() {
	double curr = 0., prev = 0.;
	while (cin >> curr) {
		if (curr == prev) {
			cout << "Duplicate input" << endl;
		}
		prev = curr;
	}
	return 0;
}