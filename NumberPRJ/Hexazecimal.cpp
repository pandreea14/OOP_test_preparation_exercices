#include "Hexazecimal.h"

std::string Hexazecimal::GetFormatName()
{
    std::string name = "Hexazecimal";
    return name;
}

std::string base16(int decimalNumber) 
{
    std::string hex;
    while (decimalNumber > 0) 
    {
        int remainder = decimalNumber % 16;
        if (remainder < 10)
        {
            hex.insert(0, 1, remainder + '0');
        }
        else
        {
            hex.insert(0, 1, remainder - 10 + 'A');
        }
        decimalNumber /= 16;
    }
    return hex;
}

std::string Hexazecimal::FormatNumber(int number)
{
    std::string hexstr = "0x";
    base16(number);
    std::string numberstr = base16(number);
    int length = 8 - numberstr.length();
    while (length > 0)
    {
        hexstr += '0';
        length--;
    }
    hexstr += numberstr;
    return hexstr;
}
