#include <iostream>
#include "CVector3.h"

using namespace std;

int CVector3::nb_vector3 = 0;

CVector3::CVector3()
{
    cout << ">>>>A vector3 has been created successfully !<<<<\n" << endl;
    nb_vector3++;
    this->m_fltX = NULL;
    this->m_fltY = NULL;
    this->m_fltZ = NULL;
}

CVector3::CVector3(CVector3& vct_copy)
{
    this->m_fltX = vct_copy.m_fltX;
    this->m_fltY = vct_copy.m_fltY;
    this->m_fltZ = vct_copy.m_fltZ;
}

CVector3::CVector3(float m_fltNewX, float m_fltNewY, float m_fltNewZ)
{
    cout << ">>>>A vector3 has been created successfully !<<<<\n" << endl;
    nb_vector3++;
    this->m_fltX = m_fltNewX;
    this->m_fltY = m_fltNewY;
    this->m_fltZ = m_fltNewZ;
}

CVector3::~CVector3()
{
    cout << ">>>>A vector3 has been destroyed successfully !<<<<\n" << endl;
    nb_vector3--;
}

void CVector3::setX(float flt_newX)
{
    this->m_fltX = flt_newX;
}

void CVector3::setY(float flt_newY)
{
    this->m_fltY = flt_newY;
}

void CVector3::setZ(float flt_newZ)
{
    this->m_fltZ = flt_newZ;
}

void CVector3::setVector(float m_fltX, float m_fltY, float m_fltZ)
{
    this->m_fltX = m_fltX;
    this->m_fltY = m_fltY;
    this->m_fltZ = m_fltZ;
}

double CVector3::getX() const
{
    return this->m_fltX;
}

double CVector3::getY() const
{
    return this->m_fltY;
}

double CVector3::getZ() const
{
    return this->m_fltZ;
}

int CVector3::count_vector3()
{
    return nb_vector3;
}

void CVector3::display_vector3() const
{
    cout << "Vector3 Coordinates : [X;Y;Z] -> [" << this->m_fltX << ";" << this->m_fltY << ";" << this->m_fltZ << "] !\n" << endl;
}

bool CVector3::operator==(CVector3& target_vector)
{
    if (this->m_fltX == target_vector.m_fltX && this->m_fltY == target_vector.m_fltY && this->m_fltZ == target_vector.m_fltZ)
    {
        return true;
    }
    else {
        return false;
    }
}

bool CVector3::operator!=(CVector3& target_vector)
{
    if (this->m_fltX != target_vector.m_fltX || this->m_fltY != target_vector.m_fltY || this->m_fltZ != target_vector.m_fltZ)
    {
        return true;
    }
    else {
        return false;
    }
}

bool operator==(CVector3& source_vector, CVector3& target_vector)
{
    if (source_vector.m_fltX == target_vector.m_fltX && source_vector.m_fltY == target_vector.m_fltY && source_vector.m_fltZ == target_vector.m_fltZ)
    {
        return true;
    }
    else {
        return false;
    }
}

bool operator!=(CVector3& source_vector, CVector3& target_vector)
{
    if (source_vector.m_fltX != target_vector.m_fltX || source_vector.m_fltY != target_vector.m_fltY || source_vector.m_fltZ != target_vector.m_fltZ)
    {
        return true;
    }
    else {
        return false;
    }
}

    //COMPUTE TWO VECTOR COORDINATES BY REF
CVector3 operator+(CVector3& source_vector, CVector3& target_vector)
{
    CVector3 vct_result;

    vct_result.m_fltX = source_vector.m_fltX + target_vector.m_fltX;
    vct_result.m_fltY = source_vector.m_fltY + target_vector.m_fltY;
    vct_result.m_fltZ = source_vector.m_fltZ + target_vector.m_fltZ;

    return vct_result;
}

float operator*(CVector3& source_vector, CVector3& target_vector)
{
    //xx’ + yy’ + zz’
    float scal = (source_vector.m_fltX * target_vector.m_fltX) + (source_vector.m_fltY * target_vector.m_fltY) + (source_vector.m_fltZ * target_vector.m_fltZ);

    return scal;
}
