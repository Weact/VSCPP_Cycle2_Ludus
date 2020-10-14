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

CVector3::CVector3(CVector3& vct_copy)
{
    this->m_nX = vct_copy.m_nX;
    this->m_nY = vct_copy.m_nY;
    this->m_nZ = vct_copy.m_nZ;
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

bool CVector3::operator==(CVector3& target_vector)
{
    if (this->m_nX == target_vector.m_nX && this->m_nY == target_vector.m_nY && this->m_nZ == target_vector.m_nZ)
    {
        return true;
    }
    else {
        return false;
    }
}

bool CVector3::operator!=(CVector3& target_vector)
{
    if (this->m_nX != target_vector.m_nX || this->m_nY != target_vector.m_nY || this->m_nZ != target_vector.m_nZ)
    {
        return true;
    }
    else {
        return false;
    }
}

bool operator==(CVector3& source_vector, CVector3& target_vector)
{
    if (source_vector.m_nX == target_vector.m_nX && source_vector.m_nY == target_vector.m_nY && source_vector.m_nZ == target_vector.m_nZ)
    {
        return true;
    }
    else {
        return false;
    }
}

bool operator!=(CVector3& source_vector, CVector3& target_vector)
{
    if (source_vector.m_nX != target_vector.m_nX || source_vector.m_nY != target_vector.m_nY || source_vector.m_nZ != target_vector.m_nZ)
    {
        return true;
    }
    else {
        return false;
    }
}
