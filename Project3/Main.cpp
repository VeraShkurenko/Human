#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;

int main()
{
	Student a("Oleg",19,"Itstep",2000);
	a.Output();
	a.Input("Irina",20,"Politex",200);
	a.Output();


	Teacher b("Ivan", 32, "Itstep School", 20000);
	b.Output();
	b.Input("Olga", 43, "Politex University", 18000);
	b.Output();
}