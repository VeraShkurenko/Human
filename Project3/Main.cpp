#include <iostream>
#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include "Designer.h"
#include "Director.h"
#include "Lawyer.h"
#include "Programmer.h"
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

	Lawyer c("Vlad", 67, "PhD degree", 30000);
	c.Output();
	c.Input("Nina", 28, "Lawyer^s degree", 24000);
	c.Output();

	Programmer p("Julia", 31, "Middle", 40000);
	p.Output();
	p.Input("Irina", 20, "Junior", 25000);
	p.Output();

	Designer d("Lera", 17, "Illustrator", 5300);
	d.Output();
	d.Input("Rina", 21, "Graphic", 8200);
	d.Output();

	Director di("Lisa", 19, "BeCompany", 300000);
	di.Output();
	d.Input("Irina", 40, "HnD", 10000);
	d.Output();



}