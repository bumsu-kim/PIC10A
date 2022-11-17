#include <iostream>
#include <string>
#include <vector>

using namespace std;

// **************************************************
// Constructors
class B {
public:
	string name;
	double salary;
	int age;
	B(); // default constructor
	B(string, double, int); // constructor getting name, salary, and age
};

// **************************************************

// **************************************************
// Function Overloading
int length(const string& str) {
	return str.length();
}

int length(const vector<int> v) {
	return v.size();
}

int length(const vector<double> v) {
	return v.size();
}
// ************************************************** 


int main() {
	vector<int> vint{ 1, 2, 3, 10, 20, 30 };
	vector<double> vdouble{ -1.0, 0.0, 1.0 };
	string str("PIC 10A");

	cout << "length of vint = " << length(vint) << endl;
	cout << "length of vdouble = " << length(vdouble) << endl;
	cout << "length of str = " << length(str) << endl;

	string a = "a", b = "bb";
	cout << "a+b = " << a + b << ", or " << operator+(a, b) << endl;

	return 0;
}