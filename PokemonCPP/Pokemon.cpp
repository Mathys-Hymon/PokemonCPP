#include "Pokemon.h"



Pokemon::Pokemon(string newName, string newDescription, PokeType newType, float newLife)
	: name(newName), description(newDescription), level(1), lifePoints(newLife), maxLife(newLife), type(type)
{
}

Ability Pokemon::GetAbility(int index)
{
	return abilitys[index];
}

void Pokemon::NewAbility(Ability newAbility)
{
	abilitys.push_back(newAbility);
}


void Pokemon::Damaged(float damages)
{
	lifePoints -= damages;
	cout << name << " take " << damages << " damages" << endl;

	if (lifePoints <= 0) {
		Die();
	}
	else {
		cout << name << " get " << lifePoints << " life left" << endl;
	}
}

void Pokemon::FlipflopPokeball() {

}

void Pokemon::Die()
{
	cout << name << " is dead" << endl;
	cout << name << " is dead RIP" << endl;
}

void Pokemon::Heal(float healAmount)
{
	lifePoints += healAmount;
	cout << name << " eat a berry which give him " << healAmount << endl;
	cout << name << " now have " << lifePoints << endl;
}

void Pokemon::GainXP(int xpAmount)
{
	xp += xpAmount;

	if (xp >= 20 * (level / 2)) {
		xp = 0;
		level += 1;
		if (level >= 8) {

		}
	}
}

void Pokemon::SetName(string& newName)
{
	name = newName;
}

string Pokemon::GetName()
{
	return name;
}
