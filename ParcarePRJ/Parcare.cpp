#include "Parcare.h"

void Parcare::Create(int maxCapacity)
{
	capacity = maxCapacity;
}

bool Parcare::Add(Masina* m)
{
	if (masini.size() >= capacity) return false;
	masini.push_back(m);
	return true;
}

void Parcare::RemoveByName(std::string name)
{
	for (auto it = masini.begin(); it != masini.end(); )
	{
		if ((*it)->GetName() == name)
		{
			it = masini.erase(it);
		}
		else
		{
			it++;
		}
	}
}

int Parcare::GetCount()
{
	return masini.size();
}

bool Parcare::IsFull()
{
	if (masini.size() == capacity) return true;
	else return false;
}

void Parcare::ShowAll()
{
	std::cout << "SHOW-ALL:";
	for (auto m : masini)
	{
		std::cout << m->GetName() << '(' << m->GetColor() << "), ";
	}
	std::cout << std::endl;
}

void Parcare::ShowByColor(std::string color)
{
	std::cout << "SHOW-COLOR (" << color << "):";
	for (auto m : masini)
	{
		if (m->GetColor() == color)
		{
			std::cout << m->GetName() << ", ";
		}
	}
	std::cout << std::endl;
}
