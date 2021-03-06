//Gary Sheridan
//Professor MacDougald
//Project time conversion
//introducion to c++
//1. shows menu to user
//2. Takes the time from the user
//3. converts the time
//4. outputs the time to the user

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int Menu();
void input(int);
void Output(int, int, int);
int TwelveHourToTwentyFour(int, int);
int TwentyFourHourToTwelve(int);


int main()
{
	int intChoice = 0;

	intChoice = Menu();
	input(intChoice);
	cin.get();
	return 0;
}

int Menu() {

	int intChoice = 0;

	//displays the menu to the user
	cout << "****welcome to this time conversion program****" << endl
		<< "****enter 1 to get 12 hour notation****" << endl
		<< "****enter 2 to get 24 hour notation****" << endl;
	cin >> intChoice;

	return intChoice;
}

void input(int intChoice) {

	int intMinutes = 0;
	int intHours = 0;
	int intPmorAm = 0;
	int intNewHours = 0;

	if (intChoice == 1) {
		//displays messages if the user presses 1
		cout << "Translating 24 hour notation to get 12 hour notation" << endl;
		cout << "enter the hours followed by the minutes" << endl;
		cin >> intHours >> intMinutes;

		//sets the time to PM since its 12 hours and above and not 24
		if (intHours >= 12 && intHours != 24) {
			intPmorAm = 2;
		}
		//sets it to AM by default
		else {
			intPmorAm = 1;
		}
		//calls the calculating function to get 12 hour notation
		intNewHours = TwentyFourHourToTwelve(intHours);

		//pulls the variables from the function to output
		Output(intPmorAm, intNewHours, intMinutes);
	}

	else if (intChoice == 2) {
		//displays messages if the user presses 2
		cout << "Translating 12 hour notation to get 24 hour notation" << endl;
		cout << "enter the hours followed by the minutes" << endl;
		cin >> intHours >> intMinutes;

		//asks the user to enter 1 if its AM and 2 if its PM
		cout << "enter 1 for AM and 2 for PM" << endl;
		cin >> intPmorAm;

		//calls the calculating function to get 24 hour notation
		intNewHours = TwelveHourToTwentyFour(intHours, intPmorAm);

		//sets the time to 24 hour notation for the program
		intPmorAm = 3;

		//pulls the variables to the output function
		Output(intPmorAm, intNewHours, intMinutes);
	}
}

int TwelveHourToTwentyFour(int intHours, int intPmorAm) {

	int TotalHours = intHours;

	//translates the 12 hour notation thats set to pm and sets it to 24 hour notation
	if (intPmorAm == 2 && intHours != 12) {
		TotalHours = intHours + 12;
	}
	//sets the hours to zero if the time is 12 so that the 24 hour notation comes out as 00:00
	else if (intHours == 12 && intPmorAm == 1) {
		TotalHours = 0;
	}

	return TotalHours;
}

int TwentyFourHourToTwelve(int intHours) {

	int TotalHours = 0;

	//sets it so that if its higher than 12 it'll subtract 12 hours 
	if (intHours > 12) {
		TotalHours = intHours - 12;
	}

	//sets that if its 00:00 for 24 hour notation it will be set to 12am
	else if (intHours == 0)
		TotalHours = 12;

	//keeps the hours the same
	else {
		TotalHours = intHours;
	}

	return TotalHours;
}

void Output(int intAmorPm, int intNewHours, int intMinutes) {

	//outputs if its 24 hour notation:
	if (intAmorPm == 3) {
		cout << "24 hour notation: " << setfill('0') << setw(2) << intNewHours << ":" << setfill('0') << setw(2) << intMinutes << endl;
	}

	//outputs 12 hour notation
	else {

		//outputs 12 hour notaion set to AM
		if (intAmorPm == 1) {
			cout << "12 hour notation: " << intNewHours << ":" << setfill('0') << setw(2) << intMinutes << "AM" << endl;
		}

		//outputs 12 hour notation set to PM
		else if (intAmorPm == 2) {
			cout << "12 hour notation: " << intNewHours << ":" << setfill('0') << setw(2) << intMinutes << "PM" << endl;
		}
	}
}