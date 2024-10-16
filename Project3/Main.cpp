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
	/*Student a("Oleg",19,"Itstep",2000);
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
	d.Output();*/


	Human* human = nullptr;

	int choice = 0;

	cout << "1. Student " << endl;
	cout << "2. Teacher " << endl;
	cout << "3. Designer " << endl;
	cout << "4. Director " << endl;
	cout << "5. Lawyer " << endl;
	cout << "6. Programmer " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		human = new Student("Irina", 21, "Mechka", 2000);
		break;

	case 2:
		human = new Teacher("Ivan", 32, "Itstep School", 20000);
		break;

	case 3:
		human = new Designer("Rina", 21, "Graphic", 8200);
		break;

	case 4:
		human = new Director("Irina", 40, "HnD", 10000);
		break;

	case 5:
		human = new Lawyer("Vlad", 67, "PhD degree", 30000);
		break;

	case 6:
		human = new Programmer("Julia", 31, "Middle", 40000);
		break;
	}
	human->Output();
	human->Salary();

}