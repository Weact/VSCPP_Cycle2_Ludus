// IntruductionCPP_Ludus.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdio.h>
//#include "TPoint.h";
#include "cPoint.h"
using namespace std; //This is needed to use cout without std:: (or endl, etc..)

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
    int n_pointA_X = myPointA.getX();
    int n_pointA_Y = myPointA.getY();
            //GET POINT B; COORDINATES
    int n_pointB_X = myPointB.getX();
    int n_pointB_Y = myPointB.getY();

        //DISPLAY
    cout << "\n{GETTERS AND SETTERS} => Point [X:Y] -> " << "[" << n_pointA_X << ":" << n_pointA_Y << "]" << endl;
    cout << "\n{GETTERS AND SETTERS} => Point [X:Y] -> " << "[" << n_pointB_X << ":" << n_pointB_Y << "]" << endl;
#pragma endregion
//[END PART 2]
    //NOTE : After this part, the method <void display_point() const; //display point's position> has been modified to work with getters.

//[PART 3]
#pragma region Part3
    int n_inX, n_inY;
        //OUTPUT
    cout << "\nVeuillez entrer la position X du point" << endl; //Or std::cout
        //INPUT
    cin >> n_inX; 

        //OUTPUT
    cout << "\nVeuillez entrer la position Y du point" << endl; //Or std::cout
        //INPUT
    cin >> n_inY;

        //SETTING GETTING AND DISPLAYING POINT
    cout << endl;
    cPoint inPoint(n_inX, n_inY); // WITH A CONSTRUCTOR
    inPoint.display_point(); //DISPLAY ITS COORDINATES


#pragma endregion
//[END PART 3]

    cout << endl;
    cout << "\n=====OBJECTS DESTRUCTOR=====\n" << endl;
    return 0;
}