#include "vector3.h"
#include <iostream>
#include <math.h>

using namespace std;

Vector3::Vector3()
{
	this->mflt_X = NULL;
	this->mflt_Y = NULL;
	this->mflt_Z = NULL;
}

Vector3::Vector3(float flt_newX, float flt_newY, float flt_newZ)
{
	this->mflt_X = flt_newX;
	this->mflt_Y = flt_newY;
	this->mflt_Z = flt_newZ;
}

Vector3::~Vector3()
{
}

void Vector3::setX(float flt_vX)
{
	this->mflt_X = flt_vX;
}
void Vector3::setY(float flt_vY)
{
	this->mflt_Y = flt_vY;
}
void Vector3::setZ(float flt_vZ)
{
	this->mflt_Z = flt_vZ;
}

void Vector3::setVector3(float flt_vX, float flt_vY, float flt_vZ)
{
	this->mflt_X = flt_vX;
	this->mflt_Y = flt_vY;
	this->mflt_Z = flt_vZ;
}

float Vector3::getX()
{
	return this->mflt_X;
}
float Vector3::getY()
{
	return this->mflt_Y;
}
float Vector3::getZ()
{
	return this->mflt_Z;
}

Vector3 Vector3::getVector()
{
	return *this;
}

void Vector3::display_vector()
{
	cout << "The corresponding vector coordinate is : [X : " << this->getX() << "] ; [Y : " << this->getY() << "] ; [Z : " << this->getZ() << "].\n" << endl;
}

void Vector3::coincideVal(float x2, float y2, float z2)
{
	if (getX() == x2 && getY() == y2 && getZ() == z2) {
		cout << "Both vectors are equals [VAL]" << endl;
	}
	else {
		cout << "Vectors are not equals [VAL]" << endl;
	}
}

void Vector3::coincideAdr(Vector3 * v)
{
	if (getX() == v->mflt_X && getY() == v->mflt_Y && getZ() == v->mflt_Z) {
		cout << "Both vectors are equals [ADR]" << endl;
	}
	else {
		cout << "Vectors are not equals [ADR]" << endl;
	}
}

void Vector3::coincideRef(Vector3& v)
{
	if (getX() == v.mflt_X && getY() == v.mflt_Y && getZ() == v.mflt_Z) {
		cout << "Both vectors are equals [REF]" << endl;
	}
	else {
		cout << "Vectors are not equals [REF]" << endl;
	}
}

float Vector3::normaxVal(float flt_x, float flt_y, float flt_z) {
	float norme_v1 = sqrt(pow(this->mflt_X, 2) + pow(this->mflt_Y, 2) + pow(this->mflt_Z, 2));
	float norme_v2 = sqrt(pow(flt_x, 2) + pow(flt_y, 2) + pow(flt_z, 2));

	if (norme_v1 > norme_v2) {
		cout << "\nFirst Vector has the highest Norm : ";
		return norme_v1;
	}
	else {
		if (norme_v1 == norme_v2) {
			cout << "\nThey have the same Norm : ";
			return norme_v1;
		}
		else {
			cout << "\nSecond Vector has the highest Norm : ";
			return norme_v2;
		}
	}
}

float Vector3::normaxAdr(Vector3* v) {
	float norme_v1 = sqrt(pow(this->mflt_X, 2) + pow(this->mflt_Y, 2) + pow(this->mflt_Z, 2));
	float norme_v2 = sqrt(pow(v->mflt_X, 2) + pow(v->mflt_Y, 2) + pow(v->mflt_Z, 2));

	if (norme_v1 > norme_v2) {
		cout << "\nFirst Vector has the highest Norm : ";
		return norme_v1;
	}
	else {
		if (norme_v1 == norme_v2) {
			cout << "\nThey have the same Norm : ";
			return norme_v1;
		}
		else {
			cout << "\nSecond Vector has the highest Norm : ";
			return norme_v2;
		}
	}
}

float Vector3::normaxRef(Vector3& v)
{
	//sqrt(x² + y² + z²).
	float norme_v1 = sqrt(pow(this->mflt_X, 2) + pow(this->mflt_Y, 2) + pow(this->mflt_Z, 2));
	float norme_v2 = sqrt(pow(v.mflt_X, 2) + pow(v.mflt_Y, 2) + pow(v.mflt_Z, 2));

	if (norme_v1 > norme_v2) {
		cout << "\nFirst Vector has the highest Norm : ";
		return norme_v1;
	}
	else {
		if (norme_v1 == norme_v2) {
			cout << "\nThey have the same Norm : ";
			return norme_v1;
		}
		else {
			cout << "\nSecond Vector has the highest Norm : ";
			return norme_v2;
		}
	}
}
