#pragma once
#include "Player.h"
#include "Deck.h"

using namespace std;

class game{
public:
	game();
	void howManyPlayers(int);
	void setup();
	void turn(player);
protected:
private:
	player p1; 
	player p2; 
	player p3; 
	player p4; 
	deck theDeck;
	hand discardPile;
	bool whoIsPlaying[4];
	int winNumber;
};