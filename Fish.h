#pragma once
#include "Mammal.h"
#include "Animal.h"

class Fish :public Animal
{
public:
	Fish();
	Fish(Fish& op1);
	Fish(const char b[], const char n[], const char c[], const char no[], const char s[]);
	~Fish();

	virtual void getDescription();
	virtual void getDescriptionf(ofstream& op1);
};

