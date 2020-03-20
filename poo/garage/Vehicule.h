#ifndef VEHICULE_H
#define VEHICULE_H

class Vehicule
{
public:
	Vehicule(int prix, int anneeFabrication);
	virtual ~Vehicule();

	virtual void affiche() const;
	virtual void coutAnneFabrication() const;


protected:
	int m_prix;
	int m_anneFabrication;
	
};

#endif