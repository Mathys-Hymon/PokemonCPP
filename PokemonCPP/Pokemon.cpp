#include "Pokemon.h"

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