#include "Player.h"

player::player(){
	name = "Person";
	points = 0;
	myHand = hand();
}

player::player(string n, int p){
	name = n;
	points = p;
	myHand = hand();
}

bool player::drawCard(deck& d){
	myHand.addCard(d.drawTop());
	return true;
}

effect player::playCard(int c, hand& d){
	card f = myHand.thisCard(c);
	effect e; 
	e = f.getAbility();
	d.addCard(f);
	myHand.removeCard(f);
	return e;
}

void player::lookAtHand(){
	myHand.lookAtCards();
}
