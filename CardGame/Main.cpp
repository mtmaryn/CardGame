#include <iostream>
#include "Game.h"

game TheGame = game();

using namespace std;

int main(){

	TheGame.howManyPlayers(4);
	TheGame.setup();	

	return 0;
}

/*
6 5 4 3 2 1
6 5 4
3 2 1
6 3 5 2 4 1
*/