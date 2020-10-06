#pragma once
#ifndef CPOINT_H
#define CPOINT_H
#include <string>

using namespace std;

class cPoint
{
private:
    //DATA MEMBERS
    static int cpt;
    int m_px, m_py;
    string m_str;
    //char* m_strChar;

public:
    //METHOD MEMBERS

        // CONSTRUCTOR
    cPoint(); //default constructor, init to NULL
    cPoint(int, int); //constructor init to values
    cPoint(int x, int y, string str);//constructor init to values with string member

        //DESTRUCTOR
    ~cPoint(); //default destructor

        //METHODS
    void set_position(int, int); //method which init the position values of a point
    void display_point() const; //display point's position
    void move_point(int, int); //move a given point
    bool check_points_equal(cPoint &p); //check if two points are equals


        //SET
    void setX(int m_newX);
    void setY(int m_newY);
    void setSTR(string m_newSTR);

        //GET
    int getX() const;
    int getY() const;
    string getSTR() const;

    static int val_cpt();
}; 

#endif // !CPOINT_H