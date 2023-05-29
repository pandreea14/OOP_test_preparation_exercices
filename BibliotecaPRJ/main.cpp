#include <iostream>
#include "Carte.h"
#include "Biblioteca.h"
#include "Revista.h"
#include "Roman.h"

int main()
{
	Biblioteca b;
	(b += new Roman("DON QUIJOTE", "MIGUEL DE CERVANTES")) += new Revista("Journal of Artificial Intelligence", 100);
	b += new Roman("MACBETH", "WILLIAM SHAKESPEARE");
	for (auto x : b)
	{
		std::cout << x->GetInfo() << std::endl;
	}
	std::cout << "Numar de intrari in biblioteca: " << (int)b << std::endl;
	std::cout << "Lista doar cu romane:" << std::endl;
	b.PrintFilter([](Carte* c)->bool {
		// adaugati codul care determina daca o carte este un Roman
	Roman* roman = dynamic_cast<Roman*>(c);
	return (roman != nullptr);
		});
	return 0;
}