#include <iostream>
#include <string>
#include "Player.h"

using namespace std;


player::player(){
	role = spectator;
}

void player::setRole(person r){
	role = r;
}

void player::playerInfo(){
	cout << "\n--------------------" << endl;
	cout << "Role: "<< role << endl;
	cout << "--------------------\n" << endl;
}