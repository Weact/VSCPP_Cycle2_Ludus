#pragma once
#ifndef CPOINT_H
#define CPOINT_H

class CPoint //classe point
{
private:
		//Private Members/Methods
	static int cpt;
	float m_fX;
	float m_fY;

protected:
		//Protected Members/Methods

public:
		//CONSTRUCTOR(S)
	CPoint(float, float);

		//DESTRUCTOR(S)
	~CPoint();

		//Public Members/Methods

			//SETTERS
	void setX(float m_newX);
	void setY(float m_newY);

			//GETTERS
	float abscisse() const;
	float ordonne() const;

			//METHODS
	void move_point(float, float);
	void display_point() const; //THIS METHOD GOT REMOVED FOR THE EXERCICE �63
	void homothetie(CPoint&, float); // Function with rapport parameter : < void CPoint::homothetie(CPoint, float); >
	void rotation(CPoint, float); //Rotate a point according to an origin
	float rho();
	float theta();
	void cartToPol(); //Convert cartesians coordinates to polars


	static int get_cpt(); //Get numbers of created objects
};

#endif

