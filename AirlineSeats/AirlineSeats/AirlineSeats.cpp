// Gary Sheridan
// introduction to c++
// Professor Macdougald
// project airline seating
// 1. displays what seats are filled and which seats are empty

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int const INT_ROWS = 12;
int const INT_COLUMNS = 6;

void printSeats(char arySeats[][INT_COLUMNS], int intRows) {

	//loops to display the row numbers set the table
	for (int intRow = 0; intRow < intRows; intRow++) {
		cout <<  "Row " << setfill('0') <<setw(2) << (intRow + 1);

		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << "\t";
				cout << arySeats[intRow][intColumn];
		}
		cout << endl;
	}
}

void clearSeats(char arySeats[][INT_COLUMNS], int intRows) {
	
	//fills in the table of seats that are empty
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			arySeats[intRow][intColumn] = '-';
		}
	}
}

void fillSeat(char arySeats[][INT_COLUMNS], int intRow, int intColumn) {
	
	arySeats[intRow][intColumn] = 'X';		//puts an "X" in where the seats are taken
}

int main()
{	
	char arySeats[INT_ROWS][INT_COLUMNS];	//initializes array seats
	
	clearSeats(arySeats, INT_ROWS);			//creates the table of the empty seats
	fillSeat(arySeats, 0, 0);				//fills the spot on the plane of 1,1
	fillSeat(arySeats, 3, 3);				//fills the spot on the plane of 4,4
	fillSeat(arySeats, 5, 5);				//fills the spot on the plane of 6,6
	fillSeat(arySeats, 4, 4);				//fills the spot on the plane of 5,5
	fillSeat(arySeats, 2, 4);				//fills the spot on the plane of 3,5
	printSeats(arySeats, INT_ROWS);			//prints the spots taken on the table

    return 0;
}

