#include <iostream>
#include "vector3.h"
#include "CPoint.h"

using namespace std;

int main()
{
#pragma region EXERCICE_69_COMMIT_c7149ad0

    // Vector Declaration
    Vector3 myVector;
    Vector3 myCustomVector(3.0f, 3.0f, 3.0f);
    Vector3 myInlineVector;

    //Set Vectors variable
    cout << "Vector3 n1 (setX, setY, setZ) ====>" << endl;
    cout << "Before setting values :" << endl;
    myVector.display_vector();
    cout << "After setting values :" << endl;
    myVector.setX(2.0f);
    myVector.setY(2.0f);
    myVector.setZ(2.0f);
    myVector.display_vector();

    cout << "Vector3 n2 (with constructor) ===>" << endl;
    myCustomVector.display_vector();

    cout << "Vector3 n3 (with inline method) ===>" << endl;
    myInlineVector.setVector3IN(5.0f, 5.0f, 5.0f);
    myInlineVector.display_vector();
#pragma endregion

#pragma region EXERCICE_70_COMMIT_6cbbec8c
    //VECTORS CREATION
    Vector3 v1(4.0f, 7.0f, 8.0f);
    Vector3 v2(7.0f, 16.0f, 4.0f);

    //COMPARE
    v1.coincideVal(1.0f, 3.0f, 1.0f); //a) v1 compared to values
    v1.coincideAdr(&v2); //b) // v1 compared to v2 by adr
    v1.coincideRef(v2); //c) //v1 compared to v2 by ref

#pragma endregion
   
#pragma region EXERCICE_71_COMMIT_4cc545d6_a35a3dd0_55c4bb10
    //WE USE PREVIOUSLY CREATED VECTORS
    v1.normaxVal(2.0f, 1.0f, 4.0f).display_vector(); //a) v1 norm compared to values
    v1.normaxAdr(&v2)->display_vector(); //b) v1 compared to v2 by adr
    v1.normaxRef(v2).display_vector(); //c) v1 compared to v2 by ref
#pragma endregion

#pragma region EXERCICE_72_COMMIT_1ae67931
    //Using previous vectors again
    cout << "Computing Vector 1 and Vector 2.. Result : " << v1.computeVectors(v2) << " !" << endl;
    cout << "Scalar Product of Vector 1 and Vector 2.. Result : " << v1.scalVectors(v2) << " !" << endl;
#pragma endregion

#pragma region EXERCICE_73_COMMIT_
    cout << "\n\n";
    //Creating 4 points, displaying nb, destroying 1 point, displaying nb

    CPoint point1(5.0f, 5.0f), point2(3.0f, 3.0f), point3(9.5, 9.5);
    point1.display_point();
    point2.display_point();
    point3.display_point();
    CPoint::nombre();

    CPoint* myPoint = new CPoint;
    myPoint->set_coords(5.0f, 5.0f);
    myPoint->display_point();

    cout << "Points : " << CPoint::nombre() << endl;
    delete myPoint;
    cout << "Points : " << CPoint::nombre() << endl;

#pragma endregion



    return 0;
}
