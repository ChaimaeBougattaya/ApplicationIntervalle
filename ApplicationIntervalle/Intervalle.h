#pragma once
class Intervalle
{
	// les attributs
private:
	int bonrneInf;
	int borneSup;
	bool crocheG;//croche � gauche true => ferme || false ==> ouvert
	bool crocheD;// croche � droite true => ferme || false ==> ouvert 

	// les m�thodes
public:
	Intervalle(int a, int b ,bool , bool );
	bool operator[](int)const;
	int Min()const;
	int Max()const;
	void afficher()const;
};

