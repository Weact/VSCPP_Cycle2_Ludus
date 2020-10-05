#include <stdio.h>
#include "TPoint.h"

tpoint createPoint(int px, int py) {
    tpoint p;
    p.x = px;
    p.y = py;

    return p;
}

void displayPoint(tpoint p) {
    printf("Point [X] : %d / [Y] : %d\n", p.x, p.y);
}