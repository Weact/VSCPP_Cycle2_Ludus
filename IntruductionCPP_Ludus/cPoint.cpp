#include <iostream>
#include <stdio.h>
#include "cPoint.h"
using namespace std;

    //CONSTRUCTOR(S)
cPoint::cPoint() //default constructor, init to NULL
{
    this->n_px = NULL;
    this->n_py = NULL;
    cout << "A point has been created !" << endl;
}

cPoint::cPoint(int x, int y) //constructor init to values
{
    this->n_px = x;
    this->n_py = y;
    cout << "A point has been created !" << endl;
}
    //DESTRUCTOR(S)
cPoint::~cPoint() //Default destructor
{
    cout << "A point has been destroyed !" << endl;
}

    //SETTERS
void cPoint::setX(int n_newX)
{
    this->n_px = n_newX;
}

void cPoint::setY(int n_newY)
{
    this->n_py = n_newY;
}

    //GETTERS
int cPoint::getX() const
{
    return this->n_px;
}

int cPoint::getY() const
{
    return this->n_py;
}

    //METHODS
void cPoint::set_position(int x, int y) { //method which init the position values of a point
    n_px = x;
    n_py = y;
}

void cPoint::display_point() const { //display point's position
    cout << "\n{GETTERS AND SETTERS UPDATE} => Point [X:Y] -> " << getX() << ":" << getY() << endl;
}

