#pragma once
#ifndef CAFFICHE_H
#define CAFFICHE_H

// ******************************************************************************************************************************
//	Fichier *			: CAffiche.h
//
//	Classe				: CAffiche
//	Description			: 
//	Attributs			: -
//
//	Notes				: -
//
// ******************************************************************************************************************************
// 12-10-2020			: DR. Lucas `Class creation + Members + Methods + Friends Methods`
// ******************************************************************************************************************************

class CPoint;
class CAffiche
{
private:
	//Private Members/Methods

protected:
	//Protected Members/Methods

public:
	//Public Members

	//CONSTRUCTOR(S)
	CAffiche();

	//DESTRUCTOR(S)
	~CAffiche();

	//Public Methods

		//SETTERS

		//GETTERS

	//CLASS METHODS
	void affiche(CPoint& pt);
};

#endif // !CAFFICHE_H