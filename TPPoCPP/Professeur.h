#ifndef Professeur_H
#define Professeur_H

#include "Personne.h"

class Professeur : public Personne
{

private:
	double salaire;

public:
	Professeur() {};
	Professeur(std::string nom, std::string prenom, int age, double paye);
	~Professeur() {};

	double calculCount();
	void afficher();
};

#endif // !Professeur_H

