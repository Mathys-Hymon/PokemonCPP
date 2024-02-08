#include "eventsystem.h"

void eventsystem::SelectCharacter()
{

	cout << "Bienvenue dans le monde magique des POKEMON !" << endl;
	cin.ignore();
	cout << "Je suis le Professeur Chen. Comment devrais-je t'appeler ?" << endl;

	while (answer != "oui") {
		string name = "";
		cin >> name;
		cout << "D'accord, tu t'appelle " << name << " c'est bien ca ?" << endl;
		cout << "    oui            non" << endl;
		cin >> answer;
		if (answer == "non") {
			cout << "Ah j'ai du mal entendre d�sol�, comment je dois t'appeler ?" << endl;
		}
		else if (answer == "oui") {
			entityList.getTrainer(0).SetName(name);
		};
	}
	cout << "Ok ! Ton nom est donc " << entityList.getTrainer(0).GetName() << " !" << endl;
	cin.ignore();
	cout << "et voici mon petit-fils." << endl;
	cin.ignore();
	cout << "Vous �tes rivaux depuis votre tendre enfance." << endl;
	cin.ignore();
	cout << "... Heu..." << endl << "C'est quoi son nom d�j� ?" << endl;

	answer = "";
	while (answer != "oui") {
		string name = "";
		cin >> name;
		cout << "Euh, c'est bien " << name << " ?" << endl;
		cout << "    oui            non" << endl;
		cin >> answer;
		if (answer == "non") {
			cout << "Ah ma m�moire me joue vraiment des tours, comment s'appelle t'il d�j� ?" << endl;
		}
		else if (answer == "oui") {
			entityList.getTrainer(1).SetName(name);
		};
	}
	cout << "Mais oui, bien s�r que je m'en souviens, c'est " << entityList.getTrainer(1).GetName();
		cin.ignore();
	cout << "Aujourd'hui est un grand jour, le jour ou vous allez choisir votre premier pokemon !" << endl;
	cin.ignore();
	cout << entityList.getTrainer(1).GetName() << " : a toi l'honneur, mais entre nous, peu importe ton choix, sache que je te mettrai in�vitablement la p�t�e de toute fa�on !" << endl << endl;
	cin.ignore();
	cout << "En premier il y a Bulbizarre, il a une �trange graine plant�e sur son dos." << endl;
	cin.ignore();
	cout << "Ensuite il y a Carapuce. Son dos durcit avec l'�ge et devient une super carapace." << endl;
	cin.ignore();
	cout << "Et enfin il y a Salam�che. Il pr�f�re les endroits chauds. En cas de pluie, de la vapeur se forme autour de sa queue." << endl;
	cin.ignore();
	cout << "Alors, quel pok�mon pr�f�rerais-tu avoir dans ton �quipe ?" << endl;
	cout << endl << "1 - Bulbizarre         2- Carapuce        3-Salam�che" << endl;
	answer = "";
	int selectedPokemon = -1;
	while (answer != "oui") {
		string confirmation;
		cin >> answer;
		if (answer == "1") {
			selectedPokemon = 0;
		}
		else if (answer == "2") {
			selectedPokemon = 6;
		}
		else {
			selectedPokemon = 3;
		}
		cout << "tr�s bien, tu veux int�grer " << entityList.getPokemon(selectedPokemon).GetName() << " a ton �quipe ?" << endl;
		cout << "    oui            non" << endl;
		cin >> answer;
		if (answer == "non") {
			cout << "Ah d�sol�, j'ai du mal comprendre, quel pokemon veut tu ajouter a ton �quipe ?" << endl;
			cout << endl << "1 - Bulbizarre         2- Carapuce        3-Salam�che" << endl;
		}
	}
	entityList.getTrainer(0).AddPokemon(entityList.getPokemon(selectedPokemon));
	ChangeName(selectedPokemon);
	
}

void eventsystem::StartFight()
{

}

string eventsystem::ChangeName(int pokemonIndex)
{
	string nameAsnwer = "";
	answer = "";
	cout << "Est ce que tu veux lui donner un petit nom ?" << endl;
	cin >> answer;
	if (answer == "oui") {
		cin >> nameAsnwer;
		entityList.getTrainer(0).getPokemon(pokemonIndex).SetName(nameAsnwer);
	}
	else {
		return entityList.getPokemon(pokemonIndex).GetName();
	}
	return string();
}

