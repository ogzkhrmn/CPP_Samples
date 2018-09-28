#include "emp.h"

Employee::Employee(string fname, string lastname, int bd, int bm, int by,
	int hd, int hm, int hy) : birthDate(bd, bm, by),
	hireDate(hd, hm, hy) {
	
	firstName = fname;
	lastName = lastname;

	cout << "Employee object constructor: " << firstName << ' ' << lastName<< endl;

}



void Employee::print() const {
	cout << "Employee " << firstName << ' ' << lastName << " hired: ";
	hireDate.print();
	cout << endl;

	cout << "Employee " << firstName << ' ' << lastName << " birth: ";
	birthDate.print();
	cout << endl;
}

Employee::~Employee(){
	cout << "Employee object destructor: " << firstName << ' ' << lastName << endl;
}