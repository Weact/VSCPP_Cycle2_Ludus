#include <iostream>
#include "CAffiche.h"
#include "CPoint.h"3

using namespace std;

CAffiche::CAffiche()
{
	cout << "A displayer has been created successfully !\n" << endl;
}

CAffiche::~CAffiche()
{
	cout << "A displayer has been destroyed successfully !\n" << endl;
}

void CAffiche::affiche(CPoint& pt)
{
	cout << "Point Coordinates [X:Y] -> [" << pt.m_fltX << ":" << pt.m_fltY << "] !\n" << endl;
}
