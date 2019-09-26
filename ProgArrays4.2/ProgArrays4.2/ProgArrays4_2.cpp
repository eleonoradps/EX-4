#include <iostream>
#include <vector>


// exercice 4.2


unsigned int fib(int n) 
{
	unsigned int fibo1 = 0;
	unsigned int fibo2 = 1;
	unsigned int fiboN;
	unsigned int fiboFinal;

	std::vector <unsigned int> fibonacci;

	if (n == 1) 
	{
		fibonacci.push_back(fibo1);
	}
	else if (n == 2) 
	{
		fibonacci.push_back(fibo2);
	}
	else 
	{
		for (int i = 2; i < n; ++i) 
		{
			fiboN = fibo1 + fibo2;
			fibonacci.push_back(fiboN);
			fibo1 = fibo2;
			fibo2 = fiboN;
		}
	}
	fiboFinal = fibonacci.back();
	return fiboFinal;
}

int main() 
{
	unsigned int n;
	unsigned int fibo;

	std::cout << "Entrez un nombre : \n";
	std::cin >> n;

	fibo = fib(n);

	std::cout << "Le terme de Fibonacci de " << n << " est " << fibo << "\n";
	return EXIT_SUCCESS;
}