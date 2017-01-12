#include <iostream>
#include <string>
#include "Deck.h"

using namespace std;

deckOfCards::deckOfCards(){
	title = "deck";
	description = "placeholder";
	size = 0;
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
	size = size + 1;
	cards.resize(size);
	cards[size-1] = theCard;
};
