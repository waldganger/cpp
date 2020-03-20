#ifndef CAMION_H
#define CAMION_H

#include <iostream>
#include <string>
#include "Vehicule.h"

class Camion : public Vehicule
{
public:
	Camion(int prix, int anneeFabrication, double poidsMaximalEnCharge);
	virtual ~Camion();

	virtual void affiche() const;


private:
	double m_ptac;
	
};

#endif