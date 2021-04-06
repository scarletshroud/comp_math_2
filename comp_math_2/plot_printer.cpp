#include "plot_printer.h"

PlotPrinter::PlotPrinter() : m_gnuplot() 
{
}

PlotPrinter::~PlotPrinter() {

}

void PlotPrinter::printPlotToPng(const char* path, const std::string function, double a, double b, double x) 
{
	m_gnuplot("set xrange [" + std::to_string(a) + ":" + std::to_string(b) + "]");
	m_gnuplot("set yrange [" + std::to_string(a) + ":" + std::to_string(b) + "]");

	m_gnuplot("set grid");

	m_gnuplot("set xzeroaxis lt -1");
	m_gnuplot("set yzeroaxis lt -1");

	m_gnuplot("set xlabel \"X\"");
	m_gnuplot("set ylabel \"Y\"");

	//m_gnuplot("set object circle at " + std::to_string(x)+ ", 0 size 3");
	m_gnuplot("set label \"root\" font \", 12\" at " + std::to_string(x) + ", 0 point lt 1 pt 3 ps 3 lc rgb \"red\"");
	
	m_gnuplot("set terminal png size 1024, 1024");
	m_gnuplot("set output \"plot.png\"");

	m_gnuplot("plot(" + function + ")");
}