#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"

using namespace std;

card test = card();
deckOfCards test2 = deckOfCards();



int main() {
	cout << "Testing..." << endl;
	test.writeCard("Town","A town", hand, location);
	test.readCard();
	test2.buildDeck("Location Deck", "Deck of places you can go", 5);
	test2.whatDeck();
	test2.cardsInDeck();
	cout << "\nBOO\n";
	test2.addCard(test);
	test2.cardsInDeck();

	return 0;
}

