#include "answer.h"

Answer::Answer()
{
	m_root = 0;
	m_value = 0;
	m_iterations = 0;

	m_correct = false;
}

Answer::Answer(bool correct)
{
	m_root = 0;
	m_value = 0; 
	m_iterations = 0;

	m_correct = correct;
}

Answer::Answer(double root, double value, size_t iterations, bool correct)
{
	m_root = root;
	m_value = value;
	m_iterations = iterations;
}

Answer::~Answer() {}

double Answer::root() 
{
	return m_root;
}

double Answer::value() 
{
	return m_value;
}

size_t Answer::iterations() 
{
	return m_iterations;
}

bool Answer::isCorrect() 
{
	return m_correct;
}