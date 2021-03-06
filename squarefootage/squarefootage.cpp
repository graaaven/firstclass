//Gary Sheridan
//Professor Macdougald
//project Squarefootage
//introduction to c++
//1. This program asks the user for the base price and square footage for each of the models
//2. calculates the price per foot for each of the models
//3. determines which model has the lowest price per foot
//4. displays the lowest price model to the user along with the price per foot

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double dblBasePriceColonial = 0;
	double dblSquareFootageColonial = 0;
	double dblPricePerFootColonial = 0;

	double dblBasePriceSplitEntry = 0;
	double dblSquareFootageSplitEntry = 0;
	double dblPricePerFootSplitEntry = 0;

	double dblBasePriceSingleStory = 0;
	double dblSquareFootageSingleStory = 0;
	double dblPricePerFootSingleStory = 0;
	
	//asks the user for the base price and squarefootage for the colonial model
	cout << "enter base price and squarefootage for Colonial models in that order: ";
	cin >> dblBasePriceColonial >> dblSquareFootageColonial;
	
	//asks the user for the base price and squarefootage for the split entry model
	cout << endl << "enter base price and squarefootage Split entry models in that order: ";
	cin >> dblBasePriceSplitEntry >> dblSquareFootageSplitEntry;
	
	//asks the user for the base price and squarefootage for the single story model
	cout << endl << "enter base price, squarefootage, and price per foot for single story models in that order: ";
	cin >> dblBasePriceSingleStory >> dblSquareFootageSingleStory;

	//calculates for the price per foot for colonial model
	dblPricePerFootColonial = dblBasePriceColonial / dblSquareFootageColonial;

	//calculates for the price per foot for split entry model
	dblPricePerFootSplitEntry = dblBasePriceSplitEntry / dblSquareFootageSplitEntry;
	
	//calculates for the price per foot for single story model
	dblPricePerFootSingleStory = dblBasePriceSingleStory / dblSquareFootageSingleStory;

	//determines if the colonial model is the lowest price and if colonial is the lowest it displays the information to the user
	if (dblPricePerFootColonial < dblPricePerFootSplitEntry && dblPricePerFootColonial < dblPricePerFootSingleStory) {
		
		cout << endl << "colonial models have the lowest price per squarefoot at the price of $" << dblPricePerFootColonial << " per square foot" << endl;
	}

	//determines if the split entry model is the lowest price and if split entry is the lowest it displays the information to the user
	else if (dblPricePerFootSplitEntry < dblPricePerFootSingleStory && dblPricePerFootSplitEntry < dblPricePerFootColonial) {
		
		cout << endl << "split entry models have the lowest price per squarefoot at the price of $" << dblPricePerFootSplitEntry << " per square foot" << endl;
	}

	//determines that single story model is the lowest price due to colonial and split entry models not being the lowest and displays the information to the user
	else {
		cout << endl << "single story models have the lowest price per squarefoot at the price of $" << dblPricePerFootSingleStory << " per square foot" << endl;
	}

    return 0;
}

