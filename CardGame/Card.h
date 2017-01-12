#pragma once

#include <iostream>
#include <string>

using namespace std;

enum Status { deck, hand, discard };
enum Type { location, monster, item };

class card{
public:
	card();
	void writeCard(string, string, Status, Type);
	void readCard();
	void placeCard(Status);
	Status cardStatus();
protected:
	string title;
	string description;
	Status status;
	Type type;
};
