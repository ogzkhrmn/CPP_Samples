#include "Time.h"
#include "salesp.h"
#include "increment.h"

int main()
{

	int userChoice;

	cout << "1: Time Example\n2:Sales Example\n3:Increment Example\nInsert your choice: " << endl;
	cin >> userChoice;
	Time t;
	salesp sp;
	Increment inc(10,20);
	switch (userChoice)
	{
	case 1:
		t.setTime(12, 10, 0);
		t.printMilitary();
	case 2:
		sp.getSalesFromUser();
		sp.printAnnualSales();
	case 3:
		cout << "Before increment. " << endl;
		inc.print();
		for (size_t i = 0; i < 3; i++)
		{
			inc.addItem();
			cout << "After increment. " << i<< endl;
			inc.print();
		}
	default:
		cout << "Wrong button. " << endl;
	}

	return 0;
}