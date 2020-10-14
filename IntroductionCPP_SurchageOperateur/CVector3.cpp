#include <iostream>
#include "CVector3.h"

using namespace std;

int CVector3::nb_vector3 = 0;

CVector3::CVector3()
{
    cout << ">>>>A vector3 has been created successfully !<<<<\n" << endl;
    nb_vector3++;
    for (int i = 0; i < SIZE; i++)
    {
        this->v[i] = NULL;
    }
}

CVector3::CVector3(CVector3& vct_copy)
{
    this->v[0] = vct_copy.v[0];
    this->v[1] = vct_copy.v[1];
    this->v[2] = vct_copy.v[2];
}

CVector3::~CVector3()
{
    cout << ">>>>A vector3 has been destroyed successfully !<<<<\n" << endl;
    nb_vector3--;
}

void CVector3::setX(float flt_newX)
{
    this->v[0] = flt_newX;
}

void CVector3::setY(float flt_newY)
{
    this->v[1] = flt_newY;
}

void CVector3::setZ(float flt_newZ)
{
    this->v[2] = flt_newZ;
}

void CVector3::setVector(float m_fltX, float m_fltY, float m_fltZ)
{
    this->v[0] = m_fltX;
    this->v[1] = m_fltY;
    this->v[2] = m_fltZ;
}

double CVector3::getX() const
{
    return this->v[0];
}

double CVector3::getY() const
{
    return this->v[1];
}

double CVector3::getZ() const
{
    return this->v[2];
}

int CVector3::count_vector3()
{
    return nb_vector3;
}

void CVector3::display_vector3() const
{
    cout << "Vector3 Coordinates : [X;Y;Z] -> [" << this->v[0] << ";" << this->v[1] << ";" << this->v[2] << "] !\n" << endl;
}

float &CVector3::operator[](int value)
{
    if (value >= SIZE || value <= -1)
    {
        cout << ">! AN INDEX IS OUT OF ARRAY !<" << endl;
        return v[0];
    }
    else {
        return v[value];
    }
}
