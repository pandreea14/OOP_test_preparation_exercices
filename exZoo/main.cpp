#include <iostream>
#include "Zoo.h"
#include "Shark.h"
#include "Eagle.h"
#include "Lion.h"
#include "Tiger.h"
#include "Cow.h"
using namespace std;

int main()
{
    Zoo z;
    z += new Shark();
    z += new Eagle();
    z += new Tiger();
    z += new Lion();
    z += new Cow();
    cout << "Total animals in zoo: " << z.GetTotalAnimals() << endl;
    for (auto a : z.GetFishes())
         cout << "Fish: " << a->GetName() <<  endl;
    for (auto a : z.GetBirds())
         cout << "Bird: " << a->GetName() <<  endl;
    for (auto a : z.GetMammals())
         cout << "Mammal: " << a->GetName() <<  endl;
    for (auto a : z.GetFelines())
         cout << "Feline: " << a->GetName() << ", speed: " << a->GetSpeed() <<  endl;
     cout << "Zoo contains a tiger  : " <<  boolalpha << z("Tiger") <<  endl;
     cout << "Zoo contains a monkey : " <<  boolalpha << z("Monkey") <<  endl;

    return 0;
}