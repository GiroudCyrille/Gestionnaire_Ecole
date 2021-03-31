#include "Eleve.h"
#include <iostream>

Eleve::Eleve(std::string nom, std::string prenom, int age) : Personne(nom, prenom, age)
{
}

double Eleve::moyenneGen()
{
	double result = 0;

	for (double moyenne : moyennes)
		result += moyenne;

	return result / std::size(moyennes);
}

void Eleve::setMoyenne(double moyenne, int index)
{
	if (index < 0 || index > std::size(moyennes) - 1)
	{
		std::cout << "Vous tentez de set une moyenne a un index incorrect (" << index << ")" << std::endl;
		return;
	}

	moyennes[index] = moyenne;
}

void Eleve::afficher()
{
	Personne::afficher();
	std::cout << " Moyenne de l'eleve : " << moyenneGen() << std::endl;
}