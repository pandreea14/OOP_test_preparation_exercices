#pragma once
#include "Carte.h"
#include <iostream>
#include <vector>

class Biblioteca
{
	int count;
	std::vector<Carte*> carti;
public:
	Biblioteca() : count(0) {};
	~Biblioteca();
	Biblioteca& operator +=(Carte* newbook);
	std::vector<Carte*>::iterator begin();
	std::vector<Carte*>::iterator end();
	operator int();
	void PrintFilter(bool (*fn)(Carte*));
};

