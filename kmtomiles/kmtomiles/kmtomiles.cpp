// kmtomiles project
//Gary Sheridan
//ITSE 1307
//professor Macdougald

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;




int main()
{
	float fltkilometer = 1.0;
	float fltmile = 1.0;
	
	//asks user for kilometers moved
	cout << "enter number of kilometers";
	//takes the user's data and uses it
	cin >> fltkilometer;
	//converts the user's kilometers to miles
	fltmile = fltkilometer * .621371;
	//displays the miles to the user
	cout << "mile:" << fltmile;
    return 0;
}

