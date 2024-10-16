#pragma once
#include "Human.h"
class Designer : public Human
{
	char* jobTitle;
	double salary;
public:
	Designer();
	Designer(const char* n, int a, const char* j, double s);
	~Designer();
	void Output();
	void Input(const char* n, int a, const char* U, double S);
	void Salary();
};
