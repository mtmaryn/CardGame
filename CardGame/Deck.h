#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <ctime>       
#include <cstdlib>
#include "Card.h"

using namespace std;

enum decks { locations, monsters, items };

class deckOfCards{
public:
	enum decks { locations, monsters, items };
	deckOfCards();
	void buildDeck(string,string, int); //What deck and how big?
	void whatDeck(); //What deck is this
	void cardsInDeck(); //See all the cards in the Deck
	void addCard(card); //Add a card to the deck
	void shuffleDeck(); //Shuffle the Deck
	void shuffleDiscard(); //Shuffle Discard back into deck
	void drawCard(); //Draw a card off of the Deck
	void lookAtHand(); //See what cards are in your hand
protected:
	string title;
	string description;
	int size;
	int topCard;
	vector<card> cards;
};