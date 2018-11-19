#include "This.h"

ThisClass::ThisClass(int a)
{
	x = a;
}

void ThisClass::print() const
{
	cout << "Wihout this: " << x << endl;
	cout << "this ->  " << this -> x << endl;
	cout << "(*this).x " << (*this).x << endl;
}