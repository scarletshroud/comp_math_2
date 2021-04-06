#ifndef _CHORD_METHOD_H_
#define _CHORD_METHOD_H_

#include <functional>

#include "answer.h"

class ChordMethod
{
public:
	Answer solve(std::function<double(double)> fun, double a, double b, double epsilon);

private:
	bool isConverges(std::function<double(double)> fun, double a, double b);
};

#endif
