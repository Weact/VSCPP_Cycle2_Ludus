#include <iostream>
#include "CVector3.h"

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

CVector3::CVector3(float m_newNX, float m_newNY, float m_newNZ)
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

void CVector3::setX(float flt_newX)
{
    this->m_nX = flt_newX;
}

void CVector3::setY(float flt_newY)
{
    this->m_nY = flt_newY;
}

void CVector3::setZ(float flt_newZ)
{
    this->m_nZ = flt_newZ;
}

void CVector3::setVector(float m_nX, float m_nY, float m_nZ)
{
    this->m_nX = m_nX;
    this->m_nY = m_nY;
    this->m_nZ = m_nZ;
}

float CVector3::getX()
{
    return this->m_nX;
}

float CVector3::getY()
{
    return this->m_nY;
}

float CVector3::getZ()
{
    return this->m_nZ;
}

int CVector3::count_vector3()
{
    return nb_vector3;
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