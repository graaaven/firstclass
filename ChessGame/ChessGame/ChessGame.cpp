// Gary Sheridan
// Professor Macdougald
// introduction to c++
// project ChessBoard
// 1. prints chessboard

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

const int INT_COLUMNS = 8;
const int INT_ROWS = 8;

//function prototyping
void printBoard(char aryBoard[][INT_COLUMNS], int intRows);
void clearBoard(char aryBoard[][INT_COLUMNS], int intRows);
char fillAnyPiece(char aryBoard[][INT_COLUMNS], int intRow, int intColumn, char chrAnyLetter);
void fillRow(char aryBoard[][INT_COLUMNS], int intRow, char chrAnyLetter);

int main()
{
	//initializes array
	char aryBoard[INT_ROWS][INT_COLUMNS];	

	//fills chessboard of *
	clearBoard(aryBoard, INT_ROWS);

	//fills in pawns
	fillRow(aryBoard, 1, 'p');
	fillRow(aryBoard, 6, 'P');

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
		//adds tabs to the array to create the board
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

//fills in any piece in any piece inserted into the function (used for the backrow of both sides of the chess board)
char fillAnyPiece(char aryBoard[][INT_COLUMNS], int intRow, int intColumn, char chrAnyLetter) {
	aryBoard[intRow][intColumn] = chrAnyLetter;
	return chrAnyLetter;
}

//fills in a row full of the same character (used for p and P)
void fillRow(char aryBoard[][INT_COLUMNS], int intRow, char chrAnyLetter) {
	for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
		aryBoard[intRow][intColumn] = chrAnyLetter;
	}
}