#include <iostream>
#include <stdio.h>
#include "TPoint.h"

using namespace std;

   tpoint createPoint(int px, int py) { //method which create a point and give it a position : return the point
       tpoint p;
       p.x = px;
       p.y = py;
       return p;
   }  

   void displayPoint(tpoint p) { //display point's position
       printf("Point [X] : %d / [Y] : %d\n", p.x, p.y);
   }
