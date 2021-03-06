// Gary Sheridan
// Professor Macdougald
// introduction to c++
// project Mao
// 1. takes in player bets
// 2. plays until one player is out of money
// 3. displays who is the winner

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Card.h"
#include "Deck.h"
#include "DiscardPile.h"
#include "Player.h"
//using namespace std;

//value and face of card
void testCard() {
	Card objCard(1);
	std::cout << "Card Testing" << std::endl;
	std::cout << objCard.getValue() << std::endl
		<< objCard.getFaceValue() << std::endl
		<< objCard.getFaceString() << std::endl
		<< objCard.getSuiteValue() << std::endl
		<< objCard.getSuiteString() << std::endl
		<< objCard.toString() << std::endl;
	objCard.setValue(45);
}

//prints and shuffles deck
void testDeck() {
	Deck objDeck = Deck();
	std::cout << "Deck Testing" << std::endl;
	objDeck.printDeck();
	//Get cards until we reach the shuffle point you can also get cards until you reach NULL
	do {
		objDeck.getCard();
		std::cout << "Percentage: " << objDeck.getPercentOfDeckDealt() << std::endl;
	} while (!objDeck.shouldShuffle());
	if (objDeck.shouldShuffle()) {
		objDeck.shuffle();
	}
	objDeck.printDeck();
}

//checks card in discard pile for rules
void testDiscardPile() {
	Deck objDeck = Deck(4);
	objDeck.shuffle();
	DiscardPile objDiscard = DiscardPile();
	Card objCardToDiscard = objDeck.getCard();
	std::cout << objCardToDiscard.toString() << std::endl;
	objDiscard.addCard(objCardToDiscard);
	std::cout << objDiscard.getTopCard().toString() << std::endl;
}

//displays everthing the player has(hand, money, how much they bet, and tests if the card can go to the discard pile)
void testPlayer() {
	Player objPlayerOne = Player();
	Player objPlayerTwo = Player();
	Deck objDeck = Deck(4);
	DiscardPile objDiscard = DiscardPile();

	objDeck.shuffle();
	objPlayerOne.setBet(5);
	objPlayerTwo.setMoney(300);
	objPlayerTwo.setBet(400);
	for (int intCards = 0; intCards < 7; intCards++) {
		objPlayerOne.addCardToHand(objDeck.getCard());
		objPlayerTwo.addCardToHand(objDeck.getCard());
	}
	objPlayerOne.printHand();
	objPlayerOne.clearHand();
	objPlayerOne.printHand();
	std::cout << "-----" << std::endl;
	objPlayerTwo.printHand();
	//HINT: Logic for checking if player card can be added to discard.
	Card cardPlayerDiscard = objPlayerTwo.removeCardFromHand(0); //Remove card 1 NOTE: it's the index, index starts at zero
	if (objDiscard.checkValidCard(cardPlayerDiscard)) { //Check if it can be added to discard
		objDiscard.addCard(cardPlayerDiscard); //Add to discard
	}
	else { //Nope
		objPlayerTwo.addCardToHand(cardPlayerDiscard); //Add back to players hand.
	}
	objPlayerTwo.printHand();
	std::cout << "-----" << std::endl;
	objPlayerOne.wonBet();
	objPlayerOne.printHand();
	objPlayerTwo.lostBet();
	objPlayerTwo.printHand();
}


int main()
{
	srand(time(0)); //Setup the randomness at the beginning of the program
	const int INTNUMBEROFDECKS = 3;
	const int INTPLAYERHANDSIZE = 7;
	const int INTMAXPLAYERS = 6;
	int intNumberOfPlayers = 2;
	int intPlayerChoice = 0;

	Player objPlayerOne = Player();
	Player objPlayerTwo = Player();
	Deck objDeck = Deck();
	DiscardPile objDiscard = DiscardPile();

	//TODO: Your custom logic here
	//I made a rule that when a queen is played the other player has to draw 2 cards
	objDeck.shuffle();

	//plays the game until one player reaches zero money
	while (objPlayerOne.getMoney() != 0 && objPlayerTwo.getMoney() != 0) {
		objPlayerOne.inputBet();
		objPlayerTwo.inputBet();
		
		//fills both player hands at the start of each round
		for (int intCards = 0; intCards < 7; intCards++) {
			objPlayerOne.addCardToHand(objDeck.getCard());
			objPlayerTwo.addCardToHand(objDeck.getCard());
		}

		//prints both player hands after they get dealt
		objPlayerOne.printHand();
		objPlayerTwo.printHand();

		//loops until a player runs out of cards
		while (objPlayerOne.getNumberOfCards() != 0 && objPlayerTwo.getNumberOfCards() != 0) {

			//takes in player 1's card choice
			objPlayerOne.printHand();
			std::cout << "player 1 chose card number to play card" << std::endl;
			std::cin >> intPlayerChoice;
			intPlayerChoice = intPlayerChoice - 1;

			//sends the card the player chose to the discard
			Card objCardToDiscardPlayerOne = objPlayerOne.removeCardFromHand(intPlayerChoice);
			if (objDiscard.checkValidCard(objCardToDiscardPlayerOne)) { //Check if it can be added to discard
				objDiscard.addCard(objCardToDiscardPlayerOne); //Add to discard
			}
			objPlayerOne.printHand();

			//adds two cards to player Two's hand if player One plays a queen
			if (objCardToDiscardPlayerOne.getFaceString() == "Queen") {
				objPlayerTwo.addCardToHand(objDeck.getCard());
				objPlayerTwo.addCardToHand(objDeck.getCard());
				objPlayerTwo.printHand();
			}
			//ends loop if player one is out of cards
			if (objPlayerOne.getNumberOfCards() == 0) {
				break;
			}

			//takes in player 2's card choice
			objPlayerTwo.printHand();
			std::cout << "player 2 chose card number to play card" << std::endl;
			std::cin >> intPlayerChoice;
			intPlayerChoice = intPlayerChoice - 1;

			//removes card of player's choice
			Card objCardToDiscardPlayerTwo = objPlayerTwo.removeCardFromHand(intPlayerChoice);
			if (objDiscard.checkValidCard(objCardToDiscardPlayerTwo)) { //Check if it can be added to discard
				objDiscard.addCard(objCardToDiscardPlayerTwo); //Add to discard
			}
			objPlayerTwo.printHand();

			//adds two cards to player one's hand if player two plays a queen
			if (objCardToDiscardPlayerTwo.getFaceString() == "Queen") {
				objPlayerOne.addCardToHand(objDeck.getCard());
				objPlayerOne.addCardToHand(objDeck.getCard());
				objPlayerOne.printHand();
			}
		}
		//declares that player one has won and displays the money given to player one and displays player two's money after losing
		if (objPlayerOne.getNumberOfCards() == 0) {
			std::cout << "congratz Player One has won" << std::endl;
			objPlayerOne.wonBet();
			std::cout << "Player one's Money:" << objPlayerOne.getMoney() << std::endl;
			objPlayerTwo.lostBet();
			std::cout << "Player Two's Money:" << objPlayerTwo.getMoney() << std::endl;
		}
		else {
			//declares that player Two has won and displays the money given to player Two and displays player two's money after losing
			std::cout << "congratz Player Two has won" << std::endl;
			objPlayerTwo.wonBet();
			std::cout << "Player Two's Money:"<< objPlayerTwo.getMoney() << std::endl;
			objPlayerOne.lostBet();
			std::cout << "Player one's Money:" << objPlayerOne.getMoney() << std::endl;
		}
	}

	return 0;
}

