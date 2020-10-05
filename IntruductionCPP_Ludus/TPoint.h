#pragma once


//TYPES
typedef struct tpoint {
    int x = 0;
    int y = 0;
}tpoint;


//PROTOTYPES
tpoint createPoint(int px, int py);
void displayPoint(tpoint p);
