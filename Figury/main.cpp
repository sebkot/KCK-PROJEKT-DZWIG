#include <iostream>
#include "Figura.h"
#include "Kolo.h"
#include "Kwadrat.h"

using namespace std;

int main()
{
    Figura *tabFigur[100];

    Kolo kol1(3);
    tabFigur[0] = &kol1;
    tabFigur[0]->obliczPole();
    Kwadrat kwad1;
    tabFigur[1] = &kwad1;
    tabFigur[1]->obliczPole();

    return 0;
}
