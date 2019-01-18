#pragma once
#include "general.h"

class operators
{
	friend ostream& operator<<(ostream&, const operators&);
	friend istream& operator>>(istream&, operators&);

public:
	operators();
	~operators();
private:
	char areaCode[4];
	char exchange[4];
	char line[5];
};