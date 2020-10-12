#include <iostream>
#include <stdio.h>
#include "CPoint.h"

using namespace std;

int main()
{
#pragma region EXERCISE_80_COMMIT_3d8d9a67
    CAffiche aff;

    CPoint myPointAuto(3, 4); //"Point de classe Automatique"

    CPoint* myPointDyna = new CPoint; //"Point de classe Dynamique"
    myPointDyna->setX(5);
    myPointDyna->setY(9);

    aff.affiche(myPointAuto);
    aff.affiche(*myPointDyna);

    delete myPointDyna;
#pragma endregion



    return 0;
}
