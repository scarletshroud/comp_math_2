#ifndef _CHORD_METHOD_H_
#define _CHORD_METHOD_H_

#include <functional>

class ChordMethod
{
public:
	double solve(std::function<double(double)> fun, double a, double b, double epsilon);

private:
	bool isConverges(std::function<double(double)> fun, double a, double b);

};

#endif
