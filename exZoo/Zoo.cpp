#include "Zoo.h"
#include "Animal.h"

vector<Animal*> Zoo::GetFishes()
{
    vector<Animal*> animal;
    for (auto x : animals)
    {
        if (x->IsAFish() == true)
        {
            animal.push_back(x);
        }
    }

    return animal;
}

vector<Animal*> Zoo::GetBirds()
{
    vector<Animal*> animal;
    for (auto x : animals)
    {
        if (x->IsABird() == true)
        {
            animal.push_back(x);
        }
    }

    return animal;
}

vector<Animal*> Zoo::GetMammals()
{
    vector<Animal*> animal;
    for (auto x : animals)
    {
        if (x->IsAMammal() == true)
        {
            animal.push_back(x);
        }
    }

    return animal;
}

vector<Feline*> Zoo::GetFelines()
{
    vector<Feline*> animal;
    for (auto x : animals)
    {
        if (x->GetName() == "Tiger" || x->GetName() == "Lion")
        {
            animal.push_back((Feline*)x);  //CAST LA VECTOR<FELINE*> PENTRU CA x E DE TIPUL VECTOR<ANIMAL*>!!!!!!!!!!!!!!!!
        }
    }

    return animal;
}

int Zoo::GetTotalAnimals()
{
    return animals.size();
}

void Zoo::operator+=(Animal* animal)
{
    animals.push_back(animal);
}

bool Zoo::operator()(string name)//true daca animalul este la zoo
{
    for (auto x : animals)
    {
        if (x->GetName() == name)
        {
            return true;
        }
    }
    return false;
}
