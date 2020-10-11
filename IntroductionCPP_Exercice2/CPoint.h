#pragma once
#ifndef CPOINT_H
#define CPOINT_H

class CPoint
{
private:
		//Private Members/Methods
	static int nb;
	float m_fX;
	float m_fY;

protected:
		//Protected Members/Methods

public:
		//Public Members

		//CONSTRUCTOR(S)
	CPoint();
	CPoint(float, float);

		//DESTRUCTOR(S)
	~CPoint();

		//Public Methods

				//SETTERS
	void setX(float m_newX);
	void setY(float m_newY);

				//GETTERS
	float getX();
	float getY();

		//CLASS METHODS
	void move_point(float, float);
	void set_coords(float, float);
	void display_point();

	static int nombre();
};

#endif

