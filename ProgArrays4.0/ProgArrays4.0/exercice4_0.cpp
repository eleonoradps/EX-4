#include <iostream>

// exercice 4.0

int main() {

	const int taille = 10;

	int entier[taille];

	std::cout << "Entrez dix entiers compris entre - infini et + infini \n";

	for (int i = 0; i < taille; i++)  // boucle pour entrer chaque entier
	{
		std::cin >> entier[i];
	}

	for (int i = 0; i < taille; i++) // boucle pour écrire les nombres sup à zéro
	{
		if (entier[i] > 0) {
			std::cout << "Les nombres superieurs a 0 sont " << entier[i] << "\n";
		}
	}

	return EXIT_SUCCESS;

}