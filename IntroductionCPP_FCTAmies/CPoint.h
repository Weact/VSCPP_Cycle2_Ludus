#pragma once
#ifndef CPOINT_H
#define CPOINT_H

// ******************************************************************************************************************************
//	Fichier *			: CPoint.h
//
//	Classe				: CPoint
//	Description			: Point placement, Point position handler, Point information displayer
//	Attributs			: nb (Allow us to count how many points are instantiated); m_fltX; m_fltY [2D COORDINATES]
//
//	Notes				: -
//
// ******************************************************************************************************************************
// 12-10-2020			: DR. Lucas `Class creation + Members + Methods + Friends Methods`
// ******************************************************************************************************************************

class CPoint
{
private:
	//Private Members/Methods
	static int nb;
	int m_nX;
	int m_nY;

protected:
	//Protected Members/Methods

public:
	//Public Members

	//CONSTRUCTOR(S)
	CPoint();
	CPoint(CPoint&);
	CPoint(int, int);

	//DESTRUCTOR(S)
	~CPoint();

	//Public Methods

		//SETTERS
	void setX(int);
	void setY(int);

		//GETTERS
	int getX() const;
	int getY() const;

	//CLASS METHODS
	void move_point(int, int);
	void set_coords(int, int);
	void display_point() const;

	//FRIEND METHODS
	friend void affiche(CPoint& pt); //CAffiche.h
	
	//OVERLOADS OPERATORS
	friend CPoint operator+(CPoint&, CPoint&);
	friend CPoint operator-(CPoint&, CPoint&);
	friend CPoint operator*(CPoint&, CPoint&);
	friend CPoint operator++(CPoint&);
	friend CPoint operator--(CPoint&);
	static int nombre();
};

#endif // !CPOINT_H

