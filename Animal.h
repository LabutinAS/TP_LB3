#pragma once
#include "Mammal.h"
#include <iostream>

using namespace std;

class Animal : public Mammal
{
protected:
	string breed;
	string name;
	string color;
	string name_owner;
	string surname_owner;
	string patronymic;
	string size;

public:
	Animal();
	Animal(const char b[], const char n[], const char c[], const char no[], const char s[]);
	Animal(Animal& op1);
	~Animal();


	void enter();
	void deleted();
	virtual void getDescription();
	virtual void getDescriptionf(ofstream& op1);
	void print();
	void fprint(ofstream& op1);
};
