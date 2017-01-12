#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Card.h"

using namespace std;

enum decks { locations, monsters, items };

class deckOfCards{
public:
	deckOfCards();
	void buildDeck(string,string, int);
	void whatDeck();
	void cardsInDeck();
	void addCard(card);
protected:
	string title;
	string description;
	int size;
	vector<card> cards;
};
