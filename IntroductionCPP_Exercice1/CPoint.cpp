#include "CPoint.h"
#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>



using namespace std;

int CPoint::cpt = 0;

CPoint::CPoint(float flt_px, float flt_py)
{
	cpt++;
	this->m_fX = flt_px;
	this->m_fY = flt_py;

	//this->m_fX = sqrt((flt_px * flt_px) + (flt_py * flt_py));
	//this->m_fY = 2 * atan(flt_py / (flt_px + m_fX));
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

void CPoint::move_point(float flt_pAddX, float flt_pAddY) //Move the point by X:Y
{
	this->m_fX += flt_pAddX;
	this->m_fY += flt_pAddY;
}

void CPoint::homothetie(CPoint &centre, float flt_rapport)
{
	this->m_fX = (this->m_fX - centre.m_fX) * flt_rapport + centre.m_fX;
	this->m_fY = (this->m_fY - centre.m_fY) * flt_rapport + centre.m_fY;
}

void CPoint::rotation(CPoint centre, float flt_angle) //Rotate a point around an origin
{

	flt_angle =  3.14159f * flt_angle / 180; //conversion deg to rad

	float s = sin(flt_angle);
	float c = cos(flt_angle);

	this->m_fX -= centre.m_fX;
	this->m_fY -= centre.m_fY;

	float flt_xnew = this->m_fX * c - this->m_fY * s;
	float flt_ynew = this->m_fX * s + this->m_fY * c;

	this->m_fX = flt_xnew + centre.m_fX;
	this->m_fY = flt_ynew + centre.m_fY;
}

float CPoint::rho()
{
	return sqrt( (this->m_fX*this->m_fX) + (this->m_fY*this->m_fY) );
}

float CPoint::theta()
{
	float th = 0.0f;
	/*
	if (this->m_fX > 0) {
		th = atan(this->m_fY / this->m_fX);
	}
	else
	{
		if (this->m_fX < 0)
		{
			if (this->m_fY >= 0) {
				th = atan( (this->m_fY / this->m_fX) + M_PI);
			}
			else {
				th = atan((this->m_fY / this->m_fX) - M_PI);
			}
		}
		else
		{
			if (this->m_fX == 0)
			{
				if (this->m_fY > 0)
				{
					th = M_PI / 2;
				}
				else
				{
					th = -(M_PI / 2);
				}
			}
		}
	}
	*/

	th = 2 * atan(this->m_fY / (this->m_fX + rho()));
	th *= 180 / M_PI;

	return th;
}

void CPoint::cartToPol() //Convert a point cartesian coordinate to polar coordinate
{
	float r = CPoint::rho();
	float t = CPoint::theta();

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
