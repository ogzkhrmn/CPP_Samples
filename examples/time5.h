#ifndef TIME5_H
#define TIME5_H
#include <iostream>


using namespace std;

class Time5 
{
public:
	Time5(int , int, int);
	void setTime(int, int ,int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	int getHour() const;
	int getMinute() const;
	int getSecond() const;

	void printMilitary() const;
	void printNormal();
	~Time5();
private:
	int hour;
	int minute;
	int second;
};

#endif