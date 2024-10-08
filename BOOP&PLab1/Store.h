#pragma once
#ifndef STORE

#define STORE

#include "Instrument.h"
#include "Employee.h"
#include <vector>

using namespace std;

class Store {
private:
	vector<Instrument> instruments;
	vector<Employee> employers;
	vector<Instrument> cart;
public:
	void ShowInstruments() {
		for (int i = 0; i < instruments.size(); i++)
		{
			cout << "ID: " << i << "\nName: " << instruments.at(i).GetName() << "\nPrice: " << instruments.at(i).GetPrice() << "\n";
		}
	}
	void AddInstrument() {
		string name;
		int price;
		int typeInt;
		cout << "Enter type(Piano - 1, Triangle - 2, Drums - 3): ";
		cin >> typeInt;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter price: ";
		cin >> price;

		switch (typeInt) {
		case 1:
			instruments.push_back(Piano(name, price));
			break;
		case 2:
			instruments.push_back(Triangle(name, price));
			break;
		case 3:
			instruments.push_back(Drums(name, price));
			break;

		}
	}
	void AddInstrument(string name,int price,int typeInt) {
		switch (typeInt) {
		case 1:
			instruments.push_back(Piano(name, price));
			break;
		case 2:
			instruments.push_back(Triangle(name, price));
			break;
		case 3:
			instruments.push_back(Drums(name, price));
			break;

		}

	}

	void AddToCart() {
		system("cls");
		ShowInstruments();
		int ID;
		cout << "Enter instrument ID: ";
		cin >> ID;

		cart.push_back(instruments.at(ID));

	}
	void ShowCart() {
		system("cls");
		for (int i = 0; i < cart.size(); i++)
		{
			cout << "\nName: " << cart.at(i).GetName() << "\nPrice: " << cart.at(i).GetPrice();
			cart.at(i).MakeSound();
		}
		int i;
		cout << "Enter something to continue";
		cin >> i;
	}
};


#endif