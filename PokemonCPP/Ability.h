#pragma once
#include <iostream>
#include <string>
#include "Poketype.h"

class Ability
{
private:
	std::string name;
	int damage;
	PokeType type;
	int useNum;
public:
	Ability(std::string newName, int newDamage, PokeType newType,	int newNum);
	std::string& getName();
	int GetDamage();
	PokeType getPoketype();
};

