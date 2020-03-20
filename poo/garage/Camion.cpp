#include <iostream>
#include <string>
#include "Camion.h"

using namespace std;

Camion::Camion(int prix, int anneeFabrication, double poidsMaximalEnCharge): Vehicule(prix, anneeFabrication), m_ptac(poidsMaximalEnCharge)
{}

Camion::~Camion()
{}

void Camion::affiche() const
{	
		cout << "Ceci est un camion qui coûte " << m_prix << " euros et transporte au maximum " << m_ptac << " tonnes." << endl;
}