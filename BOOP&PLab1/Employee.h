#pragma once
#ifndef EMPLOYEE

#define EMPLOYEE

#include <string>
#include <iostream>

using namespace std;

class Employee {
private:
	int salaryPerHour;
	int workLoadHours;
	string name;
public:
	int GetSalary() {
		return salaryPerHour * workLoadHours;
	}
	void PrintInfo() {
		cout << "Name:" << name << "\nSalaryPerHour:" << salaryPerHour << "\nWorkLoadHours:" << workLoadHours;
	}
};


#endif