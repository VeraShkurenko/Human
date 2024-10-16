#include <iostream>
#include "Programmer.h"
using namespace std;

Programmer::Programmer()
{
	cout << "Construct Programmer\n";
	name = nullptr;
	age = 12;
	jobTitle = nullptr;
	salary = 0;
}

Programmer::Programmer(const char* n, int a, const char* j, double s) :Human(n, a)
{
	cout << "Construct Programmer\n";
	salary = s;
	jobTitle = new char[strlen(j) + 1];
	strcpy_s(jobTitle, strlen(j) + 1, j);
}

Programmer::~Programmer()
{
	delete[]jobTitle;
	cout << "Destruct Programmer\n";
}

void Programmer::Output()
{
	cout << "Output Programmer\n";
	Human::Output();
	cout << "Job title: " << jobTitle << endl
		<< "Salary: " << salary << "$" << endl << endl;
}

void Programmer::Input(const char* n, int a, const char* j, double s)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (jobTitle != nullptr)
	{
		delete[] jobTitle;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	salary = s;
	jobTitle = new char[strlen(j) + 1];
	strcpy_s(jobTitle, strlen(j) + 1, j);
}

void Programmer::Salary()
{
	cout << "Programmer Salary is: " << salary << endl;
}

