// Gary Sheridan
// professor Macdougald
// introduction to c++
// project tictactoe
// 1. display tic tac toe board
// 2. have users take turns to enter coordinates to fill in tic tac toe board
// 3. repeat step 2 until one player wins
// 4. display who is the winner

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

const int INT_COLUMNS = 3;
const int INT_ROWS = 3;

//function prototyping
void printBoard(char aryBoard[][INT_COLUMNS], int intRows);
void clearBoard(char aryBoard[][INT_COLUMNS], int intRows);
char fillXorO(char aryBoard[][INT_COLUMNS], int intXcoordinate, int intYcoordinate, char chrLetter);
char playerTurn(char chrLetter);
int determiningWinner(char aryBoard[][INT_COLUMNS], char chrLetter, int intCounter);
int getXCoordinate(int intXcoordinate, bool boolWinner);
int getYCoordinate(int intXcoordinate, bool boolWinner);

int main()
{
	int intYCoordinate = '*';
	int intXCoordinate = '*';
	char chrPlayerLetter = '*';
	char aryBoard[INT_ROWS][INT_COLUMNS];
	char chrLetter = 'X';
	int intCounter = 0;
	bool boolWinner = false;

	//prints out * for array
	clearBoard(aryBoard, INT_ROWS);

	do {
		//displays which player turn it is
		cout << "player " << chrLetter << "'s turn" << endl;

		//gets input from user
		intXCoordinate = getXCoordinate(intXCoordinate,boolWinner);
		intYCoordinate = getYCoordinate(intYCoordinate,boolWinner);

		//adds X or O to the table based on which turn it is
		fillXorO(aryBoard, intXCoordinate, intYCoordinate, chrLetter);
		printBoard(aryBoard, INT_ROWS);

		//sets counter to 3 if row/column/diagonal is full of the same character otherwise sets to 0
		intCounter = determiningWinner(aryBoard, chrLetter, intCounter);
		
		//switches player turns
		chrLetter = playerTurn(chrLetter);

		//closes do while loop if counter is equal 3
		if (intCounter == 3) {
			boolWinner = true;

			//switches character letter
			chrLetter = playerTurn(chrLetter);
		}

	} while (boolWinner == false);

	//congratulates the player for winning
	cout << "congratz to player " << chrLetter << " has won" << endl;

	return 0;
}

void printBoard(char aryBoard[][INT_COLUMNS], int intRows)
{
	//loops to display the table
	for (int intRow = 0; intRow < intRows; intRow++)
	{
		//adds tabs to the array to create the tic tac toe board
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << "\t";
			cout << aryBoard[intRow][intColumn];
		}
		cout << endl;
	}
}

void clearBoard(char aryBoard[][INT_COLUMNS], int intRows) {
	//fills the tic tac toe table with *
	for (int intRow = 0; intRow < intRows; intRow++)
	{
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			aryBoard[intRow][intColumn] = '*';
		}
	}
}

//fills in any piece in any piece inserted into the function (used for the backrow of both sides of the chess board)
char fillXorO(char aryBoard[][INT_COLUMNS], int intXCoordinate, int intYCoordinate, char chrLetter)
{
	if (aryBoard[intYCoordinate][intXCoordinate] != '*')
		{
		//gets input from here if user tried to put a coordinate in the wrong spot
			cout << "coordinate already filled" << endl;
			cout << "it is still player " << chrLetter << "'s turn" << endl;
			cout << "please enter the x coordinate:";
			cin >> intXCoordinate;

			cout << "please enter the y coordinate:";
			cin >> intYCoordinate;

			aryBoard[intYCoordinate][intXCoordinate] = chrLetter;
	}
	else {
			//fills in X or O depending on the player turn
			aryBoard[intYCoordinate][intXCoordinate] = chrLetter;
	}
	return chrLetter;
}

char playerTurn(char chrLetter)
{
	//switchs player turns
	if (chrLetter == 'X') {
		chrLetter = 'O';
	}
	else if (chrLetter == 'O') {
		chrLetter = 'X';
	}
	return chrLetter;
}

int determiningWinner(char aryBoard[][INT_COLUMNS], char chrLetter, int intCounter)
{
	//checks for horizontal win condition
	for (int intRow = 0; intRow < INT_ROWS; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			if (aryBoard[intRow][intColumn] == chrLetter) {
				intCounter++;
				
			}
		}
		if (intCounter == 3) {
			return intCounter;
		}
		intCounter = 0;
	}

	//checks for vertical win condition
	for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) 
	{
		for (int intRow = 0; intRow < INT_ROWS; intRow++) 
		{
			if (aryBoard[intRow][intColumn] == chrLetter) {
				intCounter++;
			}
		}
		if (intCounter == 3) {
			return intCounter;
		}
		intCounter = 0;
	}
	//diagonal top left to down bottom right
	for (int intRow = 0, intColumn = 0; intRow < INT_ROWS && intColumn < INT_COLUMNS; intRow++, intColumn++) {
		
		if (aryBoard[intRow][intColumn] == chrLetter) {
				intCounter++;
		}
		if (intCounter == 3) {
			return intCounter;
		}
	}
	intCounter = 0;
	
	//diagonal top right to bottom left win condition
	for (int intRow = 2, intColumn = 0; intRow < INT_ROWS && intColumn < INT_COLUMNS; intRow--, intColumn++) {
		//counts the amount of characters
		if (aryBoard[intRow][intColumn] == chrLetter) {
			intCounter++;
		}
		//returns counter if 3 to end the game
		if (intCounter == 3) {
			return intCounter;
		}
	}
	return 0;
}
int getYCoordinate(int intYCoordinate, bool boolWinner) {
	//gets Y coordinate
	while (boolWinner == false) {
		cout << "please enter the y coordinate (0-2):";
		cin >> intYCoordinate;
		return intYCoordinate;
	}
	return 0;
}
int getXCoordinate(int intXCoordinate, bool boolWinner) {
	//gets X coordinate
	while (boolWinner == false) {
		cout << "please enter the x coordinate (0-2):";
		cin >> intXCoordinate;
		return intXCoordinate;
	}
	return 0;
}


