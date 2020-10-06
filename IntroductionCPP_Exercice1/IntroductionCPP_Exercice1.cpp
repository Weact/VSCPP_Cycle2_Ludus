#include <iostream>
#include "CPoint.h"

using namespace std;

int main()
{

#pragma region EXERCICE_62_COMMIT_08051da7
	/* REMOVE COMMENT BLOCK TO TEST THIS EXERCISE. ALSO : REMOVE COMMENT LINE AT DISPLAY_POINT METHOD IN .CPP AND .H

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

	*/
#pragma endregion

#pragma region EXERCICE63
		//Create points
	CPoint pointC(11.7f, 13.1f), pointD(8.5f, 15.9f);
		
		//Display Point's informations
	cout << "C POINT's COORDINATES: [X:Y] => [" << pointC.getX() << " : " << pointC.getY() << "]" << endl;
	cout << "D POINT's COORDINATES: [X:Y] => [" << pointD.getX() << " : " << pointD.getY() << "]" << endl;

		//Move the points by 1.3X -6.3Y and 11.1X 7.5Y
	pointC.move_point(1.3f, -6.3f);
	pointD.move_point(11.1f, 7.5f);

		//Display Point's informations
	cout << "C POINT's COORDINATES: [X:Y] => [" << pointC.getX() << " : " << pointC.getY() << "]" << endl;
	cout << "D POINT's COORDINATES: [X:Y] => [" << pointD.getX() << " : " << pointD.getY() << "]" << endl;
#pragma endregion


	return 0;
}
