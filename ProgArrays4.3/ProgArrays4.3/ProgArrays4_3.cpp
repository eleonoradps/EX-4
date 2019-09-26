#include <iostream>
#include <list>


// exercice 4.3


int main() 
{

	std::list<int> A = { 2,6,19,32,104,110 };
	std::list<int> B = { 3,8,9,10,55,105,110 };
	std::list<int> C = { 1,5,6 };



	for (auto itB = B.begin(); itB != B.end(); ++itB) 
	{
		for (auto itA = A.begin(); itA != A.end(); itA++) 
		{
			if ( *itB <= *itA) 
			{
				A.insert(itA, *itB);
				break;
			}
		}
	}



	std::cout << "Voici la liste A : \n";

	for (auto itA = A.begin(); itA != A.end(); itA++) 
	{
		std::cout << *itA << "\n";
	}

	int i = 0;
	for (auto itC = C.begin(); itC != C.end(); itC++) {

		auto itA = A.begin();
		int index = *itC;

		if (index == 0)
		{
			A.erase(itA);
		}
		else
		{
			advance(itA, index - i);
			A.erase(itA);
		}
		i++;
	}

	std::cout << "Voici maintenant la liste A : \n";

	for (auto itA = A.begin(); itA != A.end(); itA++) 
	{
		std::cout << *itA << "\n";
	}
	return EXIT_SUCCESS;
}