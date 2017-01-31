#pragma once
#include "Player.h"
#include "Deck.h"

using namespace std;

class game{
public:
	game();
	void howManyPlayers(int);
	void setup();
	void theGame();
	void theEffect(card, player&);
	void turn(player&);
protected:
private:
	player pl[4]; 
	deck theDeck;
	hand discardPile;
	bool whoIsPlaying[4];
	bool winner[4];
	int winNumber;	
	void guessWho();
	void lookAt();
	void compareWith(player&);
	void ignoreEverything();
	void drawAndDiscard();
	void tradeWith(player&);
	void discardThis(player&);
	void loseGame();
	player& pickWho();


};