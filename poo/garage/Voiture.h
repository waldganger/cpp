#ifndef VOITURE_H
#define VOITURE_H
#include "Vehicule.h"

class Voiture : public Vehicule
{
public:
	Voiture(int prix, int anneeFabrication, int portes);
	virtual ~Voiture();

	virtual void affiche() const;

private:
	int m_portes;
	
};

#endif