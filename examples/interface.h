#pragma once

#include "implemantationh.h"
class Implemantation;

class Interface
{
public:
	Interface(int);
	void setValue(int);
	int getValue() const;
private:
	Implemantation* ptr;
};
