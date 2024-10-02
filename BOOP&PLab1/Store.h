#pragma once
#ifndef STORE

#define STORE

#include "Instrument.h"
#include "Employee.h"
#include <list>

using namespace std;

class Store {
private:
	list<Instrument> instruments;
	list<Employee> employers;
public:

};


#endif