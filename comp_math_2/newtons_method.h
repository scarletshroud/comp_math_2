#ifndef _NEWTONS_METHOD_H_
#define _NEWTONS_METHOD_H_

#include <functional>

class NewtonsMethod
{
public:
	double solve(std::function<double(double)> fun, double x, double n);

private:
	

};

#endif
