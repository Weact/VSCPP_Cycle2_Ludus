#include <iostream>
#include "vector3.h"

using namespace std;

int main()
{
#pragma region EXERCICE_69_COMMIT_

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

    return 0;
}
