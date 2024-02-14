#include "Ability.h"

Ability::Ability(std::string newName, int newDamage, PokeType newType, int Usibility)
	: name(newName), damage(newDamage), type(newType), useNum(Usibility)
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

void Ability::SetEnergy(int& energy)
{
	if (energy == 0) {
		useNum -= 1;
	}
	else {
		useNum = energy;
	}

}



