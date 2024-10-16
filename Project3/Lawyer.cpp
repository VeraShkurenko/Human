#include "Lawyer.h"
#include <iostream>
using namespace std;

Lawyer::Lawyer()
{
	cout << "Construct Lawyer\n";
	name = nullptr;
	age = 12;
	Aquidation = nullptr;
	salary = 0;
}

Lawyer::Lawyer(const char* n, int a, const char* A, double S) :Human(n, a)
{
	cout << "Construct Lawyer\n";
	salary = S;
	Aquidation = new char[strlen(A) + 1];
	strcpy_s(Aquidation, strlen(A) + 1, A);
}

Lawyer::~Lawyer()
{
	delete[] Aquidation;
	cout << "Destruct Lawyer\n";
}

void Lawyer::Output()
{
	cout << "Output Lawyer\n";
	Human::Output();
	cout << "Aquidation: " << Aquidation << endl
		<< "Salary: " << salary << endl << endl;
}

void Lawyer::Input(const char* n, int a, const char* A, double S)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (Aquidation != nullptr)
	{
		delete[] Aquidation;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	salary = S;
	Aquidation = new char[strlen(A) + 1];
	strcpy_s(Aquidation, strlen(A) + 1, A);
}

void Lawyer::Salary()
{
	cout << "Lawyer Salary is: " << salary << endl;
}
