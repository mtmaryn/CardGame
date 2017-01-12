#pragma once

#include <iostream>
#include <string>

using namespace std;

enum person { dealer, participate, hero, dungeon_master, spectator };


class player{
public:
	player();
	void setRole(person);
	void playerInfo();
protected:
	person role;
};
