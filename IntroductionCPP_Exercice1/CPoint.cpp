#include "CPoint.h"
#include <iostream>
using namespace std;

CPoint::CPoint(float px, float py)
{
	this->m_x = px;
	this->m_y = py;
}

CPoint::~CPoint()
{
}

void CPoint::setX(float m_newX)
{
	this->m_x = m_newX;
}

void CPoint::setY(float m_newY)
{
	this->m_y = m_newY;
}

float CPoint::getX() const
{
	return this->m_x;
}

float CPoint::getY() const
{
	return this->m_y;
}

void CPoint::move_point(float pAddX, float pAddY)
{
	this->m_x += pAddX;
	this->m_y += pAddY;
}

void CPoint::display_point() const
{
	cout << "POINT'S COORDINATES: [X:Y] => [" << this->m_x << " : " << this->m_y << "]" << endl;
}
