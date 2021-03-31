#include "Professeur.h"
#include <iostream>

Professeur::Professeur(std::string nom, std::string prenom, int age, double paye) : Personne(nom, prenom, age)
{
	salaire = paye;
}

double Professeur::calculCount()
{
	return salaire * 12;
}

void Professeur::afficher()
{
	Personne::afficher();
	std::cout << " Salaire : " << salaire << std::endl;
}