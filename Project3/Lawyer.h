#pragma once
#include "Human.h"
class Lawyer : public Human 
{
	char* Aquidation;
	double salary;
public:
	Lawyer();
	Lawyer(const char* n, int a, const char* A, double S);
	~Lawyer();
	void Output(); // ��������������� ������ Output � �������!!
	void Input(const char* n, int a, const char* A, double S); //��������� ������ Input();
	void Salary();
};

