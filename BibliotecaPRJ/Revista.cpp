#include "Revista.h"
#include <string>

std::string Revista::GetInfo()
{
    std::string info = "Revista " + titlu + " cu " + std::to_string(static_cast<long long>(nrArticole)) + " articole";
    return info;         //static_cast de long long pt ca to_string asteapta o val long long, dar merge si fara static_cast
}
