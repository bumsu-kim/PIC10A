#include <iostream>

using namespace std;

/** 1. Read Data
* @param arr array to save data
* @param capacity max size of the array
* @return sz the size of the array
*/
int read_data(int arr[], int capacity) {
	int cnt = 0, n = 0;
	while (cin >> n && cnt < capacity) {
		arr[cnt++] = n;
	}
	cin.clear();
	cin.ignore();
	return cnt;
}

/** 2. Print Subarray [beg, end)
* @param arr array to print
* @param beg beginning position (inclusive)
* @param end position (exclusive)
*/
void print(int arr[], int beg, int end) {
	for (int i = beg; i < end; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

/** Find max in given range [beg, end)
* @param arr array to print
* @param beg beginning position (inclusive)
* @param end position (exclusive)
* @return max_idx the index of the maximum element in the range
*/
int find_max_idx(int arr[], int beg, int end) {
	int max_idx = beg;
	for (int idx_to_find_max = beg + 1; idx_to_find_max < end; ++idx_to_find_max) {
		if (arr[idx_to_find_max] > arr[max_idx]) {
			max_idx = idx_to_find_max;
		}
	}
	cout << "Max index in [" << beg << "-th, " << end << "-th): "
		<< arr[max_idx] << " at idx = " << max_idx << endl;
	return max_idx;
}

/** Swap two ints
* @param a, b variables (of type reference to int) to swap
*/
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

/** Sort array in descending order
* @param arr array to sort
* @param sz size of the array
*/
void sort(int arr[], int sz) {
	for (int idx = 0; idx < sz; ++idx) {
		int max_idx = find_max_idx(arr, idx + 1, sz);
		swap(arr[idx], arr[max_idx]);
	}
}
int main() {
	constexpr int MAX_SIZE = 100;
	// [const int] is different from [constexpr int]!
	int arr[MAX_SIZE] = {}; // initializating is a good coding practice

	// Replace the following code snippet into a function call


	// 1. Read Data
	cout << "Enter some integers, and q to finish: ";
	int size_of_array = read_data(arr, MAX_SIZE);

	// 2. Print the subarray: [idx_begin, idx_end)
	int idx_begin = 2, idx_end = size_of_array; 
	cout << "Printing the subarray in [" << idx_begin << "-th, " << idx_end << "-th): ";
	print(arr, idx_begin, idx_end);

	// 3. Find maximum in the given range [idx_begin, idx_end)
	int max_idx = find_max_idx(arr, idx_begin, idx_end);

	// 4. Swap entries
	int idx1 = 0, idx2 = 3;
	cout << "Before swapping the " << idx1 << "-th entry and the " << idx2 << "-th entry: ";
	print(arr, 0, size_of_array);
	swap(arr[idx1], arr[idx2]);
	cout << "After swapping the " << idx1 << "-th entry and the " << idx2 << "-th entry: ";
	print(arr, 0, size_of_array);

	// 5. Sort array in [descending] order
	cout << "Before Sorting: ";
	print(arr, 0, size_of_array);
	sort(arr, size_of_array);
	cout << "After Sorting: "; 
	print(arr, 0, size_of_array);

	return 0;
}