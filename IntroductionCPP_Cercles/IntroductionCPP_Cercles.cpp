#include <iostream>
#include <stdio.h>
#include "CPoint.h"
#include "CCercle.h"

using namespace std;
int main()
{
    CCercle cercle(5.0f, 7.5f, 9.0f); //Circle object declaration

    cercle.display_circle(); //Displaying circle informations
    cercle.getCenter().display_point(); //Displaying circle's center informations

    cercle.move_center(7.5f, 3.7f); //Moving the circle's center
    cercle.setRadius(3.0f); //Setting a new Radius

    cercle.display_circle(); //Displaying circle informatins again
    cercle.getCenter().display_point(); //Displaying circle's center informations again

    cout << "There (is)(are): " << CCercle::nombre() << " Circle(s) instantiated." << endl;;

    return 0;
}
