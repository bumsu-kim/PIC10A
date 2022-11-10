#include <iostream>
#include <vector>

using namespace std;

/**
* Copies a vector to another
* @param from	A vector being copied
* @param to		result of the copy
*/
void copy_vec(const vector<int>& from, vector<int>& to) {
	to = vector<int>(from.size());
	for (size_t i = 0, N = from.size(); i < N; ++i) {
		to[i] = from[i];
	}
}

/**
* Finds the position of the first match to the given data (returns -1 if not found)
* @param v		vector to search
* @param dat	data to find
* @return pos	position of the element
*/
int find_vec(const vector<int>& v, int dat) {
	for (size_t i = 0, N = v.size(); i < N; ++i) {
		if (v[i] == dat) {
			return i;
		}
	}
	return -1;
}

/**
* Removes an element at the given position
* @param v		Vector
* @param pos	position of the element to be removed
*/
void remove(vector<int>& v, size_t pos) {
	if (pos < v.size()) {
		for (size_t i = pos, N = v.size(); i < N-1; ++i) {
			v[i] = v[i + 1];
		}
	}
	v.pop_back();
}

/**
* Inserts an element at the given position
* @param v		Vector
* @param dat	data to be inserted
* @param pos	position of the data to be inserted
*/
void insert(vector<int>& v, int dat, size_t pos) {
	size_t N = v.size();
	if (pos >= N) {
		v.push_back(dat);
	}
	else {
		v.push_back(v.back());
		for (size_t i = N-1; i > pos; --i) {
			v[i] = v[i - 1];
		}
		v[pos] = dat;
	}
}

void print_v(const vector<int>& v) {
	for (int i : v) {
		cout << i << " ";
	}
	cout << endl;
}
int main() {
	vector<int> v1 = { 1, 3, 5, 7, 9 },
		v2 = { 2, 4, 6 };
	cout << "v1: ";
	print_v(v1);
	
	cout << "v2: ";
	print_v(v2);
	
	cout << "v2 after copy: ";
	copy_vec(v1, v2);
	print_v(v2);

	cout << "Remove the 3rd element from v2: ";
	remove(v2, 3);
	print_v(v2);

	cout << "Find the position of 5 from v2: " << find_vec(v2, 5) << endl;
	cout << "Find the position of 7 from v2: " << find_vec(v2, 7) << endl;

	cout << "Insert 99 at the 2nd position: ";
	insert(v2, 99, 2);
	print_v(v2);

	cout << "Insert -100 at the 0th position: ";
	insert(v2, -100, 0);
	print_v(v2);


	cout << "Remove the 0th element from v2: ";
	remove(v2, 0);
	print_v(v2);


	return 0;
}