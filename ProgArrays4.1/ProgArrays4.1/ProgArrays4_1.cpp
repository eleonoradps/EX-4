#include <iostream>


// exercice 4.1


int main() {

	int numbers[10];
	int min;
	int max;


	for (int i = 0; i < 10; i++) {
		std::cout << "Entrez un entier " << i + 1 << "\n";
		std::cin >> numbers[i];
	}

	min = numbers[0];
	max = numbers[0];

	for (int i = 1; i < 10; i++) {

		if (numbers[i] < min)
			min = numbers[i];
	}

	for (int i = 1; i < 10; i++) {

		if (numbers[i] > max)
			max = numbers[i];
	}

	std::cout << "Le plus petit nombre est " << min << "\n";
	std::cout << "Le plus grand nombre est " << max << "\n";

	return EXIT_SUCCESS;

}