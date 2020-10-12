#include <iostream>
#include <stdio.h>
#include "CPoint.h"
#include "CVector3.h"

using namespace std;

int main()
{
#pragma region EXERCISE_81_COMMIT_3d8d9a67_10398ce4

    CPoint myPointAuto(3, 4); //"Point de classe Automatique"

    CPoint* myPointDyna = new CPoint; //"Point de classe Dynamique"
    myPointDyna->setX(5);
    myPointDyna->setY(9);

    affiche(myPointAuto);
    affiche(*myPointDyna);

    delete myPointDyna;
#pragma endregion

#pragma region EXERCISE_82_COMMIT_

    CVector3 myVectorAuto(5.0f, 4.0f, 3.0f);

    CVector3* myVectorDyna = new CVector3; //"Vecteur de classe Automatique"
    myVectorDyna->setVector(4.0f, 4.0f, 3.0f); //"Vecteur de classe Dynamique"

    if (coincide(myVectorAuto, *myVectorDyna)) {
        cout << "Both vectors3 ARE EQUALS\n" << endl;
    }
    else {
        cout << "Both vectors3 ARE NOT EQUALS\n" << endl;
    }

    delete myVectorDyna;
#pragma endregion



    return 0;
}
