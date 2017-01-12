#include <iostream>
#include <string>
#include "Deck.h"

using namespace std;

deckOfCards::deckOfCards(){
	title = "deck";
	description = "placeholder";
	size = 0;
	topCard = 0;
	cards.resize(size);
}

void deckOfCards::buildDeck(string ttl, string desc, int num){
	title = ttl;
	description = desc;
	size = num;
	cards.resize(size);
}

void deckOfCards::cardsInDeck(){
	for(int i = 0; i < size;i++){
		cards[i].readCard();
	}
}

void deckOfCards::whatDeck(){
	cout << "\n--------------------" << endl;
	cout << "Title: "<< title << endl;
	cout << "Description: " << description << endl;
	cout << "Cards in Deck: " << size << endl;
	cout << "--------------------\n" << endl;
}

void deckOfCards::addCard(card theCard){
	cout << "Adding Card to Deck..." << endl;
	size = size + 1;
	cards.resize(size);
	cards[size-1] = theCard;
}

void deckOfCards::shuffleDeck(){
	cout << "Shuffling Deck..." << endl;
	srand ( unsigned ( std::time(0) ) );
	random_shuffle ( cards.begin(), cards.end() );
	topCard = 0;
}

void deckOfCards::shuffleDiscard(){
	cout << "Putting Discard Pile Back into Deck..." << endl;
	for(int i = 0; i < size;i++){	
		if(cards[i].cardStatus() == discard)
			cards[i].placeCard(deck);
	}
	shuffleDeck();
}

void deckOfCards::drawCard(){
	bool drewCard = false;
	while(!drewCard){
		if(topCard == size){
			cout << "Out of Cards" << endl;
			shuffleDiscard();
		}
		if(cards[topCard].cardStatus() == deck) {
			cout << "Drawing..." << endl;
			cards[topCard].placeCard(hand);
			cards[topCard].readCard();
			drewCard = true;
		}
		topCard++;
	}
}

void deckOfCards::lookAtHand(){
	cout << "Your hand..." << endl;
	for(int i = 0; i< size; i++){
		if(cards[i].cardStatus() == hand){
			cards[i].readCard();
		}
	}
}