#include "IntegerData.h"
#include <iostream>

void IntegerData::Add(std::string toAdd)
{
	value = value + stringtoint(toAdd);
}

bool IntegerData::Substract(int toSubstract)
{
	if (toSubstract > value) return false;
	value = value - toSubstract;
	return true;
}

void IntegerData::Print()
{
	std::cout << value;
}
