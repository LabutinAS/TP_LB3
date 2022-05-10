#include "Cat.h"
#include <string>

Cat::Cat()
{
	breed = '0';
	name = '0';
	color = '0';
	name_owner = '0';
	size = '0';
}

Cat::Cat(Cat& op1)
{
	breed = op1.breed;
	name = op1.name;
	color = op1.color;
	name_owner = op1.name_owner;
	size = op1.size;
}

Cat::Cat(const char b[], const char n[], const char c[], const char no[], const char s[])
{
	breed = b;
	name = n;
	color = c;
	name_owner = no;
	size = s;
}

Cat::~Cat()
{
	cout << "~Cat" << endl;
}

void Cat::getDescription()
{
	Animal::getDescription();
	cout << "This is cat." << endl;
}

void Cat::getDescriptionf(ofstream& op1)
{
	Animal::getDescriptionf(op1);
	op1 << "This is cat." << endl;
}