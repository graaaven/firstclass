// businesscards.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include "iostream"
#include <string>
using namespace std;


int main()
{
	//float strFirstName;
	//float strLastName;
	//float strnumber;


	//cout << "enter first name";
	string strFirstName; //= "firstname";
	string strLastName; //= "lastname";
	string strphonenumber; //= "phonenumber";

	cout << "please enter your first name" << endl;
	cin >> strFirstName;

	cout << "please enter your last name" << endl;
	cin >> strLastName;

	cout << "please enter your phone number" << endl;
	cin >> strphonenumber;

	cout << "first name: " << strFirstName << endl;

	cout << "Last name: " << strLastName << endl;

	cout << "phone number: " << strphonenumber << endl;
	system("PAUSE");
	return 0;
    
}

