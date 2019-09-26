#include <iostream>
#include <vector>
#include <time.h>

// exercice 4.4


int main() 
{

	int dragon;
	int cochons;
	int vieDragon = 100;
	int vieCochon = 10;
	int nbreTour = 0;
	int nbreCochon[10];
	int degatsDragon[] = { 5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int degatsCochon[] = { 1,2,3,4,5 };

	while (nbreTour + 1) // nombre de tour + ce qui se passe pendant chacun des tours
	{
		if (vieDragon <= 0) {
			std::cout << " Le dragon est mort. \n Fin de la partie \n ";
		}
		else if (vieCochon = 0) 
		{
			std::cout << "Les cochons sont morts. \n Fin de la partie \n";

		}
	}




	return EXIT_SUCCESS;
}
