#include "structures.h"
#include<iostream>
void show_person(person& P)
{
	std::cout << "Name: " << P.name << '\n';
	std::cout << "Age: " << P.age << '\n';
	std::cout << "Position: " << P.position << '\n';
	std::cout << "Salary: " << P.salary << '\n';
}
