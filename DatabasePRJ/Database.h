#pragma once
#include "Entry.h"
#include <vector>
#include <string>

class Database
{
	std::vector<Entry*> entries;
public:
	Database& operator+= (Entry* e);
	Database& operator-= (std::string e);
	std::vector<Entry*>::iterator begin();
	std::vector<Entry*>::iterator end();
	void Print();
};

