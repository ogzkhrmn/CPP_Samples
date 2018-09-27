#pragma once
class Time
{
public:
	Time();
	void setTime(int,int,int);
	void printMilitary();
private:
	int hour;
	int minute;
	int second;
};