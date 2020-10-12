#include "CCercle.h"
#include <iostream>

using namespace std;

int CCercle::nb_cercle = 0;

int CCercle::nombre()
{
	return nb_cercle;
}

CCercle::CCercle() : m_ptCenter(NULL, NULL)
{
	cout << "=== A CIRCLE HAS BEEN INSTANTIATED ===" << endl;
	nb_cercle++;
	m_fltRadius = NULL;
}

CCercle::CCercle(float flt_centerX, float flt_centerY, float fltRadius) : m_ptCenter(flt_centerX, flt_centerY)
{
	cout << "=== A CIRCLE HAS BEEN INSTANTIATED ===" << endl;
	nb_cercle++;
	m_fltRadius = fltRadius;
}

CCercle::~CCercle()
{
	cout << "=== A CIRCLE HAS BEEN DESTROYED ===" << endl;
	nb_cercle--;
}

void CCercle::setCenter(float flt_newPtCenterX, float flt_newPtCenterY)
{
	m_ptCenter.setX(flt_newPtCenterX);
	m_ptCenter.setY(flt_newPtCenterY);
}

void CCercle::setRadius(float m_newFltRadius)
{
	m_fltRadius = m_newFltRadius;
}

CPoint CCercle::get_ptCenter()
{
	return m_ptCenter;
}

float CCercle::getRadius()
{
	return m_fltRadius;
}

void CCercle::move_center(float flt_movePtCenterX, float flt_movePtCenterY)
{
	m_ptCenter.set_coords(flt_movePtCenterX, flt_movePtCenterY);
}

void CCercle::set_center_radius(float flt_newptCenterX, float flt_newptCenterY, float flt_newRadius)
{
	m_ptCenter.set_coords(flt_newptCenterX, flt_newptCenterY);
	m_fltRadius = flt_newRadius;
}

void CCercle::display_circle()
{
	cout << "Centre du cercle [X:Y] --> [" << m_ptCenter.getX() << ":" << m_ptCenter.getY() << "]" << endl;
	cout << "Rayon du cercle --> " << getRadius() << "\n" << endl;
}
