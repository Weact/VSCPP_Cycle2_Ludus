#pragma once

class cPoint
{
    int n_px, n_py;
public:
    cPoint(); //default constructor, init to NULL
    cPoint(int, int); //constructor init to values
    void set_position(int, int); //method which init the position values of a point
    void display_point() const; //display point's position
}; 

