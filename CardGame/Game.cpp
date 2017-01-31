#include "Game.h"

game::game(){
	pl[0] = player(); 
	pl[1] = player(); 
	pl[2] = player(); 
	pl[3] = player(); 
	theDeck = deck();
	discardPile = hand();

	winNumber = 7;
	theDeck.createDeck();
	whoIsPlaying[0] = false;
	whoIsPlaying[1] = false;
	whoIsPlaying[2] = false;
	whoIsPlaying[3] = false;
	winner[0] = false;
	winner[1] = false;
	winner[2] = false;
	winner[3] = false;
}

void game::howManyPlayers(int numberOfPlayers){
	for(int i = 0; i < numberOfPlayers; i++){
		whoIsPlaying[i] = true;
		winner[i] = true;
	}
}

void game::setup(){
	theDeck.shuffle();
	discardPile.addCard(theDeck.drawTop());
	for(int i = 0; i < 4; i++){
		if(whoIsPlaying[i] == true){
			pl[i].drawCard(theDeck);
		}
	}
}

void game::theGame(){
	turn(pl[0]);
}

void game::turn(player& you){
	you.drawCard(theDeck);
	you.lookAtHand();
	int choice;
	cout << "[0]First card \n\tor \n[1] Second Card?" << endl;
	cin >> choice;
	cout << "You played " << endl;
	you.getCard(choice).readCard();
	theEffect(you.getCard(choice), you);
	you.discardCard(choice,discardPile);
}

void game::theEffect(card c, player& p){
	enum effect {guess,look,compare,ignore,draw,trade,discard,lose};
	switch(c.getAbility()){
	case guess:
		guessWho();
		break;
	case look:
		lookAt();
		break;
	case compare:
		compareWith(p);
		break;
	case ignore:
		ignoreEverything();
		break;
	case draw:
		drawAndDiscard();
		break;
	case trade:
		tradeWith(p);
		break;
	case discard:
		void discardThis();
		break;
	case lose:
		loseGame();
		break;
	default:
		cout << "nothing" << endl;
		break;
	}
}

void game::guessWho(){
	player p;
	p = pickWho();
	int what;
	bool y = false;
	while(!y){
		cout << "What card do they have?" << endl;
		cout << "[2] Priest\n[3] Baron\n[4] Handmaid\n[5] Prince\n[6] King\n[7] Countess\n[8] Princess" << endl;
		cin >> what;
		if(!(what > 8 || what < 2)){
			y = true;
			if(p.getCardValue(p.getCard(0)) == what){
				cout << "You were right!" << endl;
			}else{
				cout << "You were wrong" << endl;
			}
		}
	}
}

void game::lookAt(){
	player p;
	p = pickWho();
	p.lookAtHand();
	printf("\n");
}

void game::compareWith(player& you){
	player p;
	p = pickWho();
	if(p.getCardValue(p.getCard(0)) > you.getCardValue(you.getCard(0))){
		cout << "You Win!" << endl;
	}else{
		cout << "You Lose" << endl;
	}
}

void game::ignoreEverything(){
	cout << "Protection until your next turn" << endl;
}

void game::drawAndDiscard(){
	player p;
	p = pickWho();
	p.discardCard(0,discardPile);
	p.drawCard(theDeck);
}

void game::tradeWith(player& you){
	card c;
	cout << "Trade hands" << endl;
	player p;
	p = pickWho();
	c = p.getCard(0);
	you.addCard(c);
	c = you.getCard(0);
	p.addCard(c);
	you.deleteCard(0);
	p.deleteCard(0);
}

void game::discardThis(player& p){
	cout << "Discard if caught with King or Prince" << endl;
	if(p.getCardValue(p.getCard(0)) == 7)
		p.discardCard(0, discardPile);
	else
		p.discardCard(1,discardPile);
}

void game::loseGame(){
	cout << "Lose if discarded" << endl;
}
player& game::pickWho(){
	int who;
	while(true){
		cout << "Choose a Player" << endl;
		cout << "[0] Player1\n[1] Player2\n[2] Player3\n[3] Player4" << endl;
		cin >> who;
		if(!(who > 3 || who < 0))
			return pl[who];
	}
}
