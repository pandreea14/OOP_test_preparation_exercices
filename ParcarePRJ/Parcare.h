#pragma once
#include "Masina.h"
#include <vector>
#include <iostream>

class Parcare
{
	std::vector<Masina*> masini;
	int capacity;
public:
	Parcare() : capacity(0) {};
	void Create(int maxCapacity);
	bool Add(Masina* m);
	void RemoveByName(std::string name);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(std::string color);
};

