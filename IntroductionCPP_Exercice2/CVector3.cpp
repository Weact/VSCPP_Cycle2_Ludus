#include "CVector3.h"
#include <iostream>
#include <math.h>

using namespace std;

	//Basic Constructor
CVector3::CVector3()
{
	this->m_fltX = NULL;
	this->m_fltY = NULL;
	this->m_fltZ = NULL;
}

	//Custructor with Parameters
CVector3::CVector3(float flt_newX, float flt_newY, float flt_newZ)
{
	this->m_fltX = flt_newX;
	this->m_fltY = flt_newY;
	this->m_fltZ = flt_newZ;
}

	//Destructor
CVector3::~CVector3()
{
}

	//SETTERS
void CVector3::setX(float flt_vX)
{
	this->m_fltX = flt_vX;
}
void CVector3::setY(float flt_vY)
{
	this->m_fltY = flt_vY;
}
void CVector3::setZ(float flt_vZ)
{
	this->m_fltZ = flt_vZ;
}
		//SET VECTOR COORDINATE WITH PARAMETERS
void CVector3::setVector3(float flt_vX, float flt_vY, float flt_vZ)
{
	this->m_fltX = flt_vX;
	this->m_fltY = flt_vY;
	this->m_fltZ = flt_vZ;
}
	//GETTERS
float CVector3::getX()
{
	return this->m_fltX;
}
float CVector3::getY()
{
	return this->m_fltY;
}
float CVector3::getZ()
{
	return this->m_fltZ;
}
		//GET A VECTOR AND RETURN IT
CVector3 CVector3::getVector()
{
	return *this;
}
		//DISPLAY A VECTOR'S 3D COORDINATES
void CVector3::display_vector() //This method fits for the exercice 72
{
	cout << "The corresponding vector coordinate is : [X : " << this->getX() << "] ; [Y : " << this->getY() << "] ; [Z : " << this->getZ() << "].\n" << endl;
}
		//CHECK IF TWO VECTORS ARE THE EQUALS (all members have to fit)
void CVector3::coincideVal(float x2, float y2, float z2)
{
	if (getX() == x2 && getY() == y2 && getZ() == z2) {
		cout << "Both vectors are equals [VAL]" << endl;
	}
	else {
		cout << "Vectors are not equals [VAL]" << endl;
	}
}
		//SAME THAN PREVIOUS METHOD BUT WITH ADR
void CVector3::coincideAdr(CVector3 * v)
{
	if (getX() == v->m_fltX && getY() == v->m_fltY && getZ() == v->m_fltZ) {
		cout << "Both vectors are equals [ADR]" << endl;
	}
	else {
		cout << "Vectors are not equals [ADR]" << endl;
	}
}
		//SAME THAN PREVIOUS METHOD BUT WITH REFERENCE
void CVector3::coincideRef(CVector3& v)
{
	if (getX() == v.m_fltX && getY() == v.m_fltY && getZ() == v.m_fltZ) {
		cout << "Both vectors are equals [REF]" << endl;
	}
	else {
		cout << "Vectors are not equals [REF]" << endl;
	}
}
		//GET THE HIGHEST NORM BETWEEN TWO GIVEN VECTORS
CVector3 CVector3::normaxVal(float flt_x, float flt_y, float flt_z) {
	float norme_v1 = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	float norme_v2 = sqrt(pow(flt_x, 2) + pow(flt_y, 2) + pow(flt_z, 2));

	if (norme_v1 > norme_v2) {
		cout << "\nFirst Vector has the highest Norm ==> " << norme_v1 << endl;
		return *this; //Could use getVector() function since it returns *this
	}
	else {
		if (norme_v1 == norme_v2) {
			cout << "\nThey have the same Norm ==> " << norme_v1 << endl;
			return *this; //Could use getVector() function since it returns *this
		}
		else {
			cout << "\nSecond Vector has the highest Norm ==> " << norme_v2 << endl;
			return CVector3(flt_x, flt_y, flt_z);
		}
	}
}
		//SAME THAN PREVIOUS METHOD BUT WITH ADR
CVector3* CVector3::normaxAdr(CVector3* v) {
	float norme_v1 = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	float norme_v2 = sqrt(pow(v->m_fltX, 2) + pow(v->m_fltY, 2) + pow(v->m_fltZ, 2));

	if (norme_v1 > norme_v2) {
		cout << "\nFirst Vector has the highest Norm ==> " << norme_v1 << endl;
		return this;
	}
	else {
		if (norme_v1 == norme_v2) {
			cout << "\nThey have the same Norm ==> " << norme_v1 << endl;
			return this;
		}
		else {
			cout << "\nSecond Vector has the highest Norm ==> " << norme_v2 << endl;
			return v;
		}
	}
}
		//SAME THAN PREVIOUS METHOD BUT WITH REFERENCE
CVector3& CVector3::normaxRef(CVector3& v)
{
	//sqrt(x² + y² + z²).
	float norme_v1 = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	float norme_v2 = sqrt(pow(v.m_fltX, 2) + pow(v.m_fltY, 2) + pow(v.m_fltZ, 2));

	if (norme_v1 > norme_v2) {
		cout << "\nFirst Vector has the highest Norm ==> " << norme_v1 << endl;
		return *this; //Could use getVector() function since it returns *this
	}
	else {
		if (norme_v1 == norme_v2) {
			cout << "\nThey have the same Norm ==> " << norme_v1 << endl;
			return *this; //Could use getVector() function since it returns *this
		}
		else {
			cout << "\nSecond Vector has the highest Norm ==> " << norme_v2 << endl;
			return v;
		}
	}
}
		//COMPUTE TWO VECTOR COORDINATES BY REF
float CVector3::computeVectors(CVector3& v2)
{
	float length_v1 = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	float length_v2 = sqrt(pow(v2.m_fltX, 2) + pow(v2.m_fltY, 2) + pow(v2.m_fltZ, 2));

	return (length_v1 + length_v2);
	// TODO: insérer une instruction return ici
}
		//COMPUTE THE SCALAR PRODUCT OF TWO VECTORS BY REF
float CVector3::scalVectors(CVector3& v2)
{
	//xx’ + yy’ + zz’
	float scal = (this->m_fltX * v2.m_fltX) + (this->m_fltY * v2.m_fltY) + (this->m_fltZ * v2.m_fltZ);

	return scal;
}