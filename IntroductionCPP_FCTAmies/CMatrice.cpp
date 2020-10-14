#include <iostream>
#include "CMatrice.h"
#include "CVector3.h"

using namespace std;

CMatrice::CMatrice(double matrice[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			this->m_dblMatrice[i][j] = matrice[i][j];
		}
	}
}

CMatrice::~CMatrice()
{
}

void CMatrice::setMValue(int n_x, int n_y, double dbl_value)
{
	this->m_dblMatrice[n_x][n_y] = dbl_value;
}

double CMatrice::getMValue(int n_x, int n_y) const
{
	return this->m_dblMatrice[n_x][n_y];
}
