#include "increment.h"


// you can assign a value to const field here with : variable_name(value) or in header file.
Increment::Increment(int c, int i) : increment(i) {
	count = c;
}

void Increment::print() const {
	cout << "count = " << count << ", inrement = " << increment << endl;
}