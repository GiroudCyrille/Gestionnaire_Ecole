#ifndef Ecole_H
#define Ecole_H

#include <string>
#include <vector>
#include "Professeur.h"
#include "Eleve.h"

using namespace std;

class Ecole
{
private:
	std::string nom, adresse;
	double budget;

	vector<Professeur> professeurs;
	vector<Eleve> eleves;

public:
	Ecole() {};
	Ecole(std::string nom, std::string adress, double budget);
	~Ecole() {};

	void afficher();
	void ajouterProfesseur(Professeur professeur) { professeurs.push_back(professeur); };
	void ajouterEleve(Eleve eleve) { eleves.push_back(eleve); };
};
#endif
