#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"
#include "Player.h"

using namespace std;


card test = card();
deckOfCards test2 = deckOfCards();
player player1 = player();


int main() {
	cout << "Testing..." << endl;
	test.writeCard("Town","A town", deck, location);
	test.readCard();
	test2.buildDeck("Location Deck", "Deck of places you can go", 4);
	test2.whatDeck();
	test2.cardsInDeck();

	test2.addCard(test);
	test2.cardsInDeck();

	test2.shuffleDeck();
	test2.cardsInDeck();

	test2.drawCard();
	test2.drawCard();
	test2.drawCard();
	
	test2.lookAtHand();

	player1.playerInfo();
	
	return 0;
}

