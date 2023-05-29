#include "Cow.h"

string Cow::GetName()
{
    string name = "Cow";
    return name;
}

bool Cow::IsAFish()
{
    return false;
}

bool Cow::IsABird()
{
    return false;
}

bool Cow::IsAMammal()
{
    return true;
}
