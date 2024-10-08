#pragma once
#ifndef INSTRUMENT

#define INSTRUMENT

#include <string>
#include <iostream>

using namespace std;

class Instrument {
protected:
	int price;
	string name;
	
public:
	Instrument(string name, int price) {
		this->name = name;
		this->price = price;
	}
	int GetPrice() {
		return price;
	}
	string GetName() {
		return name;
	}
	virtual void MakeSound() {
		cout << "\nSome sound" << endl;
	}
};
class Piano : public Instrument {
public:
	Piano(string name, int price) : Instrument(name, price) {

	}
	void MakeSound() override {
		cout << "\nPlink" << endl;
	}
};
class Triangle : public Instrument {
public:
	Triangle(string name, int price) : Instrument(name, price) {

	}
	void MakeSound() override {
		cout << "\nDinnnng" << endl;
	}
};

class Drums : public Instrument {
public:
	Drums(string name, int price) : Instrument(name, price) {

	}
	void MakeSound() override {
		cout << "\nBadum Tss" << endl;
	}
};


#endif