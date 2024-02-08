#pragma once
#include <vector>
#include "Pokemon.h"
#include "Trainer.h"
#include "Ability.h"

class entityRef
{
private:
	vector<Pokemon> allPokemons;
	vector<Trainer> trainers;

public:

	entityRef();
	Pokemon getPokemon(int index);
	Trainer getTrainer(int index);

};

