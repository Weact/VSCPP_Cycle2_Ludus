#pragma once


//TYPES
    typedef struct tpoint { //point structure
        int x = 0; //position x
        int y = 0; //position y
    }tpoint;


//PROTOTYPES
    tpoint createPoint(int px, int py); //method which create a point and give it a position : return the point
    void displayPoint(tpoint p); //display point's position
