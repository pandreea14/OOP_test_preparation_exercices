#pragma once
#include "Carte.h"

class Roman : public Carte
{
public:
	std::string nume;
	std::string autor;
public:
	Roman(const std::string nume, const std::string autor) : nume(nume), autor(autor) {};
	std::string GetInfo();
};

