#ifndef MOTO_H
#define MOTO_H

#include <iostream>
#include <string>
#include "Vehicule.h"

class Moto : public Vehicule
{
public:
	Moto(int prix, int anneeFabrication, double vitesseMax);
	virtual ~Moto();

	virtual void affiche() const;

private:
	double m_vitesse;
	
};

#endif