// tempconverter.cpp
// Gary Sheridan
// Professor Christopher Robin MacDougald 
// ITSE 1307
//conversion program
//1. asks user for temperature
//2. converts the celsius given to fahrenheit
//3. outputs to screen

#include "stdafx.h"
#include <iostream>
using namespace std;
float celsius;
float fahrenheit;

void convertC(float n) 
{
	//this converts fahrenheit to celsius
	fahrenheit = (((n * 9) / 5) + 32);
}
int main() 

{
	//asks users for temerture in celsius and
	cout << "please enter your temperature in celsius " << endl; 
	cin >> celsius;
	//call the function to convert celsius to fahrenheit 
	convertC(celsius);

	cout << "calculating..." << endl;
	cout << "the temperature in fahrenheit is " << fahrenheit << endl;
	//this keeps the temperature on screen for the user to read
	system("PAUSE");
    return 0;
}

