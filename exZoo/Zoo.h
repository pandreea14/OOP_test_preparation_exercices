#pragma once
#include <vector>
#include <string>
#include "Animal.h"
#include "Feline.h"
using namespace std;

class Zoo
{
	vector<Animal*> animals;
public:
	vector<Animal*> GetFishes();
	vector<Animal*> GetBirds();
	vector<Animal*> GetMammals();
	vector<Feline*> GetFelines();
	int GetTotalAnimals();
	void operator+= (Animal*);
	bool operator() (string name);
};

