#pragma once
#ifndef CPOINT_H
#define CPOINT_H

class cPoint
{
private:
    //DATA MEMBERS

    int n_px, n_py;

public:
    //METHOD MEMBERS

        // CONSTRUCTOR
    cPoint(); //default constructor, init to NULL
    cPoint(int, int); //constructor init to values

        //DESTRUCTOR
    ~cPoint(); //default destructor

        //METHODS
    void set_position(int, int); //method which init the position values of a point
    void display_point() const; //display point's position

        //SET
    void setX(int n_newX);
    void setY(int n_newY);

        //GET
    int getX() const;
    int getY() const;
}; 

#endif // !CPOINT_H