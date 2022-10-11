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

	double hw_sum = 0., hw_min = 101;
	int hw_input_cnt = 0;
	while (hw_input_cnt < nHW) {
		double hw_score = 0.;
		cout << "Please enter the homework " << hw_input_cnt << " score(0 - 100) : ";
		cin >> hw_score;
		hw_sum += hw_score; // accumulate the scores
		if (hw_score < hw_min) { // find the minimum
			hw_min = hw_score;
		}
		++hw_input_cnt;
	}
	double avg_hw_score = (hw_sum - hw_min) / (nHW - 1.); // average without the lowest score (hw_min)

	// print out the final scores from two schemes
	double scheme_A = 0.3 * mid + 0.4 * fin + 0.3 * avg_hw_score,
		scheme_B = 0.7 * fin + 0.3 * avg_hw_score;
	cout << "Your final score based on Scheme A is " << scheme_A << endl;
	cout << "Your final score based on Scheme B is " << scheme_B << endl;

	// print out the final score and the letter grade
	double score_final = (scheme_A > scheme_B) ? scheme_A : scheme_B; // ternary operator to find max
	cout << " Your final score is " << score_final << endl;
	char letter_grade = 'x'; // initialize with a default value that can easily indicate possible errors
	// (i.e. a character that doesn't exist in the grade letters)

	if (score_final > 100) { // check validity ( > 100)
		cout << "Error! Final score cannot exceed 100." << endl;
	}
	else if (score_final < 0) { // check validity (negativity)
		cout << "Error! Final score cannot be negative." << endl;
	}
	else { // if between 0 and 100,
		if (score_final >= 90) {
			letter_grade = 'A';
		}
		else if (score_final >= 80) {
			letter_grade = 'B';
		}
		else if (score_final >= 70) {
			letter_grade = 'C';
		}
		else if (score_final >= 60) {
			letter_grade = 'D';
		}
		else {
			letter_grade = 'F';
		}
		// Challenge: Assuming validity, can you replace the if-elseif-else clauses for letter grade
		//            by a single expression here? (without switch-case)
		// Possible Answer:
		letter_grade =
			  (score_final >= 90) * 'A'
			+ (score_final < 90 && score_final >= 80) * 'B'
			+ (score_final < 80 && score_final >= 70) * 'C'
			+ (score_final < 70 && score_final >= 60) * 'D'
			+ (score_final < 60) * 'F';
		 
		// Possible Answer2:
		letter_grade = score_final >= 90 ? 'A' :
			(score_final >= 80 ? 'B' :
			(score_final >= 70 ? 'C' :
			(score_final >= 60 ? 'D' : 'F')));

		//how & why do these work?
	}
	cout << "Your course grade is " << letter_grade << endl;
	return 0;
}