#pragma once
#include <windows.h>
#include "entityRef.h"

class eventsystem
{
private:
	string answer;
	entityRef entityList = entityRef();

public:
	void SelectCharacter();
	void StartFight();
	string ChangeName(int pokemonIndex);
};

