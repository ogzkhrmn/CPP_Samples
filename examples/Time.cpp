#include "Time.h"
#include <iostream>

using namespace std;
Time::Time()
{
	hour = minute = second = 0;
}

void Time::setTime(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}

void Time::printMilitary()
{
	cout << hour << " " << minute << " " << second << endl;
}



Time::~Time()
{
}
