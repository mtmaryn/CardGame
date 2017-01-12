#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

card::card(){
	title = "card";
	description = "placeholder";
	status = deck;
	type = location;
}

void card::writeCard(string ttl, string desc, Status s, Type ty){
	title = ttl;
	description = desc;
	status = s;
	type = ty;
}

void card::readCard(){
	cout << "\n--------------------" << endl;
	cout << "Title: "<< title << endl;
	cout << "Description: " << description << endl;

	cout <<  "Status: ";
	switch(status){
		case deck:
			cout << "Deck" << endl;
			break;
		case hand:
			cout << "Hand" << endl;
			break;
		case discard:
			cout << "Discard Pile" << endl;
			break;
		default:
			cout << "Lost" << endl;
			break;
	}
	
	cout <<  "Type: ";
	switch(type){
		case location:
			cout << "Location card" << endl;
			break;
		case monster:
			cout << "Monster card" << endl;
			break;
		case item:
			cout << "Item card" << endl;
			break;
		default:
			cout << "Unknown" << endl;
			break;
	}

	cout << "--------------------\n" << endl;
}

void card::placeCard(Status s){
	switch(s){
		case deck:
			status = deck;
			break;
		case hand:
			status = hand;
			break;
		case discard:
			status = discard;
			break;
		default:
			status = discard;
			break;
	}
}

Status card::cardStatus(){
	return status;
}