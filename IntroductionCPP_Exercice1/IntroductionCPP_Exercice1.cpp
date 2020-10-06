#include <iostream>
#include "CPoint.h"

using namespace std;

int main()
{

#pragma region EXERCICE62
	CPoint pointA(3.0f, 5.5f), pointB(7.2f, 13.4f);

	//Display Point's informations
	pointA.display_point();
	pointB.display_point();

	//Move the points by 2.5X 1.5Y and 3.5X -2.0Y
	pointA.move_point(2.5f, 1.5f);
	pointB.move_point(3.5f, -2.0f);

	//Display again Point's informations
	pointA.display_point();
	pointB.display_point();
#pragma endregion



	return 0;
}
