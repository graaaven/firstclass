//paycheck project
//Gary Sheridan
//ITSE 1307
//professor Macdougald

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double total1 = 0.0;
	double total2 = 0.0;
	double total3 = 0.0;
	double total4 = 0.0;
	double total5 = 0.0;
	double total6 = 0.0;
	double sum = 0.0;
	double netPay = 0.0;

	string name;
	
	double gross = 0.0;
	double const INCOME_TAX = 0.15;
	double const STATE_TAX = 0.0;
	double const SOCIAL_SECURITY_TAX = 0.0575;
	double const MEDICAID_TAX = 0.0275;
	double const PENSION_PLAN = 0.05;
	double const HEALTH_INSURANCE = 75.00;

	//asks user for name
	cout << "please enter your name: ";
	cin >> name;

	//asks user for gross money
	cout << "please enter gross amount: ";
	cin >> gross; 

	//calulates gross amount after taxes
	total1 = gross * INCOME_TAX;
	total2 = gross * STATE_TAX;
	total3 = gross * SOCIAL_SECURITY_TAX;
	total4 = gross * MEDICAID_TAX;
	total5 = gross * PENSION_PLAN;
	total6 = HEALTH_INSURANCE;
	
	//calculates the sum of the taxes
	sum = total1 + total2 + total3 + total4 + total5 + total6;

	//calculates the netpay
	netPay = gross - sum;


	//displays tax deduction, gross, and netpay in columns
	cout << " \n\n\n\n" << endl;
	cout << setfill('.');
	cout << "name: " <<name << endl;
	cout << right << "gross:" << setw(18) << "$" <<gross << endl;
	cout << "Income Tax:" << setw(13) << "$" << total1 << endl;
	cout << "State Tax:" << setw(14) << "$" << total2 << endl;
	cout << "Social Security Tax:"<< setw(4) << "$" <<total3 << endl;
	cout << "Medicaid Tax: " << setw(10) << "$" <<total4 << endl;
	cout << "Pension Plan:" << setw(11) << "$" <<total5 << endl;
	cout << "Health Insurance:" << setw(7) << "$" <<HEALTH_INSURANCE << endl;
	cout << "net pay:" << setw(16) << "$" << netPay << endl;
	






    return 0;
}

