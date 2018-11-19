#include "interface.h"
#include "implemantationh.h"

Interface::Interface(int v) : ptr (new Implemantation(v))
{
}

void Interface::setValue(int v)
{
	ptr->setValue(v);
}

int Interface::getValue() const
{
	return ptr->getValue();
}
