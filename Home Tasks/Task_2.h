#pragma once
#include <iostream>
using namespace std;

class Employee {
public:
	virtual void calculatesalary() = 0;
};

class FullTimeEmployee : public Employee {
	float salary;
public:
	FullTimeEmployee(float r) :salary(r) {}
	void calculatesalary() override
	{
		cout << "FullTimeEmployee :: " << salary << endl;
	}
};

class PartTimeEmployee: public Employee {
	float hours, rate;
public:
	PartTimeEmployee(float h, float r) :hours(h), rate(r) {}
	void calculatesalary() override
	{
		cout << "PartTimeEmployee :: " << hours * rate << endl;
	}
};