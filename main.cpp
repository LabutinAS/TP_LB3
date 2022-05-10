#pragma once
#include "Mammal.h"
#include "Human.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Fish.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout("Result.txt");

	Mammal* D = new Dog;
	Mammal* H = new Human;
	Mammal* C = new Cat;
	Mammal* F = new Fish;


	char menu_choice;
	char submenu_choice;
	bool exit = true;
	char id;

	do
	{
		system("cls");
		cout << "Choose:" << endl;
		cout << "1. Human." << endl;
		cout << "2. Dog." << endl;
		cout << "3. Cat." << endl;
		cout << "4. Fish." << endl;
		cout << "5. Exit." << endl;
		cout << ">";
		cin >> id;
		while (id < '1' || id> '5')
		{
			cout << "Error, try again" << endl;
			cin >> id;
		}
		switch (id)
		{
		case '1':			
				system("cls");
				cout << "1. Insert your own information." << endl;
				cout << "2. Print information on the screen." << endl;
				cout << "3. Print information in the result file." << endl;
				cout << "4. Deleted." << endl;
				cout << ">";
				cin >> submenu_choice;
				while (submenu_choice < '1' || submenu_choice > '4')
				{
					cout << "Error, try again" << endl;
					cin >> submenu_choice;
				}
				switch (submenu_choice) {

				case '1':
					H->enter();
					system("Pause");
					break;
				case '2':
					H->print();
					system("Pause");
					break;
				case '3':
					H->fprint(fout);
					system("Pause");
					break;
				case '4':
					H->deleted();
					system("Pause");
					break;
				}
			break;
		case '2':
				system("cls");
				cout << "1. Insert your own information." << endl;
				cout << "2. Print information on the screen." << endl;
				cout << "3. Print information in the result file." << endl;
				cout << "4. Deleted." << endl;
				cout << ">";
				cin >> submenu_choice;
				while (submenu_choice < '1' || submenu_choice>'4')
				{
					cout << "Error, try again" << endl;
					cin >> submenu_choice;
				}
				switch (submenu_choice) {

				case '1':
					D->enter();
					system("Pause");
					break;
				case '2':
					D->print();
					system("Pause");
					break;
				case '3':
					D->fprint(fout);
					system("Pause");
					break;
				case '4':
					D->deleted();
					system("Pause");
					break;
				}
			break;
		case '3':
			system("cls");
			cout << "1. Insert your own information." << endl;
			cout << "2. Print information on the screen." << endl;
			cout << "3. Print information in the result file." << endl;
			cout << "4. Deleted." << endl;
			cout << ">";
			cin >> submenu_choice;
			while (submenu_choice < '1' || submenu_choice>'4')
			{
				cout << "Error, try again" << endl;
				cin >> submenu_choice;
			}
			switch (submenu_choice) {

			case '1':
				C->enter();
				system("Pause");
				break;
			case '2':
				C->print();
				system("Pause");
				break;
			case '3':
				C->fprint(fout);
				system("Pause");
				break;
			case '4':
				C->deleted();
				system("Pause");
				break;
			}
			break;
		case '4':
			system("cls");
			cout << "1. Insert your own information." << endl;
			cout << "2. Print information on the screen." << endl;
			cout << "3. Print information in the result file." << endl;
			cout << "4. Deleted." << endl;
			cout << ">";
			cin >> submenu_choice;
			while (submenu_choice < '1' || submenu_choice>'4')
			{
				cout << "Error, try again" << endl;
				cin >> submenu_choice;
			}
			switch (submenu_choice) {

			case '1':
				F->enter();
				system("Pause");
				break;
			case '2':
				F->print();
				system("Pause");
				break;
			case '3':
				F->fprint(fout);
				system("Pause");
				break;
			case '4':
				F->deleted();
				system("Pause");
				break;
			}
			break;
		case '5':
			exit = false;
			break;
		}
	} while (exit);

	fout.close();
	system("Pause");
	return 0;
}