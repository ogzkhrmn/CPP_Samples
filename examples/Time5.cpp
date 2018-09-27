#include "time5.h"

Time5::Time5(int hr, int mn, int sc) {
	setTime(hr,mn,sc);
}


void Time5::setTime(int hr, int mn, int sc) {
	setHour(hr);
	setMinute(mn);
	setSecond(sc);
}

void Time5::setHour(int xx) {
	hour = xx;
}

void Time5::setSecond(int xx) {
	second = xx;
}

void Time5::setMinute(int xx) {
	minute = xx;
}


int Time5::getHour() const { return hour; }

int Time5::getMinute() const { return minute; }

int Time5::getSecond() const { return second; }

void Time5::printMilitary() const {

	cout << hour << minute << second;

}


void Time5::printNormal() {

	cout << "Normal" << hour << minute << second;

}