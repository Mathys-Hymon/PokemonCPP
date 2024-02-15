#include "Ability.h"

Ability::Ability(std::string newName, int newDamage, PokeType newType, int Energy)
	: name(newName), damage(newDamage), type(newType), energy(Energy), maxEnergy(Energy)
{
}

std::string Ability::getName()
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

void Ability::SetEnergy(bool& newEnergy)
{
	if (newEnergy) {
		energy = maxEnergy;
	}
	else {
		energy -= 1;
	}

}

int Ability::GetEnergy()
{
	return energy;
}



