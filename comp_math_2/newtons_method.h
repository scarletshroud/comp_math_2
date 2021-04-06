#ifndef _NEWTONS_METHOD_H_
#define _NEWTONS_METHOD_H_

#include <functional>

#include "answer.h"

class NewtonsMethod
{
public:
	Answer solve(std::function<double(double)> fun, double x, double n);
};

#endif
