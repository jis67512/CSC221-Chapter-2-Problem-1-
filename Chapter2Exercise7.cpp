/*Chapter 2: Exercise 7 (Ocean levels)
Author: James scott
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
