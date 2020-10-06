#include "CPoint.h"
#include <iostream>
#include <math.h>

using namespace std;

int CPoint::cpt = 0;

CPoint::CPoint(float flt_px, float flt_py)
{
	cpt++;
	this->m_fX = flt_px;
	this->m_fY = flt_py;
}

CPoint::~CPoint()
{
	cpt--;
}

void CPoint::setX(float flt_newX)
{
	this->m_fX = flt_newX;
}

void CPoint::setY(float flt_newY)
{
	this->m_fY = flt_newY;
}

float CPoint::abscisse() const //Fonction abscisse (EX 63)
{
	return this->m_fX;
}

float CPoint::ordonne() const //Fonction ordonnée (EX 63)
{
	return this->m_fY;
}

void CPoint::move_point(float flt_pAddX, float flt_pAddY)
{
	this->m_fX += flt_pAddX;
	this->m_fY += flt_pAddY;
}

void CPoint::homothetie(CPoint &centre, float flt_rapport)
{
	this->m_fX = (this->m_fX - centre.m_fX) * flt_rapport + centre.m_fX;
	this->m_fY = (this->m_fY - centre.m_fY) * flt_rapport + centre.m_fY;
}

void CPoint::rotation(CPoint centre, float flt_angle)
{

	flt_angle =  3.14159f * flt_angle / 180;

	float s = sin(flt_angle);
	float c = cos(flt_angle);

	this->m_fX -= centre.m_fX;
	this->m_fY -= centre.m_fY;

	float flt_xnew = this->m_fX * c - this->m_fY * s;
	float flt_ynew = this->m_fX * s + this->m_fY * c;

	this->m_fX = flt_xnew + centre.m_fX;
	this->m_fY = flt_ynew + centre.m_fY;
}

void CPoint::cartToPol(CPoint &centre)
{
	float fX = this->m_fX - centre.m_fX;
	float fY = this->m_fY - centre.m_fY;

	float r = sqrt((fX * fX) + (fY * fY));
	float t = 2 * atan(fY / (fX + r));

	cout << "Polar coordinate of the following point: [r : t] => (" << r << ", " << t << " deg)" << endl;
}

int CPoint::get_cpt()
{
	return cpt;
}

/*
* FONCTION HOMOTHETIE AVEC CENTRE EN PARAMETRE
* void CPoint::homothetie(CPoint centre, float rapport)
* {
*	this->m_fX = m_fX - centre.m_fX * rapport;
*	this->m_fY = m_fY - centre.m_fY * rapport;
* }
*/

//	THIS METHOD GOT REMOVED FOR THE EXERCICE °63
void CPoint::display_point() const
{
	cout << "POINT'S COORDINATES: [X:Y] => [" << this->m_fX << " : " << this->m_fY << "]" << endl;
}
