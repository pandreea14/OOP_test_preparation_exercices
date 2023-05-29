#include "Biblioteca.h"
#include "Carte.h"

Biblioteca::~Biblioteca()
{
	for (auto carte : carti)
	{
		delete carte;
	}
}

Biblioteca& Biblioteca::operator+=(Carte* newbook)
{
	carti.push_back(newbook);
	count++;
	return *this;
}

std::vector<Carte*>::iterator Biblioteca::begin()
{
	return carti.begin();
}

std::vector<Carte*>::iterator Biblioteca::end()
{
	return carti.end();
}

Biblioteca::operator int()
{
	return count;
}

//lambda!!
void Biblioteca::PrintFilter(bool (*fn)(Carte*))
{
	for (Carte* carte : carti)
	{
		if (fn(carte))
		{
			std::cout << carte->GetInfo() << std::endl;
		}
	}
}
