#include "Trainer.h"


Trainer::Trainer(string newFirstName, string newLastName, string newCatchPhrase, int money,int newLife, vector<Pokemon> newTeam)
	: firstName(newFirstName),lastName(newLastName), catchphrase(newCatchPhrase), money(money), lifePoints(newLife), pokemons(newTeam)
{
}

string Trainer::SayCatchPhrase()
{
	return catchphrase;
}

string Trainer::GetName()
{
	return firstName;
}

Pokemon Trainer::getPokemon(int index)
{
	return pokemons[index];
}

void Trainer::AddPokemon(Pokemon newPokemon)
{
	if (pokemons.size() <= 6) {
		pokemons.push_back(newPokemon);

		string answer = "";
		cout << "Est ce que tu veux lui donner un petit nom ?" << endl;
		cout << "oui      non " << endl;
		cin >> answer;
		if (answer == "oui") {
			cout << "Très bien, comment veut tu l'appeler ? " << endl;
			cin >> answer;
			newPokemon.SetName(answer);
		}

		cout << newPokemon.GetName() << " a bien été ajouté dans ton équipe !" << endl;
	}
	else {
		string answer;
		cout << "Il semble que ton équipe soit actuellement complète. Souhaites-tu libérer un Pokémon pour accueillir celui-ci ?" << endl;
		cout << "oui      non " << endl;
		cin >> answer;
		if (answer == "oui") {
			cout << "Quel pokemon veux tu relacher pour le remplacer par celui ci ? " << endl;
			for (int i = 0; i < pokemons.size(); i++) {
				cout << i << "  " << pokemons[i].GetName() << endl;
			}
		}
	}
	
}

void Trainer::SetName(string& newName)
{
	firstName = newName;
}
