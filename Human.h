#pragma once
#include "Mammal.h"
#include <fstream>

class Human : public Mammal
{
protected:
	string FirstName;
	string Surname;
	string Patronymic;
	string Bday;
	string Nationality;
public:
	Human();
	Human(const char b[], const char n[], const char c[], const char no[], const char s[]);
	Human(Human& op1);
	~Human();

	void enter();
	void deleted();
	virtual void getDescription();
	virtual void getDescriptionf(ofstream& op1);
	virtual void print();
	virtual void fprint(ofstream& op1);
};

