#include <iostream>
#include "Deck.h"
#include "Player.h"

deck myDeck = deck();
hand di = hand();
card c2 = card(2,look,"Priest","Look at another player's hand.");
player p1 = player("Mike",0);
player p2 = player("Mike",0);
player p3 = player("Mike",0);
player p4 = player("Mike",0);

using namespace std;

int main(){
	myDeck.createDeck();
	myDeck.shuffle();
	myDeck.lookAtCards();
	p1.drawCard(myDeck);
	p2.drawCard(myDeck);
	p3.drawCard(myDeck);
	p4.drawCard(myDeck);
	printf("\n");
	p1.lookAtHand();
	p2.lookAtHand();
	p3.lookAtHand();
	p4.lookAtHand();
	printf("\n");
	myDeck.lookAtCards();
	printf("\n");
	p1.playCard(0,di);
	p2.playCard(0,di);
	p3.playCard(0,di);
	p4.playCard(0,di);
	p1.lookAtHand();
	p2.lookAtHand();
	p3.lookAtHand();
	p4.lookAtHand();
	di.lookAtCards();
	printf("\n");
	myDeck.addCards(di);
	myDeck.lookAtCards();
	printf("\n");	
	myDeck.shuffle();
	myDeck.lookAtCards();
	printf("\n");
	return 0;
}

/*
6 5 4 3 2 1
6 5 4
3 2 1
6 3 5 2 4 1
*/