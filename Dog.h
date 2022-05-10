#pragma once
#include "Mammal.h"
#include "Animal.h"

class Dog :public Animal
{
public:
	Dog();
	Dog(const char b[], const char n[], const char c[], const char no[], const char s[]);
	Dog(Dog& op1);
	~Dog();

	virtual void getDescription();
	virtual void getDescriptionf(ofstream& op1);
};

