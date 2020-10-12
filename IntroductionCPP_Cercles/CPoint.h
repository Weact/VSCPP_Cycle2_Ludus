#pragma once
#ifndef CPOINT_H
#define CPOINT_H

// ***************************************************************************************
//	Fichier *			: CPoint.h
//
//	Classe				: CPoint
//	Description			: Point Declaration and Handling (move point, set coordinate, setters getters, number method)
//	Attributs			: nb (static, in order to count how many objects are instantiated), m_fltX, m_flyY (2D Coordinates) 
//
//	Notes				: X
//
// ***************************************************************************************
// 12-10-2020			: Dr. Lucas `Final Commit, Pushing and Validating`
// ***************************************************************************************

class CCercle;
class CPoint
{
private:
	//Private Members/Methods
	static int nb;
	float m_fltX;
	float m_fltY;

protected:
	//Protected Members/Methods

public:
	//Public Members

	//CONSTRUCTOR(S)
	CPoint();
	CPoint(float, float);

	//DESTRUCTOR(S)
	~CPoint();

	//Public Methods

			//SETTERS
	void setX(float m_newX);
	void setY(float m_newY);

	//GETTERS
	float getX();
	float getY();

	//CLASS METHODS
	void move_point(float, float);
	void set_coords(float, float);
	void display_point();

	//CPoint Member Method and CCercle's Friend Method
	bool ptcoincide(CCercle& c);
	
	static int nombre();
};

#endif



