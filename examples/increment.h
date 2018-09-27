#ifndef INCREMENT_H
#define INCREMENT_H

#include <iostream>

using namespace std;

class Increment {
public:
	Increment(int , int );
	void addItem() { count += increment; }
	void print() const;
private:
	int count;
	//if you assign a value here you should delete from class file. Or class file will override ur intiliaze value
	const int increment = 30;
};

#endif