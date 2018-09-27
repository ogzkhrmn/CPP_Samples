#include "salesp.h"

salesp::salesp()
{
	for (size_t i = 0; i < 12; i++)
		sales[i] = 0;
	
}

void salesp::getSalesFromUser()
{
	double salesFigure;

	for (size_t i = 0; i < 12; i++)
	{
		cout << "Enter sales amount for " << i + 1 << ": ";
		cin >> salesFigure;
		setSales(i, salesFigure);
	}
}

void salesp::setSales(int m, double s)
{
	if (m >= 0 && m < 12 && s > 0)
		sales[m] = s;
	else
		cout << "invalidop" << endl;
}

void salesp::printAnnualSales() {
	cout << setprecision(2)  << "\nThe total annual sales are: $" << totalAnnualSales() << setiosflags(ios::fixed) << endl;
}

double salesp::totalAnnualSales()
{
	double total = 0.0;

	for (size_t i = 0; i < 12; i++)
	{
		total += sales[i];
	}
	return total;
}


salesp::~salesp()
{
}
