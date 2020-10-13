#pragma once
#ifndef CVECTOR3_H
#define CVECTOR3_H

// ******************************************************************************************************************************
//	Fichier *			: CVector3.h
//
//	Classe				: CVector3 / vect (ex 83)
//	Description			: Vector placement, Vector position handler, Vector information displayer, Vectors Equality Checker
//	Attributs			: nb_vector3 (Allow us to count how many points are instantiated); m_fltX; m_fltY; m_fltZ [3D COORDINATES]
//
//	Notes				: -
//
// ******************************************************************************************************************************
// 12-10-2020			: DR. Lucas `Class creation + Members + Methods + Friends Methods`
// ******************************************************************************************************************************

class CMatrice;
class CVector3
{
private:
	//Private Members/Methods
	static int nb_vector3;

	double m_nX;
	double m_nY;
	double m_nZ;

protected:
	//Protected Members/Methods

public:
	//Public Members

	//CONSTRUCTOR(S)
	CVector3();
	CVector3(CVector3&);
	CVector3(double, double, double);

	//DESTRUCTOR(S)
	~CVector3();

	//Public Methods

		//SETTERS
	void setX(double);
	void setY(double);
	void setZ(double);
	void setVector(double, double, double);

		//GETTERS
	double getX() const;
	double getY() const;
	double getZ() const;

	//CLASS METHODS
	int count_vector3();
	void display_vector3() const; //Display Method of Vector [EXERCISE 83]
	CVector3 prod(CMatrice& matrice, CVector3 vector);

	//FRIEND METHOD
	friend bool coincide(CVector3& v1, CVector3& v2);


};

#endif // !CVECTOR3_H