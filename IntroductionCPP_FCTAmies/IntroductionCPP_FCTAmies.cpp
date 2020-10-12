#include <iostream>
#include <stdio.h>
#include "CPoint.h"

using namespace std;

int main()
{
#pragma region EXERCISE_80_COMMIT_
    CPoint myPoint(3, 4);
    CPoint myPoint2(9, 3);

    CAffiche aff;

    aff.affiche(myPoint);
    aff.affiche(myPoint2);
#pragma endregion



    return 0;
}
