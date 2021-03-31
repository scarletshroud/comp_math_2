#include "console_reader.h"


void ConsoleReader::readInput(double* a, double* b, double* x, double* eps) 
{
	std::cout << "Enter the first border." << std::endl;
	std::cin >> *a;

	std::cout << "Enter the second border." << std::endl;
	std::cin >> *b;

	std::cout << "Enter the approximation." << std::endl;
	std::cin >> *x;

	std::cout << "Enter the epsilon." << std::endl;
	std::cin >> *eps;
}