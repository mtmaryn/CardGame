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

card player::getCard(int i){
	return myHand.thisCard(i);
}

void player::deleteCard(int i){
	myHand.removeCard(myHand.thisCard(i));
}
void player::discardCard(int i, hand& dis){
	dis.addCard(myHand.thisCard(i));
	myHand.removeCard(myHand.thisCard(i));
}

int player::getCardValue(card c){
	return c.getValue();
}

void player::addCard(card c){
	myHand.addCard(c);
}