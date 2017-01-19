#include "Hand.h"

hand::hand(){
	size = 0;
	cards.resize(size);
}

void hand::addCard(card c){
	size++;
	cards.resize(size);
	cards[size-1] = c;
}

bool hand::removeCard(card c){
	if(size != 0){
		for(int i = 0; i < size; i++){
			if(c.getValue() == cards[i].getValue()){
				cards.erase(cards.begin()+i);
				size--;
				return true;
			}
		}
	}
	return false;
}

void hand::lookAtCards(){
	if(!empty()){
		for(int i = 0; i < size; i++){
			cards[i].readCard();
		}
	}
	else{		
		cout << "No Cards\n" << endl;
	}
}


bool hand::empty(){
	if(size == 0)
		return true;
	else 
		return false;
}

int hand::howManyCards(){
	return size;
}

card hand::thisCard(int i){
	return cards[i];
}