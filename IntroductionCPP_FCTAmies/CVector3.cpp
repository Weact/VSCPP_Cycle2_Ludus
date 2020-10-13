#include <iostream>
#include "CVector3.h"
#include "CMatrice.h"

using namespace std;

int CVector3::nb_vector3 = 0;

CVector3::CVector3()
{
    cout << "A vector3 has been created successfully !\n" << endl;
    nb_vector3++;
    this->m_nX = NULL;
    this->m_nY = NULL;
    this->m_nZ = NULL;
}

CVector3::CVector3(CVector3& vct_copy)
{
    this->m_nX = vct_copy.m_nX;
    this->m_nY = vct_copy.m_nY;
    this->m_nZ = vct_copy.m_nZ;
}

CVector3::CVector3(double m_newNX, double m_newNY, double m_newNZ)
{
    cout << "A vector3 has been created successfully !\n" << endl;
    nb_vector3++;
    this->m_nX = m_newNX;
    this->m_nY = m_newNY;
    this->m_nZ = m_newNZ;
}

CVector3::~CVector3()
{
    cout << "A vector3 has been destroyed successfully !\n" << endl;
    nb_vector3--;
}

void CVector3::setX(double flt_newX)
{
    this->m_nX = flt_newX;
}

void CVector3::setY(double flt_newY)
{
    this->m_nY = flt_newY;
}

void CVector3::setZ(double flt_newZ)
{
    this->m_nZ = flt_newZ;
}

void CVector3::setVector(double m_nX, double m_nY, double m_nZ)
{
    this->m_nX = m_nX;
    this->m_nY = m_nY;
    this->m_nZ = m_nZ;
}

double CVector3::getX() const
{
    return this->m_nX;
}

double CVector3::getY() const
{
    return this->m_nY;
}

double CVector3::getZ() const
{
    return this->m_nZ;
}

int CVector3::count_vector3()
{
    return nb_vector3;
}

void CVector3::display_vector3() const
{
    cout << "Vector3 Coordinates : [X;Y;Z] -> [" << this->m_nX << ";" << this->m_nY << ";" << this->m_nZ << "] !\n" << endl;
}

bool coincide(CVector3& v1, CVector3& v2)
{
    if (v1.m_nX == v2.m_nX && v1.m_nY == v2.m_nY && v1.m_nZ == v2.m_nZ) {
        return true;
    }
    else {
        return false;
    }
}

