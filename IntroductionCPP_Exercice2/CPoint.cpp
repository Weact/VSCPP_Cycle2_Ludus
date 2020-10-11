#include "CPoint.h"
#include <iostream>
using namespace std;


int CPoint::nb = 0;

CPoint::CPoint()
{
	nb++;
	m_fX = NULL;
	m_fY = NULL;
}

CPoint::CPoint(float flt_X, float flt_Y)
{
	nb++;
	m_fX = flt_X;
	m_fY = flt_Y;
}

CPoint::~CPoint()
{
	nb--;
}

void CPoint::setX(float m_newX)
{
	m_fX = m_newX;
}

void CPoint::setY(float m_newY)
{
	m_fY = m_newY;
}

float CPoint::getX()
{
	return m_fX;
}

float CPoint::getY()
{
	return m_fY;
}

void CPoint::move_point(float flt_moveX, float flt_moveY)
{
	m_fX += flt_moveX;
	m_fY += flt_moveY;
}

void CPoint::set_coords(float flt_newX, float flt_newY)
{
	m_fX = flt_newX;
	m_fY = flt_newY;
}

void CPoint::display_point()
{
	cout << "Point's Informations --> " << this->m_fX << " : " << this->m_fY << " <-- " << endl;
}

int CPoint::nombre()
{
	return nb;
}