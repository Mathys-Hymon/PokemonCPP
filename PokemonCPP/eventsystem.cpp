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
			cout << "Ah j'ai du mal entendre désolé, comment je dois t'appeler ?" << endl;
		}
		else if (answer == "oui") {
			entityList.getTrainer(0).SetName(name);
		};
	}
	cout << "Ok ! Ton nom est donc " << entityList.getTrainer(0).GetName() << " !" << endl;
	cin.ignore();
	cout << "et voici mon petit-fils." << endl;
	cin.ignore();
	cout << "Vous êtes rivaux depuis votre tendre enfance." << endl;
	cin.ignore();
	cout << "... Heu..." << endl << "C'est quoi son nom déjà ?" << endl;

	answer = "";
	while (answer != "oui") {
		string name = "";
		cin >> name;
		cout << "Euh, c'est bien " << name << " ?" << endl;
		cout << "    oui            non" << endl;
		cin >> answer;
		if (answer == "non") {
			cout << "Ah ma mémoire me joue vraiment des tours, comment s'appelle t'il déjà ?" << endl;
		}
		else if (answer == "oui") {
			entityList.getTrainer(1).SetName(name);
		};
	}
	cout << "Mais oui, bien sûr que je m'en souviens, c'est " << entityList.getTrainer(1).GetName();
		cin.ignore();
	cout << "Aujourd'hui est un grand jour, le jour ou vous allez choisir votre premier pokemon !" << endl;
	cin.ignore();
	cout << entityList.getTrainer(1).GetName() << " : a toi l'honneur, mais entre nous, peu importe ton choix, sache que je te mettrai inévitablement la pâtée de toute façon !" << endl << endl;
	cin.ignore();
	cout << "En premier il y a Bulbizarre, il a une étrange graine plantée sur son dos." << endl;
	cin.ignore();
	cout << "Ensuite il y a Carapuce. Son dos durcit avec l'âge et devient une super carapace." << endl;
	cin.ignore();
	cout << "Et enfin il y a Salamèche. Il préfère les endroits chauds. En cas de pluie, de la vapeur se forme autour de sa queue." << endl;
	cin.ignore();
	cout << "Alors, quel pokémon préfèrerais-tu avoir dans ton équipe ?" << endl;
	cout << endl << "1 - Bulbizarre         2- Carapuce        3-Salamèche" << endl;
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
		cout << "très bien, tu veux intégrer " << entityList.getPokemon(selectedPokemon).GetName() << " a ton équipe ?" << endl;
		cout << "    oui            non" << endl;
		cin >> answer;
		if (answer == "non") {
			cout << "Ah désolé, j'ai du mal comprendre, quel pokemon veut tu ajouter a ton équipe ?" << endl;
			cout << endl << "1 - Bulbizarre         2- Carapuce        3-Salamèche" << endl;
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

