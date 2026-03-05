/*
Code File Name: Chapter2Exercise7
Programmer: James scott
Date: 03/05/26
Requirements: 7. Ocean Levels

Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write a program
that displays:

. The number of millimeters higher than the current level that the ocean's level will be in 5 years.
. The number of millimeters higher than the current level that the ocean's level will be in 7 years.
. The number of millimeters higher than the current level that the ocean's level will be in 10 years.
*/

#include <iostream>
using namespace std;

int main()
{
	// declare variables
	double rise_rate = 1.5;
	double rise_5;
	double rise_7;
	double rise_10;

	// calculations
	rise_5 = rise_rate * 5;
	rise_7 = rise_rate * 7;
	rise_10 = rise_rate * 10;

	// display results
	cout << "Ocean level rise  in 5 years: " << rise_5 << " mm" << endl;
	cout << "Ocean level rise  in 7 years: " << rise_7 << " mm" << endl;
	cout << "Ocean level rise  in 10 years: " << rise_10 << " mm" << endl;

	return 0;
}