#pragma once
#include <vector>
#include "Pokemon.h"
#include "Trainer.h"
#include "Ability.h"

class entityRef
{
private:
	static vector<Pokemon> allPokemons;
	static vector<Trainer> trainers;
	static vector<Ability> abilitys;

public:
	Pokemon& getPokemon(int index);
	Trainer& getTrainer(int index);
	Ability& getAbility(PokeType pokemonType);
};

