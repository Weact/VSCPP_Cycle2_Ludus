// IntruductionCPP_Ludus.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdio.h>
#include "TPoint.h";
#include "cPoint.h"
using namespace std;

int main()
{
    cout << "Hello world !" << endl << endl;

    //Typedef struct

    tpoint myPoint = createPoint(5, 10); //create a point myPoint and give the position 5 10
    displayPoint(myPoint); //display point's position

    cout << endl << "Separate struct and object" << endl << endl;


    //Objects

    cPoint myPointA, myPointB, myPointC; //create 3 points with basic constructor (values init null)
    cPoint mySpecialPoint(50, 35); //create a new point with special constructor

    myPointA.set_position(5, 5); //set pointA's to 5 5
    myPointB.set_position(10, 10); //set pointB's to 10 10
    myPointA.display_point(); //display position of pointA
    myPointB.display_point(); //display position of pointB

    myPointC.display_point(); //display position of pointC (NULL)
    mySpecialPoint.display_point(); //display position of pointSpecial (special constructor)

    cout << endl;
    return 0;
}