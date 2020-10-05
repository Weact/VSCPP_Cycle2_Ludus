// IntruductionCPP_Ludus.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdio.h>
#include "TPoint.h";

int main()
{
    printf("Hello world!\n");

    tpoint myPoint = createPoint(5, 10);

    displayPoint(myPoint);

    std::cout << std::endl;
    return 0;
}