#include <iostream>
#include "CPoint.h"

using namespace std;

//GLOBALS

int main()
{

#pragma region EXERCICE_62_COMMIT_08051da7
	// REMOVE COMMENT BLOCK TO TEST THIS EXERCISE. ALSO : REMOVE COMMENT LINE AT DISPLAY_POINT METHOD IN .CPP AND .H

	cout << "EXERCICE 62\n" << endl;

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

	cout << endl;

#pragma endregion

#pragma region EXERCICE_63_COMMIT_03b1e8e9

	cout << "EXERCICE 63\n" << endl;

		//Create points
	CPoint pointC(11.7f, 13.1f), pointD(8.5f, 15.9f);
		
		//Display Point's informations
	cout << "C POINT's COORDINATES: [X:Y] => [" << pointC.abscisse() << " : " << pointC.ordonne() << "]" << endl;
	cout << "D POINT's COORDINATES: [X:Y] => [" << pointD.abscisse() << " : " << pointD.ordonne() << "]" << endl;

		//Move the points by 1.3X -6.3Y and 11.1X 7.5Y
	pointC.move_point(1.3f, -6.3f);
	pointD.move_point(11.1f, 7.5f);

		//Display Point's informations
	cout << "C POINT's COORDINATES: [X:Y] => [" << pointC.abscisse() << " : " << pointC.ordonne() << "]" << endl;
	cout << "D POINT's COORDINATES: [X:Y] => [" << pointD.abscisse() << " : " << pointD.ordonne() << "]" << endl;

	cout << endl;
#pragma endregion

#pragma region EXERICE_64_COMMIT_76bd0167_9ee6d89e_91bd7bcb_bc807a4c

	cout << "EXERCICE 64\n" << endl;

	CPoint centre(0.0f,0.0f); //On pourrait aussi passer le centre en paramètre de la fonction
	CPoint pointE(3.0f, 3.0f);
	float rapport = 4.5f;
	CPoint EPrime(0.0f, 0.0f);
	EPrime.setX(pointE.abscisse());
	EPrime.setY(pointE.ordonne());

		//Image E' du point E par l'homothétie de entre (0, 0) et de rapport 4
	EPrime.homothetie(centre, rapport);

		//Affichage
	cout << "CENTRE : ";
	centre.display_point();
	cout << "\nPOINT E: ";
	pointE.display_point();
	cout << "\nRAPPORT: " << rapport << endl;
	cout << "\nPOINT E': ";
	EPrime.display_point();
	cout << endl;

	cout << "ROTATION" << endl;

	EPrime.rotation(centre, 90.0f);
	EPrime.display_point();

	cout << "\nPOLAR COORDINATE\n" << endl;
	cout << "EPrime Polar Coordinate: " << endl;
	EPrime.cartToPol();

	cout << "\nE Polar Coordinate: " << endl;
	pointE.cartToPol();

#pragma endregion

#pragma region EXERCICE_65_COMMIT_

#pragma endregion

#pragma region EXERCICE_66_COMMIT_c4eaefa6
	cout << "\n\nAMOUNT OF POINTS OBJECTS CREATED : " << CPoint::get_cpt() << " !" << endl;
#pragma endregion


	return 0;
}
