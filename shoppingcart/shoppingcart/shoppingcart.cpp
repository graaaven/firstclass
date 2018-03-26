//Gary Sheridan
//project shopping cart
//professor MacDougald
//introduction to c++ programming
//1. asks user for the number of items and the cost for each of the items
//2. calculates the cost of the items before the shipping cost
//3. calculates the cost of the items after the shipping cost
//4. displays the total price of all of the items with the shipping cost included

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double dblShipping = 0.0;
	double dblNumberofItems = 0.0;
	double dblPriceofItems = 0.0;
	double dblTotalPrice = 0.0;
	double dblTotalNumberofItems = 0.0;
	double dblFinalPrice = 0.0;
	
	do {
		//calculates total price of the items entered
		dblTotalPrice = dblTotalPrice + (dblPriceofItems * dblNumberofItems);
		
		//asks user for number of items or to finish
		cout << "please enter the number of items or enter 0 if done" << endl;
		cin >> dblNumberofItems;

		//logic to display to the user to press 0 again to get their total
		if (dblNumberofItems == 0) {
			cout << "please enter 0 again to get the total" << endl;
			cin >> dblNumberofItems;
		}

		//asks user for the price of the item entered
		else {
			cout << "please enter the price of that item" << endl;
			cin >> dblPriceofItems;
		}

		//adds the total number of items to calculate shipping costs being added
		dblTotalNumberofItems = dblTotalNumberofItems + dblNumberofItems;

	} while (dblNumberofItems != 0);
	
	//logic to determine whether shipping will be free
	if (dblTotalPrice >= 200) {
		dblShipping = 0;
	}
	//setting shipping cost to $10 when the cost of the items are not over 200
	else {
		dblShipping = 10;
	}

	//final calculation for the price the user has to pay
	dblFinalPrice = dblTotalPrice + (dblTotalNumberofItems * dblShipping);

	//displays the final price to the user
	cout << "Final Price of your items are: $" << dblFinalPrice << endl;

    return 0;
}

