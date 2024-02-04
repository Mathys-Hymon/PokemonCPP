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

void Trainer::AddPokemon(Pokemon newPokemon)
{
	if (pokemons.size() <= 6) {
		pokemons.push_back(newPokemon);
		cout << newPokemon.GetName() << " a bien �t� ajout� dans ton �quipe !" << endl;
	}
	else {
		string answer;
		cout << "Il semble que ta composition d'�quipe Pok�mon soit actuellement compl�te. Souhaites-tu lib�rer un Pok�mon pour accueillir celui-ci ?" << endl;
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

void Trainer::SetName(string newName)
{
	firstName = newName;
}
