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
	vector<Pokemon> pokemons;
	//Pokemon actualPokemon;

public:

	Trainer(string fisrtName, string lastName, string catchPhrase, int money, int life, vector<Pokemon> team );
	string SayCatchPhrase();
	string GetName();
	void AddPokemon(Pokemon newPokemon);
	void SetName(string newName);
};

