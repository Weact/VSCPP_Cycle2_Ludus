#pragma once
#ifndef CCERCLE_H
#define CCERCLE_H

// ***************************************************************************************
//	Fichier *			: CCercle.h
//
//	Classe				: CCercle
//	Description			: 
//	Attributs			: nb_cercle (Allow us to count how many circles are instantiated); m_fltCenter; m_fltRadius
//
//	Notes				: X
//
// ***************************************************************************************
// 12-10-2020			: Dr. Lucas `Class creation + Members + Methods`
// ***************************************************************************************

#include "CPoint.h"

class CCercle
{
private:
	//Private Members/Methods
	static int nb_cercle;
	CPoint m_ptCenter;
	float m_fltRadius;

protected:
	//Protected Members/Methods

public:
	//Public Members

	//CONSTRUCTOR(S)
	CCercle();
	CCercle(float, float, float);


	//DESTRUCTOR(S)
	~CCercle();

	//Public Methods

			//SETTERS
	void setCenter(float, float);
	void setRadius(float);

	//GETTERS
	CPoint getCenter();
	float getRadius();

	//CLASS METHODS
	void move_center(float, float);
	void set_center_radius(float, float, float);
	void display_circle();

	static int nombre();
};

#endif CCERCLE_H
