#pragma once
#include "Human.h"
class Director : public Human
{
	char* company;
	double salary;
public:
	Director();
	Director(const char* n, int a, const char* j, double s);
	~Director();
	void Output();
	void Input(const char* n, int a, const char* U, double S);
};
