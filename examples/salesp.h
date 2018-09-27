#pragma once
#ifndef SALESP_H
#define SALESP_H
#include <iostream>
#include <iomanip>
using namespace std;

class salesp
{
public:
	salesp();
	void getSalesFromUser();
	void setSales(int, double);
	void printAnnualSales();
	~salesp();
private:
	double totalAnnualSales();
	double sales[12];
};
#endif

