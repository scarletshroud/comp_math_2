#ifndef _PLOT_PRINTER_
#define _PLOT_PRINTER_

#include <string>

#include "answer.h"
#include "gnuplot.h"

class PlotPrinter {
public:
	PlotPrinter();
	~PlotPrinter();

	void printPlotToPng(const char* path, const std::string function, double a, double b, double x); 

private:
	Gnuplot m_gnuplot;
};

#endif

