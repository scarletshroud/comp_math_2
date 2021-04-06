#ifndef _GNUPLOT_H_
#define _GNUPLOT_H_

#include <string>
#include <cstdio>
#include <iostream>

#define GNUPLOT_NAME "gnuplot -persistent"

class Gnuplot
{
public:
	Gnuplot();
	~Gnuplot(); 

	void operator ()(const std::string& command);

private:
	FILE* gnuplotpipe;
};

#endif



