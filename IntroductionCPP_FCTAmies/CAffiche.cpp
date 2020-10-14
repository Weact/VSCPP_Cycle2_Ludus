#include <iostream>
#include "CPoint.h"
#include "CVector3.h"

using namespace std;


void affiche(CPoint& pt)
{
	cout << "Point Coordinates [X:Y] -> [" << pt.m_nX << ":" << pt.m_nY << "] !\n" << endl;
}