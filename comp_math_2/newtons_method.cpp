#include "newtons_method.h"

double NewtonsMethod::solve(std::function<double(double)> fun, double x0, double n)
{
	double x = x0;
	double h = 0.00001;
	double df = 0;

	df = (fun(x + h) - fun(x)) / h; 

	for (size_t i = 1; i <= n; ++i) {
		x = x - fun(x) / df;
	}

	return x;
}