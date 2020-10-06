// IntruductionCPP_Ludus.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdio.h>
#include <string>
//#include "TPoint.h";
#include "cPoint.h";

using namespace std; //This is needed to use cout without std:: (or endl, etc..)

int main()
{
    cout << "Hello world !" << endl << endl;

    //Typedef struct

    //tpoint myPoint = createPoint(5, 10); //create a point myPoint and give the position 5 10
    //displayPoint(myPoint); //display point's position

    //cout << endl << "Separate struct and object" << endl << endl;


    //Objects

//[PART 1]
#pragma region Part1
    cout << "\n\n[===== PART 1 =====]\n\n";
        //CREATION
    cPoint myPointA, myPointB; //create 2 points with basic constructor (values init null)
    cPoint mySpecialPoint(50, 35); //create a new point with special constructor

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
    cout << "\n\n[===== PART 2 =====]\n\n";
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
    cout << "\n\n[===== PART 3 =====]\n\n";
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

//[PART 4]
#pragma region Part4
    cout << "\n\n[===== PART 4 =====]\n\n";
        //NEW POINT CREATION
    cPoint strPoint(94, 63, "A point with STR Constructor");
        //DISPLAYING POINT
    strPoint.display_point();
        //SETTING GETTING AND DISPLAYING POINT
    strPoint.setX(10);
    strPoint.setY(13);
    strPoint.setSTR("A new string for this point !");
    strPoint.display_point();

#pragma endregion
//[END PART 4]

//[PART 5]
#pragma region Part5
    cout << "\n\n[===== PART 5 =====]\n\n";

        //POINTS ARRAY CREATION [100]
    cPoint basePoint(0, 0, "BasePoint");
    cPoint tabPoints[100];
    
    for (int i = 0; i < 100; i++)
    {
        tabPoints[i].setX(basePoint.getX()+i);
        tabPoints[i].setY(basePoint.getY()+i*2);
        tabPoints[i].setSTR(basePoint.getSTR());

        tabPoints[i].display_point();
    }
#pragma endregion
//[END PART 5]

//[PART 6]
#pragma region Part6
    cout << "\n\n[===== PART 6 =====]\n\n";

        //Point Creation
    cPoint movablePoint(10, 10, "I am a Movable Point !");
        //Display
    movablePoint.display_point(); //We display the current point's informations (coordinate and str)
        //Move
    movablePoint.move_point(10, 10); //We move the point from x10 y10 to x20 y20 (+10 ; +10)
            //Note that this method is different from the set_position(int, int); method.
            //This one will increase point's x and y properties by N values (method paramaters), when set_position(int ,int); method will set the X and Y according to given parameters.

        //Display
    movablePoint.display_point(); //Display point again


#pragma endregion
//[END PART 6]

//[PART 7]
#pragma region Part7
    cout << "\n\n[===== PART 7 =====]\n\n";

        //Point Creation
    cPoint pointCompare1(5, 5, "Point 1 to Compare"), pointCompare2(10, 10, "Point 2 to Compare"); //Creation of 2 different point
        //Compare and display
    cout << "Points are Equals ? ==> " << pointCompare1.check_points_equal(pointCompare2) << " <==" << endl; //Display if the points are equal or not (1 = TRUE ; 0 = FALSE)
        //Set position
    pointCompare1.set_position(10, 10);
        //Compare and display
    cout << "Points are Equals ? ==> " << pointCompare1.check_points_equal(pointCompare2) << " <==" << endl; //Display if the points are equal or not (1 = TRUE ; 0 = FALSE)
#pragma endregion
//[END PART 7]

    cout << endl;
    //cout << "\n=====OBJECTS DESTRUCTOR=====\n" << endl;
    return 0;
}