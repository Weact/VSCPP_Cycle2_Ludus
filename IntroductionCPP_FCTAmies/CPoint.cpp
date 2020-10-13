#include <iostream>
#include "CPoint.h"
using namespace std;

int CPoint::nb = 0;

//BASIC CONSTRUCTOR
CPoint::CPoint()
{
	cout << "A point has been created successfully !\n" << endl;
	nb++;
	this->m_nX = NULL;
	this->m_nY = NULL;
}
//CONSTRUCTOR WITH PARAMETER
CPoint::CPoint(int n_X, int n_Y)
{
	cout << "A point has been created successfully !\n" << endl;
	nb++;
	this->m_nX = n_X;
	this->m_nY = n_Y;
}

CPoint::CPoint(CPoint& pt_copy)
{
	this->m_nX = pt_copy.m_nX;
	this->m_nY = pt_copy.m_nY;
}

//DESTRUCTOR
CPoint::~CPoint()
{
	cout << "A point has been destroyed successfully !\n" << endl;
	nb--;
}
//SETTERS
void CPoint::setX(int m_nNewX)
{
	this->m_nX = m_nNewX;
}

void CPoint::setY(int m_nNewY)
{
	this->m_nY = m_nNewY;
}
//GETTERS
int CPoint::getX() const
{
	return this->m_nX;
}

int CPoint::getY() const
{
	return this->m_nY;
}
//MOVE THE POINT BY X AND Y 
void CPoint::move_point(int n_moveX, int n_moveY)
{
	this->m_nX += n_moveX;
	this->m_nY += n_moveY;
}

//	SET THE 2D COORDINATES OF A POINT
void CPoint::set_coords(int n_newX, int n_newY)
{
	this->m_nX = n_newX;
	this->m_nY = n_newY;
}
//DISPLAY A POINT'S COORDINATES
void CPoint::display_point() const
{
	cout << "Point's Informations --> " << this->m_nX << " : " << this->m_nY << " <-- " << endl;
}
//DISPLAY HOW MANY POINTS ARE CURRENTLY INSTANTIATED
int CPoint::nombre()
{
	return nb;
}

CPoint operator+(CPoint& pt1, CPoint& pt2)
{
	pt1.m_nX += pt2.m_nX;
	pt1.m_nY += pt2.m_nY;

	return pt1;
}

CPoint operator-(CPoint& pt1, CPoint& pt2)
{
	pt1.m_nX -= pt2.m_nX;
	pt1.m_nY -= pt2.m_nY;

	return pt1;
}

CPoint operator*(CPoint& pt1, CPoint& pt2)
{
	pt1.m_nX *= pt2.m_nX;
	pt1.m_nY *= pt2.m_nY;
	return pt1;
}

CPoint operator++(CPoint& pt)
{
	pt.m_nX++;
	pt.m_nY++;

	return pt;
}

CPoint operator--(CPoint& pt)
{
	pt.m_nX--;
	pt.m_nY--;

	return pt;
}
