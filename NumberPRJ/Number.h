#pragma once
#include <vector>
#include "Printer.h"

class Number
{
	std::vector<Printer*> printers;
	int number;
	int count;
public:
	Number(int value) : number(value), count(0) {};
	operator int();
	Number operator+(const Number& n);
	Number operator-(const Number& n);
	Number operator*(const Number& n);
	Number operator/(const Number& n);
	Number& operator+=(Printer* prnt);
	void Print();
};

