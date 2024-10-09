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

	Programmer p("Anna", 21, "middle", 2000);
	p.Output();
	p.Input("Irina", 20, "junior", 1000);
	p.Output();

	Designer d("Sonya", 30, "illustrator", 500);
	d.Output();
	d.Input("Irina", 20, "graphic", 200);
	d.Output();

	Director di("Nastya", 19, "BestCmpany", 300000);
	di.Output();
	d.Input("Irina", 20, "SecondCompany", 9000);
	d.Output();



}