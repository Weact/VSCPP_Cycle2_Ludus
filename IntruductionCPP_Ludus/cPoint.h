#pragma once
#ifndef CPOINT_H
#define CPOINT_H

class cPoint
{
    //Données membres

    int n_px, n_py;
public:
    //Fonctions membres

    cPoint(); //default constructor, init to NULL
    cPoint(int, int); //constructor init to values
    void set_position(int, int); //method which init the position values of a point
    void display_point() const; //display point's position
}; 

#endif // !CPOINT_H