#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Pokemon.h"

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

public:

	Trainer(string fisrtName, string lastName, string catchPhrase, int money, int life, vector<Pokemon> team );
	string SayCatchPhrase();
	string GetName();
	Pokemon getPokemon(int index);
	void AddPokemon(Pokemon newPokemon);
	void SetName(string& newName);
};

