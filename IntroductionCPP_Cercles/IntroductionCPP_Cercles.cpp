#include <iostream>
#include <stdio.h>
#include "CPoint.h"
#include "CCercle.h"

using namespace std;
int main()
{
#pragma region circleExercise
    CCercle cercle(5.0f, 7.5f, 9.0f); //Circle object declaration

    cercle.display_circle(); //Displaying circle informations
    cercle.get_ptCenter().display_point(); //Displaying circle's center informations

    cercle.move_center(7.5f, 3.7f); //Moving the circle's center
    cercle.setRadius(3.0f); //Setting a new Radius

    cercle.display_circle(); //Displaying circle informatins again
    cercle.get_ptCenter().display_point(); //Displaying circle's center informations again

    cout << "There (is)(are): " << CCercle::nombre() << " Circle(s) instantiated.\n" << endl;
#pragma endregion

#pragma region friendMethod
    CCercle cercle2(3.0f, 7.0f, 2.0f);

    cercle.display_circle();
    cercle.get_ptCenter().display_point();

    CPoint pt;
    pt.set_coords(3.5f, 7.0f);

    if (pt.ptcoincide(cercle2)) {
        cout << "Given point is equal to this circle's center.\n" << endl;
    }
    else {
        cout << "Given point IS NOT EQUAL to this circle's center.\n" << endl;
    }

    
    
#pragma endregion




    return 0;
}
