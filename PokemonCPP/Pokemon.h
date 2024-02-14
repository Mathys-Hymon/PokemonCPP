#pragma once
#include <iostream>
#include <string>
#include "Poketype.h"

using namespace std;

class Pokemon
{
private:
	string name;
	string description;
	int level;
	int xp;
	float lifePoints;
	float maxLife;
	float attackdamage;
	bool inPokeball = true;
	PokeType type;

public:

	Pokemon(string name, string description, PokeType type, float life, float attackDamage);
	void Attack(Pokemon& ennemy);
	void NewAbility();
	void Damaged(float damages);
	void FlipflopPokeball();
	void Die();
	void Heal(float healAmount);
	void GainXP(int xpAmount);
	void SetName(string& newName);
	string GetName();
};

