#pragma once
#ifndef CMATRICE_H
#define CMATRICE_H

// ******************************************************************************************************************************
//	Fichier *			: CMatrice.h
//
//	Classe				: CMatrice / vect (ex 83)
//	Description			: To representate squared matrixe of 3x3 dimensions.
//	Attributs			: 
//
//	Notes				: -
//
// ******************************************************************************************************************************
// 12-10-2020			: DR. Lucas `Class creation + Members + Methods + Friends Methods`
// ******************************************************************************************************************************

#include "CVector3.h"

const int SIZE = 3;

class CMatrice
{
private:
	//Private Members/Methods
	double m_dblMatrice[SIZE][SIZE];

protected:
	//Protected Members/Methods

public:
	//Public Members
	

	//CONSTRUCTOR(S)
	CMatrice(double matrice[SIZE][SIZE]);
	//DESTRUCTOR(S)
	~CMatrice();
	//Public Methods

		//SETTERS
	void setMValue(int n_x, int n_y, double dbl_value);

		//GETTERS
	double getMValue(int n_x, int n_y) const;

	//CLASS METHODS

	//FRIEND METHOD
};

#endif // !CMATRICE_H