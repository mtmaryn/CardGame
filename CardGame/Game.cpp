#include "Game.h"

game::game(){
	player p1 = player(); 
	player p2 = player(); 
	player p3 = player(); 
	player p4 = player(); 
	deck theDeck = deck();
	hand discardPile = hand();

	winNumber = 7;
	theDeck.createDeck();
	whoIsPlaying[0] = false;
	whoIsPlaying[1] = false;
	whoIsPlaying[2] = false;
	whoIsPlaying[3] = false;
}

void game::howManyPlayers(int numberOfPlayers){
	for(int i = 0; i < numberOfPlayers; i++){
		whoIsPlaying[i] = true;
	}
}

void game::setup(){
	theDeck.shuffle();
	discardPile.addCard(theDeck.drawTop());
	if(whoIsPlaying[0] == true){
		p1.drawCard(theDeck);
	}
	if(whoIsPlaying[1] == true){
		p2.drawCard(theDeck);
	}
	if(whoIsPlaying[2] == true){
		p3.drawCard(theDeck);
		winNumber = winNumber - 2;
	}
	if(whoIsPlaying[3] == true){
		p4.drawCard(theDeck);
		winNumber--;
	}
}

void game::turn(player p){
	p.lookAtHand();

}