#pragma once
#include "Human.h"
class Teacher :public Human
{
	char* EducationalInstitution;
	double salary;
public:
	Teacher();
	Teacher(const char* n, int a, const char* E, double S);
	~Teacher();
	void Output(); // ��������������� ������ Output � �������!!
	void Input(const char* n, int a, const char* E, double S); //��������� ������ Input();
	void Salary();

};

