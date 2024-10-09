#include "Director.h"
#include <iostream>
using namespace std;

Director::Director()
{
	cout << "Construct Director\n";
	name = nullptr;
	age = 12;
	company = nullptr;
	salary = 0;
}

Director::Director(const char* n, int a, const char* c, double s) :Human(n, a)
{
	cout << "Construct Director\n";
	salary = s;
	company = new char[strlen(c) + 1];
	strcpy_s(company, strlen(c) + 1, c);
}

Director::~Director()
{
	delete[]company;
	cout << "Destruct Director\n";
}

void Director::Output()
{
	cout << "Output Director\n";
	Human::Output();
	cout << "Company: " << company << endl
		<< "Salary: " << salary << "$" << endl << endl;
}

void Director::Input(const char* n, int a, const char* c, double s)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	if (company != nullptr)
	{
		delete[] company;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;

	salary = s;
	company = new char[strlen(c) + 1];
	strcpy_s(company, strlen(c) + 1, c);
}