#include "Number.h"
#include "Printer.h"
#include <iostream>

Number::operator int()
{
	return number;
}
Number Number::operator+(const Number& n)
{
	return number + n.number;
}

Number Number::operator-(const Number& n)
{
	return number - n.number;
}

Number Number::operator*(const Number& n)
{
	return number * n.number;
}

Number Number::operator/(const Number& n)
{
	return number / n.number;
}

Number& Number::operator+=(Printer* prnt)
{
	printers.push_back(prnt);
	count++;
	return *this;
}
void Number::Print()
{
	for (auto it : printers)
	{
		std::cout << "Format: " << it->GetFormatName() << " Value: " << it->FormatNumber(number)<<std::endl;
	}
}
