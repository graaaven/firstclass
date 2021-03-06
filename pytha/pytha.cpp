// pythagorean theorem project
//Gary Sheridan
//ITSE 1307
//Professor MacDougald
//1. gets A and B from the user
//2. calculates for C with A and B
//3. displays A, B, and C for the user

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include <iomanip>


using namespace std;

	int main()
	{
		float cVariable = 0;
		float aVariable = 0;
		float bVariable = 0;

		//asks user for A
		cout << "please enter in A: ";
		cin >> aVariable;

		//asks user for B
		cout << "please enter in B: ";
		cin >> bVariable;

		//calculates C with A and B
		cVariable = pow(aVariable, 2) + pow(bVariable, 2);

		cout << endl;
		//displays A, B, and C for the user
		cout << "    A :  " << setw(3) << aVariable << endl;
		cout << "    B :  " << setw(3) << bVariable << endl;
		cout << "    C :  " << setw(3) << cVariable << endl;

		cin.get();

		return 0;
	}

