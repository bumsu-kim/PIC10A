/*
* PIC10A 1A, Spring 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Grade Calculator ver.1
*
* Write a program that will calculate
* a student's final score in some class
* on the following dual grading system:
* [Scheme A] Midterm 30%, Final 40%, HW 30%
* [Scheme B] Midterm dropped, Final 70%, HW 30%
*
* Assume that there will be 3 HW assignments total,
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
*/

#include <iostream>

using namespace std;

int main() {
	// I provide here the input and output format for you to save time
	
	// use descriptive names, and initialize them
	double mid = 0., fin = 0., hw1 = 0., hw2 = 0., hw3 = 0.; 
	
	// get user inputs
	cout << "Please enter the midterm score (0 - 100): ";
	cin >> mid;
	cout << "Please enter the final exam score (0 - 100): ";
	cin >> fin;
	cout << "Please enter the homework 1 score (0 - 100): ";
	cin >> hw1;
	cout << "Please enter the homework 2 score (0 - 100): ";
	cin >> hw2;
	cout << "Please enter the homework 3 score (0 - 100): ";
	cin >> hw3;

	// do some calculation here

	// 1. find the lowest hw score
	double lowest_hw_score = hw1; // initialize with hw1
	if (hw2 < lowest_hw_score) { // compare with hw2
		lowest_hw_score = hw2;	 // now lowest of {hw1, hw2}
	}
	if (hw3 < lowest_hw_score) { // compare with hw3
		lowest_hw_score = hw3; // now lowest of {hw1, hw2, hw3}
	}
	// now we compute the overall hw score: add two largests, and take the average
	int number_of_hw = 2; // define a variable to avoid "magic numbers"
	double avg_hw_score = (hw1 + hw2 + hw3 - lowest_hw_score)/number_of_hw; // take the average hw score

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

	if (score_final > 100) { // check validity
		cout << "Error! Final score cannot exceed 100." << endl;
	}
	else if (score_final < 0) { // check validity
		cout << "Error! Final score cannot be negative." << endl;
	} else { // if between 0 and 100,
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
	}
	
	cout << "Your course grade is " << letter_grade << endl;

	return 0;
}