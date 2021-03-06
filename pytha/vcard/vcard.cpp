// vcard project
// Gary Sheridan
// ITSE 1307
// professor Macdougald
//1. creates vcf file with the user's contact info

#include "stdafx.h"
#include <iostream>
#include <fstream >
#include <string>
using namespace std;


int main()
{
	string strFileName = "address.vcf";
	ofstream fileAddress;
	string strFirst = "Natalie";
	string strLast = "Salavar";
	string strTitle = "Owner";
	string strOrg = "Earthborn Studios Inc " ;
	string strTeleHome = "(808) 397-8099";
	string strTeleWork = "(808) 397 8098";
	string strAddress = "7455 Hyatt street";

	//puts the info into vcf
	fileAddress.open(strFileName);
	fileAddress << "BEGIN:VCARD" << endl;
	fileAddress << "VERSION:2.1" << endl;

	//outputs the contact's address
	fileAddress << "ADR;WORK;PREF:;;" << strAddress << endl;
	
	//outputs the contact's title
	fileAddress << "TITLE:" << strTitle << endl;
	
	//outputs the contact's organization
	fileAddress << "ORG:" << strOrg << endl;
	
	//outputs the contact's home phonenumber
	fileAddress << "TEL;HOME;VOICE: " << strTeleHome << endl;
	
	//outputs the contact's work phonenumber
	fileAddress << "TEL;WORK;VOICE: " << strTeleWork << endl;
	
	//outputs the contact's last and first name
	fileAddress << "N:" << strLast << ";" << strFirst << ";;" << endl;
	
	//outputs the contact's first and last name
	fileAddress << "FN:" << strFirst << " " << strLast << endl;
	
	fileAddress << "END:VCARD" << endl;
	
	fileAddress.close();
	
	//tells the user that the contact is written
	cout << "wrote " << strFileName << endl;
    return 0;
}

