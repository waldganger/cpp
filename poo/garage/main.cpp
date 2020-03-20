#include <iostream>
#include <string>
#include <vector>
#include "Vehicule.h"
#include "Moto.h"
#include "Voiture.h"
#include "Camion.h"

using namespace std;

void presenter(Vehicule const& v)
{
	v.affiche();
}

int main()
{
	std::vector<Vehicule*> listeVehicules;
	listeVehicules.push_back(new Voiture(15000, 2005, 5));
	listeVehicules.push_back(new Voiture(12000, 2014, 3));
	listeVehicules.push_back(new Moto(6000, 2010, 220.67));
	listeVehicules.push_back(new Camion(35000, 1975, 20.5));

	for(int i(0); i < size(listeVehicules); i++){
		listeVehicules[i] -> affiche();
		listeVehicules[i] -> coutAnneFabrication();
		delete listeVehicules[i];
		listeVehicules[i] = 0;
	}
	// Vehicule *v = 0;
	// Vehicule *m = 0;
	// v = new Vehicule(100);
	// m = new Moto(70, 210.4);

	
	// v -> affiche();
	// m -> affiche();
	// presenter(*v);
	// presenter(*m);
	// delete v, m;
	// v, m = 0;

	// Vehicule v;
	// presenter(v);

	// Moto m;	
	// presenter(m);

	return 0;
}