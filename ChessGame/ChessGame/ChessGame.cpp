// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

const int INT_COLUMNS = 8;
const int INT_ROWS = 8;

void fillWhitePonds(char aryBoard[][INT_COLUMNS], int intRow, int intColumn);
void printBoard(char aryBoard[][INT_COLUMNS], int intRows);
void clearBoard(char aryBoard[][INT_COLUMNS], int intRows);
void fillBlackPonds(char aryBoard[][INT_COLUMNS], int intRow, int intColumn);
char fillAnyPiece(char aryBoard[][INT_COLUMNS], int intRow, int intColumn, char chrAnyLetter);
void fillRow(char aryBoard[][INT_COLUMNS], int intRow);

int main()
{
	char aryBoard[INT_ROWS][INT_COLUMNS];	//initializes array

	clearBoard(aryBoard, INT_ROWS);
	fillRow(aryBoard, 1);
	//fillWhitePonds(aryBoard, 1, 0);
	//fillWhitePonds(aryBoard, 1, 1);				
	//fillWhitePonds(aryBoard, 1, 2);
	//fillWhitePonds(aryBoard, 1, 3);
	//fillWhitePonds(aryBoard, 1, 4);
	//fillWhitePonds(aryBoard, 1, 5);
	//fillWhitePonds(aryBoard, 1, 6); 
	//fillWhitePonds(aryBoard, 1, 7);
	fillBlackPonds(aryBoard, 6, 0);
	fillBlackPonds(aryBoard, 6, 1);
	fillBlackPonds(aryBoard, 6, 2);
	fillBlackPonds(aryBoard, 6, 3);
	fillBlackPonds(aryBoard, 6, 4);
	fillBlackPonds(aryBoard, 6, 5);
	fillBlackPonds(aryBoard, 6, 6);
	fillBlackPonds(aryBoard, 6, 7);

	//fills backrow for whites
	fillAnyPiece(aryBoard, 0, 0, 'r');
	fillAnyPiece(aryBoard, 0, 7, 'r');
	fillAnyPiece(aryBoard, 0, 6, 'h');
	fillAnyPiece(aryBoard, 0, 1, 'h');
	fillAnyPiece(aryBoard, 0, 4, 'k');
	fillAnyPiece(aryBoard, 0, 3, 'q');
	fillAnyPiece(aryBoard, 0, 2, 'b');
	fillAnyPiece(aryBoard, 0, 5, 'b');

	//fills backrow for blacks
	fillAnyPiece(aryBoard, 7, 0, 'R');
	fillAnyPiece(aryBoard, 7, 7, 'R');
	fillAnyPiece(aryBoard, 7, 6, 'H');
	fillAnyPiece(aryBoard, 7, 1, 'H');
	fillAnyPiece(aryBoard, 7, 3, 'K');
	fillAnyPiece(aryBoard, 7, 4, 'Q');
	fillAnyPiece(aryBoard, 7, 2, 'B');
	fillAnyPiece(aryBoard, 7, 5, 'B');

	printBoard(aryBoard, INT_ROWS);

	return 0;
}



void printBoard(char aryBoard[][INT_COLUMNS], int intRows) {

	//loops to display the row numbers set the table
	for (int intRow = 0; intRow < intRows; intRow++) {
		cout << "Row " << setfill('0') << setw(2) << (intRow + 1);

		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << "\t";
			cout << aryBoard[intRow][intColumn];
		}
		cout << endl;
	}
}

void clearBoard(char aryBoard[][INT_COLUMNS], int intRows) {

	//fills in the table of seats that are empty
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			aryBoard[intRow][intColumn] = '*';
		}
	}
}

char fillAnyPiece(char aryBoard[][INT_COLUMNS], int intRow, int intColumn, char chrAnyLetter) {
	aryBoard[intRow][intColumn] = chrAnyLetter;
	return chrAnyLetter;
}


void fillWhitePonds(char aryBoard[][INT_COLUMNS], int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'p';		//puts a "p" in where the ponds are
}

void fillRow(char aryBoard[][INT_COLUMNS], int intRow) {
	for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
		cout << 'p   ';
		cout << aryBoard[intRow][intColumn];
	}
}


void fillBlackPonds(char aryBoard[][INT_COLUMNS], int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'P';		//puts a "p" in where the ponds are
}