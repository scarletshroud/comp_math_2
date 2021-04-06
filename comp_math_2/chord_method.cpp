#include "chord_method.h"

#include <iostream>

Answer ChordMethod::solve(std::function<double(double)> fun, double a, double b, double epsilon)
{
	if (!isConverges(fun, a, b)) {
		std::cout << "Chord Method: Incorrect interval.";
		return Answer(false);
	}

	double x = 0;
	size_t k = 0;

	while (fabs(fun(b) - fun(a)) > epsilon) 
	{
		k++;

		x = (fun(b) * a - fun(a) * b) / (fun(b) - fun(a));

		if (fun(a) * fun(x) > 0)
		{
			a = x;
		} 
		else 
		{
			b = x;
		}
	}

	return Answer(x, fun(x), k, true);
}

bool ChordMethod::isConverges(std::function<double(double)> fun, double a, double b) 
{
	return (fun(a) * fun(b) < 0);
}