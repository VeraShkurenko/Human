#include "Designer.h"
#include <iostream>
using namespace std;

Designer::Designer()
{
	cout << "Construct Designer\n";
	name = nullptr;
	age = 12;
	jobTitle = nullptr;
	salary = 0;
}

Designer::Designer(const char* n, int a, const char* j, double s) :Human(n, a)
{
	cout << "Construct Designer\n";
	salary = s;
	jobTitle = new char[strlen(j) + 1];
	strcpy_s(jobTitle, strlen(j) + 1, j);
}

Designer::~Designer()
{
	delete[]jobTitle;
	cout << "Destruct Designer\n";
}

void Designer::Output()
{
	cout << "Output Designer\n";
	Human::Output();
	cout << "Job title: " << jobTitle << endl
		<< "Salary: " << salary << "$" << endl << endl;
}

void Designer::Input(const char* n, int a, const char* j, double s)
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

