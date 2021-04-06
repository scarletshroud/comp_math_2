#ifndef _ANSWER_H_
#define _ANSWER_H_

class Answer
{

public:
	Answer();
	Answer(bool correct);
	Answer(double root, double value, size_t iterations, bool correct);
	~Answer();

	double root();
	double value(); 

	size_t iterations();

	bool isCorrect();

private:
	double m_root; 
	double m_value; 

	size_t m_iterations;

	bool m_correct;
};

#endif



