// IntruductionCPP_Ludus.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdio.h>
//#include "TPoint.h";
#include "cPoint.h"
using namespace std;

int main()
{
    cout << "Hello world !" << endl << endl;

    //Typedef struct

    //tpoint myPoint = createPoint(5, 10); //create a point myPoint and give the position 5 10
    //displayPoint(myPoint); //display point's position

    //cout << endl << "Separate struct and object" << endl << endl;


    //Objects

        //CREATION
    cPoint myPointA, myPointB; //create 2 points with basic constructor (values init null)
    cPoint mySpecialPoint(50, 35); //create a new point with special constructor

//[PART 1]
#pragma region Part1
        //SET POSITION
    myPointA.set_position(5, 5); //set pointA's to 5 5

        //DISPLAY
    myPointA.display_point(); //display position of pointA
    myPointB.display_point(); //display position of pointB (NULL ; Default 0:0)
    mySpecialPoint.display_point(); //display position of pointSpecial (special constructor)
#pragma endregion
//[END PART 1]

//[PART 2]
#pragma region Part2
        //SETTERS
            //SET POINT A; X AND Y
    myPointA.setX(27);
    myPointA.setY(35);
            //SET POINT B; X AND Y
    myPointB.setX(17);
    myPointB.setY(29);

        //GETTERS
            //GET POINT A; COORDINATES
    int pointA_X = myPointA.getX();
    int pointA_Y = myPointA.getY();
            //GET POINT B; COORDINATES
    int pointB_X = myPointB.getX();
    int pointB_Y = myPointB.getY();

        //DISPLAY
    cout << "\n{GETTER AND SETTER} => Point [X:Y] -> " << "[" << pointA_X << ":" << pointA_Y << "]" << endl;
    cout << "\n{GETTER AND SETTER} => Point [X:Y] -> " << "[" << pointB_X << ":" << pointB_Y << "]" << endl;
#pragma endregion
//[END PART 2]
    //NOTE : After this part, the method <void display_point() const; //display point's position> has been modified to work with getters.



    cout << endl;
    return 0;
}