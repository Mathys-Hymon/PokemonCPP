#pragma once
#include <vector>
#include "Pokemon.h"
#include "Trainer.h"

using namespace std;

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

