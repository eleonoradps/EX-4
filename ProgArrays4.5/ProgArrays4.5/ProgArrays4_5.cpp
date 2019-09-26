#include <iostream>
#include <math.h>
#include <time.h>
#include <array>


// exercice 4.5

int main()
{

	int i;
	int userInput;
	int choix;
	srand(time(NULL));

	enum class couleurs
	{
		bleu,
		orange,
		jaune,
		rouge,
		noir,
		vert
	};


	std::array<couleurs, 4> ordiCouleurs;          // tableau pour les couleurs
	std::array<couleurs, 4> joueurCouleurs;

	for (int i = 0; i < 4; i++)                      // boucle pour chaque couleurs
	{
		int aleatoire = (rand() % 6) + 1;

		switch (aleatoire)
		{
		case 1:
			ordiCouleurs[i] = couleurs::bleu;
			break;

		case 2:
			ordiCouleurs[i] = couleurs::orange;
			break;

		case 3:
			ordiCouleurs[i] = couleurs::jaune;
			break;

		case 4:
			ordiCouleurs[i] = couleurs::rouge;
			break;

		case 5:
			ordiCouleurs[i] = couleurs::noir;
			break;

		case 6:
			ordiCouleurs[i] = couleurs::vert;
			break;
		}
	}

	int tour = 0;

	for (tour = 0; tour < 8; tour++)        // boucle pour le nombre de tour
	{
		if (tour == 7)                     // si joueur arrive au 7eme tour, il ne peut plus jouer
		{
			std::cout << "Vous ne pouvez plus continuer";
			break;
		}

		
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Choisissez un nombre \n";
			std::cin >> userInput;

			switch (userInput)
			{
			case 1:
				joueurCouleurs[i] = couleurs::bleu;
				std::cout << "bleu \n";
				break;

			case 2:
				joueurCouleurs[i] = couleurs::orange;
				std::cout << "orange \n";
				break;

			case 3:
				joueurCouleurs[i] = couleurs::jaune;
				std::cout << "jaune \n";
				break;

			case 4:
				joueurCouleurs[i] = couleurs::rouge;
				std::cout << "rouge \n";
				break;

			case 5:
				joueurCouleurs[i] = couleurs::noir;
				std::cout << "noir \n";
				break;

			case 6:
				joueurCouleurs[i] = couleurs::vert;
				std::cout << "vert \n";
				break;
			}

		}

		int correctValue = 0;

		for (int i = 0; i < 4; i++)
		{
			if (joueurCouleurs[i] == ordiCouleurs[i]) 
			{
				std::cout << "est le meme \n";
				correctValue++;
			}
			else 
			{
				std::cout << "pas la bonne couleurs \n";
			}
		}
		
		if (correctValue == 4) 
		{
			std::cout << " win \n";
			break;
		}
	}

	return EXIT_SUCCESS;
}