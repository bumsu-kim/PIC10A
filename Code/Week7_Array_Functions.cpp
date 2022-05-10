#include <iostream>

using namespace std;

int main() {
	constexpr int MAX_SIZE = 100;
	// [const int] is different from [constexpr int]!
	/*
	* The following example doesn't compile:
	*	int n = 5;
	*	const int m = n;
	*	int arr_of_size_m[m] = {}; // does NOT compile
	*
	* It is because m is not a compile-time constant.
	* Although const int m = 5; will work, it can be confusing.
	* So please stick with  constexpr instead of const.
	*
	*/
	int arr[MAX_SIZE] = {}; // initialization is a good coding practice

	// Replace the following code snippet into a function call


	// 1. Read Data
	cout << "Enter some integers, and q to finish: ";
	int cnt = 0, n = 0;
	while (cin >> n && cnt < MAX_SIZE) {
		arr[cnt++] = n;
	}
	cin.clear();
	cin.ignore();
	int size_of_array = cnt; // why this?

	// 2. Print the subarray: [idx_begin, idx_end)
	int idx_begin = 2, idx_end = size_of_array; 
	cout << "Printing the subarray in [" << idx_begin << "-th, " << idx_end << "-th): ";
	for (int i = idx_begin; i < idx_end; ++i) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	// 3. Find maximum in the given range [idx_begin, idx_end)
	cout << "Max index in [" << idx_begin << "-th, " << idx_end << "-th): ";
	int max_idx = idx_begin;
	for (int idx_to_find_max = idx_begin + 1; idx_to_find_max < idx_end; ++idx_to_find_max) {
		if (arr[idx_to_find_max] > arr[max_idx]) {
			max_idx = idx_to_find_max;
		}
	}
	cout << "Max element : " << arr[max_idx] << " at idx = " << max_idx << endl;

	// 4. Swap entries
	int idx1 = 0, idx2 = 3;
	cout << "Before swapping the " << idx1 << "-th entry and the " << idx2 << "-th entry: ";
	print(arr, 0, size_of_array);
	int tmp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = tmp;
	cout << "After swapping the " << idx1 << "-th entry and the " << idx2 << "-th entry: ";
	print(arr, 0, size_of_array);

	// 5. Sort array in [descending] order
	cout << "Before Sorting: ";
	print(arr, 0, size_of_array);
	for (int idx = 0; idx < size_of_array; ++idx) {
		int max_idx = find_max_idx(arr, idx+1, size_of_array);
		swap(arr[idx], arr[max_idx]);
	}
	cout << "After Sorting: "; 
	print(arr, 0, size_of_array);

	return 0;
}