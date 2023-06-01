#include "Database.h"
#include <iostream>

Database& Database::operator+=(Entry* e)
{
    entries.push_back(e);
    return *this;
}

Database& Database::operator-=(std::string e)
{
    int cnt = 0;
    for (auto it : entries)
    {
        if (it->GetName() == e) entries.erase(entries.begin() + cnt);
        cnt++;
    }
    return *this;
}

std::vector<Entry*>::iterator Database::begin()
{
    return entries.begin();
}

std::vector<Entry*>::iterator Database::end()
{
    return entries.end();
}

void Database::Print()
{
    for (auto e : entries)
    {
        std::cout << e->GetName() << " = ";
        e->Print();
        std::cout << ';';
    }
    std::cout << std::endl;
}
