#pragma once
class Time
{
public:
	Time();
	void setTime(int = 0, int = 0, int = 0);
	void printMilitary();
	~Time();
private:
	int hour;
	int minute;
	int second;
};