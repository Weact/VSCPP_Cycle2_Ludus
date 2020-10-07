#pragma once
#ifndef VECTOR3_H
#define VECTOR3_H
class Vector3
{
private:
	//Private Members/Methods
	float mflt_X, mflt_Y, mflt_Z;

protected:
	//Protected Members/Methods

public:
	//Public Members

	//CONSTRUCTOR(S)

	Vector3();
	Vector3(float, float, float);
	//Vector3(float x, float y, float z) { mflt_X = x; mflt_Y = y; mflt_Z = z; }
	
	//DESTRUCTOR(S)
	~Vector3();

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

	Vector3 getVector();

		//CLASS METHODS
	void display_vector();
	void coincideVal(float, float, float);
	void coincideAdr(Vector3*);
	void coincideRef(Vector3&);

	float normaxVal(float, float, float);
	float* normaxAdr(Vector3*);
	float& normaxRef(Vector3&);
};

//INLINE METHOD OF <setVector3IN>
inline void Vector3::setVector3IN(float flt_vX, float flt_vY, float flt_vZ) {
	this->mflt_X = flt_vX;
	this->mflt_Y = flt_vY;
	this->mflt_Z = flt_vZ;
}

#endif // !VECTOR3_H