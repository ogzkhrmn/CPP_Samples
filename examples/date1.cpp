#include "date1.h"

Date::Date(int dy, int mn, int yr) : daysPerMont{ 31,28,31,30,31,30,31,31,30,31,30,31 } {
	if (mn > 0) {
		month = mn;
	}
	else
	{
		month = 1;
	}

	year = yr;
	day = checkDay(dy);

	cout << "Date object constructor for date ";
	print();
	cout << endl;
}


void Date::print() const{
	cout << day << "/" << month << "/" << year;
}

int Date::checkDay(int dy) {


	if (day > 0 && day < daysPerMont[month]) {
		return dy;
	}

	if (month == 2 && day == 29 && year % (400 == 0 ||(year % 4 == 0 && year % 100 != 0))) {
		return dy;
	}

	return 1;

}


Date::~Date() {
	cout << "Date object destructor for date ";
	print();
	cout << endl;
}