#include "StringData.h"
#include <iostream>

void StringData::Add(std::string toAdd)
{
	value = value + toAdd;
}

bool StringData::Substract(int toSubstract)
{
	int nr;
	if (toSubstract > value.size()) return false;
	
	nr = value.size() - toSubstract;
	for (int i = nr; i < value.size(); i++)
	{
		value.erase(i);
	}
	return true;
}

void StringData::Print()
{
	std::cout << value;
}
