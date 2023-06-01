#include "Decimal.h"

std::string Decimal::GetFormatName()
{
    std::string name = "Decimal";
    return name;
}

std::string Decimal::FormatNumber(int number)
{
    return std::to_string(number);
}
