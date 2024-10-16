#pragma once
#include "Human.h"
class Programmer : public Human
{
	char* jobTitle;
	double salary;
public:
	Programmer();
	Programmer(const char* n, int a, const char* j, double s);
	~Programmer();
	void Output();
	void Input(const char* n, int a, const char* U, double S);
	void Salary();
};
