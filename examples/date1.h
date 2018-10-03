#ifndef DATE1_H
#define DATE1_H

#include "general.h"

class Date {
public:
	Date(int = 1, int = 1, int = 1970);
	void print() const;
	~Date();
	const int daysPerMont[13];
private:
	int day;
	int month;
	int year;

	int checkDay(int dy);
};

#endif