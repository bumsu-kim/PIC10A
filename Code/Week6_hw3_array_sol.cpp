#include <iostream>
#include <string>

using namespace std;

/**
* Checks if the array [arr] has a member [n] or not
* @param arr	array to check
* @param sz		size of the array
* @param n		a data whose membership being checked
* @return true	if and only if arr has n
*/
bool has_member(int arr[], int sz, int n) {
	for (int i = 0; i < sz; ++i) {
		if (arr[i] == n) {
			return true;
		}
	}
	return false;
}

int main() {
	cout << "Enter integers (Q to quit): ";
	constexpr size_t MAX_SIZE = 1000; // "constexpr" variables can be used for an array size (otherwise it can't)
	int n = 0, // the user input
		arr[MAX_SIZE] = {}, // array with capacity MAX_SIZE, all initialized with 0's
		cnt = 0; // counts the number of non-duplicate data

	while (cin >> n && cnt<MAX_SIZE) {
		if (!has_member(arr, cnt, n)) { // if arr doesn't have n, (cnt is the size of the array)
			arr[cnt++] = n; // put n in arr and increment cnt 
			cout << "cnt = " << cnt << ", added " << n << endl;
		}
		else { // duplicate found
			cout << "cnt = " << cnt << ", " << n << " not added" << endl;
		}
	}
	int arr_size = cnt; // cnt is the size of the array

	// list all the numbers in the array
	cout << "Listing all the entries in the array of size " << arr_size << ":\n";
	for (int i = 0; i < arr_size; ++i) {
		cout << arr[i] << ' ';
	}cout << endl;

	// find the second smallest
	cout << "Second smallest: ";

	if (arr_size == 1) { // if only one unique number
		cout << arr[0] << endl;
	}
	else { // more than one distinct numbers
		int smallest = arr[0], // use the first element of the array
			second_smallest = INT_MAX; // use a reasonably large number so that any input is *smaller* than this

		for (int i = 1; i < arr_size; ++i) { // for each number (except the very first (0-th) one)
			if (arr[i] < smallest) { // new smallest
				second_smallest = smallest;
				smallest = arr[i];
			}
			else if (arr[i] < second_smallest) { // new 2nd smallest
				second_smallest = arr[i];
			}
		}
		cout << second_smallest << endl;
	}
	return 0;
}