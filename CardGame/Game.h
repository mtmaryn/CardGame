#pragma once
#include "Player.h"
#include "Deck.h"

using namespace std;

class game{
public:
	game();
	void howManyPlayers(int);
	void setup();
	void getEffect();
protected:
private:
	player pl[4]; 
	deck theDeck;
	hand discardPile;
	bool whoIsPlaying[4];
	bool winner[4];
	int winNumber;	
	void guess();
	void look();
	void compare(player&);
	void ignore();
	void draw();
	void trade(player&);
	void discard(player&);
	void lose();
	player& pickWho();


};