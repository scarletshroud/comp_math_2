#ifndef _FILE_READER_H_
#define _FILE_READER_H_

#include <fstream>
#include <iostream>

class FileReader
{
public:
	bool readInput(const char* path, double* a, double* b, double* x, double* eps);
};

#endif


