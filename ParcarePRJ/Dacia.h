#pragma once
#include "Masina.h"

class Dacia : public Masina
{
	std::string color;
public:
	Dacia(std::string color) : color(color) {};
	std::string GetColor() override;
	std::string GetName() override;
};

