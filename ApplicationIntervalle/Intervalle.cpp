#include "Intervalle.h"
#include<iostream>
using namespace std;
Intervalle::Intervalle(int a, int b , bool CGauche , bool CDroite)
{
	// affectation des bornes inf et sup
	this->bonrneInf = a;
	this->borneSup = b;
	// affectation des (true or false) pour les crochées de l'intervalle
	this->crocheG = CGauche;
	this->crocheD = CDroite;
}

bool Intervalle::operator[](int a)const
{
	if (this->crocheD == true) // croché à droite fermé
	{
		if (this->crocheG == true) // croché à gauche fermé
		{
				if (a >= this->bonrneInf && a <= this->borneSup)
					return true;
				return false;
		}
		else
		{
			// croché à gauche ouvert
			if (a > this->bonrneInf && a <= this->borneSup)
				return true;
			return false;
		}
	}
	else // croché à droite ouvert
	{
		if (this->crocheG == true) // croché à gauche fermé
		{
			if (a >= this->bonrneInf && a < this->borneSup)
				return true;
			return false;
		}
		else
		{
			// croché à gauche ouvert
			if (a > this->bonrneInf && a < this->borneSup)
				return true;
			return false;
		}

	}
}


int Intervalle::Min()const
{
	if (this->crocheG == true)
		return this->bonrneInf;
	else
		return this->bonrneInf+1;
}

int Intervalle::Max()const
{
	if (this->crocheD == true)
		return this->borneSup;
	else
		return this->borneSup-1;
}

void Intervalle::afficher() const
{
	if(this->crocheG == true)
		cout << "[ ";
	else
		cout << "] ";
	cout << this->bonrneInf << " , " << this->borneSup;
	if (this->crocheD == true)
		cout << " ]" << endl;
	else
		cout << " [" << endl;
}
