#pragma once

class Implemantation
{
public:
	Implemantation(int v) { value = v; }
	void setValue(int v) { value = v; }
	int getValue() const { return value; }
private:
	int value;
};
