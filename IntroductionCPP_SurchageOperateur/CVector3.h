#pragma once
#ifndef CVECTOR_H
#define CVECTOR_H

// ******************************************************************************************************************************
//	Fichier *			: CVector3.h
//
//	Classe				: CVector3 / vect)
//	Description			: Vector placement, Vector position handler, Vector information displayer, Vectors Equality Checker
//	Attributs			: nb_vector3 (Allow us to count how many points are instantiated); v[3] (array of x y z coordinate)
//
//	Notes				: -
//
// ******************************************************************************************************************************
// 12-10-2020			: DR. Lucas `Class creation + Members + Methods + Friends Methods`
// ******************************************************************************************************************************

const int SIZE = 3;

	class CVector3
	{
	private:
		//Private Members/Methods
		static int nb_vector3;
		float v[SIZE];

	protected:
		//Protected Members/Methods

	public:
		//Public Members

		//CONSTRUCTOR(S)
		CVector3();
		CVector3(float m_fltX = 0.0f, float m_fltY = 0.0f, float m_fltZ = 0.0f) {
			std::cout << ">>>>A vector3 has been created successfully !<<<<\n" << std::endl;
			nb_vector3++;
			v[0] = m_fltX;
			v[1] = m_fltY;
			v[2] = m_fltZ;
		}
		CVector3(CVector3&);

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
		float &operator[](int value);
		//FRIEND METHOD

};

#endif // !CVECTOR_H