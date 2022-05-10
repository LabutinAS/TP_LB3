#include "Fish.h"
#include <string>

Fish::Fish()
{
	breed = '0';
	name = '0';
	color = '0';
	name_owner = ' 0';
	size = '0';
}


Fish::Fish(Fish& op1)
{
	breed = op1.breed;
	name = op1.name;
	color = op1.color;
	name_owner = op1.name_owner;
	size = op1.size;
}

Fish::Fish(const char b[], const char n[], const char c[], const char no[], const char s[])
{
	breed = b;
	name = n;
	color = c;
	name_owner = no;
	size = s;
}

Fish::~Fish()
{
	cout << "~Fish" << endl;
}

void Fish::getDescription()
{
	Animal::getDescription();
	cout << "This is fish." << endl;
}

void Fish::getDescriptionf(ofstream& op1)
{
	Animal::getDescriptionf(op1);
	op1 << "This is fish." << endl;
}