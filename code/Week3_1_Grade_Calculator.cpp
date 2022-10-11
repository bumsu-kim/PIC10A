/*
* PIC 10A 2B, Fall 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Grade Calculator
* 
* Write a program that will calculate
* a student's final score in some class
* on the following dual grading system:
*	[Scheme A] Midterm 30%, Final 40%, HW 30%
*	[Scheme B] Midterm dropped, Final 70%, HW 30%
*
* Assume that there will be N HW assignments total,
* where N is given by the user,
* and the lowest HW score will be dropped
*
* The maximum of two scores from two schemes will be the final score
*
* In addition to printing the final score,
* you should also determine the letter grade
* based on the following scale:
*	 90 <= A <= 100
*	 80 <= B < 90
*	 70 <= C < 80
*	 60 <= D < 70
*	 0  <= F < 60
*
* Challenge: Can you replace the if-elseif-else clauses
*  with a single expression? (without switch-case)
* 
* [HINT: Consider Booleans as numeric values,
*	      or use the ternary operator]
*
*/
#include <iostream>
// nothing else is required for this exercise

using namespace std;

int main() {
	// I provide here the input and output format for you to save time

	// use descriptive names, and initialize them
	double mid = 0., fin = 0;
	int nHW = 3; // default value 3

	// get user inputs
	cout << "Please enter the midterm score (0 - 100): ";
	cin >> mid;
	cout << "Please enter the final exam score (0 - 100): ";
	cin >> fin;
	cout << "Please enter the number of homework assignments (3 - 10): ";
	cin >> nHW;

	double hw_sum = 0., hw_min = 101; // why do these initializations make sense?
	int hw_input_cnt = 0;
	while (/* condition */) {

		// cout << "Please enter the homework " << /* what's coming here? */ << " score(0 - 100) : ";
		// cin >> /* getting the hw score */;
		// accumulate the scores
		// find the minimum
		// update the loop variable
	}
	//double avg_hw_score = // average without the lowest score (hw_min)

	// print out the final scores from two schemes
	//double scheme_A = /* use the formula above */,
		//scheme_B = /* use the formula above */ ;
	//cout << "Your final score based on Scheme A is " << scheme_A << endl;
	//cout << "Your final score based on Scheme B is " << scheme_B << endl;

	// print out the final score and the letter grade
	//double score_final = ;
	//cout << " Your final score is " << score_final << endl;
	char letter_grade = 'x'; // initialize with a default value that can easily indicate possible errors
	// (i.e. a character that doesn't exist in the grade letters)

	cout << "Your course grade is " << letter_grade << endl;
	return 0;
}