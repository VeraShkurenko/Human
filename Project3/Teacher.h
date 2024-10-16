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
	void Output(); // переопределение метода Output в потомке!!
	void Input(const char* n, int a, const char* E, double S); //замещение метода Input();
	void Salary();

};

