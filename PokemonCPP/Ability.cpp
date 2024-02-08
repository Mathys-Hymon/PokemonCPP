#include "Ability.h"

Ability::Ability(std::string newName, int newDamage, PokeType newType, int newNum)
	: name(newName), damage(newDamage), type(newType), useNum(newNum)
{
}

std::string& Ability::getName()
{
	return name;
}

int Ability::GetDamage()
{
	return damage;
}

PokeType Ability::getPoketype()
{
	return type;
}


