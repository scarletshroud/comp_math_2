#include "file_reader.h"

bool FileReader::readInput(const char* path, double* a, double* b, double* x, double* eps) {

	std::ifstream in(path); 

	if (!in.is_open()) {
		std::cout << "Unable to open the file." << std::endl;
		in.close();
		return false;
	}

	if (in.eof()) {
		std::cout << "Unable to read the first border." << std::endl;
		in.close();
		return false;
	}

	in >> *a;

	if (in.eof()) {
		std::cout << "Unable to read the second border." << std::endl;
		in.close();
		return false;
	}

	in >> *b; 

	if (in.eof()) {
		std::cout << "Unable to read the approximation." << std::endl;
		in.close();
		return false;
	}

	in >> *x; 

	if (in.eof()) {
		std::cout << "Unable to read the epsilon." << std::endl;
		in.close();
		return false;
	}

	in >> *eps;

	in.close();

	return true;
}