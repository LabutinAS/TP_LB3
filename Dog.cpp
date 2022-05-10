#include "Dog.h"
#include <string>

using namespace std;

Dog::Dog()
{
	breed = '0';
	name = '0';
	color = '0';
	name_owner = '0';
	size = '0';
}

Dog::Dog(Dog& op1)
{
	breed = op1.breed;
	name = op1.name;
	color = op1.color;
	name_owner = op1.name_owner;
	size = op1.size;
}

Dog::Dog(const char b[], const char n[], const char c[], const char no[], const char s[])
{
	breed = b;
	name = n;
	color = c;
	name_owner = no;
	size = s;
}


Dog::~Dog()
{
	cout << "~Dog" << endl;
}


void Dog::getDescription()
{
	Animal::getDescription();
	cout << "This is dog." << endl;
}

void Dog::getDescriptionf(ofstream& op1)
{
	Animal::getDescriptionf(op1);
	op1 << "This is dog." << endl;
}