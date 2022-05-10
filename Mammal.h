#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class Mammal {
public:
	virtual ~Mammal() { cout << "~Mammal" << endl; };
	virtual void print() = 0;
	virtual void enter() = 0;
	virtual void deleted() = 0;
	virtual void fprint(ofstream& op1) = 0;
	virtual void getDescription() = 0;
	virtual void getDescriptionf(ofstream& op1) = 0;
};
