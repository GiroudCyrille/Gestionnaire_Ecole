#include "Ecole.h"
#include <iostream>

Ecole::Ecole(std::string name, std::string adress, double budge)
{
	nom = name;
	adresse = adress;
	budget = budge;
}

void Ecole::afficher()
{
	std::cout << "L'ecole s'apelle : " << nom << " elle est a l'adresse : " << adresse << " et a un budget de : " << budget << std::endl;
	std::cout << "Informations des professeurs : " << std::endl;

	for (Professeur prof : professeurs)
		prof.afficher();

	std::cout << "Informations des eleves :" << std::endl;

	for (Eleve eleve : eleves)
		eleve.afficher();
}