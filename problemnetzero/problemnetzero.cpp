// problemnetzero.cpp
//Gary Sheridan
//intro to c++ programming
//professor Chris Macdougald
//project programming problem net zero
//1. asks user for input
//2. outputs whether the number is zero, a positive, or a negative

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double dblUserNumber = 0;
	
	//asks user for input
	cout << "please enter a number: ";
	cin >> dblUserNumber;

	//identifies if the number is zero
	if (0 == dblUserNumber) {
		cout << "number is equal to zero" << endl;
	}
	//identifies if the number is positive
	else if (dblUserNumber > 0) {
		cout << "number is positive" << endl;
	}
	//identifies if the number is negative
	else if (dblUserNumber < 0) {
		cout << "number is negative" << endl;
	}
    return 0;
}

