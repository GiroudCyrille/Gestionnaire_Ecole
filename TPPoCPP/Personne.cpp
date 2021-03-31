#include "Personne.h"
#include <iostream>

Personne::Personne(std::string name, std::string pren, int ag)
{
	nom = name;
	prenom = pren;
	age = ag;
}

void Personne::afficher()
{
	std::cout << "Nom : " << nom << " Prenom : " << prenom << " Age : " << age;
}