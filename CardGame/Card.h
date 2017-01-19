#pragma once
#include <iostream>
#include <string>

using namespace std;

enum effect {guess,look,compare,ignore,draw,trade,discard,lose};

class card{
public:
	card();
	card(int,effect,string,string);
	void readCard();
	int getValue();
	effect getAbility();

protected:
private:
	int value;
	effect ability;
	string name;
	string description;
	
};