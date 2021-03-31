#ifndef Eleve_H
#define Eleve_H

#include "Personne.h"

class Eleve : public Personne
{
private:
	double moyennes[5];

public:
	Eleve() {};
	Eleve(std::string nom, std::string prenom, int age);
	~Eleve() {};

	double moyenneGen();
	void setMoyenne(double moyenne, int index);
	void afficher();
};
#endif // !Eleve_H