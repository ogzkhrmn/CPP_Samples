#include "operators.h"
#include <iomanip>

ostream& operator<<(ostream& output, const operators& num)
{
	output << "(" << num.areaCode << ") " << num.exchange << "-" << num.line;
	return output;
}

istream& operator>>(istream& input, operators& num)
{
	input.ignore(2);
	input >> setw(4) >> num.areaCode;
	input.ignore(2);
	input >> setw(4) >> num.exchange;
	input.ignore();
	input >> setw(5) >> num.line;
	return  input;
}

operators::operators()
{
}


operators::~operators()
{
}
