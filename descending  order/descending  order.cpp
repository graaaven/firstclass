//Gary Sheridan
//professor Macdougald
//introduction to c++
//project descending order
//1. asks user for numbers
//2. determines the order of numbers
//3. outputs the order to the user


#include "stdafx.h"
#include <iostream>

using namespace std;

	int main()
{
		double dblAlpha = 0;
		double dblBravo = 0;
		double dblCharlie = 0;

		//asks the user for the numbers
		cout << "please enter all of the numbers with a space inbetween each: ";
		cin >> dblAlpha >> dblBravo >> dblCharlie;

		//determines the order of numbers and outputs as such
		if (dblBravo < dblAlpha && dblAlpha < dblCharlie) {
			cout << "numbers in order: " << dblCharlie << " " << dblAlpha << " " << dblBravo << endl;
		}

		else if (dblAlpha < dblBravo && dblBravo < dblCharlie) {
			cout << "numbers in order: " << dblCharlie << " " << dblBravo << " " << dblAlpha << endl;
		}

		else if (dblBravo < dblCharlie && dblCharlie < dblAlpha) {
			cout << "numbers in order:  " << dblAlpha << " " << dblCharlie << " " << dblBravo << endl;
		}

		else if (dblAlpha < dblCharlie && dblCharlie < dblBravo) {
			cout << "numbers in order: " << dblBravo << " " << dblCharlie << " " << dblAlpha << endl;
		}

		else if (dblCharlie < dblBravo && dblBravo < dblAlpha) {
			cout << "numbers in order: " << dblAlpha << " " << dblBravo << " " << dblCharlie << endl;
		}

		else  {
			cout << "numbers in order: " << dblBravo << " " << dblAlpha << " " << dblCharlie << endl;
		}
    
		return 0;
}

