#pragma once
#include "Entry.h"

class IntegerData : public Entry
{
	int value;
	int stringtoint(std::string& value)
	{
		int result = 0;
		for (int i = 0; i < value.length(); i++)
		{
			result = result * 10 + (value[i] - '0');
		}
		return result;
	}

public:
	IntegerData(std::string name, std::string value) : Entry(name), value(stringtoint(value)) {};
	void Add(std::string toAdd) override;
	bool Substract(int toSubstract) override;
	void Print() override;
};

