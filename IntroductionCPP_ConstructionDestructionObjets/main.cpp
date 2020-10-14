#include <iostream>
#include <stdio.h>
#include "CChose.h"

using namespace std;

class demo
{
    int x, y;
public:
    demo(int abs = 1, int ord = 0)
    {
        x = abs; y = ord;
        cout << "Constructeur I : " << x << " " << y << "\n";
    }
    demo(const demo &);
    ~demo();
};

demo::demo(const demo & d)
{
    cout << "constructeur II (recopie) : " << d.x << " " << d.y << "\n";
    x = d.x, y = d.y;
}

demo::~demo()
{
    cout << "destruction : " << x << " " << y << "\n";
}

int main()
{
#pragma region EXERCISE_74_COMMIT_94c1058e
    CChose* adc = new CChose;
    cout << "bonjour" << endl;
    delete adc;
#pragma endregion

#pragma region EXERCISE_75_COMMIT_
    void fct(demo, demo*);
    cout << "debut main\n";
    demo a;
    demo b = 2;
    demo c = a;
    demo* adr = new demo(3, 3);
    fct(a, adr);
    demo d = demo(4, 4);
    c = demo(5, 5);
    cout << "fin main\n";

    /// <SORTIE>
    ///     debut main
    ///     Constructeur I : 1 0
    ///     Constructeur I : 2 0
    ///     constructeur II(recopie) : 1 0
    ///     Constructeur I : 3 3
    ///     constructeur II(recopie) : 1 0
    ///     entree fct
    ///     destruction : 3 3
    ///     sortie fct
    ///     destruction : 1 0
    ///     Constructeur I : 4 4
    ///     Constructeur I : 5 5
    ///     destruction : 5 5
    ///     fin main
    ///     destruction : 4 4
    ///     destruction : 5 5
    ///     destruction : 2 0
    ///     destruction : 1 0
    /// </SORTIE>

#pragma endregion

    

    return 0;
}

void fct(demo d, demo* add)
{
    cout << "entree fct\n";
    delete add;
    cout << "sortie fct \n";
}
