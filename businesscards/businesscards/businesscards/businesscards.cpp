// businesscards.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;


int main()
{
	string strFirstName = ""; 
	string strLastName = ""; 
	string strPhoneNumber = ""; 
	
	//asks user for first name
	cout << "please enter your first name" << endl;
	cin >> strFirstName;

	//asks user for last name
	cout << "please enter your last name" << endl;
	cin >> strLastName;

	//asks user for phone number
	cout << "please enter your phone number" << endl;
	cin >> strPhoneNumber;

	//displays user's first name
	cout << "first Name: " << strFirstName << endl;
	
	//displays user's last name
	cout << "Last Name: " << strLastName << endl;

	//display user's phone number
	cout << "Phone Number: " << strPhoneNumber << endl;

	cin.get();
	return 0;
    
}

