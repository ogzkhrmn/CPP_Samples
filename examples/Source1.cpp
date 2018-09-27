#include "Time.h"
#include "salesp.h"


int main()
{

	int userChoice;

	cout << "1: Time Example\n2:Sales Example\nInsert your choice: " << endl;
	cin >> userChoice;
	Time t;
	salesp sp;
	switch (userChoice)
	{
	case 1:
		t.setTime(12, 10, 0);
		t.printMilitary();
	case 2:
		sp.getSalesFromUser();
		sp.printAnnualSales();
	default:
		cout << "Wrong button. " << endl;
	}

	return 0;
}