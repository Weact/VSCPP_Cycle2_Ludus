#include <iostream>
#include <stdio.h>
#include "CPoint.h"
#include "CVector3.h"
#include "CMatrice.h"

using namespace std;

CVector3 prod(CMatrice& matrice, CVector3 vector);

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

#pragma region EXERCISE_82_COMMIT_f98aec10

    CVector3 myVectorAuto(5.0, 4.0, 3.0);

    CVector3* myVectorDyna = new CVector3; //"Vecteur de classe Automatique"
    myVectorDyna->setVector(4.0, 4.0, 3.0); //"Vecteur de classe Dynamique"

    myVectorAuto.display_vector3();
    myVectorDyna->display_vector3();

    if (coincide(myVectorAuto, *myVectorDyna)) {
        cout << "Both vectors3 ARE EQUALS\n" << endl;
    }
    else {
        cout << "Both vectors3 ARE NOT EQUALS\n" << endl;
    }
    
    delete myVectorDyna;
#pragma endregion

#pragma region EXERCISE_83_COMMIT_2c3c0978
    CVector3 vctA(5.0, 4.0, 6.0);
    double mtrc_src[3][3]{ {3.0,3.0,3.0},{4.0,4.0,4.0},{5.0, 5.0, 5.0} };
    CMatrice mtrc_dst(mtrc_src);
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
                cout << "[" << i << ":" << j << "] : ";
                cout << mtrc_dst.getMValue(i,j) << endl;
        }
    }

    CVector3 vctProd;
    vctProd = prod(mtrc_dst, vctA);
    vctProd.display_vector3();

#pragma endregion

#pragma region operatorsOverloads
    CPoint ptA(1, 6);
    CPoint ptB(7, 4);

    ptA.display_point();
    ptB.display_point();

    ptA = ptA + ptB;

    ptA.display_point();

    ptB = ptB - ptA;

    ptB.display_point();

    ptA = ptA * ptB;

    ptA.display_point();

    ++ptA;
    ptA.display_point();

    --ptB;
    ptB.display_point();
#pragma endregion

#pragma region operatorsCoutCinOverload
    cout << ptA;

    cin >> ptA;
    cout << ptA;
#pragma endregion


    return 0;
}

CVector3 prod(CMatrice& matrice, CVector3 vector)
{
    double m_dblVctX = 0;
    double m_dblVctY = 0;
    double m_dblVctZ = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (j == 0) {
                m_dblVctX += matrice.getMValue(i,j) * vector.getX();
            }
            else
            {
                if (j == 1)
                {
                    m_dblVctY += matrice.getMValue(i, j) * vector.getY();
                }
                else
                {
                    if (j == 2)
                    {
                        m_dblVctZ += matrice.getMValue(i, j) * vector.getZ();
                    }
                }
            }
        }
    }

    CVector3 vctResult(m_dblVctX, m_dblVctY, m_dblVctZ);
    return vctResult;
}
