#pragma once
#include "date1.h"

class Employee {
public:
	Employee(string, string, int, int, int, int, int, int);
	void print() const;
	~Employee();
private:
	string firstName;
	string lastName;
	const Date birthDate;
	const Date hireDate;
};