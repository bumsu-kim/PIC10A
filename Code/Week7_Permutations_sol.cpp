#include <iostream>
#include <vector>

using namespace std;

/**
* Find all permutations of given numbers
* @param permutations: 2-D vector to save all possible permutations
* @param curr: temporary sequence of numbers (incomplete permutation). When it is filled, it is pushed back to allP
* @param nums: given set of distinct numbers (const)
* @param marks: marks of used/unused numbers. True if available, False otherwise
*/
void permute(vector<vector<int>>& permutations,
	vector<int>& curr,
	const vector<int>& nums,
	vector<bool>& marks) {
	if (curr.size() == nums.size()) { // curr is filled
		permutations.push_back(curr);
		return;
	}
	else {
		for (int i = 0; i < nums.size(); ++i) { // for each number in nums
			if (marks[i]) { // if this number is available
				curr.push_back(nums[i]); // add this number to the current permutation
				marks[i] = false; // this number is already used
				permute(permutations, curr, nums, marks); // recursive call!
				curr.pop_back(); // remove this number from the current permutation
				marks[i] = true; // make this number available again
			}
		}
	}
}


/**
* Checks if the vector [v] has a member [n] or not
* @param v:	vector to check
* @param n:	a data to check
* @return true	if and only if v contains n
*/
bool has_member(const vector<int>& v, int n) {
	for (int i = 0; i < v.size(); ++i) {
		if (n == v[i]) {
			return true;
		}
	}
	return false;
}

/**
* Prints all entries of the vector of ints [v]
* @param v: vector to print
*/
void print(const vector<int>& v) {
	cout << "[";
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i];
		if (i < v.size() - 1) {
			cout << " ";
		}
	}
	cout << "]";
}

/**
* Prints all vectors in the vector of vectors [V]
* @param V: vector of vectors of int to print
*/
void print_permutations(const vector<vector<int>>& V) {
	for (int i = 0; i < V.size(); ++i) {
		print(V[i]);
		cout << endl;
	}
}
int main() {
	vector<int> nums; // distinct numbers to permute
	vector<int> curr; // temporary variable needed for permute()
	vector<vector<int>> permutations; // stores all permutations
	
	cout << "Enter a sequence of distinct numbers (Q when done): ";
	
	int n = 0; // for user input
	while (cin >> n) {
		if (!has_member(nums, n)) {
			nums.push_back(n);
			cout << n << " is added. Now nums = ";
			print(nums);
			cout << "." << endl;
		}
		else {
			cout << "Duplicate input [ " << n << " ] is found. It is not added to nums = ";
			print(nums);
			cout << "." << endl;
		}
	}


	vector<bool> nums_marked(nums.size(), true);

	permute(permutations, curr, nums, nums_marked);
	cout << "All permutations of ";
	print(nums);
	cout << ":\n-----------------\n";
	print_permutations(permutations);

	return 0;
}