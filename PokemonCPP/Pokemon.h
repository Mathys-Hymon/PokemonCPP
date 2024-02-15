#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "entityRef.h"
#include "Poketype.h"
#include "Ability.h"

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
	PokeType type;
	static vector<Ability> abilitys;

public:

	Pokemon(string name, string description, PokeType type, float life,int damage, Ability ability1, Ability ability2);
	Ability GetAbility(int index);
	void NewAbility(Ability newAbility);
	void Damaged(float damages);
	void Die();
	void Heal(float healAmount);
	void GainXP(int xpAmount);
	void SetName(string& newName);
	string GetName();
};

