//Gary Sheridan
//Professor Macdougald
//introductiont to c++
//project converting arrays
//1. takes letters from the user
//2. outputs the letters capitalized

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

//function prototyping
char capitalizer();

int main()
{
	//capitalizes the letters entered by the user
	capitalizer();
	return 0;
}

char capitalizer() {

	const int ARRAY_SIZE = 8;
	char chrArray[ARRAY_SIZE];

	//asks user to enter in a total of 8 characters
	cout << "enter in 8 characters" << endl;

	for (int intIndex = 0; intIndex < ARRAY_SIZE; intIndex++) {

		//prompts the user for each character to be entered into the array
		cout << "please enter in a characters: " << endl;
		cin >> chrArray[intIndex];
	}


	for (int intIndex = 0; intIndex < ARRAY_SIZE; intIndex++) {

		//checks the characters in the array to see if they are lower case
		if (islower(chrArray[intIndex])) {

			//capitalizes the letters in the array
			chrArray[intIndex] = (toupper(chrArray[intIndex]));
		}
	}

	for (int intIndex = 0; intIndex < ARRAY_SIZE; intIndex++) {

		//displays the letters cappitalized
		cout << "letter capped: " << chrArray[intIndex] << endl;
	}
	return 0;
}