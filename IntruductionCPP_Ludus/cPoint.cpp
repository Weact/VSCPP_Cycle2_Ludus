#include <iostream>
#include <stdio.h>
#include "cPoint.h"
using namespace std;

int cPoint::cpt = 0;

    //CONSTRUCTOR(S)
cPoint::cPoint() //default constructor, init to NULL
{
    cpt++;
    this->m_px = NULL;
    this->m_py = NULL;
    this->m_str = "DEFAULT";
    //this->m_strChar = new char[100];
    //strcpy_s(this->m_strChar, 100, "DEFAULT");
    cout << "A point has been created ! ==>DEBUG (" << m_px << " : " << m_py << " : " << m_str << ") DEBUG<==" << endl;
}

cPoint::cPoint(int x, int y) //constructor init to values
{
    cpt++;
    this->m_px = x;
    this->m_py = y;
    this->m_str = "DEFAULT";
    //this->m_strChar = new char[100];
    //strcpy_s(this->m_strChar, 100, "DEFAULT");
    cout << "A point has been created and is already initialized ! ==>DEBUG (" << m_px << " : " << m_py << " : " << m_str << ") DEBUG<==" << endl;
}

cPoint::cPoint(int x, int y, string str)
{
    cpt++;
    this->m_px = x;
    this->m_py = y;
    this->m_str = str;
    cout << "A point has been created and is already initialized with string member ! ==>DEBUG (" << m_px << " : " << m_py << " : " << m_str << ") DEBUG<==" << endl;
}
    //DESTRUCTOR(S)
cPoint::~cPoint() //Default destructor
{
    cpt--;
    //cout << "A point has been destroyed !" << endl;
}

    //SETTERS
void cPoint::setX(int m_newX)
{
    this->m_px = m_newX;
}

void cPoint::setY(int m_newY)
{
    this->m_py = m_newY;
}

void cPoint::setSTR(string m_newSTR)
{
    this->m_str = m_newSTR;
}

    //GETTERS
int cPoint::getX() const
{
    return this->m_px;
}

int cPoint::getY() const
{
    return this->m_py;
}

string cPoint::getSTR() const
{
    return this->m_str;
}

int cPoint::val_cpt()
{
    return cpt;
}

    //METHODS
void cPoint::set_position(int x, int y) { //method which init the position values of a point
    m_px = x;
    m_py = y;
}

void cPoint::display_point() const { //display point's position
    cout << "\n{GETTERS AND SETTERS UPDATE} => Point [X:Y] -> " << getX() << ":" << getY() << " <==> STR: " << getSTR() << "." << endl;
}

void cPoint::move_point(int add_x, int add_y) {
    m_px += add_x;
    m_py += add_y;
}

bool cPoint::check_points_equal(cPoint &pointToCompare)
{
    return (m_px == pointToCompare.m_px && m_py == pointToCompare.m_py);
}
  
/*
*   void swapPoint(cPoint*, cPoint*);
*   void swapPoint(cPoint& p_a, cPoint& p_b)
*   {
*       cPoint tmp;
*
*       tmp.setX(p_a.getX());
*       tmp.setY(p_a.getY());
*
*       p_a.setX(p_b.getX());
*       p_a.setY(p_b.getY());
*
*       p_b.setX(tmp.getX());
*       p_b.setY(tmp.getY());
}
*/