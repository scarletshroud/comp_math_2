#include "iterative_method.h"

double IterativeMethod::solve(std::function<double(double)> fun, double x, double epsilon) 
{
	double y;
	double b;

	do 
	{
		y = fun(x);
		b = fabs(x - y);
		x = y;

	} while (b >= epsilon);

	return x;
}
