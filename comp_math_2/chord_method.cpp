#include "chord_method.h"

#include <iostream>

double ChordMethod::solve(std::function<double(double)> fun, double a, double b, double epsilon)
{
	if (!isConverges(fun, a, b)) {
		std::cout << "Chord Method: Incorrect interval.";
		return -1.0;
	}

	double x = 0;

	while (abs(fun(b) - fun(a)) > epsilon) 
	{
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

	return x;
}

bool ChordMethod::isConverges(std::function<double(double)> fun, double a, double b) 
{
	return (fun(a) * fun(b) < 0);
}