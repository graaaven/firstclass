// Length project
//Gary Sheridan
//ITSE 1307
//professor Macdougald

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string strWord = "";
	
	//asks user for input
	cout << "please enter a word: ";
	cin >> strWord;

	//displays the word the user input
	cout << "word: " << strWord << endl;

	//displays the word length for the user's word
	cout << "word Length: " << strWord.length() << endl;
	return 0;
}

