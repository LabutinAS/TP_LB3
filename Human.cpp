#include "Human.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Human::Human()
{
	FirstName = '0';
	Surname = '0';
	Patronymic = '0';
	Bday = '0';
	Nationality = '0';
}

Human::Human(const char b[], const char n[], const char c[], const char no[], const char s[])
{
	FirstName = b;
	Surname = n;
	Patronymic = c;
	Bday = no;
	Nationality = s;
}

Human::Human(Human& op1)
{
	FirstName = op1.FirstName;
	Surname = op1.Surname;
	Patronymic = op1.Patronymic;
	Bday = op1.Bday;
	Nationality = op1.Nationality;
}

Human::~Human()
{
	cout << "~Human" << endl;
}

void Human::enter()
{
	cout << "Enter Full Name: ";
	cin >> FirstName;
	cin >> Surname;
	cin >> Patronymic;
	cout << "Enter Birth Day(DD.MM.YYYY): ";
	cin >> Bday;
	cout << "Enter Nationality: ";
	cin >> Nationality;
}

void Human::deleted()
{
	FirstName = '0';
	Surname = '0';
	Patronymic = '0';
	Bday = '0';
	Nationality = '0';
}

void Human::getDescription()
{
	cout << "This is the Human." << endl;
}

void Human::getDescriptionf(ofstream& op1)
{
	op1 << "---------------This is the Human.-----------------" << endl;
}


void Human::print()
{
	if ((FirstName != "0") && (Surname != "0") && (Patronymic != "0") && (Bday != "0") && (Nationality != "0"))
	{
		this->getDescription();
		cout << "Full name: " << FirstName << " " << Surname << " " << Patronymic << endl;
		cout << "Birth Day: " << Bday << endl;
		cout << "Nationality: " << Nationality << endl;
	}
	else
		cout << "is empty"  << endl;
}

void Human::fprint(ofstream& op1)
{
	if ((FirstName != "0") && (Surname != "0") && (Patronymic != "0") && (Bday != "0") && (Nationality != "0"))
	{
	this->getDescriptionf(op1);
	op1 << "Full name: " << FirstName << " " << Surname << " " << Patronymic << endl;
	op1 << "Birth Day: " << Bday << endl;
	op1 << "Nationality: " << Nationality << endl;
	}
	else
		cout << "is empty" << endl;
}