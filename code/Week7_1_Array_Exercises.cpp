/*
* PIC10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Arrays
*
* Write the following array functions:
* 	0. printArr: Prints the array elements
*		documentation:
*       -------------------
*		Gets an array of doubles, and prints out the elements on the console
*		@param darr		array of doubles
*		@param sz		size of the array
*		-------------------
* 
*	1. maxArr: Max of array values
*		documentation:
*       -------------------
*		Gets an array of doubles, finds the max value and returns it
*		@param darr		array of doubles
*		@param sz		size of the array
*		@return maxVal	the maximum of the values in the array
*		-------------------
* 
*	2. sumRange: returns the sum of the values in a certain range of array
*		documentation:
*       -------------------
*		Gets an array of doubles and a range, and finds the sum of the values in that range
*		@param darr		array of doubles
*		@param sz		size of the array
*		@param start	The range is [start, end)
*		@param end		The range is [start, end)
*		@return sum		the sum of the values in the range [start, end)
*		-------------------
*		
*/

#include <iostream>
using namespace std;

int main() {
	constexpr int sz = 10;
	double darr[sz] = {
		0.123,
		1.234,
		2.345,
		3.45,
		5,
		-10,
		-99.9,
		9999
	};// intialization
	int beg = 3, end = 5;
	cout << "Max of the following array: ";
	printArr(darr, sz);
	cout << " is: " << maxArr(darr, sz) << endl;
	cout << "Sum in the range [" << beg << ", " << end << ") is: ";
	cout << sumRange(darr, sz, beg, end) << endl;
	return 0;
}