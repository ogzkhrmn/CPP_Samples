#pragma once
class Time
{
public:
	Time();
	void setTime(int, int, int);
	void printMilitary();
	~Time();
private:
	int hour;
	int minute;
	int second;
};