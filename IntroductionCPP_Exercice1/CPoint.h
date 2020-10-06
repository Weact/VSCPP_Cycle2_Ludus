#pragma once
#ifndef CPOINT_H
#define CPOINT_H

class CPoint //classe point
{
private:
		//Private Members/Methods
	float m_x;
	float m_y;

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
	float getX() const; //Fonction abscisse (EX 63)
	float getY() const; //Fonction ordonnée (EX 63)

			//METHODS
	void move_point(float, float);
	//void display_point() const; THIS METHOD GOT REMOVED FOR THE EXERCICE °63

};

#endif

