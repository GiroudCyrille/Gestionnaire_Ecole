#include <iostream>
#include "Eleve.h"
#include "Ecole.h"
#include "Professeur.h"

int main()
{


	Ecole school("EPSI", "Lyon 9", 10);
	Professeur prof1("Chevalier", "Nicolas", 30, 2500);
	Professeur prof4();
	Professeur prof2("Karmouch", "Iyoub", 28, 2000);
	Eleve elev1("Giroud", "Cyrille", 19);
	cout << "Bienvenue dans le gestionnaire d'ecole !" << endl;
	prof1.vieillir();
	elev1.setMoyenne(18, 0);
	elev1.setMoyenne(15, 1);
	elev1.setMoyenne(17, 2);
	elev1.setMoyenne(19, 3);
	elev1.setMoyenne(11, 4);
	elev1.setMoyenne(20, 5);
	school.ajouterProfesseur(prof1);
	school.ajouterProfesseur(prof2);
	school.ajouterEleve(elev1);
	school.afficher();
}