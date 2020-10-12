#pragma once
#ifndef CPOINT_H
#define CPOINT_H

// ******************************************************************************************************************************
//	Fichier *			: CPoint.h
//
//	Classe				: CPoint
//	Description			: 
//	Attributs			: nb (Allow us to count how many points are instantiated); m_fltX; m_fltY [2D COORDINATES]
//
//	Notes				: -
//
// ******************************************************************************************************************************
// 12-10-2020			: DR. Lucas `Class creation + Members + Methods + Friends Methods`
// ******************************************************************************************************************************

#include "CAffiche.h"

class CPoint
{
private:
	//Private Members/Methods
	static int nb;
	int m_fltX;
	int m_fltY;

protected:
	//Protected Members/Methods

public:
	//Public Members

	//CONSTRUCTOR(S)
	CPoint();
	CPoint(int, int);

	//DESTRUCTOR(S)
	~CPoint();

	//Public Methods

		//SETTERS
	void setX(int);
	void setY(int);

		//GETTERS
	int getX();
	int getY();

	//CLASS METHODS
	void move_point(int, int);
	void set_coords(int, int);
	void display_point();

	//FRIEND METHODS
	friend void CAffiche::affiche(CPoint& pt); //CAffiche.h

	static int nombre();
};

#endif // !CPOINT_H

