#include "examples.h"

int main()
{

	int userChoice;
	int exit = 0;

	while (!exit)
	{
		cout << "1: Time Example\n2:Sales Example\n3:Increment Example\n4:Objects as Members of Classes Example\nInsert your choice: " << endl;
		cin >> userChoice;
		Time t;
		salesp sp;
		Increment inc(10, 20);
		Employee e("Oguz", "Kahraman", 16, 3, 1994, 3, 9, 2018);

		switch (userChoice)
		{
		case 1:
			t.setTime(12, 10, 0);
			t.printMilitary();
			break;
		case 2:
			sp.getSalesFromUser();
			sp.printAnnualSales();
			break;
		case 3:
			cout << "Before increment. " << endl;
			inc.print();
			for (size_t i = 0; i < 3; i++)
			{
				inc.addItem();
				cout << "After increment. " << i << endl;
				inc.print();
			}
			break;
		case 4:
			e.print();
			break;
		default:
			cout << "Wrong button. " << endl;
			break;
		}
		
		cout << "Clicl 1 for exit" << endl;
		cin >> exit;
	}

	return 0;
}