#include <string>
#ifndef Personne_H
#define Personne_H
class Personne
{
private:
	std::string nom, prenom;
	int age;

public:
	Personne() {};
	Personne(std::string name, std::string prename, int ag);
	~Personne() { };

	void vieillir() { age++; }
	void afficher();
};
#endif