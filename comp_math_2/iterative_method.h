#ifndef _ITERATIVE_METHOD_H_
#define _ITERATIVE_METHOD_H_

#include <functional>

class IterativeMethod
{

public:
	double solve(std::function<double(double)> fun, double x, double epsilon);

};

#endif

