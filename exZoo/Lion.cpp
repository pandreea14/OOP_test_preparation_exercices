#include "Lion.h"

string Lion::GetName()
{
    string name = "Lion";
    return name;
}

bool Lion::IsAFish()
{
    return false;
}

bool Lion::IsABird()
{
    return false;
}

bool Lion::IsAMammal()
{
    return true;
}

int Lion::GetSpeed()
{
    return 120;
}
