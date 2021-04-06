#include <string>

#include "chord_method.h"
#include "newtons_method.h"
#include "iterative_method.h"

#include "file_reader.h"
#include "console_reader.h"

#include "answer.h"
#include "plot_printer.h"

const std::string F1_STR = "x * x * x + 2.28 * x * x - 1.934 * x - 3.907";

double f1(double x) {
	return x * x * x + 2.28 * x * x - 1.934 * x - 3.907;
}

int main() {

	double a, b, x, eps;

	FileReader fileReader;
	ConsoleReader consoleReader;

	ChordMethod chordMethod; 
	NewtonsMethod newtonsMethod;
	IterativeMethod iterativeMethod;

	PlotPrinter plotPrinter;

	size_t funNumber;
	std::cout << "Chose the function:\n 1: x^3 + 2.28x^2 - 1.934x - 3.907\n 2: fun2\n 3: fun3\n";
	std::cin >> funNumber;

	std::function<double(double)> fun;

	switch (funNumber) 
	{
		case 1:
			fun = f1;
			break;

		case 2:
			fun = f1;
			break;

		case 3:
			fun = f1;
			break;

		default:
			std::cout << "Incorrect number of function. Try again.";
			break;
	}

	consoleReader.readInput(&a, &b, &x, &eps);

	size_t methodNumber; 
	std::cout << "Chose the method:\n 1: Chord Method\n 2: Newtons Method\n 3: Iterative Method\n";
	std::cin >> methodNumber; 

	Answer answer;

	switch (methodNumber) 
	{
		case 1:
			answer = chordMethod.solve(fun, a, b, eps);
			break;

		case 2:
			answer = newtonsMethod.solve(fun, x, 20);
			break;

		case 3: 
			answer = iterativeMethod.solve(fun, x, eps);
			break; 

		default:
			std::cout << "Incorrect number of method. Try again.";
			break;
	}

	if (answer.isCorrect()) 
	{
		std::cout << "Root: " << answer.root() << std::endl;
		std::cout << "Value: " << answer.value() << std::endl;
		std::cout << "Amount of iterations: " << answer.iterations() << std::endl;

		plotPrinter.printPlotToPng("plot.png", F1_STR, a, b, answer.root());
	}
	else 
	{
		std::cout << "Impossible to find a root." << std::endl;
	}

	return 0;
}