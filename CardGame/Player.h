#pragma once
#include "Deck.h"

using namespace std;

class player{
public:
	player();
	player(string, int);
	bool drawCard(deck&);
	effect playCard(int,hand&);
	void lookAtHand();
protected:
private:
	hand myHand;
	string name;
	int points;
};