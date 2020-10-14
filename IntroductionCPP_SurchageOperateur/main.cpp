#include <iostream>
#include <stdio.h>
#include "CVector3.h"

using namespace std;

int main()
{
#pragma region EXERCISE_84_COMMIT_c89200f7
    /*
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
    */
#pragma endregion
    
#pragma region EXERCISE_85_COMMIT_6fdf933b
    /*
        //Using previously created vectors
    CVector3 vctC;
    float scalar_product = 0.0f;

    vctC = operator+(vctA, vctB);
    scalar_product = operator*(vctA, vctB);

    vctC.display_vector3();
    cout << "Scalar Product of VectorA and VectorB --> " << scalar_product << "\n" << endl;
    */
#pragma endregion

#pragma region EXERCISE_86_COMMIT_
    CVector3 vctE(5.0f, 4.0f, 9.0f);
    vctE[0] = 9.0f;
    vctE[1] = 7.0f;
    vctE[2] = 3.0f;
    vctE.display_vector3();

    vctE[2] = vctE[1];
    vctE.display_vector3();

    vctE[3] = vctE[5];
    vctE.display_vector3();
#pragma endregion



    return 0;
}
