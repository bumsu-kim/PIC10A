/*
* PIC 10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
* 
* Exercise: Find the machine epsilon
*/
#include <iostream>
using namespace std;

int main() {
	double eps = 1.0;
	int power = 0; // eps = 2^(-power)
	/*
		we can use a "loop" to make this better,
		but let's just do this for now.
	*/
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;
	eps /= 2.0; // halve eps
	++power;	// eps = 2^(-power)
	cout << "eps = " << eps
		<< " = 2^(-" << power << "). And (1 + eps) - 1 = "
		<< (1. + eps) - 1. << endl;


	return 0;
}