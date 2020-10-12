#include "CPoint.h"
#include "CCercle.h"
#include <iostream>
using namespace std;


int CPoint::nb = 0;

//BASIC CONSTRUCTOR
CPoint::CPoint()
{
	nb++;
	m_fltX = NULL;
	m_fltY = NULL;
}
//CONSTRUCTOR WITH PARAMETER
CPoint::CPoint(float flt_X, float flt_Y)
{
	nb++;
	m_fltX = flt_X;
	m_fltY = flt_Y;
}
//DESTRUCTOR
CPoint::~CPoint()
{
	nb--;
}
//SETTERS
void CPoint::setX(float m_newX)
{
	m_fltX = m_newX;
}

void CPoint::setY(float m_newY)
{
	m_fltY = m_newY;
}
//GETTERS
float CPoint::getX()
{
	return m_fltX;
}

float CPoint::getY()
{
	return m_fltY;
}
//MOVE THE POINT BY X AND Y 
void CPoint::move_point(float flt_moveX, float flt_moveY)
{
	m_fltX += flt_moveX;
	m_fltY += flt_moveY;
}

//	SET THE 2D COORDINATES OF A POINT
void CPoint::set_coords(float flt_newX, float flt_newY)
{
	m_fltX = flt_newX;
	m_fltY = flt_newY;
}

//CHECK IF TWO POINTS ARE EQUALS
bool CPoint::ptcoincide(CCercle &c)
{
	//if (this->m_fltX == c.get_ptCenter().getX() && this->m_fltY == c.get_ptCenter().getY()) {} else {}
	if (this->m_fltX == c.m_ptCenter.m_fltX && this->m_fltY == c.m_ptCenter.m_fltY) {
		return true;
	}
	else {
		return false;
	}
	
}

//DISPLAY A POINT'S COORDINATES
void CPoint::display_point()
{
	cout << "Point's Informations --> " << this->m_fltX << " : " << this->m_fltY << " <-- \n" << endl;
}
//DISPLAY HOW MANY POINTS ARE CURRENTLY INSTANTIATED
int CPoint::nombre()
{
	return nb;
}