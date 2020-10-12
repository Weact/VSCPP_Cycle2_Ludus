#include <iostream>
#include "CPoint.h"
using namespace std;



int CPoint::nb = 0;

//BASIC CONSTRUCTOR
CPoint::CPoint()
{
	nb++;
	this->m_fltX = NULL;
	this->m_fltY = NULL;
}
//CONSTRUCTOR WITH PARAMETER
CPoint::CPoint(int flt_X, int flt_Y)
{
	nb++;
	this->m_fltX = flt_X;
	this->m_fltY = flt_Y;
}
//DESTRUCTOR
CPoint::~CPoint()
{
	nb--;
}
//SETTERS
void CPoint::setX(int m_fltNewX)
{
	this->m_fltX = m_fltNewX;
}

void CPoint::setY(int m_fltNewY)
{
	this->m_fltY = m_fltNewY;
}
//GETTERS
int CPoint::getX()
{
	return this->m_fltX;
}

int CPoint::getY()
{
	return this->m_fltY;
}
//MOVE THE POINT BY X AND Y 
void CPoint::move_point(int flt_moveX, int flt_moveY)
{
	this->m_fltX += flt_moveX;
	this->m_fltY += flt_moveY;
}

//	SET THE 2D COORDINATES OF A POINT
void CPoint::set_coords(int flt_newX, int flt_newY)
{
	this->m_fltX = flt_newX;
	this->m_fltY = flt_newY;
}
//DISPLAY A POINT'S COORDINATES
void CPoint::display_point()
{
	cout << "Point's Informations --> " << this->m_fltX << " : " << this->m_fltY << " <-- " << endl;
}
//DISPLAY HOW MANY POINTS ARE CURRENTLY INSTANTIATED
int CPoint::nombre()
{
	return nb;
}