#include <iostream>
#include <string>
#include "Moto.h"

using namespace std;

Moto::Moto(int prix, int anneeFabrication, double vitesseMax): Vehicule(prix, anneeFabrication), m_vitesse(vitesseMax)
{}

Moto::~Moto()
{}

void Moto::affiche() const
{
	cout << "Ceci est une moto allant a " << m_vitesse << " km/h et coutant " << m_prix << " euros." << endl;
}