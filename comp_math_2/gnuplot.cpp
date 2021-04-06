#include "gnuplot.h"

Gnuplot::Gnuplot() 
{
	gnuplotpipe = _popen(GNUPLOT_NAME, "w");

	if (!gnuplotpipe) 
	{
		std::cout << "Gnuplot not found!";
	}
}

Gnuplot::~Gnuplot()
{
	fprintf(gnuplotpipe, "exit\n");
	_pclose(gnuplotpipe);
}


void Gnuplot::operator()(const std::string& command)
{
	fprintf(gnuplotpipe, "%s\n", command.c_str());
	fflush(gnuplotpipe);
}