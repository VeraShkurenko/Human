#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher()
{
	cout << "Construct Teacher\n";
	name = nullptr;
	age = 12;
	EducationalInstitution = nullptr;
	salary = 0;
}

Teacher::Teacher(const char* n, int a, const char* E, double S) :Human(n, a)
{
	cout << "Construct Teacher\n";
	salary = S;
	EducationalInstitution = new char[strlen(E) + 1];
	strcpy_s(EducationalInstitution, strlen(E) + 1, E);
}

Teacher::~Teacher()
{
	delete[] EducationalInstitution;
	cout << "Destruct Teacher\n";
}

void Teacher::Output()
{
	cout << "Output Teacher\n";
	Human::Output();
	cout << "Educational Institution: " << EducationalInstitution << endl
		<< "Salary: " << salary << endl << endl;
}

void Teacher::Input(const char* n, int a, const char* E, double S)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (EducationalInstitution != nullptr)
	{
		delete[] EducationalInstitution;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	salary = S;
	EducationalInstitution = new char[strlen(E) + 1];
	strcpy_s(EducationalInstitution, strlen(E) + 1, E);
}

void Teacher::Salary()
{
	cout << "Teacher Salary is: " << salary << endl;
}



