#include <iostream>
#include <string>
#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule(int prix, int anneeFabrication): m_prix(prix), m_anneFabrication(anneeFabrication)
{}

Vehicule::~Vehicule()
{}

void Vehicule::affiche() const
{
	std::cout << "Ceci est un véhicule coutant " << m_prix << " euros." << std::endl;
}

void Vehicule::coutAnneFabrication() const
{
	cout << "Véhicule fabriqué en " << m_anneFabrication << "." << endl;
}