#pragma once
#ifndef CVECTOR_H
#define CVECTOR_H

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

	class CVector3
	{
	private:
		//Private Members/Methods
		static int nb_vector3;

		float m_fltX;
		float m_fltY;
		float m_fltZ;

	protected:
		//Protected Members/Methods

	public:
		//Public Members

		//CONSTRUCTOR(S)
		CVector3();
		CVector3(CVector3&);
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
		double getX() const;
		double getY() const;
		double getZ() const;

		//CLASS METHODS
		int count_vector3();
		void display_vector3() const; //Display Method of Vector [EXERCISE 83]
		bool operator==(CVector3&);
		bool operator!=(CVector3&);

		//FRIEND METHOD
		friend bool operator==(CVector3&, CVector3&);
		friend bool operator!=(CVector3&, CVector3&);
		friend CVector3 operator+(CVector3&, CVector3&);
		friend float operator*(CVector3&, CVector3&);
};

#endif // !CVECTOR_H