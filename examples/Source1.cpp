#include "examples.h"

void setX(Count*, int);

int main()
{
	int userChoice;
	int exit = 0;

	while (exit != 1)
	{
		cout <<
			"1: Time Example\n2:Sales Example\n3:Increment Example\n4:Objects as Members of Classes Example\n5:Friend Access Example\n"
			<<
			"6:This example\n7:Interface example\n"
			<<
			"Insert your choice : " << endl;
		cin >> userChoice;
		Time t;
		salesp sp;
		Increment inc(10, 20);
		Employee e("Oguz", "Kahraman", 16, 3, 1994, 3, 9, 2018);
		Count* count = new Count();
		ThisClass thisClass(4);
		Interface interface(3);
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
		case 5:
			cout << "Before friend" << endl;
			count->print();
			cout << "After friend" << endl;
			setX(count, 8);
			count->print();
			break;
		case 6:
			thisClass.print();
			break;
		case 7:
			cout << "Before set value : " << interface.getValue() << endl;
			interface.setValue(10);
			cout << "After set value : " << interface.getValue() << endl;
			break;
		default:
			cout << "Wrong button. " << endl;
			break;
		}

		cout << "Click 1 for exit" << endl;
		cin >> exit;
	}

	return 0;
}

//friend class access
void setX(Count* count, int x)
{
	count->x = x;
}
