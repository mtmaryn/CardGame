#pragma once
#include "Deck.h"

using namespace std;

class player{
public:
	player();
	player(string, int);
	bool drawCard(deck&);
	effect playCard(int,hand&);
	card getCard(int);
	int getCardValue(card);
	void deleteCard(int);
	void discardCard(int,hand&);
	void lookAtHand();
	void addCard(card);
protected:
private:
	hand myHand;
	string name;
	int points;
};