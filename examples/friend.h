#pragma once

#include "general.h"

class Count {
//friend class declaration
	friend void setX(Count *, int);
public:
	Count();
	void print() const;
private:
	int x;
};