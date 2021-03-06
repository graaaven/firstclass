// Gary Sheridan
// Professor Macdougald
// introduction to c++
// project Vowel Removal
// 1. takes string from the user
// 2. removes vowels from string
// 3. outputs string without the vowels to the user

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string removeVowels(string, int);
string isVowel(string, int);

int main()
{
	string strInput = "*";

	//asks user for input
	cout << "please enter in the string under 11 characters" << endl;
	cin >> strInput;

	strInput.size();

	for (int intIndex = 0; intIndex < strInput.size(); intIndex++) {
		//sets string to be outputed to user
		strInput = isVowel(strInput, intIndex);
	}

	//outputs new string to the user
	cout << "new string:" << strInput << endl;
	return 0;
}

string isVowel(string strInput, int intIndex) {

	//determines if the character is a vowel
	if (strInput.substr(intIndex, 1) == "a" || strInput.substr(intIndex, 1) == "A" || strInput.substr(intIndex, 1) == "e" || strInput.substr(intIndex, 1) == "E" || strInput.substr(intIndex, 1) == "i" || strInput.substr(intIndex, 1) == "I" || strInput.substr(intIndex, 1) == "o" || strInput.substr(intIndex, 1) == "O" || strInput.substr(intIndex, 1) == "u" || strInput.substr(intIndex, 1) == "U") {
		//string set to the new string after removing the vowel
		strInput = removeVowels(strInput, intIndex);
	}
	return strInput;
}

string removeVowels(string strInput, int intIndex) {
	string strFinal = "*";

	//creates string after erasing the vowels
	strFinal = strInput.erase(intIndex, 1);

	return strFinal;
}

