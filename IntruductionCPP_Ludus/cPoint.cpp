#include <iostream>
#include <stdio.h>
#include "cPoint.h"
using namespace std;

cPoint::cPoint() //default constructor, init to NULL
{
    this->n_px = NULL;
    this->n_py = NULL;
}

cPoint::cPoint(int x, int y) //constructor init to values
{
    this->n_px = x;
    this->n_py = y;
}

void cPoint::set_position(int x, int y) { //method which init the position values of a point
    n_px = x;
    n_py = y;
}

void cPoint::display_point() const { //display point's position
    cout << "Point [X] : " << n_px << " / [Y] : " << n_py << endl;
}