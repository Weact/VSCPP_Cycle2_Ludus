#pragma once
#ifndef CVECTOR3_H
#define CVECTOR3_H

// ***************************************************************************************
//	Fichier *			: CVector3.h
//
//	Classe				: CVector3
//	Description			: Vector3D Declaration methods and Handling Methods
//	Attributs			: m_fltX, m_fltX, m_fltZ (3D Coordinates)
//
//	Notes				: X
//
// ***************************************************************************************
// 12-10-2020			: Dr. Lucas `Final Commit, Pushing and Validating`
// ***************************************************************************************

class CVector3
{
private:
	//Private Members/Methods
	float m_fltX, m_fltY, m_fltZ;

protected:
	//Protected Members/Methods

public:
	//Public Members

	//CONSTRUCTOR(S)

	CVector3();
	CVector3(float, float, float);
	//Vector3(float x = 0.0f, float y = 0.0f, float z = 0.0f) { mflt_X = x; mflt_Y = y; mflt_Z = z; }
	
	//DESTRUCTOR(S)
	~CVector3();

	//Public Methods

		//SETTERS
	void setX(float); //Method to SET VECTOR'S X
	void setY(float); //Method to SET VECTOR'S Y
	void setZ(float); //METHOD TO SET VECTOR'S Z
	void setVector3(float, float, float); //Method to set all 3 values X Y and Z of VECTOR
	void setVector3IN(float, float, float); //INLINE Method to set all 3 values X Y and Z of VECTOR

		//GETTERS
	float getX();
	float getY();
	float getZ();

	CVector3 getVector();

		//CLASS METHODS
	void display_vector(); //This method fits for the exercice 72
	void coincideVal(float, float, float);
	void coincideAdr(CVector3*);
	void coincideRef(CVector3&);

	CVector3 normaxVal(float, float, float);
	CVector3* normaxAdr(CVector3*);
	CVector3& normaxRef(CVector3&);

	float computeVectors(CVector3&);
	float scalVectors(CVector3&);
};

//INLINE METHOD OF <setVector3IN>
inline void CVector3::setVector3IN(float flt_vX, float flt_vY, float flt_vZ) {
	this->m_fltX = flt_vX;
	this->m_fltY = flt_vY;
	this->m_fltZ = flt_vZ;
}

#endif // !CVECTOR3_H