#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Trainer
{
private:
	string firstName;
	string lastName;
	string catchphrase;
	int money;
	float lifePoints;
	float maxLife;
	Pokemon pokemons;
	bool inPokeball = true;

public:

	void InitTrainer(Pokemon ennemy);
	void FlipflopPokeball();
	void Die();
	void Heal(float healAmount);
};

