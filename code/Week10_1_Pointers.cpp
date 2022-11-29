/*
* PIC10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Pointers
*
*/

#include <iostream>

using namespace std;

int* myFunction(int* x, const string& varname) {
	if (!x) {
		cout << "\"" << varname << "\" is a nullptr." << endl;
		return nullptr;
	}
	else {
		cout << "\"" << varname << "\" refers to the value " << *x << ". " << endl;
		if (*x == 0) {
			cout << "We don't want 0. Change it to 10." << endl;
			*x = 10;
			cout << "*(\"" << varname << "\") = " << *x;
			return x;
		}
		else {
			cout << "The value referred by \"" << varname << "\" is increased by 1: its now ";
			++(*x);
			cout << *x << endl;
			return x;
		}
	}
	
}

int main() {
	int a = 4, * aptr = nullptr, b = 4, * bptr = &b;
	aptr = &a;
	
	cout << "a = " << a << ",\t &a = " << aptr << ",\t *(&a) = " << *aptr << endl;
	cout << "b = " << b << ",\t &b = " << bptr << ",\t *(&b) = " << *bptr << endl;

	constexpr size_t sz = 10;
	int arr[sz] = {};
	for (size_t i = 0; i < sz; ++i) {
		arr[i] = i;
	}

	for (size_t i = 0; i < sz; ++i) {
		cout << "arr[" << i << "] = " << arr[i] << ",\t &(arr[" << i << "]) = " << &(arr[i]) << ", \t"
			<< " arr + " << i << " = " << arr + i << endl;
	}

	myFunction(nullptr, "nullptr");
	myFunction(&a, "address of a");
	myFunction(aptr, "aptr");

	return 0;
} 