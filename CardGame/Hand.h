#pragma once
#include <vector>
#include "Card.h"

using namespace std;

class hand{
public:
	hand();
	void addCard(card);
	bool removeCard(card);
	void lookAtCards();
	int howManyCards();
	card thisCard(int);
	bool empty();//Are the no more cards?
protected:	
	int size;
	vector<card> cards;
private:

};