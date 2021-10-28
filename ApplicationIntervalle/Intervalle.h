#pragma once
class Intervalle
{
	// les attributs
private:
	int bonrneInf;
	int borneSup;
	bool crocheG;//croche à gauche true => ferme || false ==> ouvert
	bool crocheD;// croche à droite true => ferme || false ==> ouvert 

	// les méthodes
public:
	Intervalle(int a, int b ,bool , bool );
	bool operator[](int)const;
	int Min()const;
	int Max()const;
	void afficher()const;
};

