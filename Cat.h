#pragma once
#include "Mammal.h"
#include "Animal.h"
#include <fstream>

class Cat :public Animal
{
public:
	Cat();
	Cat(Cat& op1);
	Cat(const char b[], const char n[], const char c[], const char no[], const char s[]);
	~Cat();

	virtual void getDescription();
	virtual void getDescriptionf(ofstream& op1);

};

