// Gary Sheridan
//Professor Macdougald
//introduction to c++
//example 5-5

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	char letter;
	cout << "program to convert uppercase "
		<< "letters to their corresponding "
		<< "telephone digits." << endl;
	
	cout << "to stop the program enter #." << endl;
	
	cout << " enter an uppercase letter ";
	cin >> letter;
	cout << endl;

	while (letter != '#') {
		cout << "the letter you entered is: " << letter << endl;

		cout << "the corresponding " << "digit is: ";

	}
	if (letter >= 'A' && letter <= '2')
		switch (letter)
		{
		case 'A':
		case 'B':
		case 'C':
			cout << 2 << endl;
			break;
		case 'D':
		case 'E':
		case 'F':
			cout << 3 << endl;
			break;
		case 'G':
		case 'H':
		case 'I':
			cout << 4 << endl;
			break;
		case 'J':
		case 'K':
		case 'L':
			cout << 5 << endl;
			break;
		case 'M':
		case 'N':
		case 'O':
			cout << 6 << endl;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			cout << 7 << endl;
			break;
		case 'T':
		case 'U':
		case 'V':
			cout << 8 << endl;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			cout << 9 << endl;
			break;
		}
	else
		cout << "/nEnter another uppercase letter "
			 << "letter to find its"
			 << "corresponding telephone digits."
			 << endl;
	cout << "To stop the program enter #."
		<< endl;

	cout << "enter a letter: ";
	cin >> letter;
	cout << endl;
	//end while



    return 0;
}

