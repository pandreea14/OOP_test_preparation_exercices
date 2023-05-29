#include "Tiger.h"

string Tiger::GetName()
{
    string name = "Tiger";
    return name;
}

bool Tiger::IsAFish()
{
    return false;
}

bool Tiger::IsABird()
{
    return false;
}

bool Tiger::IsAMammal()
{
    return true;
}

int Tiger::GetSpeed()
{
    return 100;
}
