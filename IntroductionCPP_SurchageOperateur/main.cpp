#include <iostream>
#include <stdio.h>
#include "CVector3.h"

using namespace std;

int main()
{
#pragma region EXERCISE_84_COMMIT_
    CVector3 vctA(2.0f, 4.0f, 6.0f);
    CVector3 vctB(2.0f, 4.1f, 6.0f);

    vctA.display_vector3();
    vctB.display_vector3();

    if (vctA.operator==(vctB)) { cout << "VectorA is equal to VectorB [MEMBER METHOD]\n" << endl; }
    else { cout << "VectorA is not equal to VectorB [MEMBER METHOD]\n" << endl; }

    if(!vctB.operator!=(vctA)) { cout << "VectorB is equal to VectorA [MEMBER METHOD]\n" << endl; }
    else { cout << "VectorB is not equal to VectorA [MEMBER METHOD]\n" << endl; }

    if (operator==(vctA, vctB)) { cout << "VectorA is equal to VectorB [FRIEND METHOD]\n" << endl; }
    else { cout << "VectorA is not equal to VectorB [FRIEND METHOD]\n" << endl; }

    if (!operator!=(vctA, vctB)) { cout << "VectorB is equal to VectorA [FRIEND METHOD]\n" << endl; }
    else { cout << "VectorB is not equal to VectorA [FRIEND METHOD]\n" << endl; }
#pragma endregion
    
    return 0;
}
