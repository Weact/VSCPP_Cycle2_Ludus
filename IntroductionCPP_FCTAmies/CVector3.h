#pragma once
#ifndef CVECTOR3_H
#define CVECTOR3_H

// ******************************************************************************************************************************
//	Fichier *			: CVector3.h
//
//	Classe				: CVector3
//	Description			: 
//	Attributs			: -
//
//	Notes				: -
//
// ******************************************************************************************************************************
// 12-10-2020			: DR. Lucas `Class creation + Members + Methods + Friends Methods`
// ******************************************************************************************************************************

class CVector3
{
private:
	//Private Members/Methods
	static int nb_vector3;

	float m_nX;
	float m_nY;
	float m_nZ;

protected:
	//Protected Members/Methods

public:
	//Public Members

	//CONSTRUCTOR(S)
	CVector3();
	CVector3(float, float, float);

	//DESTRUCTOR(S)
	~CVector3();

	//Public Methods

		//SETTERS
	void setX(float);
	void setY(float);
	void setZ(float);
	void setVector(float, float, float);

		//GETTERS
	float getX();
	float getY();
	float getZ();

	//CLASS METHODS
	int count_vector3();

	//FRIEND METHOD
	friend bool coincide(CVector3& v1, CVector3& v2);
};

#endif // !CVECTOR3_H