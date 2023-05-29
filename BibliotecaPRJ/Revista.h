#pragma once
#include "Carte.h"

class Revista : public Carte
{
	std::string titlu;
	int nrArticole;
public:
	Revista(const std::string titlu, const int nrArticole) : titlu(titlu), nrArticole(nrArticole) {};
	std::string GetInfo();
};

