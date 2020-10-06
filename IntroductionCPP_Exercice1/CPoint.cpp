#include "CPoint.h"
#include <iostream>
#include <math.h>

using namespace std;

CPoint::CPoint(float flt_px, float flt_py)
{
	this->m_x = flt_px;
	this->m_y = flt_py;
}

CPoint::~CPoint()
{
}

void CPoint::setX(float flt_newX)
{
	this->m_x = flt_newX;
}

void CPoint::setY(float flt_newY)
{
	this->m_y = flt_newY;
}

float CPoint::abscisse() const //Fonction abscisse (EX 63)
{
	return this->m_x;
}

float CPoint::ordonne() const //Fonction ordonnée (EX 63)
{
	return this->m_y;
}

void CPoint::move_point(float flt_pAddX, float flt_pAddY)
{
	this->m_x += flt_pAddX;
	this->m_y += flt_pAddY;
}

void CPoint::homothetie(float flt_rapport)
{
	this->m_x *= flt_rapport;
	this->m_y *= flt_rapport;
}

void CPoint::rotation(CPoint centre, float flt_angle)
{

	flt_angle =  3.14159f * flt_angle / 180;

	float s = sin(flt_angle);
	float c = cos(flt_angle);

	this->m_x -= centre.m_x;
	this->m_y -= centre.m_y;

	float flt_xnew = this->m_x * c - this->m_y * s;
	float flt_ynew = this->m_x * s + this->m_y * c;

	this->m_x = flt_xnew + centre.m_x;
	this->m_y = flt_ynew + centre.m_y;
}

void CPoint::cartToPol()
{
	float r = sqrt((this->m_x * this->m_x) + (this->m_y * this->m_y));
	float t = 2 * atan(this->m_y / (this->m_x + r));

	cout << "Polar coordinate of the following point: [r : t] => (" << r << ", " << t << " deg)" << endl;
}

/*
* FONCTION HOMOTHETIE AVEC CENTRE EN PARAMETRE
* void CPoint::homothetie(CPoint centre, float rapport)
* {
*	this->m_x = m_x - centre.m_x * rapport;
*	this->m_y = m_y - centre.m_y * rapport;
* }
*/

//	THIS METHOD GOT REMOVED FOR THE EXERCICE °63
void CPoint::display_point() const
{
	cout << "POINT'S COORDINATES: [X:Y] => [" << this->m_x << " : " << this->m_y << "]" << endl;
}
